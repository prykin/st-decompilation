# Submarine Titans Decompilation — repository guidance

## Purpose and source of truth

This repository recovers the original 32-bit MSVC/x86 Submarine Titans program
into readable, eventually buildable source. The live authoritative analysis is the local Ghidra 12.1.2 project under
ignored `proj/`; the committed database checkpoint is the verified packed
Program under `ghidra/`. `recovery/` and `decomp/` are generated, reviewable
projections of that state. Do not hand-edit generated recovery or
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
- Treat the corpus as accepted only when `recovery/ST.exe/export_receipt.json`
  says `passed`. Export is whole-corpus transactional; `incomplete` means the
  exporter or gate stopped, and the retained `pre_export/` snapshot—not a hash
  update—is the next regression baseline.
- `ST_PSEUDO[...]` comments and `pseudocode_idioms.jsonl` describe presentation
  gaps which Ghidra could not safely fold. They are exporter-owned and
  regenerated; do not treat them as recovered semantic facts.
- `decomp_quality_summary.json` and `decomp_quality_issues.jsonl` are the broad
  recursive quality audit. Use the stable function address and issue kind when
  selecting the next automation cluster; do not infer corpus quality from one
  large `decomp.c` example.
- `call_relations.jsonl` is the address-authoritative call identity: keep the
  direct entry, thunk chain, and resolved target together, especially for
  overloads. `coverage_summary.json`/`unclaimed_ranges.jsonl` are the source of
  truth for executable bytes which Ghidra has not assigned to any function.
- Treat `manual_type_conflicts.tsv` as a review queue, not an apply list. Strong
  contradictory evidence makes a protected type suspicious, but never licenses
  silently replacing `USER_DEFINED`/`IMPORTED` work.
- Do not emit wall-clock start/end timestamps into committed corpus, recovery,
  or handoff artifacts. Elapsed durations are diagnostic and may be retained.

## Important technical constraints

- Respect 32-bit MSVC ABI details: `__thiscall` uses ECX, `RET n` proves callee
  cleanup/argument bytes, `_setjmp3` has two fixed args plus varargs, and narrow
  source values do not prove a narrow EAX ABI return.
- Packed/unaligned fields and overlapping unions are intentional. Never align or
  merge them merely to improve decompiler spelling.
- Integer promotion in comparisons does not invalidate a proven narrow storage
  width. Treat competing same-width scalar signedness on an already generated
  field as review-only; automatically clearing it can make Ghidra oscillate
  between the concrete scalar and `undefined` on successive decompiles.
- A foreign class type appearing in a named method may be contamination from a
  weak method-owner vote. Audit the callee's full direct-caller coverage before
  extending the foreign layout; shared helpers must retain neutral receivers.
- Named `GetMessage` methods share the recovered `STMessage *` envelope. Its
  three argument slots are ID-dependent unions, not three globally fixed types.
- A runtime `DArrayTy::elementSize` stride cannot become a static C array type.
  Use a per-owner-field descriptor specialization whose `data` member points at
  the recovered element record; keep the runtime stride in the pseudocode.
- A library loader returning heterogeneous serialized records must retain a
  neutral `byte *` ABI. Recover a separate payload view at each consumer; do not
  propagate one consumer's structure back into the loader return.
- `Owner::sub_ADDRESS` is an automation-owned structural placeholder: method
  ownership is proven, but no original semantic method name has been recovered.
- A fixed class-member array may be installed only from a proven bound or exact
  pointer-walk extent; run `STClassArrayAnalyzer` before the class-layout pair.
- Typed vtable function pointers retain an explicit receiver in Ghidra's own C
  output. `STDecompExport` folds only the exact duplicated-receiver form
  `(*obj->vtable->slot)(obj, ...)` into C++ member-call sugar
  `obj->slot(...)`; adjusted, cast, missing, and secondary-base receivers stay
  explicit for review.
- Compiler optimization can merge several SSA lifetimes into one Listing local;
  avoid persistent whole-local typing when evidence shows mixed scalar/pointer
  roles. `STLocalLifetimeAnalyzer/Applier` may split distinct decompiler merge
  groups or type a single raw-undefined group only from an address-stable exact
  typed-call/copy anchor; a fresh decompile must reattach the database local to
  that same anchor before `applied` is reported.
- Non-leaf `void` is valid only when every direct-call CFG path kills EAX before
  an explicit read; an unresolved path is `unknown`, not ignored. A bare caller
  `RET` proves forwarding only when that caller already has a protected non-void
  return ABI—generic return types must not recursively validate each other.
- ABI-mutating work must pass `STAbiRegressionGate` before broad structural
  consumers run. Keep durable sentinels in `config/abi-regression-rules.tsv`,
  never in Java. A deliberate ABI change may use only an exact reviewed
  baseline/candidate fingerprint transition; never auto-update, wildcard, or
  globally disable the accepted baseline.
- `RecoveredRecord_<Owner>_<Address>` is a deterministic generated identity for
  one complete one-owner pointer shape. It is not an asserted original type name
  and never licenses geometry-only merging.
- An allocation-backed packed record view belongs to its producer/consumer, not
  to the neutral allocator. Automatic application requires one returned allocation
  root, an exact machine fixed-copy span from one source parameter, non-overlapping
  fields inside that span, and unchanged non-manual ABI baselines.
- A non-vtable function-pointer field is automatic only when one exact generated
  structure member has both a stored function-address family with a unanimous
  imported or independently recovered ABI and an indirect call loaded from that
  same member. Bare `USER_DEFINED` source is not independent ABI provenance.
  Scan and prove exact stores before decompiling broad call-only candidates; a
  call without a stored target is not a callback-field proposal.
- A callback stack parameter is automatic only from the complete machine chain:
  every observed direct callsite passes an exact function address or null into
  the same parameter, the callee calls through that parameter with one argument
  count, and at least two exact target sites agree on a machine-derived ABI.
  A cdecl count additionally requires matching caller cleanup at every indirect
  site. Preserve manual/imported signatures and concrete parameter types; never
  copy semantic argument types from an untrusted target signature.
- A polymorphic dispatch interface is audit metadata only. It must not replace
  a physical class vptr or mutate synthetic tail slots; stale proposal files
  requesting those operations are refused by the applier.
- A bulk zero span proves an extent, not an array element type. Install a fixed
  inline array only when independent indexed-stride evidence agrees; install a
  nested by-value member only for an exact complete typed copy into an
  automation-owned range.

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
full workflow and current safety boundaries. Follow
`docs/recovery-task-queue.md` for the ordered post-baseline recovery work.
