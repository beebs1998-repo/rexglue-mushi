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

## Iteration 2 (2026-10-22) — first codegen pass (clean, zero gate sites)

- First `rexglue codegen mushi_manifest.toml --target dat12` (raw, no hints)
  failed validation on 10 unresolved `b` targets in the ENTRYPOINT shell —
  the unreached-by-PDATA class (all between known functions:
  `0x82095120/128/138`, `0x82096B28`, `0x820963D8/E0/E8`, `0x820AA458`,
  `0x820B7C40`, `0x820B7608`). Seeded as name-only hints into a new
  `mushi_hints.toml` (10 entries) and wired the shell include list
  (`["mushi_hints.toml", "mushi_functions.toml"]`). NOTE: dfkbl never hit
  this at codegen time (its fork SDK 0.9 analysis validated looser or its
  seeded TOML file matched); the strict per-target validation here matched
  futari's first-pass experience.
- After seeding: ALL FIVE targets codegen'd clean in one per-target pass
  (dat12 4.3s incl. entrypoint regen; dat112/dat163/dat111 1.1s each,
  "module(s) up to date" skipped where already fresh). **Zero unresolved
  calls/branches at codegen** — the modules shared the shell's analysis
  (all four modules validated without any module-side static seeds; module
  code coverage far larger than the per-target write counts suggest, since
  gap-fill+merge covers the whole code section).
- Glue hand-merge applied: `generated/default/dll_targets.cmake` and
  `module_registry.cpp` written with all four modules (`mushi_dat12`,
  `mushi_dat112`, `mushi_dat163`, `mushi_dat111`); auto-codegen disabled in
  `generated/rexglue.cmake` (commented outputs block, DISABLED note, same
  as dfkbl's committed copy).
- **Embedded-trap gate baseline: ZERO sites** (266 informational switch
  traps — the SDK's still-emitted `Switch case out of range __builtin_trap()`
  class; never fatal in the gate; monitor during playtest for actual
  `0xC000001D`/`UD2` crashes, i.e. a table whose `cases != bounds+1`).
  This is the cleanest first pass across all three sibling ports so far
  (futari hit this class hard on its eight modules in early iterations).
- Status: build pending; hints derivation pass (build_module_hints.ps1)
  queued after the build to cover the indirect-call-only function class
  dynamically populated per-title (XenonRecomp full-coverage diff); initial
  playtest next.

- Status: build pending; hints derivation pass (build_module_hints.ps1)
  queued after the build to cover the indirect-call-only function class
  dynamically populated per-title (XenonRecomp full-coverage diff); initial
  playtest next.
- **DLC staged into the SDK ContentManager layout (copy, Xenia dump left
  intact)** — 2026-10-22: package data
  `user_data/0000000000000000/435A07E3/00000002/54EE4F5841C0CC45B07AB01E85B35FD8FC743D0243/`
  (contains `dat111.bin`, 1843200 bytes, copied from Xenia's
  `435A07E3/435A07E3/00000002/…` one-level-deeper dump) and header
  `Headers/00000002/54EE4F58….header` built as the 328-byte raw
  XCONTENT_AGGREGATE_DATA dump + 4-byte `0xFFFFFFFF` license tail (file is
  332 bytes; `LoadPackageLicenseMask` reads the 4 bytes at offset
  `sizeof(XCONTENT_AGGREGATE_DATA)` = 328, so a full STFS header cannot
  carry the tail convention — the raw-dump leg is the one that works with
  the 9019af7 reader, which accepts both). Dump's `file_name` decoded as
  exactly the dir name `54EE4F58….243`, content_type = 0x00000002.
  `license_mask` cvar deliberately unset (it exists in this SDK and
  returns via `XamContentGetLicenseMask` — keep as the fallback lever if
  the game gates the DLC mode on the mask rather than enumeration
  presence; futari's game never needed it).

## Iteration 3 (2026-10-22) — first build clean; config staging verified

- `cmake --preset win-amd64-release` + build (902 targets): configure 99s,
  full compile+link clean, only benign upstream warnings. Artifacts in
  `out/build/win-amd64-release/`: `mushi.exe`, the four `mushi_dat*.dll`s,
  `rexruntime.dll`, `rexgpu-xenos.dll` — plus **`mushi.toml` staged next to
  the exe by the POST_BUILD rule on first build** (2162-byte template).
  The config-staging convention is verified end-to-end: a clean machine
  build now starts with the curated settings on the very first launch,
  which the sibling ports never did.
- Status: run the static hint derivation pass next (the one class the
  analyzer missed: indirect-only functions), then first playtest.

## Iteration 4 (2026-10-22) — static hint pass; 69-site gate baseline triaged

- `scripts/build_module_hints.ps1` full pass (XenonRecomp reference map minus
  ReXGlue-registered, stub-filtered): modules 21–22 real hints each
  (dat12/dat112/dat163 21, dat111 22 — symbols 1.1–1.4% of each map), shell
  **284 real hints** from a 4,622-candidate diff against an 8,867-entry
  registered set; ~93% of candidates were data/gap-fill misidentifications
  (stubs), dropped by the stub filter like in the sibling ports.
- One harness bug hit first: the pass's clean-codegen leg revalidates the
  entrypoint with only the curated `mushi_*_functions.toml` in its include
  list, so the 10 bootstrap shell b-target seeds had to live THERE (moved
  out of the placeholder `mushi_hints.toml`), matching dfkbl's convention
  for the same class (`dfkbl_functions.toml` holds 0x820A4554 et al.).
  Manifest reverted to a bare entrypoint include list pending the real
  hints files; after the pass, all five hints files are wired in FIRST.
- **Embedded-trap gate after the hint regen: 69 new sites, all in the
  `default` target** — three tight call/branch clusters (0x821CE330–
  0x821CE8E8, 0x821D2F98–0x821D309C, 0x82363D20–0x82363FCC; targets are the
  46 shell b addresses both analyzers refuse to call function starts) plus
  two conditional-branch families (0x820A77A4→0x820A75CC,
  0x820CDDB8→0x820CDBDC). Triaged into
  `scripts/trap_allowlist.txt` via the gate's `-WriteAllowList` output —
  the same block-twin/jump-table residue class futari TRACKING.md
  documents and dfkbl triaged as a 145-site baseline. **Caveat recorded in
  the allowlist header: NOT playtest-verified yet** — dfkbl cut its
  baseline by 20 sites later (SDK branch-classification fix + one live
  mid-block registration); mushi may get the same cut (0x820A75CC mirrors
  dfkbl's 0x820A4554 story) once playtest proves which addresses are live.
- Gate now: validation OK (69 allowed, 266 switch-traps informational).
- Status: incremental rebuild + commit; first playtest next.

## Iteration 5 (2026-10-22) — first playtest: all four modes clean; DLC verified

User playtested across two decorator runs. Evidence from
`logs/mushi.log`:

- **Module → mode mapping, from `XexLoadImage` ground truth** (chronological
  Novice → 360 → Arrange → 1.5 driven session):
  - `dat163.bin` = **Novice ver** (first load, `game:\dat163.bin`)
  - `dat12.bin` = **360 ver**
  - `dat112.bin` = **Arrange ver**
  - `dat111.bin` = **1.5 ver (DLC)** — and crucially it is loaded through
    the game's own content mount: `XexLoadImage('ver15:\dat111.bin')`.
    The staged `00000002` package (328-byte raw header + `FFFFFFFF`
    license tail at 328) enumerated and mounted with NO `license_mask`
    cvar — the futari recipe transplanted cleanly.
- **Module switching = strict unload→load** — `UnloadUserModule(...):
  recomp=found module_libraries=1` logged before every switch, no
  futari-style shared-slot hot-swap behavior, no base-overlap refusals.
  The futari `*_mod_swap_fix` hook pattern is NOT needed for this title.
- **Recompiler: zero runtime traps** in either session — no REX_FATAL,
  no `0xC000001D`, no unregistered-call fatalities. The 69 triaged shell
  sites and 266 informational switch-traps were never hit in the tested
  paths (title screen, all four mode entries, mode switching, save +
  replay save, Xenia-Canary replay import/play). Allowlist stays as-is;
  verifying deeper single-mode content (branch-table-heavy code) remains
  the standing gate for future sessions.
- **GPU error burst at Novice startup** — one repeated identical draw,
  26 lines at `05:11:54` and `05:25:10` and `05:32:14` (all three runs),
  all token-identified as
  `Unsupported resolve vertex buffer format (vf0: type=2, size=14409729, address=0x22800000, endian=2)`
  + `PM4_DRAW_INDX(3, 4, 0): Failed in backend (major_mode=0,
  explicit_major=0, path_select=0, tess_mode=1, edram_mode=6)`, rate-limited
  after. It only fires within ~20ms of the Novice module's first frame; the
  other three modes emit zero GPU errors. No visual damage reported and no
  crash in any of the three runs. Treat as an open, non-critical GPU item:
  `k_1_REVERSE` rendering path may be in that draw — dfkbl
  XENIA_CANARY_SLOWDOWN/FINDINGS precedent suggests tracing the fetch
  constant before touching anything.
- **One benign kernel noise line**: `Unimplemented XLIVEBASE message
  app=000000FC, msg=0005000C` once per run — no gameplay effect.
- **Live-config save verified in the wild**: closing the game rewrites
  `mushi.toml` diff-only — `d3d12_submit_on_primary_buffer_end` correctly
  absent (= default = the slowdown fix active), keybinds persisted.
  A diagnostics `log_level = "info"` pin was applied to the live config
  for the evidence run and reverted to `"error"` afterwards (left as an
  explicit non-default line so future saves keep it).
- Status: skeleton→codegen→hints→triage→playtest loop CLOSED for the
  first confirmed session. Remaining standing items: the Novice startup
  GPU draw (open, inert), deeper single-mode play to exercise unresolved
  triaged clusters, and the sibling-port backport of the config-staging
  fix (separate commits in futari/dfkbl repos — the AGENTS.md-hosted plan
  covers it under "Config-file staging project convention").

## Known-unknowns status (post-playtest)

- ~~Module → mode mapping~~ — RESOLVED (AGENTS.md table, from the
  `XexLoadImage` log).
- ~~Module hot-swap semantics~~ — RESOLVED: strict unload→load.
- ~~DLC extra entrypoint-side registration~~ — RESOLVED: none needed; the
  DLC module loads through the staged content package (`ver15:`) after
  only the static hint pass.
- `gpu_allow_invalid_fetch_constants = true` stays as-is (carried from the
  dfkbl template; the only GPU error observed is the Novice-startup burst
  which is neither fatal nor visually damaging). Revisit only if a visual
  regression shows up.
- The three unresolved-`b`-target clusters / 69 triaged gate sites —
  unreached in the tested paths; re-verify with deeper single-mode play
  (long sessions, stage progression, replays across modes).
- Sibling-port config-staging backport (futari + dfkbl) — planned
  follow-up, separate commits per repo.
