# Submarine Titans Decompilation — current LLM handoff

> The committed database checkpoint for this revision is `ghidra/ST.exe.gzf`; `proj/` is ignored local working state.

Read `AGENTS.md` first. The Ghidra database is authoritative;
`recovery/` and `decomp/` are generated, reviewable projections. Do not
hand-edit generated output to invent facts which belong in Ghidra or a recovery
script.

## Environment

- Inspection/editing workstation: use the authoritative SMB volume directly at
  `<local-volume>/st`. Do not create a local checkout or symbolic link.
- Ghidra host repository path: `<local-home>/st`. Paths recorded in build/run
  manifests are host paths, not evidence of a second repository.
- Ghidra host: Ghidra 12.1.2 with Homebrew OpenJDK 21.
- Project on the Ghidra host: `<local-home>/st/proj/st.gpr`.
- Scripts on the Ghidra host: `<local-home>/st/scripts`.
- Recovery output on this workstation: `<local-volume>/st/recovery/ST.exe`.
- LLM corpus on this workstation: `<local-volume>/st/decomp/ST.exe`.
- Original executable: `bin/ST.exe` (ignored; never commit).

The scripts are ordinary Ghidra Java scripts compiled on demand, not a Gradle
extension. `STRecoveryLauncher` infers repository paths and orchestrates the
pipeline.

## Working policy

The target is readable, eventually buildable source for the original 32-bit
MSVC/x86 game. Prefer general, evidence-driven heuristics over address-specific
patches. Apply semantic facts to Ghidra when safe; use exporter normalization
only for exact compiler/decompiler presentation artifacts.

Never bulk-enable `apply=0`. Preserve `USER_DEFINED`, `IMPORTED`, edited
generated types, stale baselines, and explicit conflicts. Inspect the recursive
corpus and reports, not one convenient `decomp.c`. Do not claim a source change
affected Ghidra until the user has run the pipeline and the generated reports
have been checked.

## Latest accepted run

The authoritative latest `full-export` is run
`32fdd23154133857c39966429e56ee51c0f828b65a8388f57b1bb0e69f47e88f`
under `recovery/ST.exe/runs/`. It completed on 2026-08-02 in 2,314.892 seconds
(38m34.892s), with Program modification `379 -> 1176` and semantic hash
`092a55e1aa7e5136813b1bd4600a741d22895c40f4281c890b03470a02d089b3`.

Ghidra's load preflight accepted all 77 Java scripts: 76 were freshly loaded
and the already-running `STRecoveryPipeline` was recorded as
`already_loaded`; `build_failure_count=0`. The export receipt is `passed` and
the regression gate reports zero hard regressions and zero warnings. It
exported 10,392 internal functions and 5,712 bodies with zero decompilation
failures. Every physical vtable slot retained its type. Against the accepted
baseline, `raw_indirect_call` improved `2102 -> 2100` and `undefined_type`
improved `17791 -> 17777`; all other guarded quality counters were stable.

The repaired lifecycle behavior was exercised, not merely compiled:

- `STHiddenThisApplier` restored 24 receiver signatures, including two live
  consumers of `AnonReceiver_0064A970`;
- the final lifecycle proposal retains `AnonReceiver_0064A970` with six
  signature uses, and also retains its referenced vtable;
- the first lifecycle apply replaced 15 stale discriminator-case views only
  with views carrying the same discriminator address/case identity, and removed
  four unreferenced script-owned views (two stale case views and two anonymous
  pointer shapes);
- the immediately repeated lifecycle pass made zero changes, proving that the
  resulting lifecycle state is stable within the run.

The final discriminator stack phase now costs 6.034 seconds instead of
re-decompiling all families for roughly two minutes. Local-lifetime analysis
cost 180.125 seconds and emitted only 618 actionable/review proposals rather
than the 22,917-row queue from the rejected run. The whole run was 21m41.643s
faster than the preceding 60m16.535s rejected run (about 36% wall-clock
reduction).

The run recorded six same-epoch analyzer cache hits. The persistent analyzer
cache remains empty after this Program-changing repair run, so
a second unchanged full run has not yet measured persistent-cache savings.
That is an optimization/measurement follow-up, not a correctness blocker for
committing this accepted snapshot. Exactly three archived runs are retained.

The following sections are a chronological implementation/failure log. Any
future-tense rerun checklist in that history has been superseded by the latest
accepted run above unless a later section explicitly reopens it.

## Source fixes made after the failed run

### Whole-corpus transactional export

`STDecompExport` now:

1. creates an ignored sibling `.ST.exe.export-<uuid>` directory;
2. seeds it from the preceding corpus using hard links, with copy fallback;
3. reuses fingerprints and writes replacements only in staging;
4. writes all function artifacts and root indexes;
5. promotes the complete directory with a rename, restoring the prior corpus
   if promotion fails.

An exception or cancellation therefore cannot mix old and new Program states.
The per-file writer already uses atomic replacement, so hard-linked source files
are never modified in place. Stale staging/rollback directories are ignored by
Git.

`STRecoveryPipeline` now writes an atomic `incomplete` export receipt before
calling the exporter. The regression gate replaces it with `passed` or
`failed`. Both `incomplete` and `failed` cause the next run to recover the
accepted `pre_export/` snapshot instead of blessing an interrupted/rejected
corpus. A compatibility check also recognizes the latest archived failed run
with a `pre_export/manifest.json`, so this particular old stale-`passed`
incident recovers the correct baseline automatically.

### Analyzer/applier mismatches found in the same run

- `STUtilityFunctionAnalyzer` missed `006AAC10` `MemAllocClear` because it
  required two exact rendered `REP STOSD`/`REP STOSB` spellings. Exact
  `memallcl.c` provenance plus one genuine repeated string-store zero-fill now
  proves it; optimizer tail spelling no longer causes a false negative.
- `STGlobalDataAnalyzer` proved the unique named constructor store
  `InterSystemC::InterSystemC -> 00802A28` but rejected the singleton because
  other code takes `&global`. Ordinary `T **` address-taking is now compatible
  with a dominant unambiguous constructor store of `T *`.
- `STPointerShapeAnalyzer` already allowed weak `short *`, `ushort *`, and
  `word *` baselines, but `STPointerShapeApplier` still called them concrete.
  Their replaceability rules are now synchronized. The immediate affected
  parameters are `00574920`, `00575120`, and `005751F0`; normal layout,
  ownership, conflict, and typed-call thresholds still apply.
- Pointer-shape and DArray-element analysis now retain the ordinary 30-second
  decompiler budget but use 120 seconds for bodies of at least `0x4000` bytes.
  This covers the sole current timeout, the 49-KB
  `0044EE30 STBoatC::GetMessage`, without slowing normal functions.
- `STAbiConsistencyAnalyzer` can now recognize a qword parameter copied in two
  dwords into an eight-byte owner field which is independently consumed by an
  x87 double read. This is intended to finish parameters 11 and 12 of
  `006DC050` without depending on a manual field already being named `double`.
- `STAbiConsistencyApplier` now resolves Ghidra's unsized `/undefined` return
  baseline as one-byte `undefined1` when reconstructing an otherwise unrelated
  full prototype. This fixes the observed `0074C613` conflict without
  pretending that a semantic return type has been recovered.

The remaining DArray/local-lifetime conflicts in the reports are expected
verification failures for inseparable or changed SSA merge groups. They must
not be forced into one persistent Listing type.

## Required next run

Run `STRecoveryLauncher` in Ghidra and select `full-export`. A plain `export`
would verify the exporter fix but would not apply the new allocator, singleton,
pointer-shape, and ABI evidence.

No individual paths are required:

- analyzer root: `<local-home>/st/recovery`
- proposal TSVs: `<local-home>/st/recovery/ST.exe/*.tsv`
- export root: `<local-home>/st/decomp`

Expected checks after completion:

- `utility_function_proposals.tsv`: `006AAC10` is enabled as
  `MemAllocClear`, then applied/unchanged on the fixed-point pass;
- `global_data_proposals.tsv`: `00802A28` has `type_apply=1` for
  `InterSystemC *`;
- `pointer_shape_apply_report.tsv`: `00574920`, `00575120`, and `005751F0`
  are no longer preserved merely because their old type was a weak short
  pointer;
- `abi_consistency_apply_report.tsv`: no `Missing data type: /undefined`;
- old script-owned x87 repairs (including `006DC050`) migrate to exact custom
  stack storage only when every observed double-width EBP access matches;
- `export_receipt.json`: final status is `passed`;
- `export_regression_report.tsv`: the gate actually ran and has no hard
  regressions.

Do not update a hash or delete `decomp/` if the gate rejects the result. Inspect
the report and preserve the retained accepted baseline.

## Current generated and project-file caveats

Generated `recovery/` reports and many `decomp/` function files are dirty from
the user's run. Preserve them; a successful rerun should replace the partial
corpus coherently.

The open/user Ghidra session also owns these untracked database journal files:

```text
proj/st.rep/idata/00/~0000000c.db/changeA.grf
proj/st.rep/idata/00/~0000000c.db/changeB.grf
proj/st.rep/idata/00/~0000000c.db/snapshotA.grf
proj/st.rep/idata/00/~0000000c.db/snapshotB.grf
```

Do not delete, restore, rename, or otherwise manipulate them. Never start a
second headless writer while the project is open.

## Validation performed

The source state preceding the continuation below compiled together against the
installed Ghidra 12.1.2 jars with Homebrew JDK 21. Class output was placed under
`/tmp`, never under `scripts/`. Runtime effects remained pending a Ghidra rerun.

## Address-free continuation after that validation

The following source changes were made later through the SMB-mounted repository
from a machine without Ghidra. They have passed `git diff --check`, a balanced-token scan over all 77 Java
scripts, helper-definition/duplicate-control-flow checks, and source literal
audits, but **have not been compiled or run in Ghidra yet**:

- removed `STCuratedRecoveryApplier`, `STProjectStateAudit`, and the tracked
  `curated_recovery*.tsv` inputs/reports;
- added a bootstrap migration which retires `RECOVERED_CURATED_PROPOSAL`, keeping
  a semantic leaf only when an independent debug/source/message/constructor/
  destructor tag exists;
- removed vtable owner seeds, DArray helper address sets, fixed CRT bounds, fixed
  player-record geometry, and exporter presentation exceptions tied to ST image
  addresses;
- `STUtilityFunctionAnalyzer` now discovers its helper identities from source
  provenance plus machine/decompiler behavior; recovered addresses are proposal
  output only;
- `STUtilityFunctionApplier` installs an ID-specific `RECOVERED_UTILITY_*` tag in
  addition to the generic tag. Global-record, ABI, DArray, and class-array passes
  consume that semantic identity instead of a helper address or leaf name;
- `STLibraryAnalyzer` infers the dense VC6 CRT cluster from named runtime anchors
  and a caller-qualified short tail;
- `STGlobalRecordAnalyzer` derives base/stride/count from the guarded
  `GetPlayerRaceId` machine flow plus independent total/boundary evidence. It no
  longer seeds any player field or requires `DArrayTy`/`STPlayerTempSlot` merely
  to apply the observed record geometry;
- the old `STPlayerTempSlot` bootstrap and pointer-shape address-arithmetic branch
  were removed. The installed structure is marked `[ST_VIEW_ONLY]`; only
  script-owned locals that still point to it are reset, and lifecycle then
  recognizes its direct Pointer/Array derivative chains without traversing
  through owner structures;
- the hand-written 27-byte `STControlCommand` bootstrap was also removed. An
  installed script-owned copy is marked `[ST_VIEW_ONLY]`; access and discriminator
  passes, rather than a baked field list, now own any recovered command shape;
- bootstrap signature demotion now requires an old debug/script provenance tag
  in addition to family evidence, so a coincidentally named manual signature is
  not rewritten;
- `STDArrayElementAnalyzer` reuses a generated specialization's stable identity
  but no longer copies its fields back as fresh evidence or lets an old layout
  bypass the normal access threshold;
- the pipeline no longer persists DArray element types on decompiler locals. The
  first DArray pass removes only exact script-marked legacy locals (plus obsolete
  script-owned generated-pointer hashes), while protecting USER_DEFINED and
  IMPORTED variables; later passes update descriptor/element structures only;
- fixed-point accounting cross-checks mutating report rows against the Ghidra
  Program modification counter, fingerprints proposal/apply state to detect a
  cycle immediately, permits up to 12 deep and 24 bootstrap/structural passes,
  and reruns the expensive prototype analyzer only after a real repair;
- the whole-program PointerShape, SwitchEnum, DArrayElement, PointerRole,
  DiscriminatedPayload, ControlFlowLabel, and LocalLifetime decompilation phases
  use deterministic parallel batches; SwitchEnum retries only initial timeouts;
- x87 double parameter recovery now applies CUSTOM_STORAGE at the observed x86
  stack offsets. A tag/provenance plus EBP-offset migration repairs older
  script-owned DYNAMIC_STORAGE signatures (including duplicated auto-this)
  without an address allow-list;
- `STGlobalAggregateAnalyzer` now revalidates the former player relation table
  generically from transposed byte SIB indexing, binary comparisons, and an exact
  `N*N` boundary. The structural name is `g_u8SquareMatrixN` (plus a deterministic ordinal only
  on collision); the old player-specific name is no longer seeded;
- narrow prototype recovery may override only legacy debug-tagged USER_DEFINED
  generic pointer returns when exact high-confidence evidence and an unchanged
  baseline agree; imported and concrete semantic types remain protected;
- stale-manual auditing no longer reports ordinary competing inferred class-field
  candidates as proof that a preserved concrete field is stale.

The Java source audit now finds zero embedded executable/data address literals in
`scripts/*.java`. Addresses remain in generated reports, exported identities, and
historical documentation examples, where they are observations rather than rule
inputs.

On the next `full-export`, inspect these migrations specifically:

- the curated tag count reaches zero without losing independently recovered names;
- `STPlayerRuntimeRecord` is rebuilt from observed fields only; old manual names
  such as `tempSlots`, `pgPairs`, `groups`, and `objects` are not carried forward
  merely from state;
- more generally, no installed `STPlayerRuntimeRecord` field is copied into the
  next proposal as evidence; the old structure is only a mutation baseline;
- the three existing script-owned `STPlayerTempSlot *` locals reset, then its
  array/pointer/base type family becomes removable only after use counts reach zero;
- no `ensure_control_command` proposal is produced; an existing script-owned
  `STControlCommand` becomes view-only and is preserved only while live uses remain;
- the old relation matrix is emitted as one high-confidence
  `binary_relation_matrix` row from transpose/binary/extent evidence;
- DArray specializations lacking current real field accesses become review-only
  instead of self-validating;
- the formerly adjacent non-CRT COM function is no longer tagged as MSVCRT.

## Structural fixed-point oscillation found on the next run

Run `2254999966ba...` compiled all 77 scripts successfully, then failed after
24 structural passes (67m13.639s total). Only `STDArrayElementApplier` kept
mutating. Two installed layouts alternated deterministically:

- `FSGSTy_field_1EBEElement` added/removed field `+0x10`;
- `SettMapMTy_field_1F84Element+0x6` alternated `element`/`field_0006`.

This was self-erasing presentation evidence: after a member was installed, the
next decompile hid the raw expression which had proved it. The applier now keeps
the monotonic union of fields selected on any previous pass, upgrades generic
names/types but never lets a weaker rendering erase a stronger script-owned
component, and still refuses manual/hash-diverged layouts. The analyzer does
not count installed fields as fresh evidence and cannot use them to make a weak
container eligible. Structural recovery also fingerprints all proposal/apply
TSVs and aborts a repeated state immediately. DArray pass snapshots now include
field/local/failure TSVs as well as the main proposal and apply report.

Expected next behavior: at most one upgrade pass plus one confirming pass for
these two layouts, instead of 24 passes.

## Full-export regression after the DArray convergence fix

Run `00638208cc97...` compiled all 77 scripts, completed structural recovery,
and reached export in 40m01.347s. The gate rejected four rows:

- 16 apparent typed-vtable-slot erasures;
- two `SetOrderData -> sub_00498D20` name downgrades;
- `raw_indirect_call` `2103 -> 2193` (`+90`);
- `unresolved_register_input` `766 -> 788` (`+22`).

The first and second rows mixed real and gate-level problems. The rejected
corpus under `decomp/ST.exe` showed that a prior vtable rename had removed the
still-referenced `STGroupBoatCVTable`, leaving `/STGroupBoatC+0` as `/-BAD-/`.
That caused almost the whole `+90` raw-call delta. The two physical tables at
`00790508` and `00790728` retained all typed slots under address-suffixed names,
so path/field-name comparison falsely reported type erasure. `SetOrderData` was
an intentionally retired legacy curated name, but `STTypeBootstrapApplier`
changed the name and then threw `Auto-parameter may not be modified`, leaving a
half-retired tag/provenance state.

The source now:

- treats a unanimous named-slot owner conflicting with a constructor owner as a
  semantic conflict while retaining physical `layout_apply=1`;
- migrates an owner vptr before considering old generated-type removal, refuses
  removal while datatype parents exist, and repairs only provenance-marked
  deleted `/-BAD-/` vptr components;
- keys gate vtable identity by generated physical table address plus offset and
  accepts only explicitly tagged heuristic identity retirement (including its
  terminal thunk);
- skips auto parameters during curated/signature provenance demotion and renames
  only after the signature update succeeds;
- recognizes the exact script-installed x87 prototype even if its Ghidra source
  was later promoted, enabling the duplicate-auto-this migration for `006DC050`
  and `006DBD20`;
- assigns exact two-byte custom storage to a `short` while still advancing the
  next x86 stack slot by four bytes, addressing the remaining `0074FC49` and
  `00750080` storage conflicts.

Offline validation against the rejected corpus shows zero physical vtable slot
erasures after address+offset normalization, and the installed x87 prototype
markers exactly match both affected current signatures. All 77 Java files pass
a lexical balance scan and `git diff --check`; these latest changes have not
been compiled or run because this machine has no Ghidra/JDK runtime.

Expected next `full-export` results:

- table `00790508` is physical/review-only under the constructor/slot-owner
  conflict, while `00790728` again becomes the unique semantic
  `STGroupBoatCVTable`;
- `/STGroupBoatC+0` is repaired from `/-BAD-/` to that table pointer;
- curated retirement completes without `Auto-parameter may not be modified`;
- ABI apply reports migration of the duplicate-this x87 functions and no
  two-byte storage-size conflicts;
- all four hard regression rows return to zero. The warning-only quality rows
  still require ordinary review after the gate passes.

## Next automation boundary

After a successful export, choose the next cluster from
`decomp_quality_summary.json` and `decomp_quality_issues.jsonl`. The strongest
remaining cross-cutting candidates are allocation-backed transient record
views, residual return-width artifacts, and unresolved callback/vtable
prototypes. Allocation helpers must retain neutral `void *`; any record view is
per-consumer and HighFunction-lifetime anchored.

## Suggested commit title

`fix(recovery): stabilize type lifecycle and accelerate final passes`

## Lifecycle regression and final-pass speed fix

Full-export run `78663d1d21cd...` completed all analysis/export work in
60m16.535s, then the regression gate correctly rejected one hard row:
`raw_indirect_call 2102 -> 2379 (+277)`. Function `0066ACC0` contributed
`+269`, `00668F50` contributed `+7`, `00672440` contributed `+3`, and
`00660180` improved by `-2`.

The cause was the first type-lifecycle apply pass. Its usage index keyed
signature datatypes by Java object identity and failed to recognize a managed
receiver nested under a distinct Pointer instance. It consequently removed 22
live `HiddenThis/AnonReceiver_*` structures, including
`AnonReceiver_0064A970`, even though their class namespaces and exported
function signatures still used them. The same pass also replaced six unrelated
one-byte linked-library discriminator cases with an STGroupBoat case solely
because `DataType.isEquivalent()` reported equal storage.

The source now:

- indexes live uses by managed datatype path while recursively unwrapping
  Pointer, Array, TypeDef and FunctionDefinition containers;
- treats functions owned by a HiddenThis namespace as live uses and repeats
  that check immediately before deletion;
- permits layout-equivalent replacement only with an equal discriminator
  function-address/case key, an exact same-category conflict identity, or an
  equal same-category generated-layout provenance hash;
- detects detached receiver types left behind by Ghidra datatype removal,
  recreates them through `STHiddenThisApplier`, and rebuilds the dynamic
  auto-this signature against the newly managed datatype;
- caches DiscriminatedPayload, PointerRoleRepair and Prototype analyzer
  artifacts by source/dependency/Program semantic state;
- validates/reuses current-epoch discriminator case proposals for final stack
  recovery, so that phase decompiles only machine-prefiltered callers instead
  of all discriminator families again;
- disables C rendering in LocalLifetime analysis/application because only the
  HighFunction is consumed, and omits already-correct merge groups from its
  proposal/apply queue. The rejected run carried 22,312 such settled rows in a
  5.9 MiB proposal file.

The rejected run's final DiscriminatedPayload analysis cost 128.668s despite
finding zero stack targets; that repeated family decompilation is removed. The
replacement sources subsequently passed Ghidra's on-demand compilation and the
runtime `full-export` recorded under **Latest accepted run**. Its final stack
phase took 6.034s, the lifecycle confirmation pass made zero changes, and the
export gate passed without regressions or warnings.
