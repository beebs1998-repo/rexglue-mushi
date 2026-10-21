# Mushi Recomp Tracking

Runtime/iteration log for unresolved addresses, missing symbols, and runtime
exceptions. Methodology inherited from the sibling ports
(`rexglue-futari`, `rexglue-dfkbl`) — their TRACKING.md files are the
authoritative history for every convention cited below.

> Provenance note: the D3D12 slowdown fix is already baked into the pinned
> SDK (`d3d12_submit_on_primary_buffer_end = false` by default; fork commit
> lineage from dfkbl TRACKING iter-27) and was validated on Mushihimesama
> Xenia-canary captures specifically — see **dfkbl's**
> `XENIA_CANARY_SLOWDOWN_FINDINGS.md` (captures 062720–062817 on 435A07E3).
> That document is intentionally NOT duplicated into this repo. If the game
> ever re-quantizes to ~29 fps in dense sections, re-read that doc before
> touching anything.

## Iteration 1 (2026-10-22) — project setup

- Repo initialized in `I:\workspace\rexglue-mushi`; git history started with
  `main` as the default branch, remote `origin` =
  `https://github.com/beebs1998-repo/rexglue-mushi.git` (empty upstream).
- Submodule reconciliation: the copied working trees in `thirdparty/` had
  gitfile gitdir pointers to a non-resident parent. Fixed by recursively
  copying the gitdirs from `rexglue-dfkbl`
  (`.git/modules/thirdparty/{rexglue-sdk,XenonRecomp}` → `.git/modules/...`)
  and adopting them with `git submodule add`. Because both projects store
  `core.worktree` as a relative path of identical depth, no config edits
  were needed. Verified: `rexglue-sdk @ 348c804` and `XenonRecomp @
  ddd128b`, both clean.
- Thirdparty re-homing side effect: the copied `XenonRecomp/build/` cache
  embedded dfkbl's ABSOLUTE paths (`I:/workspace/rexglue-dfkbl/...`) — a
  stale cache that would misbehave on any in-place rebuild. Wiped and
  cold-rebuilt via `scripts/bootstrap_xenon.ps1` (clang-cl/Ninja, 34/34
  targets, ~2 min). The built `XenonRecomp.exe` is now re-rooted to this
  repo; the `rexglue` CLI from the copied SDK tree (`out/win-amd64/`)
  is path-independent and left as-is.
- Skeleton ported from `rexglue-dfkbl` (project name `mushi`, `MushiApp`):
  CMakeLists (WIN32 exe + OBJECT recomp lib), CMakePresets, .gitignore/
  .gitattributes, CI workflow (artifact `mushi-win-amd64`), launch.bat,
  the three docs, and the scripts (`codegen_all.ps1`,
  `build_module_hints.ps1`, `validate_codegen.ps1`, `bootstrap_xenon.ps1`,
  `microprofile_dump_decode.py`) re-targeted to
  `dat12/dat112/dat163/dat111`.
- **Config-file staging convention ADDED** (fix for a flaw still present in
  the siblings): the live config is `exe_dir/mushi.toml` and a missing
  file silently degrades the first launch to compiled-in defaults (no
  keybinds/mnk, sequential unbounded logs, no pinned cvars). dfkbl's live
  exe-dir config shows the drift in the wild (auto-generated header, zero
  template pins). This project stages the template copy-if-missing from
  three entry points — POST_BUILD (`scripts/stage_config.cmake`),
  `launch.bat`, and the CI artifact — and never overwrites a live config.
- Manifest: `mushi_manifest.toml` with the entrypoint + the four modules.
  `dat111.bin` (DLC-delivered module) staged locally
  `game_data/dat111.bin` from the Xenia content package; the manifest
  comment records the provenance. Per-module and shell override TOMLs
  created empty; trap allow-list created empty (gate baseline TBD after
  the first codegen pass).
- DLC unlock plan (futari TRACKING Iteration 20 methodology, no SDK change
  expected): re-layout the local Xenia dump from
  `user_data/0000000000000000/435A07E3/435A07E3/00000002/…` (Xenia's layout)
  to the SDK ContentManager layout
  `user_data/0000000000000000/435A07E3/00000002/<content-id>/` + one-level
  `Headers/00000002/<content-id>.header`, appending the 4-byte `0xFFFFFFFF`
  license tail if the SDK's `LoadPackageLicenseMask` convention requires it.
  `license_mask` stays DEAD (futari Iteration 23 removed it as non-functional;
  do not re-introduce).
- Status: codegen + first build pending; playtest pending.

## Known-unknowns going into codegen (do not assume — verify)

- Module → in-game mode-name mapping (all four) — record from `XexLoadImage`
  log lines during playtest, then update AGENTS.md table.
- Whether the modules are strictly mutually exclusive (mode menu unload
  first, dfkbl-like) or hot-swapped on a shared slot (futari-like; would
  need porting futari's `src/futari_mod_swap_fix.cpp` hook pattern). Watch
  the first mode-switch playtest for "base overlap" refusal logs.
- Whether `gpu_allow_invalid_fetch_constants = true` is needed (dfkbl
  template ships it; harmless there; verify mushi's GPU error log later).
- Whether the DLC path needs any entrypoint-side register beyond the static
  hint pass (futari hit a virtual-dispatch-thunk gap near
  `XamBackgroundDownloadSetMode STUB` on its DLC route — same engine
  family, watch for the same class).
