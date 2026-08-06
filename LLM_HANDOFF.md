# Submarine Titans Decompilation — current LLM handoff

> The committed database checkpoint for this revision is `ghidra/ST.exe.gzf`; `proj/` is ignored local working state.

Read `AGENTS.md` first. The Ghidra database is authoritative;
`recovery/` and `decomp/` are generated, reviewable projections. Do not
hand-edit generated output to invent facts which belong in Ghidra or a recovery
script.

## Environment

- Authoritative repository path: `<local-home>/st` on the local disk. Do not use
  or inspect an SMB mirror.
- `.st-local/environment.conf` is the ignored machine profile for exact local
  tool/project paths. Use it only when `access_mode=direct` and `pwd -P` equals
  its `canonical_repo`; ignore it from every SMB or different checkout.
- Ghidra host: Ghidra 12.1.2 with Homebrew OpenJDK 21.
- Project on the Ghidra host: `<local-home>/st/proj/st.gpr`.
- Scripts on the Ghidra host: `<local-home>/st/scripts`.
- Recovery output: `<local-home>/st/recovery/ST.exe`.
- LLM corpus: `<local-home>/st/decomp/ST.exe`.
- Original executable: `bin/ST.exe` (ignored; never commit).
- Long direct macOS headless runs must use the ignored
  `.st-local/run-recovery.sh` or an equivalent `caffeinate -dims` wrapper. Two
  observed resets followed idle sleep/wake rather than a kernel panic, thermal
  shutdown, or a Java-initiated shutdown; sustained Ghidra CPU load is not a
  macOS sleep assertion.

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

The current authoritative headless export is run
`c70e28be14e413bb4affd6eeddf76d449477c66fd028c8cf9b7a7df932d0d615`.
Its receipt is `passed` with semantic hash
`3e516e69565c493f8efc3b24ab81815cf4ab4dbbadeb020a73b9584e9721d2d6`
and manifest hash
`c5ca336f0fa2d0488d8bd833b95629f8f4e7d4b7297a88c9398ef5d99e0e37bd`.
It contains 10,392 function entries, 5,712 bodies, zero failed bodies, and 2,729
typed physical-vtable slots. Both the broad export gate and the ABI gate pass;
the latter verifies all 96 class vptrs and nine fixture functions with zero
errors or warnings. The broad gate has zero hard regressions and three
stage-transition warnings. The final quality inventory has 4,165 anonymous-
shape occurrences, 18,343 undefined types, 2,248 raw pointer offsets, 1,885 raw indirect calls,
558 consumed return-width artifacts, and 472 unresolved register inputs. The
old declaration-plus-use return count was intentionally replaced by a use-only
metric; declarations are not independent ABI failures.

`STDecompExport` now emits a separate compile-readiness inventory. All 5,712
bodies have zero residual Ghidra `._offset_width_` syntax. The generated C++17
runtime makes 34,827 exact operations expressible through scalar/calling-
convention aliases, opaque `code`, `STPiece`, `STLiteralPiece`, `STField`, and
width-checked composition/carry helpers. The exporter itself is not a source
generator, but `tools/st_source_tree.py` now supplies the missing offline
assembly layer. It verifies the passed receipt/manifest and emits all 5,712
bodies as 318 C++17 translation units under `src/ST.exe`, with 1,044 bodies in
proven original paths and address-stable `st::fn_ADDRESS` identities. The full
generated declaration header passes Clang syntax checking. Full object
compilation still exposes the real remaining debt: 3,877 signatures retain
undefined semantic types, 999 global `__thiscall` functions lack a proven
owner, 773 bodies contain raw indirect calls, and 232 bodies retain unresolved
register/high values. See `docs/compile-readiness.md`,
`docs/source-tree-generation.md`, and `src/ST.exe/audit/`.

The first compile-driven source layer is implemented without mutating Ghidra.
`tools/st_compile_audit.py` verifies the generated manifest, compiles all 318
translation units independently, and writes an address-stable local queue under
ignored `.st-local/`. `tools/st_source_tree.py` materializes 2,664 exact
unnamed-byte views which statically typed bodies actually reference, including
indexed and nested pointer-member chains. It also emits 780 ordinary non-virtual
member wrappers over exact receiver-aware physical-vtable slots, preserving
readable `object->method()` syntax without synthesizing a host ABI vptr or
inheritance. A further 1,292 uniquely owned, non-virtual `__thiscall` functions
are exposed as ordinary forwarding class methods; their implementation identity
remains `st::fn_ADDRESS`. Constructors, destructors, ambiguous overloads, and
field-name collisions remain explicit source-generation audit rows. The
complete declaration header passes Clang C++17.

The source projection also separates 193 C++ type/value namespace collisions
such as the image object `FrmPanelTyVTable` and the record type of the same
name. At the 231 exact address-taking sites currently emitted, only the source-
level object identifier becomes `st_global_ADDRESS`; the Ghidra symbol and type
names remain provenance. This removes false local-declaration failures without
changing the database or object layout.

With Apple Clang and a fixed limit of 64 diagnostics per translation unit, 61
of 318 units pass and 5,588 of 5,590 retained errors map to a function address.
Against the preceding audit with the same cap, the accepted lifetime/layout
pass removes 52 diagnostics: assignment-type errors fall by 23 and call-
argument errors by 43, while newly exposed undeclared identifiers rise by nine
and miscellaneous errors by five. The current dominant clusters are assignment
types (1,472), scalar subscripting (1,138), undeclared identifiers (1,070), and
call-argument types (1,062). These are capped comparison counts, not the
uncapped total. Source identity counts are 37,351 direct-call-or-definition
rewrites and 5,712 definition rewrites.

The previously ugly call in global `__thiscall` function `00717910` now renders
its proven member load as
`STField<RecoveredSourceFamily_dibcopy *>(this, 0x28)`. The pointer depth is
correct for callee `006D2820`; the missing fact is the receiver identity. A broad
receiver-record database experiment cascaded into unrelated owners/vtables and
was rejected after 22 hard ABI regressions. No part of that Ghidra mutation was
retained.

The refresh recovers the panel factory vptr stores as
`BldBoatPanelTyVTable`, `BldObjPanelTyVTable`, `IntercomPanelTyVTable`, and
`PlayPanelTyVTable`; the former `PTR_GetMessage_*`/`undefined ***` forms are no
longer present. The `0040CDB0` cleanup chain now uses an `STGameObjC *` and
`FreeAndNull(&object->field_009F)` followed by named generated fields. A generic
interprocedural receiver rule repaired `005F0A30` from the undersized
`STBoatC *` view to `STSprGameObjC *`; an EBP-context ABI rule removed the fake
fastcall ECX/EDX parameters at `00753FD0` and `00754185`, after which
pointer-shape recovery installed their fixed-offset context records.

The former `004AE0B0` warning is fixed in the Ghidra database. The original
binary has four dword switch targets at `004AED14..004AED23`, followed
immediately by byte lookup data at `004AED24`; Ghidra had mistaken bytes
`00 01 03 03` for a fifth target `03030100`. The general
`STJumpTableBoundaryAnalyzer/Applier` proves exact computed-jump references,
consecutive in-function targets, the first non-executable following word, and
an independent indexed byte read before considering an override. Of 407
machine candidates, only two tables in the sole freshly warning function were
automatic. A confirming decompile reports zero truncation warnings; this is a
normal Ghidra finite switch override, not exporter suppression or binary repair.

The latest cross-cutting pass promotes one source family only from the
combination of a unique recovered source basename, several semantic function
names, and exact interprocedural first-parameter flow. Seven exact flows across
six destinations, including `DibPut` and `CPanelTy::PaintBRLife`, promote the
single hash-owned shape `AnonShape_006B5B10_E0D06CF1` to
`RecoveredSourceFamily_dibcopy`. Type lifecycle performs the exact one-source
identity replacement; basename or geometry equality alone still does nothing.
This accounts for the broad anonymous-shape reduction from 4,829 to 4,151.

The generated packed global record now has 223 observed fields, 106 concrete
types, and 11 exact `DArrayTy *` members. A pointer field requires both a store
from a locally typed pointer and an independent same-type consumer; the
decompiler's intermediate `(int)` cast cannot win over that pair. The analyzer
and applier reached `updated=0, unchanged=1`. The proven recursive node also has
exact `short` fields at `+0x04/+0x06` and `int` fields at `+0x40/+0x44`.

Exporter presentation now splits closed integer-only lifetimes from pointer SSA
names, removes dead but not live `code *` declarations, folds exact trailing
bulk-zero bytes, removes a redundant `(int)` only when an exact narrow integer
member is immediately converted to `double`, and fingerprints only structure
members actually rendered by the cached function. The pathing-grid product is
an `int`, recursive-node field casts render as member accesses, and the former
`CONCAT31` record-byte return is an ordinary `byte` return. The final detector
also distinguishes a genuine `.packed` member from the substring in
`g_packedRecords_*`.

Strict narrow-return recovery remains unchanged. Automatic application still
requires the same exact `AL`/`AX` definition on every callee return path and
complete caller CFG coverage with only matching narrow reads or explicit `EAX`
kills. The confirming pass found zero additional safe candidates; the remaining
1,062 artifacts must not be mass-retagged.

The exporter also normalizes exact same-base low-byte/word replacement,
runtime-stride typed DArray addresses, and interior addresses in generated
fixed-stride global record arrays. The corpus contains 697 low-piece helper
calls, 434 `DArrayAt<T>` views, and 71 `STRecordByteAddress` views. Relative to
the retained baseline, `dynamic_array_indexing` improved 318 to 76,
`flattened_global_record_array` 92 to 36, and
`packed_or_unaligned_piece` 1,402 to 1,047. These helpers assert address/bit
identity only; they do not invent a semantic field name.

`STLocalLifetimeAnalyzer` now compares recursively unwrapped equivalent
typedef/pointer types before recording conflicts. This removes the large false
`LPSTR`/`CHAR *`/`char *` cluster: proposals are 458 with 36 automatic rows and
175 conflicts, down from 605 proposals and 328 conflicts. Remaining
`int`/`uint` and `bool`/`byte` disagreements remain review-only. Geometry alone
still cannot establish cross-owner identity, and the remaining 16,278 undefined
types are an evidence-led recovery surface rather than a bulk-retagging target.

The authoritative latest `full-export` was run
`8538b1d383ad26576d5461f823403092b4baa8e1b85900d2273457d261b6e4e6`.
Its tracked accepted projection is the source of truth; ignored run archives
are disposable diagnostics and need not be retained. The run completed in
`01:02:32`, with semantic hash
`f0f858cf3aabc4032bbadce4171569b8d07d5f142fa4be7f2da906d020795e46`
and manifest hash
`c50f69731d4b65aa723f0d10b4d195aa11b1dfea6a99c2daf8b866f628c55a90`.

Ghidra's load preflight accepted all 87 Java scripts with zero build failures.
The export receipt is `passed`; the gate reports zero hard regressions, 10,392
internal functions, 5,712 exported bodies, and zero decompilation failures.
All ABI phases passed, including `accepted-refresh`; the generated raw
fixture baseline is verified, all 2,409 accepted typed vtable slots are intact,
and the broad gate reports zero hard regressions and three stage-transition
warnings. The
Program semantic hash equals the accepted receipt.

The latest layer fixes a generic pointer-arithmetic error in
`STPointerShapeAnalyzer`: decompiler `T * + n` offsets are now scaled by the
current rendered pointee width unless an integer cast proves byte arithmetic.
Corrected broad geometry remains review-only, while a closed local returned by
one call, consumed by an internal generic-pointer parameter, and used at fixed
offsets may receive a consumer-local record view. The first pass enabled four
targets and performed seven type/local operations; the confirming pass reports
`target_apply=0`, `anonymous_types=0`, and `failures=0`. The loader consumers at
`005F10D0`, `0062CCA0`, and `00630430` now read an `int field_000C` rather than
`*(int *)(local_8 + 6)`. The heterogeneous `mfAObjLoad` producer was not
specialized: its proposed neutral `byte *` ABI remains preserved behind the
existing USER_DEFINED baseline.

Exporter normalization now recognizes exact structural pointer advances in
fixed `REP MOVS` loops and exact three-term row-major grid expressions. The
accepted corpus folds the 133-byte and 608-byte record copies at `00648620` and
`006684E0`, and contains 437 `STGridAt3D` calls across 160 functions. The logic
version change intentionally recomputed all 5,712 quality/idiom analyses once,
but reused 10,387 of 10,392 Ghidra function decompilations. Relative to the
previous corpus, anonymous-shape occurrences fell by six, casted generic fields
by eight, generic field names by 32, and undefined types by 14. The export gate
passed with zero hard regressions and three improving stage-transition warnings.

The run accepted recursive linked-pointee recovery. The machine prefilter
decompiled 269 of 1,878 owner functions, found four rooted candidates and kept
three review-only. One automatic row combines two independently recovered
partial views at one exact owner field into a 76-byte recursive node with seven
nonzero fields and `Node *next` at offset zero. It reports `unchanged=1` on the
confirming pass, with zero conflicts and failures. The class-layout analyzer
now preserves a hash-owned recursive node over generic `void *` evidence; all
three later class-layout applications report `updated=0`, `unchanged=112`, and
zero generated type revisions. This prevents the former deterministic
`RecursiveNode * -> void * -> RecursiveNode *` fixed-point oscillation.

The run also accepts the generic generated-layout refinement and recursive-node
SSA-lifetime layer. The first pointer-shape pass applied four new generated
targets and updated 24 existing ones; the confirming pass reported no changes.
Its conservative exact-reinterpret rule requires a connected cluster of at
least two adjacent equal-width fields and one weak generated-field seed. Its
constant-index continuation rule requires at least three distinct absolute
members, one explicit address-of use, one positive constant index, and no
variable indexing. These rules contain no program address or ST semantic-name
allow-list.

The first local-lifetime pass applied five recursive-node groups in one
function. Address-restricted passes then converged `2 -> 1 -> 1 -> 0`, followed
by a complete confirming pass with zero changes. `STDecompExport` reused 10,296
of 10,392 function shards and 5,636 of 5,712 quality analyses. Against the
previous accepted corpus, anonymous-shape occurrences fell by 57, casted generic
fields by 129, packed/piece forms by 99, raw indirect calls by one, raw pointer
offsets by three, and undefined types by 78. The 203 additional generic field
names are the expected layout-to-semantic-naming stage transition, not lost
structure.

The three motivating witnesses are now materially typed in the accepted
corpus: `0040AE40` uses one nested record for its former
`pAVar6[1].field_0x3b` tail, `005751F0` reads `field_0000` and `field_0002`
instead of casting the parameter base, and `006DDD50` has no compounded
`undefined4 ******` pointer declarations. It uses the recovered recursive node
and `->next`. One true link cursor still needs a `Node **` view, and Ghidra emits
several generated `temp_<hash>` local names after splitting; both are residual
presentation/lifetime debt and must not be hidden by a whole-local type cast.

## Accepted checkpoint history

Commit `39097bd736` is the historical safety rollback checkpoint, not the
current repository HEAD. Current HEAD is `1f3485e8e423`; the working tree after
it contains the accepted element-scaled pointer, consumer-local loader-view,
structural-copy, and row-major grid normalization layer. Its accepted
Program/corpus is the `8538b1d3...` run above. The rejected dispatch
experiment is not present in
that Program, scripts, generated recovery output, or corpus. Its ignored run
archives, analyzer cache, semantic marker, and untracked Ghidra database
generations were quarantined outside the repository so a future launcher
cannot mistake them for current evidence.

The ABI fixture gate described below was the first post-rollback safety task
and remains mandatory. Do not put prototype, return, virtual-method, or
dispatch-interface mutations ahead of that gate.

That first queue item is now implemented in source as `STAbiRegressionGate`.
It compares every accepted typed vtable slot with the current Program (merging
physical aliases by table address),
rejects a new class-vptr to synthetic-dispatch transition, and freshly
decompiles the data-driven sentinels in `config/abi-regression-rules.tsv`.
Intentional changes require an exact baseline/candidate fingerprint pair in
`config/abi-regression-transitions.tsv`; unused transitions are warnings and
must be removed after acceptance. `STRecoveryPipeline` invokes the gate at ABI
startup and at ABI barriers before broad consumers, snapshots the exact policy
bundle into each ignored run archive, and preserves the small sentinel bodies
inside a failed export's accepted baseline. The successful run named above is
their runtime confirmation.

Runtime attempts `73c493b12b54...` and `bca1c3fbab79...` both loaded all 81
scripts with zero build failures and left the Program unchanged, but the
startup gate stopped on the same three artifact counters for `005F0A30`:
`extraout_ 0 -> 2`, `in_stack_ 0 -> 6`, and `unaff_ 0 -> 6`. The second run
confirmed `c_code=true;syntax_tree=true`, disproving the initial profile-only
hypothesis. Accepted and candidate function boundaries were identical, all
2,409 typed vtable slots and 59 class vptrs passed, and the freshly observed
Program semantic hash still matched the accepted corpus.

The actual bug was comparison across representation stages: the current body
was a fresh raw decompile while the accepted `decomp.c` had passed through
exporter normalization. Token metrics now use generated
`abi_fixture_baseline.tsv` raw counts/body hashes, bound to the accepted
manifest, Program semantic hash, rules hash, and decompiler profile. Bootstrap
or replacement is allowed only when a fresh Program fingerprint equals the
`passed` receipt; an `accepted-refresh` phase runs only after the broad export
gate passes. Do not add a reviewed transition for these false deltas. The raw
baseline has now been confirmed by a complete `full-export`.

A synthetic dispatch interface must never replace a class's physical vtable
pointer in Ghidra. The rejected experiment did so for `TLOBaseTy`; neutral
dispatch signatures then lost real stack arguments and introduced false narrow
returns, `extraout_*`, and `in_stack_*` artifacts. Treat such interfaces as
audit metadata until a representation is proven not to affect physical slot
types or decompiler ABI.

One non-semantic idempotence issue remained: `STUtilityFunctionApplier` reported
`changed=0` but raised Ghidra's volatile modification counter by repeatedly
setting identical owned comments/tags. It now compares the complete replacement
comment and checks tag membership before writing. This source-only fix compiles
with the pipeline and analyzer changes against Ghidra 12.1.2/JDK 21; it does not
require another corpus export.

## Latest accepted semantic layer

`STRecursivePointeeAnalyzer/Applier`, the generated-layout refinements in
`STPointerShapeAnalyzer`, and the recursive-node support in
`STLocalLifetimeAnalyzer/Applier` are the latest accepted P3 layer. They are
generic and contain no image-address or semantic-name
allow-list. Candidate identity is the exact generated owner datatype path plus
field offset. Automatic application requires two root loads, two self-link
traversals, two independently recovered partial generated views, at least three
nonzero fields, non-overlapping geometry, and unchanged owner/source hashes.
The applier creates a deterministic recursive node, installs `Node *next` at
offset zero, changes only the proven root field, and refreshes both layout
hashes. It preserves manual/imported, concrete, stale, COM/table-like and
geometry-only matches.

The full accepted run scanned 269 machine-prefiltered functions and produced
four rooted audit rows, only one automatic. The accepted
witness combines two partial views under
`ST3DSMAPContext+0x140` into a 76-byte node with seven nonzero fields. The first
apply reported `applied=1`; the complete fixed-point run then reported
`apply=1`/`unchanged=1`, all ABI gates passed, the broad export gate passed with
no hard regression and three stage-transition warnings, and the headless
project save succeeded. `STClassLayoutAnalyzer`
and its applier contain a generic hash-owned-recursive precedence rule plus an
applier-side stale-TSV guard, so generic pointer evidence cannot downgrade the
node on a later pass.

`STPointerShapeAnalyzer` additionally accepts two closed forms which Ghidra
otherwise leaves as raw casts. A constant-index generated tail is interpreted
as a continuation of the same record only with one fixed positive index, at
least three distinct absolute members, an address-of witness, and no variable
subscript. Exact scalar reinterpretation refines generated fields only as a
connected adjacent same-width cluster rooted in a demonstrably weak generated
member; a lone widened compiler load is audit-only. Exact-covered weak subfields
are suppressed, while overlaps and manual/named layouts remain protected.

`STLocalLifetimeAnalyzer/Applier` can carry a hash-intact recursive member type
through exact field load/store/address and same-size cast anchors. Same-typed
groups are isolated only when heterogeneous siblings would otherwise compound
the recovered node into an undefined pointer tower. The applier re-decompiles
and reattaches each proposal to the same machine anchor before reporting it as
applied. The pipeline follows only changed function addresses to convergence,
then regenerates one complete canonical report.

The dispatch/callback source changes from the preceding checkpoint compiled and
ran successfully in the latest accepted run:

- `STIndirectCallAnalyzer` emits the polymorphic interface and its tail ABI as
  `apply=0` audit rows;
- `STIndirectCallApplier` refuses old dispatch-interface, dispatch-tail, and
  obsolete hard-coded `create_base_vtable` rows even if a stale TSV enables
  them; the dead creators were removed from the applier;
- the historical accepted `STGameObjCDispatchVTable` remains installed until a
  separately gated migration can preserve useful tail evidence without a class
  vptr substitution;
- `STFunctionPointerFieldAnalyzer` retained exact observed/rejected target
  stores, reported STORE/prefilter counters, and stopped accepting bare
  `USER_DEFINED` source as ABI evidence. Runtime evidence was conclusive: 1,138
  machine candidates all came from indirect calls, there were no machine store
  candidates, no exact structure-field stores, and no trusted stores. The 258
  proposal rows were therefore call-only observations rather than callback
  candidates.

That negative result is now cheap and runtime-confirmed.
`STFunctionPointerParameterAnalyzer/Applier` handles callbacks passed as
ordinary stack parameters. It follows the complete machine chain
“exact function address (or null) at every observed direct callsite -> one
callee stack parameter -> indirect call through that parameter”. Automatic
application additionally requires at least two exact target sites, one observed
callback argument count, matching caller cleanup for cdecl calls, and a
unanimous target ABI derived from ECX use and `RET n`. Unknown arguments,
manual/imported signatures, concrete parameter types, or any ABI disagreement
remain review-only. Generated type identities use addresses derived from the
binary; the heuristic contains no ST image address or hand-authored type/name
allow-list.

Direct-call arguments are reconstructed with a bounded backward CFG proof, not
a same-basic-block `PUSH` counter. This is necessary for VC6 code which
pre-pushes an outer callback argument, calls a helper, performs partial/combined
stack cleanup, and only then pushes the remaining outer arguments. The cdecl
cleanup proof likewise follows later direct calls and their machine `RET n`
until the observed callback stack depth is exactly balanced.

The accepted corpus contains a concrete runtime-independent witness for review:
`004F3540 CPanelTy::PaintBut` calls through its generic fifth stack parameter
with three pushed words, while 15 direct calls through thunk `004022D9` pass
exact callback thunks such as `00402BE4 -> 0052A3E0`. The caller pre-pushes that
callback before a cdecl text helper and removes only the helper's two words
before pushing the other four outer arguments. The callback targets use cdecl
`RET 0`; their existing one-parameter Ghidra signatures therefore must not be
blindly copied into the three-word callback definition. This witness motivated
the generic CFG/stack proof but is not present as a Java address exception.

The pair runs after the broad structural fixed point and before callback
fields/general indirect calls, then participates in final export indirect-ABI
stabilization. It is cached by semantic Program/source/output hashes. Run
`85fe7d...` compiled and executed it: 5,712 functions and 42,453 direct calls
were scanned, 25 callback parameters were reported, all 67 backward-CFG
callsite reconstructions completed, and the broad export gate passed.

Run `7f9676d...` confirms the symmetric generic-type fix. Five rows have
complete coverage, sufficient exact target sites, one machine ABI, a
replaceable generic parameter, and no manual/imported baseline. They were
applied once and the confirming run reports `unchanged=5`, `conflicts=0`; the
other 20 rows remain review-only. The accepted corpus improves
`raw_indirect_call` by seven and `undefined_type` by five with every ABI gate
green.

The pipeline drains headless auto-analysis with synchronous
`startAnalysis(..., false)`: Ghidra 12.1.2's headless `waitForAnalysis()` tries
to save analyzer timing data outside a Program transaction after the actual
queue has completed. GUI mode retains `waitForAnalysis()`. If an applier reports
no mutating row but an idempotent/rolled-back row transaction advances only the
volatile modification number, current analyzer stamps are rebased without
relaxing source/dependency/artifact hashes. The warm run exercised this path
and avoided duplicate heavy decompilation.

The following sections are a chronological implementation/failure log. Any
future-tense rerun checklist in that history has been superseded by the latest
accepted run above unless a later section explicitly reopens it.

## Historical rejected run and then-pending source changes

The latest attempted `full-export` is archived as
`4c895a48ac0d63b17166c492578bad6adf808bb0f7cf8efe50e3303e05e9f549`.
It ran for 3,164.747 seconds (`00:52:44` rounded for console display), changed
the Program modification counter from `3` to `415`, exported all 5,712 bodies
without a decompilation failure, and was correctly rejected by one hard quality
regression: `return_width_artifact 1078 -> 1079`, isolated to function
`006DC050`. Other guarded quality counters improved overall, including
`undefined_type -65` and `raw_pointer_offset -47`.

The regression is an x87 stack-survivor presentation artifact, not a widened
return ABI. The exact machine sequence saves a lower x87 value with non-popping
`FST`, calls `__ftol` on the top value, then multiplies a newly loaded integer by
`ST1` and stores it to another member. A generic exporter proof now substitutes
the exact saved member for the single `extraout_ST0` occurrence only when this
entire sequence and both receiver offsets agree.

The same source set adds:

- stable function-body analysis-cache identity, so unrelated exporter I/O or
  manifest edits no longer invalidate every body audit;
- a previous-verification rejection identity in `STLocalLifetimeApplier`, which
  prevents apply/rollback churn from advancing Ghidra's modification counter on
  every unchanged run;
- `STFunctionPointerFieldAnalyzer/Applier` for exact stored-address → generated
  field → indirect-call chains with one trusted target ABI;
- `STInlineAggregateAnalyzer`, consumed by the class-layout pair, for complete
  typed `REP MOVS` nested members and exact `REP STOS` span evidence;
- fixed-array extent inference from a zero span only when independent indexed
  stride evidence agrees;
- C++ `nullptr` presentation for typed `(T *)0x0` spellings;
- wall-clock timestamp removal from committed manifests and run metadata, while
  the pipeline prints total elapsed time as `HH:MM:SS` in a `finally` block.

These pending scripts compile against Ghidra 12.1.2/JDK 21, but their runtime
proposal yield and the repaired export gate still require the next local
`full-export` run.

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

Run `STRecoveryLauncher` in Ghidra and select `full-export`. Use only the
authoritative paths already inferred by the launcher:

No individual paths are required:

- analyzer root: `<local-home>/st/recovery`
- proposal TSVs: `<local-home>/st/recovery/ST.exe/*.tsv`
- export root: `<local-home>/st/decomp`

Expected checks after completion:

- build preflight: all 83 Java scripts load with zero failures;
- `function_pointer_parameter_summary.txt`: candidate, exact-target, unknown,
  proof-stage, baseline-eligibility, proposal, and auto-apply counts are
  plausible. With the unchanged accepted Program, five rows should become
  automatic; inspect per-row caller-cleanup evidence in the proposal TSV;
- `function_pointer_parameter_proposals.tsv`: every `apply=1` row has complete
  direct-callsite coverage, at least two exact target sites, one argument count,
  and one machine ABI;
- `function_pointer_parameter_apply_report.tsv`: no conflicts; the first pass
  installs the five proven definitions and a confirming pass reports them as
  `unchanged` with the remaining rows review-only;
- `indirect_call_proposals.tsv`: dispatch interface/tail rows are `apply=0`
  audit rows;
- `indirect_call_apply_report.tsv`: no dispatch view or synthetic tail is
  applied; an intentionally replayed old proposal would be `preserved`;
- `function_pointer_field_summary.txt`: machine store candidates, p-code STORE
  operations, exact field stores, and trusted field stores are reported;
- `function_pointer_field_proposals.tsv`: observed and rejected stores retain
  their exact evidence and reason;
- Program semantic state is expected to change only through those independently
  proven callback parameters;
- `export_receipt.json`: final status is `passed`;
- all ABI barrier summaries and `export_regression_report.tsv`: no errors or
  hard regressions.

Do not update a hash or delete `decomp/` if the gate rejects the result. Inspect
the report and preserve the retained accepted baseline.

## Current generated and project-file caveats

Generated `recovery/` reports and `decomp/` files belong to the successful
accepted run. Preserve unrelated changes; the next successful export replaces
the corpus transactionally.

Do not delete, restore, rename, or otherwise manipulate live Ghidra journal
files. Never start a second headless writer while the project is open.

## Validation performed

The dispatch guard and optimized callback-field pass compiled and completed
against Ghidra 12.1.2/JDK 21 during run `c67bb0...`. The function-pointer-
parameter pair and scheduler integration compiled and completed during accepted
run `85fe7d...`; only the corrected generic-undefined predicate and the added
summary counters remain pending runtime validation.

## Historical address-free continuation after that validation

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

Deterministic source/declaration assembly is implemented. All 5,712 bodies now
belong to standalone generated translation units, and ownerless `__thiscall`
uses an explicit address-stable free-function ABI rather than an invented
class. The next boundary is compiler-diagnostic reduction: materialize exact
anonymous `field_0x...` views, keep pointer/scalar word roles distinct, lower
only proven virtual member sugar, and repair weak prototypes at their Ghidra
source.

Database-level recovery should then prioritize 1,885 raw indirect calls in 773
bodies, 558 consumed return-width artifacts in 138 bodies, and 472 unresolved
incoming-register uses in 132 bodies. The 18,595 undefined spellings need to be
split by role before ranking; a parameter/return boundary is more valuable than
an isolated local. Generic field names remain a later semantic layer and must
not drive geometry-only merging. A true `Node **` cursor which shares one
inseparable HighFunction group with `Node *` remains presentation debt until a
distinct address-stable lifetime or an exact API boundary proves it.

## Historical suggested commit title

`feat(recovery): refine generated layouts and recursive local lifetimes`

## Callee-cleaned stack-arity recovery

A standalone headless fixed-point pass added a general
`machine_stack_arity_expansion` rule to `STAbiConsistencyAnalyzer`. It does not
special-case a class, function, or address. Automatic expansion requires a
non-manual 32-bit `__thiscall`/`__stdcall` function, one unanimous positive
`RET n`, a current signature shorter than that purge, complete reads of every
incoming byte before any overlapping listing write, and at least one newly
exposed exact x87 double slot. Caller decompilation is deliberately excluded as
circular evidence. A dword loaded once and dereferenced at two or more distinct
`FLOAT PTR` offsets becomes `float *`; other new dwords remain generic.

Two proposals applied and the confirming pass emitted zero proposals:

- `006E25D0`: 4 declared bytes versus `RET 0x24`; recovered `int *`, `float *`,
  three `double` arguments, and a final dword flag;
- `0074FE47`: 4 declared bytes versus `RET 0x0c`; recovered one trailing
  `double`.

The fresh export reused 10,369 of 10,392 function entries and 5,690 of 5,712
body analyses. In `006DDD50`, six formerly identical-looking calls now expose
their distinct floating arguments, proving that the old rendering was an ABI
projection failure rather than recursion or compiler inlining. The standalone
export regression gate passed with zero hard errors; receipt manifest is
`2a5edcbb62e38bdf8254bebac41b9247613daa3a658e2e7bbd10903597b48594`.

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

## Local-lifetime and generated-layout convergence

The interrupted compiler-debt work completed and is part of the current
accepted run. `STLocalLifetimeAnalyzer` no longer treats an ordinary
symbol-less or local-to-local nominal `typed_copy` as independent evidence;
only exact parameter/global/call anchors or the same hash-intact recursive-node
identity may seed that path. `STLocalLifetimeApplier` gives split merge groups
deterministic collision-free database names and verifies the exact anchor after
a fresh decompile. The real mutation staircase applied 527, then seven, then
zero lifetimes; the final whole-program pass reports 98 already correct, 91
preserved fresh-decompile rejections, three genuine conflicts, and no mutation.

`STClassLayoutAnalyzer/Applier` now hashes the installed `StructureDB` after
Ghidra canonicalization. Legacy script-owned layouts whose old transient hash
diverged are handled by `repair_mode=surgical`: only an exact component still
carrying the class-layout marker and matching its recorded baseline can change;
unrelated fields are retained and missing target types are rejected before any
partial update. This safely refined five `CPanelTy` and nine `HelpPanelTy`
fields. The confirming pass reports 110 unchanged applicable classes, zero
updates, and zero conflicts. `STPrototypeAnalyzer` also refuses lateral
replacement of recovered source-family pointer types.

The full pipeline took `01:07:19`. It additionally applied four switch-enum and
four pointer-shape refinements, then converged. Export recompiled 196 of 5,712
bodies and reused the other 5,516 quality analyses; the receipt has zero hard
regressions and three nonblocking stage-transition warnings. The main
infrastructure debt is now dependency-aware analyzer caching: the current
semantic epoch key is deliberately safe but too coarse, so a small structural
change still reruns several broad decompiler consumers which could instead key
on their actual datatype/function dependencies.
