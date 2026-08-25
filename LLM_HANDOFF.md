# Submarine Titans Decompilation — current LLM handoff

> The committed database checkpoint for this revision is `ghidra/ST.exe.gzf`; `proj/` is ignored local working state.

Read `AGENTS.md` first. The Ghidra database is authoritative;
`recovery/` and `decomp/` are generated, reviewable projections. Do not
hand-edit generated output to invent facts which belong in Ghidra or a recovery
script.

## Environment

- Source synchronization is Git/LFS through `origin`; never use or inspect a
  network mirror. Treat the current physical Git checkout as `<repo>` and do
  not record its host path in tracked output.
- The preferred runner is `docker/run.sh`. Compose supplies pinned Ghidra
  12.1.2, JDK 21, Python, Clang, and Git LFS. The checkout is `/workspace` in
  the container and `.git` is mounted read-only.
- Root `.env` is the ignored machine profile. `.st-local/` contains ignored
  outer logs, compiler output, and a credential-free Docker CLI directory.
- The verified tracked database checkpoint is `ghidra/ST.exe.gzf`; the expanded
  working project `proj/st.gpr` is local and ignored. A fresh checkout runs
  `docker/run.sh project-hydrate` before `doctor`, `build-scripts`, and
  `headless-smoke`. Recovery output is `recovery/ST.exe` and the LLM corpus is
  `decomp/ST.exe`.
- `docker/run.sh snapshot` writes an ignored hash-named packed Ghidra Program;
  `snapshot-verify` imports it into a temporary read-only project and verifies
  the exact semantic fingerprint without changing `proj/st.rep`.
  `snapshot-publish` requires a matching passed export and updates the
  deterministic Git/LFS checkpoint only when Program semantics changed.
- Original executable: `bin/ST.exe` (ignored; never commit).
- A direct macOS Ghidra installation is only an optional fallback. Its ignored
  `.st-local/environment.conf` is valid only for the checkout that created it;
  long host-side runs still require a sleep assertion.

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

## Current authoritative state

The current accepted headless export is run
`89c48d5b05be9274a13a86546a5d4fbb19d9deb98c7b1d9d03baba4fa13fdfa9`.
Its receipt is `passed` with Program semantic hash
`9c3445c47a8b6a3cf5a218508fd9fba37d7dedb7776deb47910d21d2c749cdf2`
and corpus manifest hash
`a5e5ca04d8645af37131107065f51ec0a00d01a3ee43317b61eb2b2640831a5e`.
The manifest binds portable `program.json` metadata as
`3bb8a76833b385eab3616325d3bd622ddaea5741bd8c60a99eb35c483ad7d761`.
The manifest binds `pseudocode_runtime.h` as
`483d0740a1b332108dd6f52935a8cbf55c9c0e7c07424470a7dc93993a3840e4`.
Obtain the current repository revision and worktree status from Git; do not
embed a soon-stale commit identifier in this handoff.

The accepted corpus contains 10,407 function records, 5,555 bodies, zero failed
bodies, and 3,192 typed physical-vtable slots. The export and ABI gates both
pass with zero errors; the export has two non-blocking stage-transition
warnings for fewer generic data names and more exposed generated field names.
The accepted export took `00:22:03`; this is an elapsed diagnostic, not a
wall-clock timestamp. The current indirect-callsite pass retains 463 automatic
proposals and reports all 463 unchanged on confirmation.

The canonical Git/LFS Program checkpoint is the deterministic normalized
`ghidra/ST.exe.gzf`: 28,417,522 bytes with packed SHA-256
`4de0aad8d6e613049a065dbe5de960cb0b955202e57db86b9c7c6211354b5c14`.
Its normalization is
`zip-dos-time-1980-01-01+private-metadata-v5`: ZIP time, database revision
times, database owners, and absolute workstation paths are removed before the
LFS hash is calculated. Two strict packs of the live ignored project were
byte-identical, and a fresh temporary-project import restored the exact
semantic hash above. The expanded `proj/` database remains ignored local
working state.

The replacement Git history carries the canonical GPLv3 `LICENSE` and an LFS
packed Program checkpoint from its root commit onward; no expanded `proj/`
database is reachable. A whole-history audit covers Git paths and blobs,
non-Ghidra LFS payloads, and every inflated GZF payload. Concrete workstation
paths, database owner identities, database revision times, and wall-clock data
in log-like artifacts are forbidden. Commit author dates remain intentional
Git metadata and committer identity/date must exactly match the author.

The current quality inventory contains 3,635 anonymous-shape occurrences,
15,703 undefined types, 3,257 casts over generic fields, 1,771 raw pointer
offsets, 1,455 raw indirect calls, 1,383 canonical casted call results, 291
return-width artifacts, 459 residual stack-slot-reuse occurrences, and 407
unresolved register inputs. The counts overlap and are occurrences across all
exported `functions/**/decomp.c`, not independent recovery facts. In total,
4,924 of 5,555 bodies have at least one quality row.

`tools/st_source_tree.py` emits all 5,555 bodies as 329 C++17 translation units,
with 1,044 bodies under proven original paths and address-stable
`st::fn_ADDRESS` implementations. It generates 1,146 physical-vtable member
wrappers, 1,320 uniquely owned non-virtual source methods, 38 exact indirect
member wrappers, and 2,295 exact unnamed field views. The deterministic source
audit contains 12,989 rows. The strict generated-source readability profile
contains 4,815 generic undefined declarations, 868 pointer-boundary casts,
1,455 raw code calls, 571 `unaff`/`extraout` occurrences, 38 undefined static
casts, and three residual duplicated-vtable calls.

The current fixed Docker Clang audit uses C++17, MS extensions, an ILP32 target,
and a limit of 64 errors per translation unit. It passes 275 of 329 units and
retains 193 errors, all mapped to stable function addresses; no translation
unit reaches the cap. The tracked deterministic source manifest is
`b25555e94907596aaeebd0476cbc03dd4700766f2d0661aaac6dc13b2c9c7e9f`.
`config/source-compile-regression-baseline.json` binds this accepted compiler
state and has SHA-256
`b9f8e86f012dd4278f826d2eb491d56cd312881c9635b0e81f6d87b417dcb3ca`.
The ratchet passes with zero regressions; raw compiler output remains ignored
under `.st-local/`.

Q-056 is complete. The source generator preserves variadic physical vtable
prefixes with template forwarding, applies fixed physical member boundaries,
materializes exact output/promoted stack lifetimes, resolves exact address-valued
functions and globals, gives CPUID/opaque High values explicit boundaries, and
emits exact `STMessageArg` facets. The former 63-call variadic-wrapper cluster,
all undeclared identifiers, and all unaddressed template errors are closed.
Eleven call-arity errors remain at ten stable addresses and belong to ABI
recovery, not to the removed wrapper-family defect.

## Ordered next work

The current work is inside `Q-058`; `Q-057` has materially reduced compiler
debt but its strict zero-family completion criteria are not yet met. Continue
with the items below; their full definitions and completion criteria are in
`docs/recovery-task-queue.md`.

1. `Q-057` — separate pointer, scalar, floating, DArray, stack-output, and
   post-call SSA lifetimes; close return ABI/value-domain contradictions from
   machine and call-boundary evidence. Never solve these with whole-local casts.
2. `Q-058` — recover remaining callable ownership: physical vtables, callback
   fields/parameters, function tables, library callbacks, and ownerless
   `__thiscall` families. Shared physical ABI wins; address-local overrides
   remain the last resort.
3. `Q-059` — consolidate pointer layouts, anonymous records, arrays, global
   aggregates, unclaimed executable ranges, and only then semantic names and CFG
   presentation. Generic names are review debt, not permission to invent names.

The intended dependency order is source-boundary correctness -> lifetime/ABI ->
callable ownership -> aggregate/semantic consolidation. Run analyzer-only
review, one apply pass, one confirming pass, ABI/export gates, source generation,
and the fixed compiler audit for every queue item.

## Historical pre-compiler checkpoints

The following paragraphs retain the evidence trail from earlier accepted
checkpoints. Their embedded uses of “latest” describe that checkpoint, not the
authoritative run summarized at the top of this file.

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

The then-authoritative `full-export` was run
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

## Historical accepted semantic layer

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

- analyzer root: `<repo>/recovery`
- proposal TSVs: `<repo>/recovery/ST.exe/*.tsv`
- export root: `<repo>/decomp`

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

The following source changes were made later through the former network-mounted workflow
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

## Historical automation boundary

This section records the boundary before the current call-boundary/lifetime
work; use **Latest accepted run** above for current counts. Deterministic
source/declaration assembly is implemented. All 5,720 bodies now
belong to standalone generated translation units, and ownerless `__thiscall`
uses an explicit address-stable free-function ABI rather than an invented
class. The next boundary is compiler-diagnostic reduction: materialize exact
anonymous `field_0x...` views, keep pointer/scalar word roles distinct, lower
only proven virtual member sugar, and repair weak prototypes at their Ghidra
source.

Database-level recovery should then prioritize 1,888 raw indirect calls in 775
bodies, 292 return-width artifacts in 103 bodies, and 474 unresolved
incoming-register uses in 133 bodies. The 18,286 undefined spellings need to be
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

## Exact global declarations and character-storage recovery

The latest compiler-driven fixed point is accepted. `tools/st_source_tree.py`
resolves each global's exported display name back to an exact datatype path and
emits the real declarator, including arrays. It now additionally repairs 145
invalid address-coded Ghidra global spellings by exact address, exposes 78
address-taken nonlocal labels as opaque `st_image_ADDRESS` declarations,
selects 17 otherwise ambiguous direct callees by their unique exported arity,
and gives 40 exporter-tagged stack-slot lifetimes a lexically safe `auto`
declaration. Eight direct-call ambiguities and 15 unsafe lifetime scopes remain
explicit audit rows. No semantic type or image-specific allow-list is involved.

`STGlobalDataAnalyzer` now proves the inlined C-string scan over the complete
forward machine CFG. From an exact `MOV EDI,<global>`, every path must reach
`SCASB` with AL proven zero before a call, exit, backward edge, or EDI clobber.
This catches switch cases which jump to a common scan tail and applied 48 new
character-storage facts on the first pass; the confirming pass has zero enabled
rows. Printable bytes alone remain insufficient evidence.

The exporter migrated four cached scalar-lifetime expressions damaged by an
older unbalanced-parenthesis rewrite. One callback at `0064A970` had also been
misclassified as multiplication, so the exporter discarded exactly that
exporter-owned cached body and freshly decompiled it. The honest raw indirect
call remains visible and catalogued. A one-time function-analysis schema
transition made the resulting `+1` audit delta explicit; the confirming export
passes with zero warnings. The same cache guard validates every generated
`DArrayAt<T>` arity. It refreshed `005D1380`, where the former normalizer had
captured an assignment embedded in a `while` condition through the next
semicolon; alias recovery now requires a standalone assignment statement.
That removed the corpus's final syntax error while retaining the unresolved
runtime-stride access as honest audit debt. `CONCAT`/subpiece/carry compatibility operations are
now inline C++ templates, so template commas no longer become preprocessor
arity failures.

Latest accepted state:

- run `51989204f2f3f306c556cf4ef551f67584b92210595ac8c502cc353529213d5b`;
- semantic hash `b5ccc04d4b3302db3a4dfdc519371fb1e3feefb6d21c7a3e8d4a2f371dec5ed4`;
- corpus manifest `6847961dcc13a9c6d104a63a7f88383ba13815fa70cd98c5267d4c4966029ce3`;
- 10,400 function records, 5,720 bodies, zero failed bodies, 2,737 typed vtable slots;
- export and ABI gates have zero errors and warnings;
- fully warmed `full-export` duration `00:21:24`, with 10,400/10,400 bodies and
  5,720/5,720 function-quality analyses reused;
- 64-error-per-TU compiler audit: 178/318 pass, 2,213 errors, 2,196 mapped to an
  address, zero syntax errors.

The general call-boundary/lifetime layer reduced assignment diagnostics from
1,426 to 72 and call-argument diagnostics from 1,226 to zero. The next broad
compiler queues are 888 undeclared identifiers, 354 pointer-indirection errors,
261 non-callable values, and 146 invalid operands. Prefer address-stable Ghidra
recovery where machine evidence exists; exact source-boundary repairs remain
limited to representationally equivalent pointer/scalar crossings. The 1,853
raw indirect calls still require callback/vtable ABI evidence.

## Factory constructors, copied subfields, and physical-vtable aliases

The latest accepted export supersedes the state above. `STConstructorAnalyzer`
now follows a concrete factory allocation result into ECX and through a terminal
JMP/thunk only when the allocation extent exactly matches the returned class and
no strong vtable owner disagrees. This corrected `004D0FC0` from a contaminating
`STGroupBoatC` method to `TLOEmbryoTy::TLOEmbryoTy` and recovered six constructors
without address-specific rules.

`STClassLayoutAnalyzer` transfers only width/offset geometry for independently
observed subfields contained in an exact machine-word field copy. Additions are
staged from a snapshot, so copies cannot bootstrap a cyclic layout. A complete
two-short partition may replace a dword transport field, while sliding overlaps
remain review-only union evidence. The converged corpus has 100 transferred copy
views and 84 partitioned machine words. In `STGroupBoatC::Recharge`, the former
`*(undefined2 *)((int)&field_019D + 2)` now renders as `field_019F`, and the copied
destination renders as four named-width fields. `STGroupBoatC::SetMine` similarly
recovers `field_0182/0184` and `field_02B3/02B5`; the remaining overlapping dwords
at `0x2B7` and `0x2B9` are honest packed-union debt.

Vtable ownership refinement temporarily left both `PanelTyVTable` and
`HelpPanelTyVTable` describing physical address `0079AC48`. The applier now treats
generated same-address types as aliases and carries a unanimous independently
recovered slot ABI across them. Indirect-call family collection uses exact raw and
resolved targets and automation-owned datatype category provenance; weak structural
typedefs no longer veto a recovered family. The ABI gate passes with zero errors and
warnings after accepting the already-established `PrividerTy::GetMessage(STMessage *)`
slot and removing its exact one-run transition.

Current accepted state:

- run `1863ef85371fdeb46c8c2424a305c5daf0a7e4789f076575b85c503a06eed6f6`;
- semantic hash `88a98ae17b5391a8acbe0b639320d2420cf8e114634b646ef87ad8764a67dfbc`;
- corpus manifest `5973cf7554507fd5fcdeab791a5fdb09d17626142aeae84ded9f769f4df09dc9`;
- 10,400 function records, 5,720 bodies, zero failed bodies, 2,737 typed vtable slots;
- export gate: zero hard regressions, four nonblocking quality warnings;
- post-acceptance ABI gate: zero errors and zero warnings;
- core duration `00:08:47`; export duration `00:12:29` with 9,707/10,400 function
  records reused without decompilation and 5,046/5,720 quality analyses reused.

## Fixed class arrays and exact receiver-spill lifetimes

The latest accepted export supersedes the state above. `STClassArrayAnalyzer`
now proves fixed inline arrays embedded in generated UI classes, and
`STClassLayoutAnalyzer` projects exact owner-field evidence into the proven
element record instead of leaving every indexed member as a cast. The accepted
pass recovered 13-element records with stride `0x1fb` in ten related classes;
the rule is geometric and does not contain their names or addresses.

`STLocalLifetimeAnalyzer/Applier` also handles an MSVC SEH/setjmp pattern which
spills auto-`this` through a persistent local carrying a shorter base-class
view. The value must trace to the exact unadjusted receiver through only
same-size neutral p-code, and a downstream exact named member must require the
owner layout. Fresh-decompile attachment is mandatory. Eighteen such receiver
aliases were accepted across independent classes; two unstable candidates were
rejected and rolled back. In `STTorpC::GetMessage` (`006406D0`), for example,
`local_c8` is now `STTorpC *`, so offsets `0x24b` through `0x255` render as
direct short fields rather than `*(short *)&base->field_0x...`.

Current accepted state:

- semantic hash `b7dd4d6ef688a830446a79168662d872cc5c151f0c0f2d715f8d9ca7f83d4072`;
- corpus manifest `dfff1b32e2d619a4215ad1ce246fb214c381f346674e530c240b410ac02a453f`;
- 10,400 function records, 5,720 bodies, zero failed bodies, 2,737 typed vtable slots;
- export gate: zero hard regressions and six nonblocking quality warnings;
- receiver/lifetime changes reduced `casted_generic_field` by 317,
  `undefined_type` by 34, and `anonymous_shape_type` by two;
- export reused 10,368 of 10,400 function records and regenerated only the 32
  affected bodies. The small `raw_pointer_offset` increase is confined mainly
  to newly exposed packet-buffer arithmetic and remains explicit review debt.

## Output stack lifetimes, comparison states, and biased coordinate division

The latest accepted export supersedes the state above. A review of
`STRubbishC::GetMessage` exposed three repository-wide compiler/decompiler
patterns rather than address-specific mistakes.

`STClassLayoutAnalyzer` now keeps a full-width scalar field when all competing
evidence is a contained low-offset scalar view. This recovered
`STRubbishC+0x1D5/+0x1D9/+0x1DD` as signed 32-bit fields while retaining their
intentional low-short consumers. A complete independently accessed narrow
partition still outranks a transport word, and overlapping/partial evidence
remains review-only.

`STPrototypeAnalyzer` now models a pointer to an incoming EBP slot as a new
post-call lifetime when the callee writes the complete pointee on every return
path. This preserved the entry message ABI at `0060EA30`, but recovered the
later scalar size passed to `STPlaySystemC::SaveObjData`. It also accepts an
exact full-EAX pointer boundary return when every return is fed by a trusted
pointer-producing call. Consequently `0062F940` returns `byte *`, its caller's
size local is `uint`, and `SaveObjData` has a scalar fourth argument without an
anonymous pointer-shaped contamination.

`STSwitchEnumAnalyzer` now supplements switch domains with exact machine
comparison/write domains on generated scalar class fields. It accepts direct
immediate comparisons, bounded load/compare def-use, and contiguous
`MOV field -> DEC/SUB positive immediate -> JZ/JNZ` equality chains. A field
write through a register is admitted only after a bounded exact constant
definition (`MOV`, self-`XOR/SUB`, `AND 0`, or `OR -1`). The current proposal
set contains 25 independent comparison-domain rows; the staged updates applied
without conflicts. `STRubbishC+0x1FA` is now the generated three-value
`STRubbishC_field_01FAState` (`CASE_0..CASE_2`).

Finally, `STDecompExport` folds a complete two-branch MSVC signed coordinate
division idiom to `STBiasedDiv16(value, 201|200)`. Both branches and the exact
magic/divisor relation are required; the helper preserves the original
16-bit quotient and negative-value bias rather than pretending it is ordinary
floor division. This reduced raw `0x28c1979`/`0x51eb851f` multiplier
occurrences from 511 to 219 and produced 369 readable helper calls. Remaining
occurrences primarily use unproven alias values or split the quotient/result
between different SSA lifetimes; eight are unrelated negative-multiplier scale
calculations and must not be folded by constant alone.

Current accepted state:

- run `c0b307d56a91b1452911f22fbeef16452b1f47b4ca840619d8f08995d3e89b25`;
- semantic hash `76982f60fdd65a328a929e0995e61dde20d94ba44feead0fd812518e0c55c32d`;
- corpus manifest `f3e435c54509e60165fb935a02a57084895dddc7b0c68cc550adfdd7fa7ee26c`;
- 10,400 function records, 5,720 bodies, zero failed bodies and 2,737 typed
  physical-vtable slots;
- export and ABI gates: zero errors and zero warnings;
- quality deltas across the full recovery included `anonymous_shape_type -23`,
  `casted_generic_field -64`, and `undefined_type -29`; the final incremental
  export introduced no regression;
- the full recovery/export which established the new facts took `01:25:41`;
  the final warmed export took `00:02:48` and reused all 10,400 function bodies.

## Source-bracketed static library helpers

The latest accepted export supersedes the state above. `0075FA00` exposed a
classification gap: it contains a four-stack-argument call through slot `+8`
of an IJG JPEG function table, but the generic raw-call hint described it as a
possible `__thiscall` vtable call. The function has no direct source-string
reference, yet it lies between the nearest exact `jquant1.c` anchors and all of
its callers belong to that same closed object-file interval.

`STLibraryAnalyzer` now admits this pattern generically. A helper inherits
library ownership only when the nearest exact source anchors on both sides name
the same normalized file, it has at least one direct caller, and every caller
is inside that interval or independently belongs to the same library. This is
not call-graph closure, so indirectly invoked application callbacks remain
outside. The pass recovered 96 helpers with zero conflicts. The `jquant1.c`
cluster added `0075F7D0`, `0075F9D0`, `0075FA00`, `0075FB30`, and `0075FB50`.
Their bodies are excluded from the LLM game corpus but remain recorded in
`library_functions.json` with address, call relations, signature, source
evidence, and tags.

`STDecompExport` also stopped claiming that every `raw_indirect_call` needs an
explicit receiver. Vtable slots still use receiver-aware `__thiscall`; ordinary
C function tables retain the calling convention proven by stack cleanup and
argument setup.

Current accepted state:

- run `3af397a8ad99b62a8119ee85de446470e1ef4cce6dc1d2f18fccdcd589d8f980`;
- semantic hash `b5781d678f5958c4addf367f089811c7953a2eaaaaa43d6b5cdad943f81cac67`;
- corpus manifest `9ae4850a02520eb5eb8c2e91af12effda2495f49e69a1916f37c0416407adaa2`;
- 10,400 function records, 5,624 bodies, zero failed bodies, and 2,737 typed
  vtable slots;
- export gate: zero hard regressions and four improving stage-transition
  warnings; ABI gate: zero errors and warnings;
- `raw_indirect_call -43`, `raw_pointer_offset -54`, `stack_slot_reuse -52`,
  `undefined_type -218`, and `unresolved_register_input -23` because 96 linked
  library bodies no longer pollute game-code quality statistics.

## Exact-layout semantic type reconciliation

The latest accepted export supersedes the state above. A source-tree mismatch
exposed two distinct Ghidra structures with the same `SystemClassTy` leaf name:
the semantic anchor `/SystemClassTy`, used by `006E51C0`, and the stronger but
noncanonical `/SubmarineTitans/Recovered/SystemClassTy` view selected by the
old source-tree path heuristic. This made the constructor body name `app` and
`objectLock` while the generated declaration contained `unknown_18` and
`unknown_0c`.

`STTypeBootstrapAnalyzer/Applier` now reconciles this class of duplicate without
an image-specific field list. It requires one unique semantic anchor, identical
complete structure/component geometry, hash-intact baselines on both views, and
only compatible generic/concrete pointer differences. Concrete pointee types
win over `void *`; same-nominal recursive pointers retain the canonical path.
A disagreeing semantic member name survives only when it is mechanically
derived from the selected pointee type (`AppClassTy * -> app`) or carries active
applier provenance. Otherwise it becomes an offset-only deterministic name.
Consequently `objectLock` is now `field_000C`, while the DArray fields, typed
vptr, `app`, and other agreeing members live on the sole canonical structure.

`STAbiRegressionGate` recognizes the retirement of an accepted legacy class
path only through the same unique-anchor, same-leaf, exact-geometry and
compatible-storage proof. A missing path without that proof remains a hard
class-vptr erasure. `tools/st_source_tree.py` independently prefers an exported
`[ST_SEMANTIC_ANCHOR]` over category naming, preventing a stale recovered path
from silently defining the public C++ record.

Current accepted state:

- run `aa7be8cea631072351cbdb06752fd356e417f76b455ea28e695bc48ae5226836`;
- semantic hash `3165427b06395bf91dcf3848364a7bef1d66e934908cc378f28beb0fdc519489`;
- corpus manifest `97e595a0f6ecce9db4ae11d8ab69b7cc0dd50f02588284f0bcd0a9922ec3561a`;
- 10,400 function records, 5,624 bodies, zero failed bodies, and 2,737 typed
  physical-vtable slots;
- export gate and ABI gate: zero errors and zero warnings after the accepted
  stage transition;
- the generated `SystemClassTy.cpp` translation unit passes the local C++17
  syntax audit with no diagnostics.

## Runtime-published record buffers and exact stack-slot provenance

The latest accepted export supersedes the state above. `0040FC40` belongs to
the recovered source path `E:\\__titans\\wlad\\Grpway3d.cpp`; this is source
provenance extracted from the binary, not evidence that an original source file
exists in the repository. The generated projection is
`src/ST.exe/source/original/wlad/Grpway3d.cpp` and contains
`st::fn_0040FC40`.

`STGlobalAggregateAnalyzer/Applier` now distinguishes a static image table from
a pointer-sized global which publishes runtime-allocated record storage. Exact
cross-function affine accesses recover a unique stride, complete non-overlapping
field partition, and an optional paired count/index global. A candidate is
rejected when the global address itself is used as an indexed image base or when
the observed cursor addresses only a sub-record. This generic rule recovered
`007F4D3C` as a pointer to a five-dword, `0x14`-byte record and `007F4D14` as its
count/index. `0040FC40` therefore renders its fixed-index writes as
`g_runtimeRecords_007F4D3C[g_runtimeRecordCount_007F4D14].field_000*` without an
address-specific rewrite.

Exporter `stack_slot_reuse` evidence is now exact value provenance. Only a full
overwrite fed through transparent `MOV`/`MOVSX`/`MOVZX` operations from a
different incoming argument slot qualifies. Arithmetic, `LEA`, and registers
used merely to address an indexed load do not propagate argument identity. This
removed the false hints on the ordinary coordinate transforms and clamps of
`param_1`, `param_2`, and `param_3` in `0040FC40`.

The remaining `&stack0xfffffec8` spelling in that function is a different
problem. The machine code calls the verified MSVC `__alloca_probe` contract and
creates a runtime-sized byte arena (`uVar15 * 5`), so there is no fixed
EBP-relative Listing local which Ghidra can safely install. It remains an
explicit `dynamic_alloca/runtime_extent_review` row in
`stack_object_proposals.tsv` and a `raw_stack_arena_materialization` source-tree
audit issue. The nearby `local_1c`, `puStack_10`, `puStack_c`, and `local_8`
values are compiler SEH frame state, not members of the runtime record.

Current accepted state:

- semantic hash `85825c1954aa70e84afb9b6b0ee81de4918eb8fc27aa50edd524c4ef6adc9a25`;
- corpus manifest `f8afc8cb96e8f1167325c02cfb7b94bdd9c1c37d68270371a47d55e0d50d44b3`;
- 10,407 function records, 5,616 bodies, zero failed bodies, and 3,192 typed
  physical-vtable slots;
- export and ABI gates: zero errors and zero warnings;
- the warmed exporter reused all 10,407 function bodies, deliberately rescanned
  all body annotations after the provenance-rule version bump, and completed as
  part of a `00:04:59` export pipeline;
- the regenerated source projection contains 5,616 functions in 321 translation
  units; its remaining 13,489 audit rows are review debt, not silent source
  fabrication.

## Nested machine-pointer safety and crash recovery

The latest accepted export supersedes the state above. A broad nested-pointer
experiment exposed an operand-model bug rather than new object geometry:
Ghidra's `Instruction.getOpObjects()` includes the base register of a memory
operand. The old machine pass could therefore read `MOV [EBX+offset],EAX` as if
operand zero defined `EBX`, carry the wrong alias through later instructions,
and propose oversized anonymous child layouts.

`STPointerShapeAnalyzer` now accepts a register operand only when its complete
rendered spelling is one standalone register. Nested member promotion still
requires the exact chain `load owner field -> retain child value -> use child as
a later memory base`, the normal minimum field evidence, and generated/manual
layout guards. A corrected read-only scan reported 432 machine nested accesses,
83 pointer-field promotions, 121 anonymous types and zero failures; the former
3,567-byte false child proposal disappeared, while new child layouts were at
most 200 bytes.

The rejected pass had also rewritten 185 pointer-parameter provenance comments
despite leaving their types equivalent. `STPointerShapeApplier` is now
idempotent for this case: an existing owned marker is retained unless the type
actually changes. Optional exact `proposed_comment`, `proposed_source`, field
comment and type-description columns exist solely for stale-baseline-checked
accepted-state repair. `STTypeLifecycleAnalyzer/Applier` can retire an
unreferenced direct Pointer/Array wrapper chain before retiring its hash-owned
anonymous base type.

After a host reboot, the interrupted pipeline was not accepted. The Ghidra
database was compared by a cached diagnostic export against the retained
accepted corpus: all 184 changed function metadata records differed only in
those 185 comments, and `types.jsonl` contained one unused derived pointer type.
Restoring the accepted comments and removing that unused derivative returned
the database to the exact accepted semantic fingerprint.

`STRecoveryLauncher` now writes bootstrap output to the ignored
`pipeline_bootstrap.log.tmp` and atomically promotes it only after the child
pipeline succeeds. A hard kill or reboot therefore preserves the last complete
machine-local bootstrap log instead of replacing it with an unaccepted prefix.

Current accepted state:

- semantic hash `d8cf2c583b3cca628fa0ac32d31b35296501673e7352af2595b6254532386f3c`;
- corpus manifest `bc31c81fe820965357669a9b4f882d53b75541bf93525a7169f01d93f6bee3d2`;
- 10,407 function records, 5,616 bodies, zero failed bodies, and 3,192 typed
  physical-vtable slots;
- export receipt `passed`, with zero hard regressions and three warnings;
- the recovery scripts compile against Ghidra 12.1.2/JDK 21, and a final
  semantic fingerprint check exactly matches the accepted receipt.

## Address-installed library callbacks and fragmented padding

The latest accepted export supersedes the state above. `STUnclaimedCodeAnalyzer`
recovered complete callback entries which Ghidra had omitted because their
addresses are installed with exact x86 `MOV [memory], imm32` instructions rather
than reached by direct `CALL`s. Several are compiler-emitted `RET 4` no-op
callbacks; others are ordinary indirect-only functions. Their identities are
real and remain in `functions/<ADDRESS>/` even when their implementations are
excluded as linked-library code.

The existing library interval rule intentionally required matching normalized
source basenames. That could not classify a callback placed at the boundary of
two JPEG object files even though both sides and every exact callback installer
belonged to `DKW_JPG`. `STLibraryAnalyzer` now keeps source provenance strict but
adds a separate module-only proof: the nearest exact anchors around the callback
must agree on library/namespace, every exact installer/direct caller/executable
non-flow owner must be independently bounded by its own nearest anchors for the
same module or already carry an independent exact classification, and the
reference must decode as the same exact memory-immediate store. It never assigns
either neighboring source filename. The accepted pass added 61 library callback
classifications (57 `DKW_JPG`, four `DKW_GPC`) with no conflicts.

Recovering tiny functions split long compiler-alignment runs into raw fragments
shorter than the normal padding-run threshold. `STDecompExport` now classifies
any fragment containing only known `00`/`90`/`CC` padding bytes as `padding`
regardless of its raw discovery kind or length. Such ranges remain represented
in `unclaimed_ranges.jsonl` with `exported=false` and no longer create noisy
`unclaimed/<START>_<END>/` directories.

Current accepted state:

- run `764a61cc55c16959d155d14a95d4d6a2a9fd7eedaf39230d417e6e7f8dcacd62`;
- semantic hash `eaca06938975d4924ae26d60827c5723b4e130b929c429e0ae6001341d3adf80`;
- corpus manifest `cd691ccf658e7f7982233f5c82f6e7647e2773f4b0e2583952f2e958af486db1`;
- 10,407 function records, 5,555 exported bodies, zero failed bodies, and 3,192
  typed physical-vtable slots;
- export receipt `passed`, with zero hard regressions and four non-blocking
  library stage-transition warnings; ABI gate errors/warnings remain zero;
- compared with the preceding corpus, raw indirect calls decreased by 43,
  raw pointer offsets by 46, unresolved register inputs by six, and undefined
  type occurrences by 197.

## Runtime bit strings and byte-inducted record members

The latest accepted export supersedes the state above. `STGlobalDataAnalyzer`
now recognizes a runtime bit-string pointer from the complete machine chain
`MOV exact_global_value -> base register -> BT/BTS/BTR/BTC [base], bitIndex`.
Automatic application requires at least three exact sites spanning two
functions. The access unit used by the x86 instruction is not treated as a C
pointee width: the neutral source storage is `byte *`. This recovered
`DAT_007F4CFC` as `g_bitset_007F4CFC : byte *` from 16 exact sites across nine
functions, with no address or class allow-list. The formerly casted accesses
now render as ordinary byte indexing. The nearby `linearIndex ^ 7` is real: it
reverses the low three bit-position bits before `>> 3` selects the byte.

`STDecompExport` also recovers an already proven structure member when Ghidra
keeps the loop induction variable in bytes. An exact expression such as
`*(int *)((int)&records->field_0004 + byteOffset)` now becomes
`STObjectAtByteOffset(records, byteOffset).field_0004` only when `records` is a
one-star pointer to one unambiguous concrete structure and the cast width equals
that named member's width. The helper is address-equivalent for every offset;
it deliberately does not invent `records[index]` until every definition proves
divisibility by the record size. This normalized 112 sites in 16 functions,
including the `RuntimeRecord_007F4D3C_0014` reads and writes shown in the
current `Grpway3d` family.

The old `*(undefined4 *)(*(int *)(param_1 + 0x1ba) + 0x1c) = 1` example belonged
to callback `0075F720`, now independently classified as statically linked
`DKW_JPG`. Its implementation is intentionally absent from the accepted
decompiler corpus and disappeared from the regenerated source tree; callers
retain only the address-stable library declaration.

Current accepted state:

- run `a59b126a2ff456ddf0b30a483d1b1f08aa42964a2a1e351a74eecd1f52095010`;
- semantic hash `85b30777b4e7846236f50c68efa495664e45729dd519a55e96d62dab6dc011cc`;
- corpus manifest `bafff15b18472b78d359a6f66c94c43ef1c82e46c0d54e8743becf606190b059`;
- 10,407 function records, 5,555 exported bodies, zero failed bodies, and 3,192
  typed physical-vtable slots;
- export receipt `passed`, with zero hard regressions and three non-blocking
  stage-transition warnings; ABI gate errors/warnings remain zero;
- generated source contains 5,555 bodies in 321 translation units; the fixed
  64-error Apple Clang audit passes 187 units and retains 1,531 errors, 1,514
  mapped to stable function addresses. The generated declaration surface and
  all 37 source-generator unit tests pass.

## Pointer-valued globals and singleton publication

The latest accepted export supersedes the state above. `STGlobalDataAnalyzer`
now separates pointer-role evidence from pointee evidence. Three exact loaded-
value dereferences across two functions, or three exact receiver sites spanning
two callers and two distinct `__thiscall` callees, prove only neutral `void *`.
A concrete `T *` requires either all-predecessor CFG propagation of an
unadjusted named method receiver into the exact global store, or a trusted
concrete-pointer function whose every RET returns the same global or null.
Calls kill volatile receiver facts, joins intersect facts, and script-owned
neutral pointers remain replaceable by stronger later evidence.

The pass typed 19 globals: 14 neutral pointer values plus concrete
`TLOFakeTy *`, `HelpStringTy *`, `SoundManagerTy *`, `SndUnderAttMenegC *`, and
`AiBossClassTy *` singletons. Downstream fixed points recovered 29 structural
methods (12 in the first method-owner wave and 17 in the second), one prototype,
eight DArray descriptor specializations, and one local SSA lifetime. Type
lifecycle removed 1,014 generated types which became unreferenced.

Current accepted state:

- run `6820bd712a048ce4e5b0294d740fe3c82bafdf4079d4384a80029686c1fe637f`;
- semantic hash `1f669587552e8e1c36194655261ec8115e211916c56b2db8bdcfc4d78e15cd67`;
- corpus manifest `0c74fa4297a743f7e423b089334381efd2f5051b4502b55046916c896d19036f`;
- 10,407 function records, 5,555 bodies, zero failed bodies, and 3,192 typed
  physical-vtable slots;
- export receipt `passed`, with zero hard regressions and six non-blocking
  warnings; ABI gate errors/warnings remain zero;
- quality deltas: `generic_data_symbol -170`, `undefined_type -176`,
  `raw_indirect_call -38`, `raw_pointer_offset -50`, and
  `casted_generic_field -38`; warning-only stage transitions include
  `anonymous_shape_type +34`, `generic_field_name +554`,
  `dynamic_array_indexing +8`, and `generic_global_aggregate +12`;
- generated source contains 5,555 bodies in 322 translation units and 13,398
  audit rows. The fixed 64-error Apple Clang audit passes 193 units and retains
  1,435 errors, 1,418 mapped to stable function addresses. All 37 generator
  tests pass.

## Count-driven stack outputs and readability regression gates

The latest accepted work used the direct local checkout; no network path or copied
project was involved. `STStackOutputArrayAnalyzer/Applier` is now a normal
pipeline pair immediately after fixed stack-object recovery. It has no ST
address/type allow-list. Its automatic proof requires the same exact
EBP-relative root to reach a callee's final scalar-pointer parameter at least
twice, a tested machine-word return count, and at least two width-stepped,
count-decrementing consumer loops. Capacity is bounded by contiguous generic
Listing locals and every manual/imported/stale overlap is protected.

The scan found 712 scalar-output calls and 440 candidate roots. One complete
proof replaced the false `DArrayTy local_34` in `00652810
AiEventClassTy::GetMessage` with `uint output_values_neg_34[8]`: 101 exact
callsites and 69 independent consumer loops. A confirming pipeline pass reports
it unchanged. The remaining 439 candidates are explicit review rows, not
silently widened heuristics.

Readability now has two independent transactional barriers:

- `STExportRegressionGate` compares critical quality kinds per function
  address. Casted call results use a canonical comment-free logical expression,
  so Ghidra wrapping and inserted `ST_CALLSITE` comments cannot fabricate a
  delta. The accepted baseline contains 1,452 expressions in 582 functions.
- `tools/st_source_tree.py` computes a per-address source profile before atomic
  promotion. Raw `code *` calls, duplicated-receiver dispatch, generic pointer
  towers/declarations, stale address-member calls, dangling qualified-address
  prefixes, invalid undefined casts, presentation failures, and boundary casts
  cannot increase at one address merely because another address improved.

The source gate caught a real attempted regression while this layer was being
built: readable `this_00->sub_005C29B0(...)` had been reclassified as a free
`st::fn_005C29B0(pointer_boundary_cast<...>(this_00), ...)`. Address-coded direct
rewriting now excludes existing `->sub_ADDRESS`/`.sub_ADDRESS` member wrappers;
all 78 focused generator tests pass.

The corpus hard gate also consumes `compile_readiness_summary.json` and requires
zero hard text blockers. This exposed runtime helpers whose standalone
`decomp.c` lacked `pseudocode_runtime.h`; runtime detection and readiness
inventory now cover `STObjectAtByteOffset`, `STRecordByteAddress`,
`STReplaceLowByte*`, `STReplaceLowWord`, `STPackTagged24`, and
`STBiasedDiv16`. The accepted corpus has zero helper files without the include.

Current accepted state:

- run `0f7cf44df4071e1b63ca594a65fd321b4a018f97fc18d659ec156682961f1ba3`;
- semantic hash `5b9cb0ca21c5a22ae7bdc6449926c6635a71c962d8cba660e88412e981f25f6b`;
- manifest `d2fdb70aff3d23363b3bbe1c3c03a0bcbdff5b075b356d0e00b3fb7d1b853006`;
- 10,407 functions, 5,555 bodies, zero failed bodies, and 3,192 typed physical
  vtable slots;
- export and ABI gates both have zero errors and zero warnings; Program semantic
  state did not change during the final export-only confirmation;
- source generation contains 5,555 bodies in 322 TUs and 12,984 audit rows;
  the fixed 64-error Apple Clang audit passes 243 TUs with 505 errors, 488
  address-mapped.

The next high-yield compiler clusters are 34 calls through values currently
declared `void`, 34 dereferences of neutral `void *`, and 34 conversions of one
`AnonShape_006D8A60_D503343B` value to `uint`. Address hot spots are `0066ACC0`
(64 capped diagnostics), `006D8A60` (36), `0064A970` (29), and `00652810`
(22, down from 26). Repair these through callback/value-role propagation and
local pointer/scalar lifetime separation in Ghidra; do not hide them with new
source-only casts.

## Raw-vtable callable and pointer/word clusters closed

The three compiler clusters named above are now closed. The final fixed audit
contains zero calls through values declared `void`, zero dereferences of
neutral `void *`, and zero diagnostics in the `006D8A60` pointer/scalar family.
This was not implemented with address/class allow-lists.

`STIndirectCallsiteAnalyzer` had been suppressing a small residual family in
`0066ACC0` because its density guard counted every dispatch in the function,
including calls already covered by physical slots. It now counts only fallback
rows which remain after same-pass physical promotion. Twenty exact, unadjusted,
two-word calls recover one physical `AnonReceiver_0064A970VTable::slot_20` ABI;
seven sparse uses remain address-local overrides for slots `10`, `14`, `1C`,
`24`, `28`, and `2C`. The initial apply changed eight targets and the confirming
pass is stable at `applied=0`, `unchanged=288`, conflicts zero.

When one exact callsite ABI deliberately retains a neutral `undefined4`
parameter but the source argument is a pointer, `tools/st_source_tree.py` now
emits `machine_word_boundary_cast` at that boundary and records an
`exact_indirect_argument_boundary` audit row. The recovered prototype remains
neutral; the cast expresses only the original 32-bit x86 transport.

Current accepted state:

- run `b5d378b5465f4c62fc65ef612e22ea35ff7ce3bf21ebbb840586444d2bc9a587`;
- semantic hash `bfd44643f2e5256a9d5836adcbb3b547e17dbf6a8d41f24358ff514c2e258237`;
- manifest `79df375cf2f9f1a65879b306993696c6d6ec1334af4404cf1b98a684145283cc`;
- 10,407 function records, 5,555 bodies, zero failed bodies, and 3,192 typed
  physical-vtable slots;
- export/ABI gates: zero errors and zero warnings;
- generated source: 5,555 bodies, 322 TUs, 13,039 audit rows; 82/82 focused
  generator tests pass;
- fixed Apple Clang audit: 244/322 TUs pass, 450 errors remain, 436 mapped to
  stable function addresses.
