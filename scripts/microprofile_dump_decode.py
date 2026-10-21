#!/usr/bin/env python3
"""MicroProfile HTML dump decoder (provenance: xenia-canary slowdown investigation).

Reproduces the analysis used to diagnose the DFKBL/CAVE dip slowdown
(see XENIA_CANARY_SLOWDOWN_FINDINGS.md in the repo root).
Original script shipped in the xenia-canary investigation session
(temp file mp_decode.py); behavior preserved exactly.

Usage:
    python microprofile_dump_decode.py <dump.html> [dip_threshold_ms=25.0]

Requires numpy.

Capturing dumps (xenia-canary with XE_OPTION_PROFILING=1 / _UI=1):
    - MicroProfile overlay toolbar -> "Dump" menu button. The fork's
      MicroProfileUIClickDump writes  microprofile-YYYYmmdd-HHMMSS.html
      to %HOMEDRIVE%%HOMEPATH% (e.g. C:\\Users\\<you>\), covering
      32<<n frames ahead of the click. 64-512 frames are good sizes.
    - Dump durations: >25ms frames are classified as "dips" in this tool
      (vblank-quantized dense sections land at 33-34ms).

Decoder facts (verified against third_party/microprofile writer):
 - Per frame i, per thread log j (index == ThreadNames[i]; ThreadGpu[j]!=0
   marks GPU-query pseudo logs -> skipped):
     tt{i}[j][k] : entry type 0=LEAVE, 1=ENTER, 2=META, 3=LABEL, 4=GPU_EXTRA
     ts{i}[j][k] : raw tick, printed via PrintUIntComma: <10 -> decimal digit,
                   >=10 -> 0x-hex. Values are ticks; the JS multiplies by the
                   MakeTimes scale arg (fToMs) at render time — we do it here.
     ti{i}[j][k] : timer index (types 0/1/4), meta id (2), label seq (3)
 - ts wrappers: GPU logs use MakeTimesExtra(s, sx, tt{i}[j], [...]);
   CPU logs use MakeTimes(s, [....]) with NO tt reference (positional).
   Regex note: put the comma INSIDE the optional group; a trailing
   `(?:tt...)?,` variant silently fails to match some inputs.
 - CPU-only analysis: ignore types 2/3/4 entirely.
 - Stacks carry across frame boundaries (spans can straddle frames).
 - MakeTimer aggregate in the header (avg/max/excl/callcount/total) is the
   reliable cross-check: window ~= the 60 frames before the dump click.
"""
import re
import sys
import numpy as np

PAGE_CONTENT_RE = re.compile(rb'\[([^\[\]]*)\]')
TS_RE = re.compile(
    rb'MakeTimesExtra\(([-\d.+eE]+),([-\d.+eE]+)(?:,tt\d+\[\d+\])?,\[([^\[\]]*)\]'
    rb'|MakeTimes\(([-\d.+eE]+)(?:,tt\d+\[\d+\])?,\[([^\[\]]*)\]')
VAR_RE = re.compile(rb'var (tt|ts|ti|tl)(\d+)')
FRAME_RE = re.compile(
    rb'Frames\[\d+\] = MakeFrame\(\d+, ([-\d.+eE]+), ([-\d.+eE]+),')
GROUP_RE = re.compile(
    rb"MakeGroup\((\d+), \"([^\"]*)\", (\d+), (\d+), (\d+),")
TIMER_RE = re.compile(rb'MakeTimer\((\d+), "((?:[^"\\]|\\.)*)", (\d+),')
TOK_RE = re.compile(rb'0x[0-9a-fA-F]+|[0-9]')


def parse_uints(text):
    if not text:
        return np.empty(0, dtype=np.int64)
    toks = TOK_RE.findall(text)
    return np.array(
        [int(t, 0) for t in toks], dtype=np.int64
    ) if toks else np.empty(0, dtype=np.int64)


def main(path, dip_thresh_ms=25.0):
    with open(path, 'rb') as f:
        data = f.read()
    print(f"loaded {len(data)/1e6:.0f} MB", flush=True)

    frames_pos = data.find(b'var Frames = Array(')
    head = data[:frames_pos]

    # --- metadata ---
    s = head.find(b'var ThreadNames = [')
    e = head.find(b'];', s)
    thread_names = [m.decode('utf-8', 'replace') for m in re.findall(
        rb"'([^']*)'", head[s:e])]
    s = head.find(b'var ThreadGpu = [')
    e = head.find(b'];', s)
    thread_gpu = parse_uints(head[s:e])

    groups = {}      # id -> (name, isgpu)
    for g in GROUP_RE.finditer(head):
        groups[int(g.group(1))] = (g.group(2).decode('utf-8', 'replace'),
                                   int(g.group(5)))
    timers = {}      # id -> (name, group_id)
    for m in TIMER_RE.finditer(head):
        timers[int(m.group(1))] = (m.group(2).decode('utf-8', 'replace'),
                                   int(m.group(3)))

    frame_metas = [(float(m.group(1)), float(m.group(2)))
                   for m in FRAME_RE.finditer(data)]
    n_frames = len(frame_metas)
    durs = np.array([s2 - s1 for (s1, s2) in frame_metas])
    print(f"frames={n_frames}  dur med={np.median(durs):.2f}ms  "
          f"min={durs.min():.2f} max={durs.max():.2f}")
    for j, n in enumerate(thread_names):
        print(f"  log[{j}] gpu={int(thread_gpu[j]) if j < len(thread_gpu) else '?'}"
              f"  {n[:80]}")
    print(flush=True)

    # --- locate all per-frame variable sections (after meta) ---
    markers = list(VAR_RE.finditer(data, frames_pos))
    sect = {}
    total_marks = len(markers)
    for idx, m in enumerate(markers):
        kind, fr = m.group(1).decode(), int(m.group(2))
        end = markers[idx + 1].start() if idx + 1 < total_marks else len(data)
        sect[(kind, fr)] = (m.end(), end)

    # --- aggregates: tid -> [dip_tot, dip_self, dip_calls,
    #                         calm_tot, calm_self, calm_calls] ---
    agg = {}
    stack_errs = 0
    n_logs = len(thread_names)
    dip_count = 0
    # per-thread stacks that CONTINUE across frame boundaries
    thread_stacks = [[] for _ in range(n_logs + 1)]

    def add(tid, dip, total, self_ms):
        a = agg.get(tid)
        if a is None:
            a = agg[tid] = [0.0, 0.0, 0, 0.0, 0.0, 0]
        if dip:
            a[0] += total; a[1] += self_ms; a[2] += 1
        else:
            a[3] += total; a[4] += self_ms; a[5] += 1

    for fr in range(n_frames):
        dip = durs[fr] > dip_thresh_ms
        dip_count += dip
        tt_s, tt_e = sect[('tt', fr)]
        ti_s, ti_e = sect[('ti', fr)]
        ts_s, ts_e = sect[('ts', fr)]

        tt_parts = [m.span(1) for m in PAGE_CONTENT_RE.finditer(data, tt_s, tt_e)]
        ti_parts = [m.span(1) for m in PAGE_CONTENT_RE.finditer(data, ti_s, ti_e)]
        ts_wraps = []
        for m in TS_RE.finditer(data, ts_s, ts_e):
            if m.group(1):          # MakeTimesExtra(s, sx, tt.., [..])
                ts_wraps.append((float(m.group(1)), m.span(3)))
            else:                   # MakeTimes(s, [..])
                ts_wraps.append((float(m.group(4)), m.span(5)))

        if not (len(tt_parts) == len(ti_parts) == len(ts_wraps) == n_logs):
            print(f"!! frame {fr}: parts tt/ts/ti {len(tt_parts)}/"
                  f"{len(ts_wraps)}/{len(ti_parts)} != logs {n_logs}", flush=True)

        for j in range(min(n_logs, len(tt_parts))):
            if thread_gpu[j]:
                continue
            types = parse_uints(data[tt_parts[j][0]:tt_parts[j][1]])
            idxs = parse_uints(data[ti_parts[j][0]:ti_parts[j][1]])
            scale, (p0, p1) = ts_wraps[j]
            ticks = parse_uints(data[p0:p1]).astype(np.float64) * scale

            n = min(len(types), len(idxs), len(ticks))
            if n != len(types) or n != len(idxs) or n != len(ticks):
                stack_errs += 1
            stack = thread_stacks[j]
            for k in range(n):
                t = types[k]
                if t == 1:      # ENTER
                    stack.append([int(idxs[k]), ticks[k], 0.0])
                elif t == 0:    # LEAVE
                    if not stack:
                        stack_errs += 1
                        continue
                    tid, t0, child = stack.pop()
                    total = ticks[k] - t0
                    if total < 0:
                        stack_errs += 1
                        continue
                    add(tid, dip, total, total - child)
                    if stack:
                        stack[-1][2] += total

    # --- report ---
    name = lambda tid: timers.get(tid, ('?tid%d' % tid, -1))[0]
    group = lambda tid: groups.get(timers.get(tid, (0, -2))[1], ('?', '?'))[0]

    print(f"\ndip frames (>{dip_thresh_ms}ms): {dip_count}/{n_frames}")

    def table(col_tot, col_self, col_calls, title, topn):
        rows = sorted(agg.items(), key=lambda kv: -kv[1][col_tot])
        print(f"\n=== {title} ===")
        print(f"{'timer':58s} {'group':14s} {'tot':>10s} {'self':>10s} "
              f"{'calls':>10s}")
        for tid, a in rows[:topn]:
            tot, slf, calls = a[col_tot], a[col_self], a[col_calls]
            print(f"{name(tid)[:57]:58s} {group(tid)[:13]:14s} "
                  f"{tot:10.1f} {slf:10.1f} {calls:10d}")

    table(0, 1, 2, f"DIP frames (>{dip_thresh_ms}ms) - TOTAL ms", 40)
    table(1, 1, 2, f"DIP frames - SELF ms", 40)
    table(3, 4, 5, "CALM frames - TOTAL ms", 20)
    table(4, 4, 5, "CALM frames - SELF ms", 25)
    print(f"\nstack errors / unpaired entries: {stack_errs}")


if __name__ == '__main__':
    main(sys.argv[1], float(sys.argv[2]) if len(sys.argv) > 2 else 25.0)
