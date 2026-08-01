# Submarine Titans Decompilation — current LLM handoff

> The committed database checkpoint for this revision is `ghidra/ST.exe.gzf`; `proj/` is ignored local working state.

Read `AGENTS.md` first. The Ghidra database is authoritative;
`recovery/` and `decomp/` are generated, reviewable projections. Do not
hand-edit generated output to invent facts which belong in Ghidra or a recovery
script.

## Environment

- Repository: `<local-home>/st` on the local filesystem. Do not use SMB.
- Ghidra: 12.1.2
- Java: Homebrew OpenJDK 21
- Project: `<local-home>/st/proj/st.gpr`
- Scripts: `<local-home>/st/scripts`
- Recovery output: `<local-home>/st/recovery/ST.exe`
- LLM corpus: `<local-home>/st/decomp/ST.exe`
- Original executable: `<local-home>/st/bin/ST.exe` (ignored; never commit)

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

## Latest run and exact failure

The latest `full-export` completed all recovery and fixed-point stages, recorded
semantic Program hash
`4a7d56045dae0f7f5bee2cddf2ce091846906b0ffde853a91e74f17d6617746d`,
then failed at step 250 in `STDecompExport`:

```text
NullPointerException: Cannot invoke "java.lang.Long.longValue()"
STDecompExport.unsignedLiteral
STDecompExport.pointerAdvance
STDecompExport.normalizeBulkCopyLoops
```

The cause was Java conditional-expression unboxing: a non-literal symbolic
byte-count expression selected a `null` `Long` branch and was implicitly
unboxed. `unsignedLiteral` now uses explicit branches and returns `null`
normally for identifiers/arithmetic expressions.

This run used the old direct-to-destination exporter. Consequently,
`decomp/ST.exe/functions/` is partly refreshed while the root `manifest.json`,
indexes, receipt, and regression report still describe the preceding completed
export. In particular, the currently visible old `passed` receipt is not
evidence that the latest attempt passed. `pipeline_bootstrap.log` is the
authority for this interrupted run.

The last completed central snapshot contains:

- 10,673 Program functions, including externals;
- 10,392 exported internal functions;
- 5,712 bodies;
- 854 library functions;
- 3,826 thunks;
- 1,149 source-provenance functions;
- 180 candidate vtables;
- 145 recovered class layouts;
- 260 message IDs.

Its broad quality audit reports 5,070 functions with 14,059 issue records,
including 3,031 raw pointer offsets in 1,167 functions, 2,103 raw indirect calls
in 835, 1,078 return-width artifacts in 147, and 18,054 `undefined*`
occurrences in 3,647. These are overlapping presentation/type-debt measures.

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

After the rerun and a passing regression gate:

`refactor(recovery): remove seeded heuristics and parallelize fixed points`
