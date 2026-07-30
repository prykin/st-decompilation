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
- `006DC050`: additional qword-to-double repairs appear only if the new
  independent field-consumer proof is present;
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

All scripts compile together against the installed Ghidra 12.1.2 jars with
Homebrew JDK 21. Class output is placed under `/tmp`, never under `scripts/`.
`git diff --check` passes. Runtime effects remain pending the required Ghidra
rerun.

## Next automation boundary

After a successful export, choose the next cluster from
`decomp_quality_summary.json` and `decomp_quality_issues.jsonl`. The strongest
remaining cross-cutting candidates are allocation-backed transient record
views, residual return-width artifacts, and unresolved callback/vtable
prototypes. Allocation helpers must retain neutral `void *`; any record view is
per-consumer and HighFunction-lifetime anchored.

## Suggested commit title

After the rerun and a passing regression gate:

`recovery: harden transactional export and close inference gaps`
