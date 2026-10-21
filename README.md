# Mushi Recomp

Recompilation of the Cave Xbox 360 shooter *Mushihimesama* (XBLA title
`435A07E3`) using [ReXGlue](https://github.com/rexglue/rexglue-sdk).

This is the third title in the family of ReXGlue recomp projects, sharing its
methodology (and its SDK fork) with the sibling ports:

- [rexglue-futari](https://github.com/beebs1998-repo/rexglue-futari) —
  *Mushihimesama Futari* (first project)
- [rexglue-dfkbl](https://github.com/beebs1998-repo/rexglue-dfkbl) —
  *DoDonPachi DaiFukkatsu Black Label* (second project)

The project builds a native `mushi.exe` (plus four game-mode module DLLs, one
delivered as DLC) from statically recompiled PowerPC code. **The recompiled
code and a patched ReXGlue SDK are included in this repository**, so the
project builds on a clean machine without the game. Only *running* it needs
your own copy of the game data.

For the engineering history (what was fixed and why), see
[TRACKING.md](TRACKING.md). Agent-/developer-facing notes live in
[AGENTS.md](AGENTS.md).

## Requirements

**To build** — no game files needed:

- CMake 3.25 or newer
- Ninja
- LLVM/Clang with C++23 support
- Windows: Visual Studio C++ build tools with a Windows SDK
- Linux: `libgtk-3-dev libx11-xcb-dev libvulkan-dev libasound2-dev libpulse-dev libpipewire-0.3-dev`
  (Debian/Ubuntu names); the `linux-*` presets expect `clang-20`/`clang++-20`

**To run** — your own copy of the Mushihimesama XBLA disc, extracted into
`game_data/`:

```
game_data/
├─ default.xex          # entrypoint (shell)
├─ dat163.bin           # mode: Novice ver
├─ dat12.bin            # mode: 360 ver
├─ dat112.bin           # mode: Arrange ver
├─ res/DISKDATA/...     # disc data
├─ AvatarAssetPack
└─ nxeart
```

The three `dat*.bin` modules are loaded mutually exclusively and swapped by
unload→load on mode change; the fourth module (1.5 ver, DLC) shares the same
guest base and is mounted through its own content package (`ver15:`).

### DLC (optional but recommended)

The retail edition's additional game mode ships as a `00000002`
(marketplace content) package containing a fourth module, `dat111.bin`. Just
like futari/dfkbl, availability comes entirely from *staging* — no config
cvar:

1. Copy the package so it matches the SDK `ContentManager` layout:
   `user_data/0000000000000000/435A07E3/00000002/<content-id>/` plus
   `Headers/00000002/<content-id>.header` (xuid forced to 0).
2. Append a 4-byte `0xFFFFFFFF` license tail to the staged `.header` (the
   `LoadPackageLicenseMask`/`WriteContentHeaderFile` tail convention; see
   futari TRACKING.md Iteration 20).
3. `license_mask` must not be set anywhere - the cvar is dead and removed.

For local codegen, `dat111.bin` also needs a staging copy at
`game_data/dat111.bin` (see the manifest comment; described in this
repo, not committed).

## Layout

| Path | What |
| --- | --- |
| `src/` | Host application (`main.cpp`, `mushi_app.h`) |
| `generated/default/` | Recompiled entrypoint + `dll_targets.cmake` / `module_registry.cpp` |
| `generated/dat12|dat112|dat163|dat111/` | Recompiled game-mode modules |
| `generated/rexglue.cmake` | SDK/CMake glue (codegen auto-generation disabled — see below) |
| `mushi_manifest.toml` | Codegen manifest (entrypoint + 4 modules) |
| `mushi*_functions.toml` | Extra dynamic entrypoints registered per target |
| `mushi.toml` | Settings template — the live copy is staged next to the exe; editable via the F4 overlay |
| `thirdparty/rexglue-sdk/` | Patched ReXGlue SDK (git submodule, pinned) |
| `scripts/codegen_all.ps1` | Regenerate all recompiled code (needs the game) |
| `scripts/build_module_hints.ps1` | Static function-entry hint derivation (needs the game, once per machine) |
| `scripts/validate_codegen.ps1` | Embedded-trap gate — runs after codegen and in CI |
| `scripts/stage_config.cmake` | Copies `mushi.toml` next to the exe (if missing) — see "Settings" |
| `TRACKING.md` | Iteration log (bugs found + fixes) |

## Building

Clone with the submodule:

```
git clone --recurse-submodules https://github.com/beebs1998-repo/rexglue-mushi.git
cd rexglue-mushi
```

(Already cloned without it? Run `git submodule update --init --recursive`.)

The SDK submodule itself pulls ~20 upstream dependencies on first init, so
this step can take a few minutes.

### Windows

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
```

### Linux

```
cmake --preset linux-amd64-release
cmake --build --preset linux-amd64-release --parallel
```

The build places the executable and all module/runtime DLLs in
`out/build/<preset>/`. The settings template (`mushi.toml`) is staged next to
the executable on first build (if not already there).

## First launch

1. Put your extracted game data in `game_data/` (see Requirements).
2. Either run `launch.bat` (Windows), or start the executable directly:

```
out\build\win-amd64-release\mushi.exe --game_data_root="game_data" --user_data_root="user_data"
```

The game writes logs to `logs/` and saves to `user_data/`. Xenia Canary
exported saves/replays (the `content/` tree) can be copied straight into
`user_data/` per the title-id/device directory layout - the SDK accepts both
raw `XCONTENT_AGGREGATE_DATA` dumps and full STFS/CON package headers.

## Settings

The game reads and writes `mushi.toml` **next to the executable**
(`out\build\win-amd64-release\mushi.toml` by default). The copy in this
repository is a *template*: the build (POST_BUILD) and `launch.bat` stage it
next to the exe **only if the live file does not already exist**, so the
curated defaults are in effect from the very first launch. A copy-if-missing
staging rule means:

- your F4 edits and manual tweaks are never clobbered by a rebuild;
- editing the repo template after first stage does NOT propagate - delete
  the live copy (or re-edit via F4) to re-sync.

Saving is **diff-only**: only cvars whose current value differs from the
compiled-in SDK default are written. A cvar sitting at its default therefore
does not appear in the file, and a default-equal line is dropped by the next
save - that is expected, not a desync between the menu and the file.

Current notable options (bundled SDK = pristine mainline plus the fixes
documented in AGENTS.md):

| Option | Default | Effect |
| --- | --- | --- |
| `d3d12_submit_on_primary_buffer_end` | `false` | D3D12 submission at primary buffer end; `false` is the validated slowdown fix for this title family (diff-only save usually omits it) |
| `vsync` | `true` | Present sync; keep on for correct 60 Hz guest pacing |
| `gpu_allow_invalid_fetch_constants` | `true` (template) | Accept invalid Xenos fetch constants instead of failing the draw |
| `mnk_mode` | `false` | Keyboard/mouse controller emulation (enabled in the template) |
| `log_file` etc. | sequential files | Template pins a fixed rotating `logs/mushi.log` (see the template header) |

## Regenerating the recompiled code (optional)

Only needed if you change the manifest/function lists, or bump the SDK. It
requires the game files **and** the `rexglue` CLI (built with the SDK).

```
.\scripts\codegen_all.ps1
```

The script ends with the embedded-trap gate (`scripts/validate_codegen.ps1`):
a codegen turn that emits a new recompiler-trap site fails there instead of
as a runtime crash (see `scripts/trap_allowlist.txt` for the triaged
baseline). A one-time per-machine build of the XenonRecomp submodule
(`pwsh .\scripts\bootstrap_xenon.ps1`) is also needed only for
`scripts/build_module_hints.ps1` - the static missing-function derivation
that seeds the `mushi*_hints.toml` files.

Two facts carried over from the sibling projects:

- The four modules share guest base `0x88000000`, so codegen refuses to
  process them in a single run; the script runs one target per invocation.
- `codegen` rewrites `generated/default/dll_targets.cmake`,
  `generated/default/module_registry.cpp` and `generated/rexglue.cmake` for
  the *last* target only. The committed copies are hand-merged (all four
  modules) and auto-codegen is disabled in `rexglue.cmake`. The script
  restores them (`git checkout -- ...`) after running; don't let these get
  clobbered.

## Known issues

See [TRACKING.md](TRACKING.md) for the current open items and the
playtest-driven iteration log. Status after the first confirmed playtest
(all four modes exercised, saves/replays incl. a Xenia-Canary-saved replay
verified):

- imports of Xenia Canary saves/replays enumerate and load as-is
  (SDK STFS-header acceptance fix also used by the shipped DLC content).
- module switching is verified strict unload→load with all four modules
  (no resident-module base-overlap concern observed).
- one known inert GPU draw at **Novice (dat163) startup**: a repeated
  `Unsupported resolve vertex buffer format` / `PM4_DRAW_INDX failed`
  burst the moment the mode first renders, rate-limited for the rest of
  the run, no visual impact and no crash. Recorded in TRACKING as an open
  GPU item (frames may skip a silent effect - watch for missing Novice
  startup effects).

## Credits & legal

- Runtime/toolkit: [ReXGlue](https://github.com/rexglue/rexglue-sdk); this
  repo pins a lightly patched fork (`thirdparty/rexglue-sdk`, shared by the
  sibling ports) with the fixes documented in AGENTS.md.
- **No game data or DLC packages are included.** You must own Mushihimesama
  (and the DLC package if you want the extra mode) and extract your own
  `game_data/`. The recompiled code in `generated/` is derived from that
  game and is provided for interoperability/archival research; use only
  with legally owned data.
