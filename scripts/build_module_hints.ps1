# Systematic per-target function-hint derivation for the mushi recomp targets.
#
# ReXGlue's analyzer misses functions that are only reached by indirect calls
# (no PDATA/static edge), which surface as runtime
# "[FATAL] Call to invalid or unregistered function at 0x88xxxxxx" during
# playtesting. This pass finds all of them statically instead:
#
#   1. Runs XenonRecomp on the target image to get a reference function map
#      (PDATA + bl-scan + linear gap-fill covers the whole code section).
#   2. Gets ReXGlue's base registered set:
#        - default: a clean codegen run of the target with its TOML includes
#          emptied (so curated hints do not taint the diff), or
#        - -Quick: the committed generated/<target>/mushi_init.cpp (assumes
#          the committed tree matches the committed TOMLs).
#   3. diff (XenonRecomp - ReXGlue) = candidate missing functions.
#   4. Bulk-seeds every candidate and codegens; ReXGlue logs
#      "Function 0x.. has no blocks - generating stub" for addresses that are
#      data / misidentified (gap-fill over .long etc.).
#   5. Writes mushi_<target>_hints.toml (mushi_hints.toml for the entrypoint)
#      keeping only candidates that decoded to real instruction blocks.
#
# The hints file is meant to be listed FIRST in the manifest include list;
# the curated TOML stays authoritative (config merge is last wins), so no
# existing name/switch_tables override can be clobbered.
#
# XenonRecomp is a git submodule (thirdparty/XenonRecomp, pinned fork
# beebs1998-repo/XenonRecomp @ ddd128b). It is only needed by this script, not
# for normal builds/CI. On a fresh machine run:
#
#   pwsh .\scripts\bootstrap_xenon.ps1
#
# which inits the submodule (recursively: fmt/tomlplusplus/xxHash are nested
# submodules!) and builds it. The console build must use clang-cl: VS/cl fails
# on the __builtin_bswap* builtins:
#
#   cmake -S thirdparty/XenonRecomp -B thirdparty/XenonRecomp/build \
#     -G Ninja -DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
#     -DCMAKE_C_COMPILER=clang-cl -DCMAKE_CXX_COMPILER=clang-cl
#   (run from a VS dev prompt so the Windows SDK libs are discoverable)
#
# Usage:
#   .\scripts\build_module_hints.ps1                 # all 4 modules + shell, clean diff
#   .\scripts\build_module_hints.ps1 -Quick          # baseline from committed tree
#   .\scripts\build_module_hints.ps1 -Targets dat12
#   .\scripts\build_module_hints.ps1 -Rexglue <path> -Xenon <path>
#
# NOTE: collaborator-visible state — codegen runs here use temp manifests at the
# repo ROOT (".hints_tmp.toml"), because the CLI resolves every path relative to
# the manifest file itself (repo-root anchored paths assume that location).

[CmdletBinding()]
param(
    [string]$Rexglue = "",
    [string]$Xenon = "",
    [string]$CtxHdr = "",
    # 'default' means the entrypoint XEX (0x82 addresses).
    [string[]]$Targets = @('dat12', 'dat112', 'dat163', 'dat111', 'default'),
    [switch]$Quick
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root
$TMP = '.hints_tmp.toml'

# ---------------------------------------------------------------------------
# Locate the rexglue CLI (same conventions as codegen_all.ps1).
# ---------------------------------------------------------------------------
if (-not $Rexglue) {
    $names = @('rexglue.exe', 'rexglue')
    $searchRoots = @('out', 'thirdparty', 'build') |
        ForEach-Object { Join-Path $root $_ } |
        Where-Object { Test-Path $_ }
    $candidates = @(
        foreach ($sr in $searchRoots) {
            foreach ($name in $names) {
                Get-ChildItem -Path $sr -Recurse -Filter $name -File -ErrorAction SilentlyContinue |
                    Select-Object -ExpandProperty FullName
            }
        }
        (Join-Path $root 'rexglue.exe')
        (Join-Path $root 'rexglue')
    )
    $Rexglue = $candidates | Where-Object { $_ -and (Test-Path $_) } | Select-Object -First 1
}
if (-not $Rexglue) { throw "rexglue CLI not found. Build it or pass -Rexglue <path>." }
Write-Host "Using rexglue: $Rexglue"

# Locate XenonRecomp + the PPC context header (git submodule, built locally).
if (-not $Xenon) {
    foreach ($p in @(
        'thirdparty\XenonRecomp\build\XenonRecomp\XenonRecomp.exe',
        'thirdparty\XenonRecomp\build\XenonRecomp\Release\XenonRecomp.exe')) {
        if (Test-Path (Join-Path $root $p)) { $Xenon = Join-Path $root $p; break }
    }
}
if (-not $Xenon) {
    throw "XenonRecomp not found. Run pwsh scripts/bootstrap_xenon.ps1 (see its header) or pass -Xenon <path>."
}
if (-not $CtxHdr) { $CtxHdr = Join-Path $root 'thirdparty\XenonRecomp\XenonUtils\ppc_context.h' }
if (-not (Test-Path $CtxHdr)) { throw "PPC context header not found: $CtxHdr" }
Write-Host "Using XenonRecomp: $Xenon"

# ---------------------------------------------------------------------------
# Sanity: generated/ must be clean, since the pass clobbers it transiently and
# every phase depends on the committed-state invariant. Discard any prior
# transient clobber first; uncommitted tooling/doc changes elsewhere are fine.
# ---------------------------------------------------------------------------
git checkout -q -- generated/
if ($LASTEXITCODE -ne 0) { throw "git checkout of generated/ failed" }
$dirty = git status --porcelain -- generated/
if ($dirty) { throw "generated/ is dirty; commit or stash it first (this script regenerates it)." }

function Write-RunProfiler {
    param([string]$Path, [string[]]$EntrypointIncludes = @(), [string]$Module = "", [string[]]$ModuleIncludes = @())
    # The CLI resolves every path relative to the manifest itself; these are
    # written at the repo root, so includes are bare filenames.
    # An `includes` entry of "" is REJECTED by the manifest loader ("included
    # file not found"), so a section with no emits gets NO includes line at all.
    $head = @"
[project]
name = "mushi"
sdk_version = "0.10.0"
game_root = "game_data"

[entrypoint]
file_path = "game_data/default.xex"
out_directory_path = "generated/default"

"@
    if (@($EntrypointIncludes | Where-Object { $_ }).Count) {
        $head += "includes = [" + (($EntrypointIncludes | ForEach-Object { "`"$_`"" }) -join ', ') + "]`n"
    }
    if ($Module) {
        $head += @"

[[modules]]
guest_path = "$Module.bin"
file_path = "game_data/$Module.bin"
out_directory_path = "generated/$Module"

"@
        if (@($ModuleIncludes | Where-Object { $_ }).Count) {
            $head += "includes = [" + (($ModuleIncludes | ForEach-Object { "`"$_`"" }) -join ', ') + "]`n"
        }
    }
    Set-Content -Path $Path -Value $head -Encoding utf8
}

function Invoke-CodegenProfiler {
    # Direct invocation with an arg array: Start-Process argument-string quoting
    # mangles quoted config paths under some pwsh builds.
    param([string]$Exe, [string]$Log, [string[]]$Props)
    & $Exe @Props > $Log 2> "$Log.err"
    if ($LASTEXITCODE -ne 0) { throw "$(Split-Path $Exe -Leaf) failed (exit $LASTEXITCODE); see $Log[.err]" }
}

$MODULES = @('dat12', 'dat112', 'dat163', 'dat111')

foreach ($t in $Targets) {
    if ($t -eq 'default') {
        $tgt = [pscustomobject]@{
            Name      = 'default'
            XexPath   = 'game_data/default.xex'
            OutDir    = 'generated/default'
            ScopeRe   = '0x82[0-9A-Fa-f]{6}'
            HintsFile = 'mushi_hints.toml'
            CurIncl   = 'mushi_functions.toml'
            IsModule  = $false
        }
    } elseif ($MODULES -contains $t) {
        $tgt = [pscustomobject]@{
            Name      = $t
            XexPath   = "game_data/$t.bin"
            OutDir    = "generated/$t"
            ScopeRe   = '0x88[0-9A-Fa-f]{6}'
            HintsFile = "mushi_${t}_hints.toml"
            CurIncl   = "mushi_${t}_functions.toml"
            IsModule  = $true
        }
    } else {
        throw "Unknown target '$t' (modules: $($MODULES -join ', '); or 'default' for the shell)."
    }
    if (-not (Test-Path (Join-Path $root $tgt.XexPath))) { throw "Missing $($tgt.XexPath)" }

    Write-Host "==== $($tgt.Name) ===="
    $work = "scripts\module_maps\$($tgt.Name)"
    New-Item -ItemType Directory -Force $work | Out-Null

    # --- 1. XenonRecomp reference map -------------------------------------
    # Paths inside the XenonRecomp config resolve relative to the config file,
    # i.e. to scripts/module_maps/<target>/ — three levels up to the repo.
    $mapToml = Join-Path $work 'xenon.toml'
    @"
[main]
file_path = "../../../$($tgt.XexPath -replace '\\','/')"
out_directory_path = "xenon"
skip_lr = false
skip_msr = false
ctr_as_local = false
xer_as_local = false
reserved_as_local = false
cr_as_local = false
non_argument_as_local = false
non_volatile_as_local = false
"@ | Set-Content -Path $mapToml -Encoding utf8

    $xenonLog = Join-Path $work 'xenon.log'
    # README: "This directory must exist before running the recompiler."
    New-Item -ItemType Directory -Force (Join-Path $work 'xenon') | Out-Null
    Invoke-CodegenProfiler -Exe $Xenon -Log $xenonLog -Props @($mapToml, $CtxHdr)

    $mapFile = Join-Path $root "scripts\module_maps\$($tgt.Name)\xenon\ppc_func_mapping.cpp"
    if (-not (Test-Path $mapFile)) { throw "XenonRecomp produced no ppc_func_mapping.cpp for $($tgt.Name)" }
    $xenonSet = Select-String -Path $mapFile -Pattern ($tgt.ScopeRe) |
        ForEach-Object { $_.Matches[0].Value.ToUpper() } | Sort-Object -Unique
    Write-Host "  xenon funcs (scope $($tgt.ScopeRe)): $($xenonSet.Count)"

    # --- 2. ReXGlue base registered set ------------------------------------
    $initFile = Join-Path $root "$($tgt.OutDir)/mushi_init.cpp"
    if (-not $Quick) {
        # Clean codegen: the target's TOML includes emptied so the diff is
        # against pure analyzer discovery. The entrypoint keeps the shell's
        # curated file (its dynamic entrypoints are invisible to static
        # analysis and CLI validation requires them; module mode reuses it to
        # avoid validating a half-fresh entrypoint).
        $tmpClean = Join-Path $root $TMP
        $shellIncl = if ($tgt.IsModule) { @(,'mushi_functions.toml') } else { @($tgt.CurIncl) }
        Write-RunProfiler -Path $tmpClean -EntrypointIncludes $shellIncl `
            -Module $(if ($tgt.IsModule) { $tgt.Name } else { $null })
        $cgLog = Join-Path $work 'clean_codegen.log'
        $cgProps = @('codegen', $tmpClean)
        if ($tgt.IsModule) { $cgProps += @('--target', $tgt.Name) }
        Invoke-CodegenProfiler -Exe $Rexglue -Log $cgLog -Props $cgProps
    }
    $rexSet = Select-String -Path $initFile -Pattern '^\t\{ 0x([0-9A-Fa-f]{8}), \w+ \},$' |
        ForEach-Object { '0x' + $_.Matches[0].Groups[1].Value.ToUpper() } |
        Where-Object { $_ -match $tgt.ScopeRe } | Sort-Object -Unique
    Write-Host "  rex registered: $($rexSet.Count)"

    # --- 3. Candidates -----------------------------------------------------
    # Addresses in the XenonRecomp map ReXGlue has not registered.
    $candidates = Compare-Object -ReferenceObject $rexSet -DifferenceObject $xenonSet |
        Where-Object SideIndicator -eq '=>' | Select-Object -ExpandProperty InputObject | Sort-Object -Unique
    Write-Host "  candidates: $($candidates.Count)"

    if ($candidates.Count -eq 0) {
        Write-Host "  [ok] nothing to seed"
        continue
    }

    # --- 4. Bulk-seed + collect stubs (data / gap-fill misidentifications) --
    $hintsBulk = Join-Path $root $tgt.HintsFile
    @(
        "# $($tgt.HintsFile) - bulk seed (pre-filter); rewritten below."
        "[functions]"
        foreach ($a in $candidates) { "`"$a`" = {}" }
    ) | Set-Content -Path $hintsBulk -Encoding utf8

    $tmpBulk = Join-Path $root $TMP
    $epInclBulk = if ($tgt.IsModule) { @(,'mushi_functions.toml') } else { @($tgt.HintsFile, $tgt.CurIncl) }
    $modInclBulk = if ($tgt.IsModule) { @($tgt.HintsFile) } else { $null }
    Write-RunProfiler -Path $tmpBulk -EntrypointIncludes $epInclBulk `
        -Module $(if ($tgt.IsModule) { $tgt.Name } else { $null }) -ModuleIncludes $modInclBulk
    $bulkLog = Join-Path $work 'bulk_codegen.log'
    $cgProps = @('codegen', $tmpBulk)
    if ($tgt.IsModule) { $cgProps += @('--target', $tgt.Name) }
    Invoke-CodegenProfiler -Exe $Rexglue -Log $bulkLog -Props $cgProps

    $stubs = Get-ChildItem @($bulkLog, "$bulkLog.err") -ErrorAction SilentlyContinue |
        Select-String -Pattern 'has no blocks - generating stub' |
        ForEach-Object { $_.Line } |
        Select-String -Pattern ($tgt.ScopeRe) -AllMatches |
        ForEach-Object { $_.Matches } | ForEach-Object { $_.Value.ToUpper() } |
        Sort-Object -Unique
    Write-Host "  stubs (data): $($stubs.Count)"

    # --- 5. Final hints file ------------------------------------------------
    $real = Compare-Object -ReferenceObject $stubs -DifferenceObject $candidates |
        Where-Object SideIndicator -eq '=>' | Select-Object -ExpandProperty InputObject | Sort-Object -Unique
    $baseNote = if ($tgt.IsModule) { " (base 0x88000000)" } else { "" }
    @(
        "# $($tgt.HintsFile) - function-entry hints for $($tgt.Name)$baseNote."
        "#"
        "# Generated by scripts/build_module_hints.ps1: XenonRecomp reference map"
        "# minus ReXGlue-registered, filtered to addresses that decode to real"
        "# instruction blocks (data/gap-fill stubs dropped). Listed FIRST in the"
        "# manifest include list; the curated *_functions.toml stays authoritative."
        "[functions]"
        foreach ($a in $real) { "`"$a`" = {}" }
    ) | Set-Content -Path (Join-Path $root $tgt.HintsFile) -Encoding utf8
    Write-Host "  REAL seeds written: $($real.Count) -> $($tgt.HintsFile)"

    # --- 6. Validation codegen (real seeds only) ----------------------------
    $valLog = Join-Path $work 'validate_codegen.log'
    $cgProps = @('codegen', $tmpBulk)
    if ($tgt.IsModule) { $cgProps += @('--target', $tgt.Name) }
    Invoke-CodegenProfiler -Exe $Rexglue -Log $valLog -Props $cgProps

    $valStubs = Get-ChildItem @($valLog, "$valLog.err") -ErrorAction SilentlyContinue |
        Select-String -Pattern 'has no blocks - generating stub' |
        ForEach-Object { $_.Line } |
        Select-String -Pattern ($tgt.ScopeRe) -AllMatches |
        ForEach-Object { $_.Matches } | ForEach-Object { $_.Value.ToUpper() } | Sort-Object -Unique
    $valUnres = Get-ChildItem @($valLog, "$valLog.err") -ErrorAction SilentlyContinue |
        Select-String -Pattern 'Unresolved b target' |
        ForEach-Object { $_.Line } |
        Select-String -Pattern ($tgt.ScopeRe) -AllMatches |
        ForEach-Object { $_.Matches } | ForEach-Object { $_.Value.ToUpper() } | Sort-Object -Unique
    Write-Host "  validate: stubs=$($valStubs.Count) unresolved-b=$($valUnres.Count)"
    if ($valStubs.Count -gt 0) {
        Write-Warning "$($tgt.Name): leftover stubs (these addresses failed to decode even with hints): $($valStubs -join ', ')"
    }
    if ($valUnres.Count -gt 0) {
        Write-Warning "$($tgt.Name): unresolved b targets remain (may resolve as conditional tail calls or need block overrides): $($valUnres -join ', ')"
    }
}

Remove-Item -Path (Join-Path $root $TMP) -ErrorAction SilentlyContinue

Write-Host ""
Write-Host "Next: wire the mushi*_hints.toml files into mushi_manifest.toml (includes list, BEFORE the curated TOML),"
Write-Host "then run: .\scripts\codegen_all.ps1"
Write-Host "(generated/ is now in a transient state from the per-target codegen runs; codegen_all.ps1 will restore consistency)"
