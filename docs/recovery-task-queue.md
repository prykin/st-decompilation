# Recovery task queue

This queue is ordered by dependency and risk. It deliberately starts from the
last accepted repository state rather than from a rejected Ghidra Program.
Generated `recovery/` or `decomp/` output is evidence, not an implementation
surface.

## Historical safety rollback baseline

- Commit: `39097bd736` (`Infer callback fields and exact inline aggregates`).
- Program semantic hash: `27b2e1eb234982f047ed62f60bc77e1a7bde68397a9bbe5e0b2e1686a4b2fed8`.
- Corpus manifest: `0a9c405fb2858d7ddd0391cf876f8bc621dcccaeedbe32d91951e5beeb4e8628`.
- Export receipt: `passed`, with 10,392 internal functions, 5,712 bodies,
  2,409 typed recovered-vtable slots, zero failed bodies, zero hard regressions,
  and zero warnings.

The post-baseline candidate is rejected. It must not be used as a Program,
proposal, corpus, or regression baseline. Its additional
`TLOBaseTyDispatchVTable` replaced the physical class vptr type and produced
lost stack arguments, false narrow returns, `extraout_*`, and `in_stack_*`
artifacts.

## P0 — restore and protect the baseline

### Q-000 Restore the accepted repository and Ghidra Program

- Close Ghidra and verify that no process holds the project.
- Restore tracked project, scripts, recovery output, corpus, and documentation
  to `39097bd736`.
- Remove or quarantine untracked files belonging to the rejected experiment.
- Open the restored project and verify the Program semantic hash before running
  an applier.
- Exit criterion: the working corpus has the accepted `passed` receipt and only
  intentionally authored queue/test changes differ from the baseline.

### Q-001 Add a small ABI regression fixture set

Status: implemented in `STAbiRegressionGate` with data-driven rules and exact
reviewed transitions. Two Ghidra runs compiled all 81 scripts and exposed a
false raw-versus-normalized artifact comparison on an unchanged accepted
Program. Token metrics now use an automatically generated raw fixture baseline
bound to the accepted manifest, fresh Program semantic fingerprint, policy
hash, and decompiler profile. Confirmed by completed run
`d395e3ebb9d434e2851255a8381c90e69559f2bd78545b9b13cb13d600c4ef90`:
all ABI phases and the broad export gate passed, the raw baseline was verified,
and the Program semantic hash remained at the accepted value.

Before reintroducing an ABI-mutating heuristic, compare the following bodies
against the accepted corpus by stable address:

| Address | Required invariant |
| --- | --- |
| `00497E00` | no duplicated/foreign receiver and no new `extraout_ECX` |
| `0047C050` | slot `F8` retains its full-word return; no `CONCAT31` growth |
| `0041F3B0` | slots `0C` and `7C` do not acquire guessed narrow returns |
| `004B8C80` | virtual calls retain their final explicit stack argument |
| `004E0830` | virtual calls do not turn arguments into `in_stack_*` inputs |
| `004952E0` | protected boolean CFG return is not widened from provenance alone |
| `005F0A30` | no `unaff_*`, `in_stack_*`, or return-width growth |
| `005EF470` | uncertain virtual ownership remains review-only |
| `005EF7A0` | protected return ABI is not rewritten from a generic family vote |

The broad export gate remains authoritative; these fixtures provide an earlier,
cheaper failure.

### Q-002 Isolate risky Program mutations

Status: superseded for the current single authoritative local-project workflow.
Do not create or maintain an unmanaged project copy. Source-bundle pinning,
analyzer/applier separation, ABI barriers, run archives, and transactional
corpus export provide the automated isolation used here. A new risky ABI
heuristic must remain proposal-only until those gates cover it; the pipeline
must stop before later broad consumers when a barrier fails.

- Keep candidate recovery/corpus output separate until its export gate passes.
- Promote the candidate only after the semantic diff and per-address fixture
  diff are reviewed.

## P1 — remove the demonstrated ABI hazards

### Q-010 Keep dispatch interfaces out of class vptr fields

Status: implemented and runtime-confirmed by accepted run `c67bb0...`. New
dispatch interfaces and their tail signatures are emitted as `apply=0` audit rows.
`STIndirectCallApplier` refuses old `create_dispatch_vtable`, synthetic-dispatch
slot, and obsolete hard-coded `create_base_vtable` proposals even if an old TSV
still says `apply=1`. The accepted historical `STGameObjCDispatchVTable` is not
automatically removed: replacing it requires a separately gated migration that
preserves the useful tail-call evidence without changing the physical class
vptr ABI. All ABI barriers and the broad export gate passed, the Program semantic
hash stayed unchanged, and all accepted typed physical vtable slots remained
intact.

- A class vptr must continue to point to a physical vtable type.
- A synthetic union/dispatch view may be emitted as audit metadata, but must not
  replace the physical vptr or its slot `FunctionDefinition`s in Ghidra.
- Do not infer a common slot ABI merely from equal offsets in derived tables.
  Require compatible physical target ABIs and preserve the concrete receiver.
- Add an applier-side refusal so an old proposal cannot install a dispatch view.

### Q-011 Make return repair evidence-only

Status: implemented. The current repair-only pass has no pending mutation;
non-leaf void and forwarding decisions use whole-CFG caller/return evidence,
and boolean source domains remain review-only unless ABI width is independently
proven.

- Never migrate a protected `bool`/narrow return to `undefined4` because an old
  script comment says that propagation was unsafe.
- Require whole-CFG EAX evidence for non-leaf `void`, forwarding, or width
  changes. Unresolved paths remain unknown.
- Same-width signedness disagreement on generated fields is review-only; it
  must not oscillate through `undefined`.

### Q-012 Separate virtual-method ownership, name, and ABI

Status: implemented conservatively. The virtual-method and method-owner reports
keep all automatic name/owner/convention changes disabled at the accepted
checkpoint, while shared and multi-owner targets remain explicit review rows.
Physical slot typing does not by itself rename or re-home the target function.

- A recovered physical vtable slot may prove hidden ECX without proving a class
  name or semantic method name.
- Ownerless/shared targets stay neutral and review-only unless every physical
  caller agrees on receiver adjustment and stack cleanup.
- No automatic class ownership for a target which leaves incoming EAX/ECX
  semantics unresolved in its own body.

## P2 — reintroduce infrastructure independently

Status: all six infrastructure items are present in the current pipeline. Their
runtime evidence is retained per run. Accepted run `7f9676d...` reused 11
persistent and nine current-epoch analyzer results and completed in 317.510
seconds. It exercised the run-local epoch rebase after an idempotent transaction
advanced only Ghidra's volatile modification counter. The callback-field
machine prefilter reduced that analyzer from
166.613 seconds to 2.300 seconds by skipping 1,138 call-only decompiles.

Each item starts from the accepted source, compiles all scripts against Ghidra
12.1.2/JDK 21 into a temporary output directory, and gets its own narrow runtime
validation. Do not land them as one source bundle.

1. Source-bundle hash pinning while the pipeline is running.
2. Whole-corpus transactional export and `incomplete` receipt handling.
3. Stable body-analysis cache identity.
4. Pipeline elapsed-time display without wall-clock timestamps in artifacts.
5. ABI/global barrier scheduling which prevents broad decompilers from running
   in an already-obsolete Program epoch.
6. Analyzer idempotence checks: `changed=0` must not advance the semantic or
   volatile modification counters.

Any repeated expensive analyzer with no relevant upstream mutation is a
scheduler defect. A step-count increase over the accepted pipeline must identify
the exact mutator which required it.

## P3 — reintroduce semantic recovery one layer at a time

These candidates remain useful, but none is allowed to carry state from the
rejected Program.

1. Strong typed forwarding from an unsized Ghidra return placeholder, with a
   protected caller boundary and full wrapper CFG proof.
2. Receiver-unused physical vtable targets as hidden-ECX calls, with `RET n`
   counting only explicit stack bytes.
3. DArray creation with a neutral callback field; do not specialize the utility
   ABI from one consumer.
4. Concrete `T **` loads rooted in one proven generated global record.
5. Allocation-backed consumer-local packed records with an exact fixed-copy
   span; allocator returns remain neutral. Status: implemented and accepted by
   full-export run `3619c3f6f942...`. The machine scan found 458 allocation roots in 237
   functions, 82 returned roots, nine exact returned fixed-copy records and no
   overlap/manual-baseline conflicts. All nine applied once and the confirming
   pass reports `unchanged=9`; every ABI phase and the broad export gate passed.
6. Recursive linked pointee and nested-structure inference from matching
   nonzero geometry at root and recursive depths. Status: implemented and
   accepted by full-export run `da57bbf2063b...`. The first automatic row is keyed to one generated
   owner-field identity, combines two independently recovered partial views into
   a 76-byte node with seven nonzero fields, and proves the self-link from repeated
   traversal sites. The first apply reports `applied=1`; the confirming pass
   reports `unchanged=1`. A generic class-layout precedence rule preserves this
   hash-owned node over `void *` evidence, and three subsequent class-layout
   applications all report `updated=0`, `unchanged=112`. All ABI and export
   gates pass. The follow-up generated-layout and SSA-lifetime layer is accepted
   by full-export run `4867017fb370...`: exact adjacent reinterpret clusters and
   fixed-index generated tails refined 28 targets on the first pass, then
   converged without further pointer-shape changes. Recursive field
   load/store/address/cast anchors split five groups in `006DDD50`; restricted
   passes converged `2 -> 1 -> 1 -> 0`, and the complete confirming pass made no
   changes. The former `undefined4 ******` towers now render as the recovered
   node and `->next`. One inseparable `Node *`/`Node **` group remains
   review-only. All ABI gates and the broad gate pass; the latter reports three
   expected stage-transition warnings and no hard regression.
7. Export-only presentation rules (`nullptr`, exact binary32 literals, closed
   cursor idioms, x87 survivor spelling), each proven bit- or address-exact.
8. Function-pointer stack parameters from complete exact direct-callsite
   coverage plus a same-parameter indirect call, with at least two target sites,
   unanimous machine ABI, and cdecl caller-cleanup proof. Source is implemented;
   accepted run `85fe7d...` compiled and exercised it with complete CFG
   reconstruction for all 67 candidate callsites, 25 review rows, and a passed
   export gate. A generic-type predicate bug misclassified `undefined *` as
   concrete and suppressed every automatic row. Accepted run `7f9676d...`
   confirms the symmetric predicate fix: five complete rows are installed and
   the confirming pass reports `unchanged=5`, `conflicts=0`; every ABI barrier
   and the broad export gate passed.
9. Element-scaled pointer offsets and consumer-local views of heterogeneous
   loader results. Status: implemented and accepted by full-export run
   `8538b1d383ad...`. The analyzer now distinguishes `T * + n` from
   `(int)pointer + n`, retries transient decompile failures, and keeps newly
   exposed broad geometry review-only. Three single-call loader consumers
   received local 16-byte views with the observed `int` at `+0x0c`; the shared
   loader prototype remained protected and unspecialized. The first pass made
   seven type/local operations across four enabled targets; the confirming pass
   reports `target_apply=0`, `anonymous_types=0`, and `failures=0`. Export-only
   exact structural-copy and row-major grid normalizations then passed every ABI
   barrier and the broad gate with no hard regression.

For every item: analyzer-only proposal review, one applier pass, one confirming
pass, fixture diff, then broad regression gate. A failed item is reverted as a
unit before testing the next one.

## P4 — remaining broad recovery clusters

The accepted corpus contains the following concrete debt:

| Issue | Occurrences | Functions | Next evidence source |
| --- | ---: | ---: | --- |
| `undefined_type` | 18,595 | 3,658 | definitions, consumers, ABI-width families; compatibility spelling is now available |
| `raw_pointer_offset` | 2,240 | 1,024 | cross-function pointer families and complete records |
| `raw_indirect_call` | 1,885 | 773 | stored callback targets and physical vtable slots |
| `packed_or_unaligned_piece` | 0 raw partial tokens | 0 | exact exported pieces now use audited runtime helpers; semantic packed-member refinement remains |
| `return_width_artifact` | 558 uses | 138 | whole-CFG EAX/x87 and caller-consumer evidence; declarations are no longer double-counted |
| `unresolved_register_input` | 472 | 132 | boundary ABI, SEH/setjmp, and true live-ins |
| `dynamic_array_indexing` | 76 | 39 | per-owner DArray element descriptors |
| `flattened_global_record_array` | 36 | 17 | exact member identity inside proven record arrays |

### Q-044 Build a measurable C++ extraction boundary

Status: implemented and accepted. `STDecompExport` now emits
`compile_readiness_summary.json` and address-stable
`compile_readiness_issues.jsonl`, independently of the semantic quality audit.
The generated `pseudocode_runtime.h` supplies exact-width decompiler scalar and
calling-convention compatibility, opaque unresolved callable values, byte-safe
`CONCAT`/`SUB`/carry helpers, read/write lvalue pieces, read-only literal pieces,
and typed byte-offset fields. The final three `"literal"._offset_width_` forms
are gone; the corpus has zero residual Ghidra partial-piece syntax.

The compatibility layer covers 34,795 occurrences and compiles as a C++17
header. It deliberately leaves every use in the readiness inventory and does
not promote a byte offset to a class field. The example ownerless receiver at
`00717910` now uses `STField<RecoveredSourceFamily_dibcopy *>(this, 0x28)`:
the member value type is proven, while the receiver identity is not. A broad
database receiver-record experiment was rejected after the ABI gate reported
22 hard downstream regressions; no part of that mutation was retained.

The accepted headless export keeps semantic Program hash
`e1f9bb21bfcd91e18401c62060be8cb61a23b40b1aa776942fa539b09a6aadd0`,
contains 10,392 function records and 5,712 bodies, and passes both export and
ABI gates. The next major boundary is a deterministic declaration/translation-
unit generator; see `docs/compile-readiness.md`.

### Q-045 Assemble the accepted corpus into a deterministic source tree

Status: implemented offline. `tools/st_source_tree.py` verifies the passed
receipt and exact manifest hash, renders exported datatype paths in dependency
order, declares referenced globals/imports, assigns every internal function the
stable free symbol `st::fn_ADDRESS`, carries external identities from
`call_relations.jsonl`, and atomically emits `src/ST.exe`.

The current tree contains all 5,712 bodies in 318 translation units. Embedded
and recovered debug evidence places 1,044 bodies under original paths; 4,668
remain in deterministic owner/address fallback units. The complete generated
header passes Clang C++17 syntax checking. Full object compilation is not yet a
success criterion: its diagnostics now form the next address-stable queue for
anonymous byte fields, pointer/scalar role conflicts, untyped vtable slots, and
weak prototypes. The generator never mutates Ghidra or fabricates image-backed
global definitions. See `docs/source-tree-generation.md`.

### Q-046 Establish an address-stable source compilation loop

Status: first layer implemented offline. `tools/st_compile_audit.py` verifies
the generated source manifest, compiles every translation unit independently,
and normalizes compiler diagnostics back to stable function addresses. Its
default output is ignored under `.st-local/`; no compiler path, run timestamp,
or machine-local diagnostic is added to the deterministic source tree.

`STSourceTreeGenerator` now retains only the exact unnamed-byte record views
which statically typed code actually names, including indexed/by-value receivers
and nested pointer-member chains. It also emits non-virtual C++ member wrappers
for exact receiver-aware primary-vtable slots. These wrappers preserve readable
`object->method()` spelling while forwarding through the explicit physical
vtable. Uniquely owned non-virtual `__thiscall` functions receive ordinary
forwarding class methods over `st::fn_ADDRESS`; they do not synthesize
inheritance or change packed layout.

The accepted corpus materializes 2,664 byte views, 780 physical-vtable wrappers,
and 1,292 ordinary source methods. It also resolves 231 exact address-taking
uses where an image object and a C++ record type share a name. A fixed Apple
Clang C++17 probe capped at 32 errors per translation unit passes 54 of 318 units
and maps 4,066 of 4,068
retained errors to function addresses. Only
38 missing-member diagnostics remain. The next compile-driven cluster is weak
call-boundary scalar/pointer typing, led by 1,198 argument mismatches and 1,014
assignments. Treat the cap as a comparison baseline, not a complete error total.

### Q-041 Closed narrow returns and exact address/piece presentation

Status: implemented and accepted. Seven non-manual functions received a
machine-proven `byte`/`ushort` return after complete reverse callee CFG and
forward caller-use CFG audits. `LookupRecordByte` has 364 low-byte consumers,
one explicit result kill, and no full-width or unresolved caller path; its old
`CONCAT31` return is now an ordinary byte field return. The confirming ABI pass
emits zero proposals.

The same layer adds exact exporter folds for same-base low-piece composition,
runtime-stride typed DArray addresses, and interior addresses in generated
fixed-stride global record arrays. The accepted corpus contains 697 low-piece
helpers, 434 `DArrayAt<T>` address/index views, and 71 record-address views.
Compared with the retained pre-export baseline, dynamic-array debt fell by 242,
flattened-record debt by 56, packed-piece debt by 351, and raw pointer offsets
by 16. The export gate passes with no hard regression; four remaining warnings
are nonblocking stage-transition counts.

Local-lifetime type comparison now treats equivalent typedef/pointer spellings
as the same anchor family. Proposals fell from 605 to 458 and conflicts from
328 to 175, eliminating 152 `LPSTR`/`CHAR *`/`char *` alias conflicts without
weakening genuine signedness or value-domain conflicts.

### Q-042 Name source-family buffer descriptors without geometry merging

Status: implemented and accepted. `STTypeFamilyAnalyzer` now derives a generated
source family only from one hash-intact script-owned pointer shape, one
unambiguous recovered library-source basename, at least three exact
interprocedural flows into the first explicit parameter spanning two callees,
and at least two semantically named functions. Basename collisions, multiple
source shapes, incomplete flows, and geometry-only matches remain review-only.

The first family promotes `AnonShape_006B5B10_E0D06CF1` to
`RecoveredSourceFamily_dibcopy`: seven exact first-parameter flows reach six
destinations, including the named `DibPut` and `CPanelTy::PaintBRLife`
functions. `STTypeLifecycleApplier` performs the one exact global identity
replacement from the recorded source shape; it does not merge other equal
layouts. The broad anonymous-shape count falls from 4,829 to 4,151 without an
ABI change.

### Q-043 Refine generated members and exporter SSA presentation

Status: implemented and accepted. After recursive-node identity is independently
proven, exact direct scalar casts refine its `short` members at `+0x04/+0x06`
and `int` members at `+0x40/+0x44`. The global-record pass now scans every exact
record reference even when the compiler synthesized the stride, retains
hash-owned concrete fields monotonically, and requires matching typed stores
and consumers before replacing a four-byte scalar with `T *`. This recovered 11
`DArrayTy *` record members and converged to `unchanged=1`.

Exporter-only normalization splits closed integer lifetimes from pointer-typed
SSA names, removes unused `code *` declarations while retaining live unresolved
callbacks, folds an exact bulk-zero tail byte into `memset`, removes only a
type-proven redundant narrow-integer-to-double promotion, and fingerprints only
composite members actually rendered by a cached body. The pathing-grid product
is now an `int` lifetime, the recursive-node casts render as members, and
`LookupRecordByte` remains a direct byte field return. Live `code *` values and
the remaining closed-ABI narrow-return artifacts are deliberately not guessed.
Accepted export `63f884ee37f1...` reused all 10,392 function bodies, passed the
broad and ABI gates with zero errors/warnings, and retained zero failed bodies.

Generic field/data names are a later semantic-naming layer. They must not drive
layout or ABI changes merely because their raw occurrence counts are larger.

### Q-040 Bound adjacent jump and lookup tables

Status: implemented and runtime-confirmed. `004AE0B0` contains a four-entry dword jump
table at `004AED14..004AED23`, immediately followed by a byte lookup table at
`004AED24`. Ghidra reads the first lookup bytes `00 01 03 03` as a fifth
little-endian code pointer (`03030100`) and warns that it cannot read that
address. The executable bytes are intact; the recovery error is the inferred
table boundary.

`STJumpTableBoundaryAnalyzer/Applier` implements this as a general database
repair, not an address suppression. The machine scan found 407 bounded table
candidates across 235 functions, but only the one function whose fresh Ghidra
output reported jump-table truncation was automatic. Its two adjacent tables
received finite Ghidra switch overrides (two and four destinations); the other
405 rows remain disabled review evidence. A confirming fresh analysis reports
zero functions with the truncation warning, keeps both owned overrides enabled
for stale-baseline validation, and emits no `03030100` read warning.

### Q-047 Converge local lifetimes and legacy generated class layouts

Status: implemented, runtime-confirmed, and accepted. Ordinary symbol-less and
local-to-local nominal `typed_copy` values can no longer bootstrap their own
lifetime type. Exact typed parameters/globals/call boundaries remain valid
anchors; the one local exception is an exact pointer chain ending at the same
hash-intact recursive-node identity. Split merge groups receive deterministic
collision-free names and must reattach to the same machine anchor after a fresh
decompile. The mutation staircase applied 527, then seven, then zero rows. The
final broad pass reports 98 already-correct groups, 91 preserved reattachment
failures, three real conflicts, and no mutation.

Class-layout hashes are now computed from the installed `StructureDB`, after
Ghidra canonicalization. A legacy script-owned layout with a divergent
pre-install hash is not rebaselined or rebuilt: `repair_mode=surgical` permits
only exact marker-owned components which still match their recorded baseline,
preflights all target datatypes, preserves unrelated fields, and records a
separate overlay hash. This refined five `CPanelTy` and nine `HelpPanelTy`
fields; the confirming pass reports 110 unchanged applicable classes and zero
conflicts. Source-family pointer types are also protected from lateral
prototype refinement.

Accepted run:

- run `c70e28be14e413bb4affd6eeddf76d449477c66fd028c8cf9b7a7df932d0d615`;
- semantic hash `3e516e69565c493f8efc3b24ab81815cf4ab4dbbadeb020a73b9584e9721d2d6`;
- corpus manifest `c5ca336f0fa2d0488d8bd833b95629f8f4e7d4b7297a88c9398ef5d99e0e37bd`;
- 10,392 functions, 5,712 bodies, zero failed bodies, 2,729 typed vtable slots;
- export gate: zero hard regressions and three nonblocking warnings;
- full-pipeline duration: `01:07:19`;
- compiler audit at 64 diagnostics per TU: 61/318 pass, 5,590 errors, 5,588
  address-mapped; 52 fewer errors than the preceding same-cap audit.

Next infrastructure item: replace the safe whole-Program semantic epoch for
the slow broad analyzers with dependency fingerprints over the exact function,
prototype, datatype member, and proposal inputs they consume. Do not cache an
analyzer merely because its source is unchanged, and do not weaken the final
fixed-point or regression gates.

## Definition of done for one queue item

- No embedded ST image address or hand-authored type/name allow-list in the
  heuristic.
- Analyzer proposal explains machine/decompiler evidence and conflicts.
- Applier preserves manual/imported/stale baselines and is transactionally
  idempotent.
- All Java scripts compile together against Ghidra 12.1.2/JDK 21 outside
  `scripts/`.
- A fresh decompile confirms the database effect; exporter rewriting is not
  accepted as proof of a recovered semantic type.
- `git diff --check` passes and `export_receipt.json` is `passed` with no hard
  regression.
