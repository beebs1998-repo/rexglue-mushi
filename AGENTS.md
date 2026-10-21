# AGENTS.md — working in this repository

Agent- and developer-facing notes. For the public, human-facing guide, see
[README.md](README.md). All paths are repo-relative. Methodology is shared
with the sibling ports `rexglue-futari` (first) and `rexglue-dfkbl`
(second); read their AGENTS/TRACKING for the history behind each convention.

## What this is

A [ReXGlue](https://github.com/rexglue/rexglue-sdk) recompilation of the Xbox
360 XBLA shooter *Mushihimesama* (`435A07E3`). It builds a native host
executable (`mushi`) from statically recompiled PowerPC code, plus four
game-mode module shared libraries loaded at runtime (three from disc,
`dat12/dat112/dat163.bin`, and one DLC-delivered, `dat111.bin`).

Two facts dominate everything else:

1. **The recompiled code is committed.** `generated/**` is checked in, so the
   project builds without the game. Do not hand-edit generated files;
   regenerate them (`scripts/codegen_all.ps1`).
2. **The SDK is a pinned submodule with local changes in the fork.**
   `thirdparty/rexglue-sdk` points at `beebs1998-repo/rexglue-sdk` @
   `348c804` (`main` tip). Contents of the fork relative to pristine v0.10.0
   (`c94f5eb`), all carried in from the sibling projects:
   - SSSE3 build flag (`51624b5`)
   - module-filename match fix for unload paths (`09ef27d`) + NT device-prefix
     strip (`a388c9d`)
   - D3D12 `d3d12_submit_on_primary_buffer_end` default flipped to `false`
     — THE validated slowdown fix, validated per-game on Mushihimesama
     captures (dfkbl TRACKING iter-27 / `XENIA_CANARY_SLOWDOWN_FINDINGS.md`,
     which holds Mushihimesama 435A07E3 dump evidence)
   - cvar TOML save-serialization fix (`b773a88`)
   - save-import fixes: accept full XContent/STFS package headers in
     `ReadContentHeaderFile` (`9019af7`) — makes Xenia Canary imported
     saves/replays work as-is
   - the `profile_name` gamertag cvar (`bf63f94`)
   - the branch-target classification fix (`348c804`)
   Building against a different SDK can change/crash behaviour. The
   experiments branch (`legacy`) is not used here.

## Module inventory (playtest-confirmed 2026-10-22; log `XexLoadImage` lines
## are ground truth)

| File | Source | In-game mode name |
| --- | --- | --- |
| `dat163.bin` | disc | **Novice ver** (loads first) |
| `dat12.bin` | disc | **360 ver** |
| `dat112.bin` | disc | **Arrange ver** |
| `dat111.bin` | DLC (`00000002` content, id `54EE4F5841C0CC45B07AB01E85B35FD8FC743D0243`) | **1.5 ver** — the game mounts it through its OWN content package (`ver15:\dat111.bin`) |

Switching semantics: strictly unload→load (dfkbl-like) — every unload
logged `recomp=found module_libraries=1`, no futari-style base-overlap hook
needed.

## Layout

| Path | Notes |
| --- | --- |
| `src/main.cpp` | `REX_DEFINE_APP`; includes `generated/default/mushi_init.h` |
| `src/mushi_app.h` | `MushiApp` — overrides `ReXApp` hooks (F3 overlay stats, F11 fullscreen, save-on-close) |
| `generated/default/` | Entrypoint recomp + `dll_targets.cmake`, `module_registry.cpp`, `sources.cmake` |
| `generated/dat12`, `dat112`, `dat163`, `dat111/` | Module recomp |
| `generated/rexglue.cmake` | CMake glue; **auto-codegen is disabled here** (see below) |
| `mushi_manifest.toml` | Codegen manifest (entrypoint + 4 modules) |
| `mushi_functions.toml` | Dynamic entrypoints for the entrypoint XEX |
| `mushi_dat12/112/163/111_functions.toml` | Dynamic entrypoints/overrides per module |
| `mushi_hints.toml` (later), `mushi_<module>_hints.toml` | Generated function-entry hints; listed FIRST in each include list |
| `mushi.toml` | Runtime settings TEMPLATE (staged next to the exe by the build/launch.bat; live-editable via F4) |
| `scripts/stage_config.cmake` | Copy-if-missing config staging (POST_BUILD) |
| `TRACKING.md` | Iteration log — read before changing runtime/GPU behaviour |
| `game_data/`, `user_data/`, `logs/`, `out/` | Local only, gitignored |

## Build & run

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
out\build\win-amd64-release\mushi.exe --game_data_root=game_data --user_data_root=user_data
```

`game_data/` must contain your own `default.xex`, `dat12/112/163.bin` and
`res/`; `dat111.bin` is a local staging copy of the DLC content (see the
manifest comment). Requires the submodule: `git submodule update --init
--recursive`.

## Config-file staging project convention (new vs the siblings)

`SetupEnvironment` sets the live config to `exe_dir/mushi.toml`, and a
missing file is benign-but-degrading (game silently runs on compiled-in
defaults: no keybinds/mnk, no log rotation, no pinned cvars). The
futari/dfkbl template therefore never took effect on first launch —
dfkbl's live exe-dir config drifted away from its template (no pins, all
auto-default). This project fixes it by construction:

- POST_BUILD stages the template next to the exe **if missing**
  (`scripts/stage_config.cmake`).
- `launch.bat` applies the same copy-if-missing rule.
- CI ships `mushi.toml` inside the build artifact.

Never overwrite a live config: F4 saves and manual edits must survive every
build. If the template changes after first stage, delete the live copy or
re-edit via F4 to re-sync (documented in README "Settings").

## Codegen

Auto-codegen is deliberately disabled in `generated/rexglue.cmake`. Reason:
all four game-mode modules share guest base `0x88000000`, so a single combined
`rexglue codegen mushi_manifest.toml` run is rejected by the overlap check.
Code is generated one target per run and committed.

Two generated files are **hand-merged** and must not be clobbered:

- `generated/default/dll_targets.cmake` — CMake targets for all four module DLLs.
- `generated/default/module_registry.cpp` — registers all four modules.

`rexglue codegen --target <name>` rewrites both (and `generated/rexglue.cmake`) for
the last target only. `scripts/codegen_all.ps1` runs each target then restores the
committed versions with `git checkout --`. If you regenerate by hand, do the same.

## Static function-hint derivation (`scripts/build_module_hints.ps1`)

The analyzer misses functions that are only reached by indirect calls (no
PDATA/static edge). The derivation pass finds them statically, per target:

1. Run XenonRecomp (git submodule `thirdparty/XenonRecomp`, fork
   `beebs1998-repo/XenonRecomp` pinned to upstream `ddd128b`; build once per
   machine with `pwsh .\scripts\bootstrap_xenon.ps1`) on the image for a
   full-coverage reference function map (PDATA + bl-scan + gap-fill).
2. Diff that map against ReXGlue's registered set (a clean codegen run with
   the target's TOML includes emptied — the entrypoint always keeps
   `mushi_functions.toml`, whose dynamic entrypoints are invisible to static
   analysis and required by CLI validation). `-Quick` reads the committed
   `mushi_init.cpp` instead.
3. Bulk-seed the diff into `mushi*_hints.toml`; codegen; drop candidates that
   logged stubs (data/gap-fill misidentifications); write the final hints
   file (`mushi_hints.toml` for the shell, `mushi_<module>_hints.toml` for
   the modules). Hints go FIRST in each manifest include list (config merge
   is last-wins; the curated files keep authority).

Notes learned by painful debugging (kept from the sibling ports):

- The CLI resolves every path relative to the manifest itself. Temp manifests
  (`.hints_tmp.toml`) must live at the repo root, and they are removed by the
  script.
- XenonRecomp nested submodules (fmt/tomlplusplus/xxHash, …) appear as
  existing-but-empty dirs when not initialized; `bootstrap_xenon.ps1`
  handles them (verify with `git -C thirdparty/XenonRecomp submodule
  status` — no '-' prefixes).
- One codegen target per run (overlap check: all modules share `0x88000000`),
  and `rexglue codegen` has crashed analyzing multiple module targets in one
  process (garbage data reads — futari Iteration 20).
- Direct arg-array invocation (`& $Exe @Props`) beats `Start-Process`
  argument strings (quoted path mangling under some pwsh builds).

## Embedded-trap gate (`scripts/validate_codegen.ps1`)

Scans `generated/` for recompiler failure modes emitted as embedded traps
(`REX_FATAL("Unresolved call/branch ...")`, unregistered jumps, `// STUB:`),
plus the SDK's switch-case out-of-range `__builtin_trap()` sites
(informational only). Running after every codegen turn (`codegen_all.ps1`)
and in CI before Configure, it fails loudly on a new site identity with
file:line + guest addresses, instead of during playtesting.

Allow-list identities are `<target> <class> <guest addresses>` in
`scripts/trap_allowlist.txt` — intentionally EMPTY at project creation; a
new site fails the gate until fixed (hints/overrides) or triaged into the
file deliberately. See the sibling allowlists for what a triaged baseline
looks like.

## Conventions

- Keep `TRACKING.md` current: each change to runtime/GPU/module behaviour
  gets an iteration entry (symptom → root cause → fix → status).
- Never commit `game_data/`, `user_data/`, `logs/`, `out/`, or binaries —
  see `.gitignore`.
- Do not add `codegen.stamp`/`codegen.partition.json`/`codegen.d` (they
  embed absolute paths; gitignored).
- Registering extra dynamic entrypoints = edit the `*_functions.toml`, not
  the generated `.cpp`.
- Do not kill the game process while diagnosing; let it crash or exit
  naturally and read `logs/mushi.log` (`[error]`/`[critical]` are the
  actionable lines; `[warning]` is noise unless it correlates with a crash).
  The user drives the game UI.

## Rebuilding the SDK fork

Only if the runtime itself needs changing:

```
cd thirdparty/rexglue-sdk
# make changes, commit, push to the fork
cd ../..
git add thirdparty/rexglue-sdk
git commit -m "Bump SDK to <sha>"
```

Keep `generated/rexglue.cmake` in sync (it is regenerated by codegen, then
re-disabled for auto-codegen). Document SDK-side changes in `TRACKING.md`.

## Debugging

- `[error]`/`[critical]` in `logs/mushi.log` are the actionable lines;
  `[warning]` is noise unless it correlates with a crash.
- The debug overlay is **F3**; settings are **F4**; fullscreen is **F11**.
- Crash RVAs: faulting `mushi_dat*.dll` loaded at image base `0x180000000`
  (host = `0x180000000 + RVA`); `0xC000001D` at a `UD2` is the recompiler's
  `__builtin_trap()` — usually a truncated jump table (`[[switch_tables]]`
  override class, see futari AGENTS "Crash diagnostics playbook" for the
  full recipe incl. the VA-layout image extraction trick).
