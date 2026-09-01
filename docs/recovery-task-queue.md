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
- Restore the packed project checkpoint, scripts, recovery output, corpus, and
  documentation from `39097bd736`, then hydrate a fresh local project.
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

Status: superseded by the verified packed-checkpoint/local-project workflow.
Do not create or maintain an unmanaged second working project. Source-bundle pinning,
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
| `undefined_type` | 18,286 | 3,651 | definitions, consumers, ABI-width families; compatibility spelling is now available |
| `raw_pointer_offset` | 2,169 | 1,007 | cross-function pointer families and complete records |
| `raw_indirect_call` | 1,888 | 775 | stored callback targets and physical vtable slots |
| `packed_or_unaligned_piece` | 0 raw partial tokens | 0 | exact exported pieces now use audited runtime helpers; semantic packed-member refinement remains |
| `return_width_artifact` | 292 uses | 103 | whole-CFG EAX/x87 and caller-consumer evidence; declarations are no longer double-counted |
| `unresolved_register_input` | 474 | 133 | boundary ABI, SEH/setjmp, and true live-ins |
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

The compatibility layer covers 34,786 occurrences and compiles as a C++17
header. It deliberately leaves every use in the readiness inventory and does
not promote a byte offset to a class field. The example ownerless receiver at
`00717910` now uses `STField<RecoveredSourceFamily_dibcopy *>(this, 0x28)`:
the member value type is proven, while the receiver identity is not. A broad
database receiver-record experiment was rejected after the ABI gate reported
22 hard downstream regressions; no part of that mutation was retained.

The accepted headless export keeps semantic Program hash
`b5ccc04d4b3302db3a4dfdc519371fb1e3feefb6d21c7a3e8d4a2f371dec5ed4`,
contains 10,400 function records and 5,720 bodies, and passes both export and
ABI gates. The deterministic declaration/translation-unit generator is now
implemented; see `docs/compile-readiness.md`.

### Q-045 Assemble the accepted corpus into a deterministic source tree

Status: implemented offline. `tools/st_source_tree.py` verifies the passed
receipt and exact manifest hash, renders exported datatype paths in dependency
order, declares referenced globals/imports, assigns every internal function the
stable free symbol `st::fn_ADDRESS`, carries external identities from
`call_relations.jsonl`, and atomically emits `src/ST.exe`.

The current tree contains all 5,720 bodies in 318 translation units. Embedded
and recovered debug evidence places 1,044 bodies under original paths; 4,676
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

The accepted corpus materializes 2,678 byte views, 780 physical-vtable wrappers,
and 1,292 ordinary source methods. It also resolves 247 exact address-taking
uses where an image object and a C++ record type share a name. A fixed Apple
Clang C++17 probe capped at 64 errors per translation unit passes 178 of 318
units and maps 2,196 of 2,213 retained errors to function addresses. The former
weak-call-boundary cluster is closed generically: call-argument mismatches fell
from 1,226 to zero and assignment mismatches from 1,426 to 72. The next queues
are undeclared identifiers, pointer indirection, non-callable values, and
invalid operands. Treat the cap as a comparison baseline, not a complete error
total.

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
- compiler audit at 64 diagnostics per TU: 69/318 pass, 4,762 errors, 4,757
  address-mapped; 828 fewer errors than the preceding 5,590-error baseline.

The latest compiler-driven layer closes two broad declaration causes without
adding image addresses or game-specific type lists. Exact exported datatype
paths now preserve global arrays and records in generated declarations, cutting
scalar-subscript diagnostics from 1,138 to 76 and missing-record-member
diagnostics to 43. `STGlobalDataAnalyzer` additionally recovered 77 narrow
character globals from exact bounded `REPNE SCASB` machine scans after an
earlier call-boundary quorum recovered 14 more; both analyzer/applier pairs now
converge with zero enabled rows. Source generation resolves address-coded
function leaves by entry address and removes 116 stale line-wrapped owner
qualifiers after rewriting them to `st::fn_ADDRESS`.

Latest accepted corpus state:

- semantic hash `b5ccc04d4b3302db3a4dfdc519371fb1e3feefb6d21c7a3e8d4a2f371dec5ed4`;
- manifest `6847961dcc13a9c6d104a63a7f88383ba13815fa70cd98c5267d4c4966029ce3`;
- accepted export run `51989204f2f3f306c556cf4ef551f67584b92210595ac8c502cc353529213d5b`;
- 10,400 functions, 5,720 bodies, zero failed bodies, 2,737 typed vtable slots;
- export and ABI gates: zero errors and zero warnings;
- fully warmed full-export duration: `00:21:24`, with all 10,400 bodies and all
  5,720 function-quality analyses reused.

The character scan now follows every forward CFG path from an exact EDI global
load to a common zero-AL `SCASB` tail. The first full pass applied 48 additional
character-storage facts, including switch cases which the old eight-instruction
linear window could not reach; the confirming analyzer has zero enabled rows.

The offline source layer closes four broad assembly causes without introducing
image-specific lists: 145 invalid address-coded global spellings, 78 external
address-taken labels, 17 calls uniquely resolved by exported arity, and 40
lexically closed exporter-tagged stack-slot lifetimes. `CONCAT`/subpiece/carry
runtime operations are inline templates rather than comma-sensitive macros.
The 64-error-per-TU compiler audit now passes 178/318 units and retains 2,213
errors, 2,196 address-mapped; no syntax diagnostic remains. The last malformed
`DArrayAt` was not papered over: the exporter detected its impossible arity,
freshly decompiled the body, and tightened alias recognition to standalone
assignment statements.

The call-boundary/lifetime pass reduced assignment diagnostics from 1,426 to 72
and call-argument diagnostics from 1,226 to zero without class-, method-, or
address-specific rules. The next largest compiler clusters are 888 undeclared
identifiers, 354 pointer-indirection errors, 261 non-callable values, and 146
invalid operands. Mixed pointer/scalar merge groups, declaration identity, and
the 1,888 raw indirect calls must be repaired from machine/call-boundary
evidence rather than hidden behind generated casts.

The analyzer cache now covers 24 expensive read-only nodes using their script,
semantic Program, dependency, and artifact fingerprints. A fully warmed no-op
run leaves `Program changed=false`; appliers remain authoritative and all final
fixed-point, evidence, ABI, and export gates still execute. Do not extend the
cache to a new analyzer unless its exact semantic dependencies and complete
output set are declared.

### Q-048 Recover output lifetimes, non-switch states, and exact grid division

Status: implemented, runtime-confirmed, and accepted. Full-width generated
scalar fields now survive contained low-word views; complete narrow partitions
retain their existing higher-priority proof. Prototype propagation recognizes
the post-call value of an incoming stack slot only after a complete definite
out-parameter write, and exact trusted pointer-producing EAX paths may repair a
generic return boundary. Comparison-only class-state fields include bounded
load/compare and `DEC/SUB` equality chains plus exact register constants.

`STRubbishC::GetMessage` now uses direct signed `int` members at `0x1D5/1D9/1DD`,
a three-value enum at `0x1FA`, a `uint` saved-data length, and a `byte *` result
from `0062F940`. Its full coordinate conversions render through
`STBiasedDiv16`. Across the corpus the exact two-branch normalizer reduced the
raw `0x28c1979`/`0x51eb851f` family from 511 to 219 occurrences and emits 369
helper calls. Remaining alias-mismatched and split-result forms are the next
SSA-lifetime presentation queue; unrelated negative-multiplier scale
calculations are explicitly excluded.

Accepted state: semantic hash
`76982f60fdd65a328a929e0995e61dde20d94ba44feead0fd812518e0c55c32d`, corpus
manifest `f3e435c54509e60165fb935a02a57084895dddc7b0c68cc550adfdd7fa7ee26c`;
10,400 functions, 5,720 bodies, zero failed bodies, 2,737 typed vtable slots,
and zero export/ABI warnings or errors.

### Q-049 Recover source-bracketed static library helpers

Status: implemented, runtime-confirmed, and accepted. A raw four-argument
function-table call in `0075FA00` initially appeared to be an untyped C++
vtable call. Machine argument setup and the surrounding `jquant1.c` anchors
instead identify the function as a missed static IJG JPEG helper; its slot is
an ordinary memory-manager callback, not a `__thiscall` virtual method.

`STLibraryAnalyzer` now classifies a static helper only between its nearest
exact source anchors when both anchors name the same normalized compilation
unit, the helper has a direct caller, and every direct caller remains inside
that closed interval or is independently classified as the same library. This
recovered 96 linked-library helpers without conflicts, including five helpers
inside the `jquant1.c` interval. It does not perform unrestricted call-graph
closure and therefore does not consume indirect application callbacks.

Accepted state: run
`3af397a8ad99b62a8119ee85de446470e1ef4cce6dc1d2f18fccdcd589d8f980`,
semantic hash `b5781d678f5958c4addf367f089811c7953a2eaaaaa43d6b5cdad943f81cac67`,
manifest `9ae4850a02520eb5eb8c2e91af12effda2495f49e69a1916f37c0416407adaa2`;
10,400 functions, 5,624 game-owned bodies, zero failed bodies, and 2,737 typed
vtable slots. The export gate accepted all 96 explicit library exclusions with
zero hard regressions; its four warnings are improving stage transitions. The
ABI gate reports zero errors and warnings.

### Q-050 Recover fixed and dynamic stack-storage semantics

Status: implemented, runtime-confirmed, and accepted. The canonical VC6 x86
stack probe is now discovered from its complete machine body rather than an
image address or old symbol. `STUtilityFunctionApplier` attaches Ghidra's
built-in `alloca_probe` call-fixup, so callers are decompiled with a dynamic ESP
adjustment instead of treating the helper as an ordinary zero-argument call.
The semantic Program ledger and address-stable caller fingerprints include the
non-empty fixup, while absent fixups remain sparse and do not invalidate the
rest of the corpus.

`STStackObjectAnalyzer/Applier` separately classifies exact fixed
EBP-relative `REP STOS` spans and dynamic probe sites. The accepted scan found
249 fixed zero spans and 105 dynamic-allocation sites across 5,624 game-owned
bodies. Of the fixed spans, 232 intersect another Listing local: Ghidra cannot
represent both lexical lifetimes over the same physical stack bytes, so these
remain review/presentation evidence rather than destructive variable
replacement. Eight raw fixed roots now render as deterministic
`stack_bytes_neg_OFFSET[N]` byte-storage objects. Residual raw-stack references
remain in 95 functions and are kept distinct as dynamic allocation, SEH,
slot-reuse, or not-yet-classified debt.

Concrete machine examples establish the boundary. `006971B0` computes
`field_583B * 4`, calls the recovered stack probe, stores the resulting ESP, and
indexes the allocation in four-byte units; Ghidra now emits the
`alloca_probe` injection but still reports that it cannot fully track the
dynamic spacebase. `005D1400` reserves a fixed frame and zeroes exactly
`0x451` bytes at EBP-relative `-0x67c` (Ghidra stack offset `-0x680`), while a
later lexical local begins 0x40 bytes inside that span. `006D63E0` uses a raw
slot as compiler SEH/saved-stack bookkeeping and is deliberately not promoted
to an ordinary source array.

Accepted state: run
`7e8d052cb16c9d3925800a76e4d63e96dd362b1478285fb2b4a1d0570a564daa`,
semantic hash `cf7c5c8b081950dd4d95667fcf9e953005336dea1034ffd5ef7ee7addc89db12`,
manifest `af110f689c9bdfe2ab4a221a87b7d6da60ce4076f792ac2f3e0f5dcf01619a9c`;
10,400 functions, 5,624 bodies, zero failed bodies, and 3,192 typed vtable
slots. The corrective export reused 10,398/10,400 bodies, passed both gates
with zero errors/warnings, and took `00:04:50`. The regenerated 64-error-per-TU
compiler audit passes 185/321 units with 1,598 errors, 1,581 address-mapped—47
fewer errors and two additional passing units than the preceding 1,645-error
baseline. A subsequent unchanged export reused 10,400/10,400 bodies and
5,624/5,624 quality analyses, left `Program changed=false`, and completed in
`00:01:56`.

### Q-051 Recover pointer-valued globals and singleton publication

Status: implemented, runtime-confirmed, and accepted. `STGlobalDataAnalyzer`
now proves a neutral pointer role without guessing a pointee when one exact
global value is dereferenced at least three times across two functions, or is
used as the receiver at least three times across two callers and two distinct
`__thiscall` callees. A concrete class pointer still needs independent evidence:
either all-predecessor CFG propagation of an unadjusted named method receiver
through exact register/EBP-stack copies into the global store, or a trusted
concrete-pointer function whose every RET returns that exact global or null.
Calls kill volatile receiver facts and CFG joins intersect them.

The accepted pass typed 19 global words, including 14 deliberately neutral
`void *` values and five concrete singletons: `TLOFakeTy`, `HelpStringTy`,
`SoundManagerTy`, `SndUnderAttMenegC`, and `AiBossClassTy`. The newly typed
singletons recovered 29 structural methods, one propagated prototype, eight
`SndUnderAttMenegC` DArray specializations, and one exact local-lifetime split.
The generated-type lifecycle then removed 1,014 unreferenced generated types.

Accepted state:

- run `6820bd712a048ce4e5b0294d740fe3c82bafdf4079d4384a80029686c1fe637f`;
- semantic hash `1f669587552e8e1c36194655261ec8115e211916c56b2db8bdcfc4d78e15cd67`;
- corpus manifest `0c74fa4297a743f7e423b089334381efd2f5051b4502b55046916c896d19036f`;
- 10,407 function records, 5,555 bodies, zero failed bodies, and 3,192 typed
  physical-vtable slots;
- export gate: zero hard regressions and six non-blocking warnings; ABI gate:
  zero errors and warnings;
- raw indirect calls decreased by 38, raw pointer offsets by 50, undefined
  occurrences by 176, and generic data symbols by 170;
- regenerated source contains 5,555 bodies in 322 translation units and 13,398
  audit rows; the fixed 64-error Apple Clang audit passes 193 units and retains
  1,435 errors, 1,418 mapped to stable function addresses.

### Q-052 Recover use-site pointer roles and callable table slots

Status: implemented, runtime-confirmed, and accepted. The new
`STIndirectCallsiteAnalyzer/Applier` attaches an address-stable Ghidra call
override only from exact physical dispatch consensus or a complete machine
fallback. The fallback derives argument count from pushes/cleanup, receiver
role from the table-load chain, and only neutral machine-width parameter/return
types. It never widens the shared vtable member. A script-owned stale override
is removed when the evidence disappears.

The first broad attempt exposed an important negative boundary: 195 machine-only
overrides in one huge function increased unresolved register inputs by 13.
Machine fallbacks are now capped at 32 per function; crossing that density
suppresses the entire fallback family while retaining exact physical-dispatch
rows. The accepted fixed point contains 145 enabled callsite overrides from
3,431 machine candidates, all unchanged on the confirming pass, and preserves
3,192 typed physical-vtable slots. Source generation turns 121 exact duplicated-
receiver sites into readable member calls through 26 non-virtual forwarding
wrappers and fails hard if that spelling regresses to a nested
`exact_indirect_callee` expression.

The same accepted layer extends generated global pointer roles from exact
pointer-producing stores plus repeated dereferences, isolates exact byte-pointer
addition lifetimes, prevents the legacy PointerShape pass from downgrading
modern contextual/source-family records, and splits 260 safely bounded reused
parameter lifetimes across 183 exported functions. Exact `REP STOSD` byte-pointer loops,
packed-bit access, signed division by four, and 16.16 rounding are presentation
normalizations only.

Accepted state:

- run `036d42eb0e484bbb8e66c58b122cf717ed21ee49f3a6115be79be02c267db8b5`;
- semantic hash `f5a831a90f31a838d0544d14c8d8bb95976a1aecae7346b11867562ab0027971`;
- corpus manifest `4cfa3a9f97a05ffcef736e9e0653fbf0531c142fe45eda7af6b3775cc211ab73`;
- `pseudocode_runtime.h` hash
  `e862abf02069a82b42314c50a439d81f7c9b31529c2ec493c0590f99e8e9196d`
  is bound by that manifest;
- 10,407 function records, 5,555 bodies, zero failed bodies, and export/ABI
  gates with zero errors and zero warnings;
- quality inventory: 1,722 raw indirect calls, 2,027 raw pointer offsets,
  17,609 undefined occurrences, 476 residual stack-slot-reuse occurrences, and
  407 unresolved register inputs;
- generated source contains 5,555 bodies in 322 translation units and 13,479
  audit rows. The fixed 64-error Apple Clang audit passes 203 units and retains
  1,109 errors, 1,092 mapped to stable function addresses.

### Q-053 Recover mutable byte-buffer parameters and pointer-to-byte bit writes

Status: implemented, runtime-confirmed, and accepted. `STPrototypeAnalyzer`
now refines a generic pointer parameter to `byte *` only after complete local
machine def-use proves byte-only reads and writes, permits exact `REP MOVS`
transport, rejects every wide dereference/escape, and observes at least two
exact direct callsites. The proof does not specialize heterogeneous loader
buffers or infer an array extent from the pointee.

The current scan audits 694 candidate parameter boundaries and is at a fixed
point with no new automatic rows. The representative `0040F4D0` boundary is now
`byte *`: four exact callers, three byte reads, six byte writes, one bulk-copy
transport, no wide dereference, and no escape. Packed bit set/clear spelling
remains an exporter presentation rule after pointer identity is independently
established.

### Q-054 Recover count-driven scalar stack output arrays

Status: implemented, runtime-confirmed, and accepted. The new
`STStackOutputArrayAnalyzer/Applier` identifies the final scalar-pointer
parameter of an ordinary non-varargs callee, reconstructs the exact
EBP-relative caller root, requires at least two exact output calls, and then
requires at least two consumers which test the returned count, walk the root by
the scalar width, and decrement the saved count. Capacity is bounded by
contiguous generic Listing storage up to the next distinct stack local; manual,
imported, stale, and overlapping semantic locals are preserved.

The broad scan found 712 scalar-output calls and 440 candidate stack roots.
Only one met the complete automatic proof: `AiEventClassTy::GetMessage` now has
`uint output_values_neg_34[8]` instead of a false local `DArrayTy` assembled by
High SSA. It is supported by 101 exact output callsites and 69 independent
count-driven consumer loops. The confirming pass reports `unchanged=1`; the
other 439 rows remain review-only (381 lack two exact calls and 58 lack two
complete consumers).

The exporter and source generator now enforce complementary readability gates.
Corpus casted-call results are canonicalized across line wrapping and
`ST_CALLSITE` comments before address-stable comparison. Generated source is
built in staging and compared per address for raw indirect calls, duplicated
receivers, generic pointer towers/declarations, stale member calls, malformed
qualified address symbols, and pointer-boundary casts before atomic promotion.
The export gate additionally requires zero standalone hard-text blockers, so a
runtime helper without its local compatibility include cannot be accepted.

Accepted state:

- run `0f7cf44df4071e1b63ca594a65fd321b4a018f97fc18d659ec156682961f1ba3`;
- semantic hash `5b9cb0ca21c5a22ae7bdc6449926c6635a71c962d8cba660e88412e981f25f6b`;
- corpus manifest `d2fdb70aff3d23363b3bbe1c3c03a0bcbdff5b075b356d0e00b3fb7d1b853006`;
- 10,407 function records, 5,555 bodies, zero failed bodies, 3,192 typed
  physical-vtable slots, zero export warnings/errors, and zero ABI warnings/errors;
- 1,452 canonical casted-call-result expressions form the new address-stable
  baseline; the old line-sensitive count remains diagnostic only;
- the fixed 64-error Apple Clang audit passes 243/322 translation units and
  retains 505 errors, 488 mapped to stable function addresses.

### Q-055 Close residual raw-vtable callable and pointer/word clusters

Status: implemented, runtime-confirmed, and accepted. The indirect-callsite
analyzer now applies its 32-override density guard to the fallback rows which
remain after same-pass physical-slot promotion. A uniquely owned raw physical
slot can use one dense-function consensus only after at least eight exact
unadjusted calls agree on one arity and return role; the corresponding per-call
fallbacks are removed from the same proposal.

For `AnonReceiver_0064A970VTable`, twenty exact two-word calls therefore recover
one physical `slot_20`, while seven sparse calls retain address-stable ABI views
for slots `10`, `14`, `1C`, `24`, `28`, and `2C`. The first apply changed eight
targets; the confirming pass reports `applied=0`, `unchanged=288`, with no
preserved rows or conflicts. No ST address, class name, or slot allow-list is
embedded in the heuristic.

The source generator also makes pointer-to-neutral-word transport explicit at
an exact recovered member-call boundary through `machine_word_boundary_cast`.
This is ABI presentation only and is recorded as
`exact_indirect_argument_boundary`; it does not specialize the recovered
parameter type.

Accepted state:

- run `b5d378b5465f4c62fc65ef612e22ea35ff7ce3bf21ebbb840586444d2bc9a587`;
- semantic hash `bfd44643f2e5256a9d5836adcbb3b547e17dbf6a8d41f24358ff514c2e258237`;
- corpus manifest `79df375cf2f9f1a65879b306993696c6d6ec1334af4404cf1b98a684145283cc`;
- export and ABI regression gates both pass with zero errors and warnings;
- all 82 focused generator tests pass;
- the fixed 64-error Apple Clang audit passes 244/322 TUs with 450 errors,
  436 address-mapped;
- calls through `void`, dereferences of `void *`, and compiler diagnostics in
  the `006D8A60` pointer/scalar family are each zero.

### Q-056 Ratchet source compilation and close wrapper/declaration failures

Status: completed for the source-assembly boundary.

Establish a deterministic address-stable compiler regression ratchet over the
existing ignored Apple Clang audit. Compare only the same C++17/MS-extension,
ILP32, 64-errors-per-TU configuration and the exact accepted source manifest.
Raw compiler output stays under `.st-local/`; the durable policy must contain no
machine path or wall-clock timestamp. A source-generation candidate is rejected
when a previously passing TU fails, a per-address diagnostic family increases,
an unaddressed error appears, or one TU newly reaches the diagnostic cap.

The first concrete family is generic, not an address patch. A physical vtable
slot may be conservatively variadic while the generated convenience member
wrapper is currently emitted from one zero-argument view. In `0066ACC0` this
produces 63 calls with one argument to `slot_00()`, accounting for most of the
76 current arity errors. Generate exact forwarding overloads or use-site member
wrappers from the already exported callsite ABI families; never narrow or widen
the physical slot merely to satisfy C++ overload resolution.

Close the remaining source-boundary failures in the same item:

- undeclared p-code/decompiler tokens such as `puRam00000000`, `register0x*`,
  `pARam*`, `unique*`, and stale switch labels must become explicit recovery
  rows or hard presentation blockers rather than leaking into generated C++;
- namespace/import/declaration identity must be resolved from exported records,
  including address-taken functions and host ABI records;
- declarations may be hoisted across `goto`/`case` only after exact lexical
  dominance and initialization checks;
- `STMessageArg` source facets may expose only the exact scalar/pointer union
  view already present at that message boundary.

Completion criteria:

- no translation unit reaches the 64-error cap;
- zero unaddressed compiler errors;
- zero generator-owned member-wrapper arity, missing declaration, stale token,
  or lexical-lifetime diagnostics;
- source readability remains per-address nonincreasing and all focused generator
  tests pass before atomic promotion.

Implemented result:

- `tools/st_compile_audit.py` emits a deterministic address-stable snapshot and
  compares the pinned compiler/configuration, every TU pass/cap state,
  `(function address, diagnostic family)` counts, and stable unaddressed
  families. A capped baseline TU is treated as a truncated prefix rather than
  false proof that its unseen families were absent;
- `config/source-compile-regression-baseline.json` is updated only by the
  explicit reviewed `--update-baseline` path. The Docker frontend exposes
  `compile-audit-baseline`; a failed gate cannot update it;
- variadic physical vtable members preserve their fixed ABI prefix and forward
  the remaining use-site arguments through a template pack. Fixed physical
  member arguments receive exact pointer/word boundaries without changing the
  Program ABI;
- exact address-valued functions, stale qualified globals, missing exact
  address-coded global declarations, CPUID p-code spellings, opaque High
  storage, narrow promoted incoming slots, scalar output slots, and exact
  `STMessageArg` facets are assembled generically from exported identity/type
  records;
- the declaration detector no longer mistakes a preceding `LAB_*:` label for
  a C++ type. Unsafe goto/case lifetimes are hoisted only when their machine
  storage width or incoming integer promotion is independently exact;
- pointer-typed reused SSA coordinates are converted at the `STGridAt3D`
  machine-word boundary, so template diagnostics retain a function address.

Accepted source-only state:

- source manifest
  `374b34119f6743afee551b66365df444ee0f876d0f131380f41ff9a31f9fe0b2`;
- tracked baseline SHA-256
  `b9f8e86f012dd4278f826d2eb491d56cd312881c9635b0e81f6d87b417dcb3ca`;
- pinned Docker Clang audit: 258/322 translation units pass, 329 errors remain,
  all 329 mapped to stable function addresses, no TU reaches the 64-error cap,
  and the regression gate passes with zero regressions;
- zero compiler `undeclared_identifier` diagnostics and zero unaddressed
  diagnostics. The former 63-call variadic-wrapper arity family is gone; the
  remaining 11 arity diagnostics belong to ten explicit address-stable ABI
  review sites;
- 103 focused Python tests pass, `bash -n` passes for the Docker frontend, and
  the atomic per-address readability gate passes.

### Q-057 Separate value-domain lifetimes and close return ABI contradictions

Status: complete as an independent acceptance layer. Q-058 and Q-059 are also
complete, but neither the successful Q-059 aggregate pass nor its zero-error
C++ compile was used as evidence that Q-057 was closed.

Use normalized compiler diagnostics only as an address-stable discovery queue.
For every enabled repair, re-prove the machine/p-code anchor in Ghidra. Extend
local-lifetime recovery to distinguish pointer, scalar, floating, DArray,
stack-output, and post-call values which share one Listing local or stack slot.
A whole-local type is forbidden when the domains are not one persistent High
Variable; use a dominance-safe exporter lifetime only when Ghidra cannot
represent the split.

Initial representative families are:

- `0064A970`: callback results currently merge `int *`, `byte *`, and floating
  values;
- `00548C40`: an output pointer and later x87/float value share storage;
- `00605B60`: a scalar switch domain is rendered as `undefined1 *`;
- `00652810`: DArray, scalar, pointer, and count-driven output lifetimes still
  collide after the recovered fixed output array;
- functions whose current `void` return is consumed as a scalar or pointer.

Return refinement continues to require complete callee return-path evidence and
complete caller consumption. String-like `char *` and binary `byte *` parameters
must be distinguished from full def-use and unanimous call-boundary consumers;
the C++ compiler's signed-char rules are not semantic evidence.

Completion criteria:

- the final source tree contains no machine-proven pointer-to-float,
  float-to-pointer, pointer-as-scalar/switch, void-value consumption,
  integer/EAX-versus-x87 return, wrong-width EAX/AX/AL return, incoming-parameter
  retyping, or merged pointer/scalar/DArray/output-buffer/post-call lifetime
  contradiction;
- a dedicated address-stable Q-057 closure audit checks the live Ghidra Program,
  machine/p-code anchors, call boundaries, and generated C++. Each row records
  function, storage/local/parameter, conflicting value domains, definitions and
  consumers, the selected repair or exact rejection reason, and one of
  `resolved`, `neutralized`, `review`, or `conflict`;
- compiler diagnostics are discovery input only. Every Program mutation is
  supported by instruction/p-code, calling convention, storage, and complete
  required caller/callee coverage;
- distinct machine lifetimes are split by `STLocalLifetimeAnalyzer/Applier`
  only at a stable anchor. An exporter-only lifetime is allowed only with exact
  dominance, no crossing label, and no stable Ghidra representation. One late
  use never licenses whole-local typing;
- an unknown semantic type remains neutral machine-word storage with exact
  per-use views. Neutralization is acceptable; an invented pointer, scalar,
  class, or container type is not;
- return ABI changes retain the existing all-reachable-return-path,
  accumulator/x87-definition, and complete caller-consumption requirements and
  must pass the ABI regression gate without recursive proof through generic
  signatures;
- representative families `0064A970`, `00548C40`, `00605B60`, `00652810`, all
  current void-value consumers, and all compiler pointer-indirection/return
  diagnostics caused by merged lifetimes or return ABI are resolved or honestly
  neutralized;
- arbitrary generator casts, address allow-lists, whole-local retyping,
  compiler-driven prototype edits, zero/stub substitutions, deletion of the
  expression, and bare `USER_DEFINED` provenance cannot close a row;
- the only permitted residue is machine-correct neutral storage, an explicit
  review-only conflict with no safe automatic action, or an honest unresolved
  register/SEH live-in which has no false type and no contradictory source
  lifetime;
- the closure audit has no unresolved machine-proven contradiction, all safe
  proposals are exhausted, a confirming pass changes nothing, the final
  manifest compiles without Q-057 diagnostic families, and ABI, export,
  readability, and compiler gates pass without source casts masking a lifetime
  or return problem.

Accepted Q-057 result:

- `STValueDomainClosureAnalyzer` records 1,854 current machine-domain rows;
  1,757 retain their exact p-code anchor, 1,176 retain an exact call boundary,
  and none is a machine-evidence conflict;
- the joined closure contains 2,154 address-stable rows: 239 `resolved`, 547
  `neutralized`, 1,368 honest `review` rows, and zero `conflict`. Review rows
  preserve machine-correct neutral storage or ambiguous same-domain semantics;
  they are not unresolved machine-proven source contradictions;
- all 107 automatically applicable local-lifetime proposals are already at
  confirming `unchanged` state. The return-semantics pass has 97 review rows
  and zero automatically applicable proposal;
- source-only closure is limited to 244 complete exact CALL-operand families,
  28 incoming-parameter-slot lifetimes, 14 pointer/float storage views, nine
  output/post-call lifetimes, four pointer/switch views, and one phantom
  `void` assignment. The source audit joins every CALL view by function,
  p-code sequence anchor, resolved target, and operand; function-address
  coincidence alone cannot close a row;
- `00548C40` is neutralized by exact per-use boundaries, `00605B60` has the
  persistent scalar lifetime, `0064A970` is neutralized by exact machine call
  views, and `00652810` has six neutralized rows plus eleven explicit
  machine-correct review rows with no false shared source lifetime;
- the accepted Program semantic hash is
  `03c7a704cf53b541b1a04f45b46defa235c3ddcbf83e6ad40348b38c6383ce64`,
  the corpus manifest is
  `f4d5ba156d5fcaa65aa2a0428699870f67122d45ee39c1d5651dae51e8e6c512`,
  and the generated source manifest is
  `61783544f94bb833e902b34ef2b5c96d347db93e1dc34903319993af01ab6bdb`;
- all 328 translation units compile independently with zero errors and zero
  warnings. ABI, export, per-address readability, compiler regression, Q-057,
  revalidated Q-059, and deterministic snapshot round-trip gates pass.

### Q-058 Recover callable ownership and indirect-call families

Status: completed. The first CFG-aware polymorphic-receiver layer is accepted
locally: reaching-definition analysis now follows convergent predecessors and
callee-saved receiver transport instead of stopping at conditional branches.
It recovered 54 exact slot-`0x2c` dispatches in the paired object registration
functions without changing their neutral Listing parameter ABI. Export renders
those address-stable callsite proofs as `STGameObjC::vfunc_2C` member calls and
uses the same unanimous physical-base view for exact same-width fixed members.

The same pass recovered the sentinel-varargs 128-bit set builder from its
machine loop and 42 four-word global registries through closed copy/bitwise
dataflow. All 42 are `uint[4]` aggregates, including formerly undefined-memory
symbols, and exact word membership tests render through an element-width-aware
`STBitTest`. No image address, game type, or semantic-name allow-list is used.
The accepted corpus moved raw indirect calls from 1,509 to 1,455 and generic
data symbols from 14,452 to 14,210; the ABI and export gates pass. The next
Q-058 pass partitioned the remaining callsites by physical slot, stored
callback, callback parameter, function table, COM/external interface, linked
library runtime, and unresolved receiver provenance.

The accepted callable-receiver pass audited 95 dense parameter-origin groups
and installed the sole complete persistent structural family: 41 exact calls
through one slot in `00493D10`. Six storage-reuse families, three unresolved
callee-saved argument families, and all incomplete or ABI-conflicting groups
remain review-only. A separate address-local common-base proof recovered 35
calls in `STGameObjC::FUN_004845e0` across primary slots `0x2c`, `0x7c`, and
`0xbc` without persistently changing the neutral parameter. Derived extension
slots remain raw until their physical owner is independently known.

The callback-field machine audit now records 43 exact function-address stores
and ten generated-field candidates. None currently completes the full stored
target, trusted ABI, same-member indirect-call chain, so all ten correctly stay
disabled instead of manufacturing callback types.

The next accepted Q-058 slice fixed two missing evidence bridges. Callable
partitioning now recognizes `LIBRARY`/`LIBRARY_*` Function tags instead of
depending on a `Library::` namespace spelling, reclassifying 142 tagged runtime
sites without mutating their ABI. More importantly, exact parameter flow from a
hash-intact generated partial structure may now select one unique physical base
for address-local dispatch when every component is an exact offset/width prefix
and every slot ABI agrees. This recovered 14 calls in `00435B90` across
`STSprGameObjC` slots `0x2c` and `0xec` while leaving the reused `int *`
transport parameter untouched. A confirming pass applied nothing further.

The accepted corpus now has 1,318 raw indirect calls, preserves all 3,192 typed
physical slots, and passes ABI/export gates with zero errors or warnings. The
generated source audit passes 280 of 334 translation units and retains 192
compiler errors. The next Q-058 slice should recover exact typed-producer,
out-parameter, and container-element receiver identities without imposing
whole-local types on mixed SSA, reused storage, or neutral `DArrayTy` ABIs.

Partition the remaining raw indirect calls into physical vtables, stored
callbacks, callback parameters, ordinary function tables, external/COM-style
interfaces, and linked-library runtime code. Reuse the existing exact store,
load, receiver, stack cleanup, return-consumption, source-bracketing, and target
family evidence; a raw call or equal table geometry alone is insufficient.

Recover ownerless `__thiscall` functions only from independent caller-family
propagation plus unique physical-vtable agreement and sufficient receiver
extent. Do not infer class ownership from a semantic-looking name, one caller,
or source adjacency. Shared physical slot consensus outranks per-call overrides;
use-site overrides remain an address-stable last-resort ABI view and must be
removed when the physical slot becomes independently proven.

Completion targets, used as direction rather than permission to weaken proof:

- reduce the current 1,318 raw indirect calls to below 500;
- reduce ownerless `__thiscall` functions from 950 to below 400;
- reduce canonical casted call results by at least half;
- preserve every manual/imported ABI, all 3,192 accepted typed physical slots,
  and the per-function readability baseline.

The final accepted Q-058 checkpoint satisfies those targets without weakening
the evidence policy. The body corpus contains 459 raw indirect calls, 305
ownerless `__thiscall` functions, and 311 canonical casted call results, down
from the recorded 1,318, 950, and 1,383 reference counts. All 3,192 physical
vtable slots remain typed. Exact call-result views, physical/member receiver
views, callback and callable-local families, DArray element receivers, linked
library boundaries, and source-generation call boundaries are address-stable;
dense or conflicting fallbacks remain explicit review rows. The accepted
Program fingerprint is
`a7939e1e5340f76bc779b9617a409135d5be18cfcac6d040fa320fc1bf495d99`
and the corpus manifest is
`c6e099a7a23a3f36508cd7463210d095031021f1d8ac92822f6fb772ca1598db`.
Export, ABI, readability, snapshot round-trip, and compiler-regression gates
pass. The generated source audit passes 312 of 328 translation units with 35
addressed residual errors and zero regressions. A confirming pass has no
additional Q-058 application work; the remaining callable sites have explicit
rejection evidence and move forward as Q-059 or later semantic debt.

### Q-059 Consolidate aggregates, executable coverage, and semantic identities

Status: complete; Q-058 is complete and Q-057 remains a separate acceptance
layer.

After ABI and ownership stabilize, consolidate exact pointer layouts and
anonymous records through cross-function flow, complete copy/zero spans,
discriminator-local union facets, array stride/bounds, allocation roots, and
global producer/consumer evidence. Treat DArray runtime stride, packed transport,
and adjacent global storage according to their existing safety boundaries.
Geometry or a matching source basename alone must never merge identities.

Then classify remaining `DAT`/`PTR`/`UNK` objects as scalar, string, pointer,
array, table, or record before attempting semantic names. Recover additional
function boundaries from the 83,886 current meaningful unclaimed executable
bytes only when control flow, references, prologue/epilogue, or SEH funclet
evidence agrees. Control-flow restructuring and semantic field/function naming
are the final presentation layer; optimized shared tails and genuinely unknown
names may remain explicit review debt.

Acceptance criteria and work order:

1. Every translation unit in the final accepted manifest compiles independently
   with zero errors. The current 328-TU count is descriptive, not fixed; linking
   and image-backed runtime definitions remain a later milestone.
2. No raw pointer offset or anonymous shape may block compilation, violate the
   ABI, or require an unproved public type.
3. All automatically provable aggregate/layout candidates are exhausted. A
   confirming analyzer pass must propose no further safe application.
4. Every residual raw pointer offset is classified by stable function/address
   and exact reason: proven field not yet applied, packed/unaligned or union
   view, intentional byte cursor, dynamic DArray/runtime stride, array/pointer
   walk, or insufficient independent evidence.
5. Every residual anonymous shape records owner/provenance and the reason a
   merge is rejected. No pair which satisfies the current strict identity and
   compatibility rules may remain separate.
6. Geometry, source basename, image address, and metric reduction are never type
   or merge evidence. Manual/imported/`USER_DEFINED` protection, ABI/readability
   gates, and per-address nonincreasing policy remain mandatory; no address
   allow-list, hand-authored game type, arbitrary cast, or stub is permitted.
7. Every residual generic name, ambiguous layout, and meaningful unclaimed
   executable range is present in a complete address-stable review queue with an
   explicit rejection reason.
8. Q-057 lifetime/return contradictions which cause a compiler blocker are
   closed through the separate Q-057 evidence policy, never hidden by a
   source-generator cast.
9. After the last change, run a confirming no-change pass, ABI/export/readability
   gates, source generation, the full zero-error compile audit, snapshot creation
   and verification, and only then mark Q-059 complete.

The historical `<500` raw-pointer-offset and `<1000` anonymous-shape figures are
progress indicators only. Record the final achieved counts, but never tune the
corpus or weaken evidence policy to cross them. Work priority is: close current
compiler errors; recover the largest proven aggregate/layout clusters; exhaust
safe raw-offset and anonymous-shape proposals; then materialize the complete
review queues for the legitimate or unprovable residue.

Accepted Q-059 result:

- all 328 translation units in the final manifest compile independently with
  zero errors, and the compiler regression gate passes;
- the confirming full recovery pass has zero aggregate/layout mutations and no
  enabled safe pointer-shape or type-family proposal;
- 1,103 residual raw pointer offsets are fully classified by stable address:
  334 array/pointer walks, 21 dynamic DArray/runtime strides, 165 intentional
  byte cursors, 218 packed/unaligned or union views, and 365 sites without
  sufficient independent evidence. None blocks compilation or ABI recovery;
- 1,337 residual anonymous-shape occurrences have owner/provenance and explicit
  rejection evidence; the closure audit finds zero remaining safe merge pair;
- 123,594 residual generic identities and 1,843 meaningful unclaimed ranges
  (67,361 bytes) are present in complete review queues rather than being hidden
  behind invented names or types;
- the accepted Program fingerprint is
  `0c968ea8b4bda3df00f8692b19201788db1b245d22c1256efa238b38287c927c`,
  the corpus manifest is
  `37981da755a051f0da39ba7ef9c9da083f498265c27540a9bb8bc9dc64981c2b`,
  and the generated source manifest is
  `66671e3355a0513cdfad1e9c38576169725de4cf6ada0b5756dfc3176862d039`;
- export, ABI, per-address readability, Q-059 closure, snapshot round-trip, and
  compiler regression gates pass. The canonical packed snapshot is the verified
  deterministic image of that same semantic Program.

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
