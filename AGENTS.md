# Submarine Titans Decompilation — repository guidance

## Purpose and source of truth

This repository recovers the original 32-bit MSVC/x86 Submarine Titans program
into readable, eventually buildable source. The authoritative analysis is the
Ghidra 12.1.2 project under `proj/`; `recovery/` and `decomp/` are generated,
reviewable projections of that database. Do not hand-edit generated recovery or
decompiler output to invent facts that belong in Ghidra or a recovery script.

Original binaries are local under ignored `bin/` and must not be committed.

## Working model

- `scripts/` contains Ghidra Java scripts, not a Gradle extension. Ghidra compiles
  them on demand with JDK 21.
- Analyzers are read-only and write proposals to `recovery/ST.exe/`; appliers
  consume the exact proposal TSV and mutate Ghidra transactionally.
- Never bulk-enable `apply=0` or related review flags. Preserve `USER_DEFINED`,
  `IMPORTED`, stale baselines, edited generated types, and explicit conflicts.
- Run `STDecompExport` with the repository's `decomp/` directory only after the
  database is current. Per-function address is the stable identity; names are not.
- `ST_PSEUDO[...]` comments and `pseudocode_idioms.jsonl` describe presentation
  gaps which Ghidra could not safely fold. They are exporter-owned and
  regenerated; do not treat them as recovered semantic facts.
- `decomp_quality_summary.json` and `decomp_quality_issues.jsonl` are the broad
  recursive quality audit. Use the stable function address and issue kind when
  selecting the next automation cluster; do not infer corpus quality from one
  large `decomp.c` example.

## Important technical constraints

- Respect 32-bit MSVC ABI details: `__thiscall` uses ECX, `RET n` proves callee
  cleanup/argument bytes, `_setjmp3` has two fixed args plus varargs, and narrow
  source values do not prove a narrow EAX ABI return.
- Packed/unaligned fields and overlapping unions are intentional. Never align or
  merge them merely to improve decompiler spelling.
- A foreign class type appearing in a named method may be contamination from a
  weak method-owner vote. Audit the callee's full direct-caller coverage before
  extending the foreign layout; shared helpers must retain neutral receivers.
- Named `GetMessage` methods share the recovered `STMessage *` envelope. Its
  three argument slots are ID-dependent unions, not three globally fixed types.
- A runtime `DArrayTy::elementSize` stride cannot become a static C array type.
- Typed vtable function pointers retain an explicit receiver in Ghidra C output.
- Compiler optimization can merge several SSA lifetimes into one Listing local;
  avoid persistent local typing when evidence shows mixed scalar/pointer roles.

## Validation and hygiene

- Follow `docs/ghidra-workflow.md`; stop iterative passes only when enabled
  repair/apply counts reach zero or the remaining rows are explicitly review-only.
- Compile changed scripts against the installed Ghidra 12.1.2 jars and JDK 21.
  Put `.class` output in a temporary directory, never in `scripts/`.
- Run `git diff --check` and inspect generated summaries/apply reports. Do not
  discard unrelated dirty Ghidra database or corpus changes.
- Close Ghidra before copying or headless-processing its project. Do not run a
  second writer against an open project.

See `README.md`, `docs/ghidra-workflow.md`,
`docs/structure-recovery-gaps.md`, and `docs/pseudocode-normalization.md` for the
full workflow and current safety boundaries.
