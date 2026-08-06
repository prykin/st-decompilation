# Ghidra recovery workflow

This document explains how the Submarine Titans recovery scripts are connected
to Ghidra, what they change, which files they expect, and why the project uses a
proposal/apply/export pipeline.

The supported and tested setup is **Ghidra 12.1.2 with JDK 21**.

## Scripts, not a compiled Ghidra extension

The files under `scripts/` are Ghidra Java scripts. They are sometimes referred
to informally as plugins, but they do not use the compiled extension packaging
mechanism and do not need a Gradle build or installation into the Ghidra
application directory.

Ghidra compiles a Java script when it is first used or after it changes. Any
resulting `.class` files are local build artifacts and are ignored by Git.

## Connecting the scripts to Ghidra

1. Install and start Ghidra 12.1.2 with a compatible JDK.
2. Hydrate the ignored local project at `proj/st.gpr` from `ghidra/ST.exe.gzf`, then open it in CodeBrowser.
3. Open **Window → Script Manager**.
4. Open **Manage Script Directories** from the Script Manager toolbar.
5. Add the absolute path to this repository's `scripts/` directory.
6. Refresh the Script Manager.
7. Search for `ST` or browse the `SubmarineTitans.Recovery` and
   `SubmarineTitans.Export` categories.

The script headers also register commands below **Tools → Submarine Titans**.
Running a script from either location is equivalent.

No source files should be copied into the Ghidra installation. Keeping the
script directory inside the repository makes script revisions and analysis
outputs versionable together.

## Canonical paths

The examples below assume the repository is checked out at `<repo>`:

```text
recovery root:       <repo>/recovery
program recovery:    <repo>/recovery/ST.exe
corpus root:         <repo>/decomp
program corpus:      <repo>/decomp/ST.exe
packed checkpoint:   <repo>/ghidra/ST.exe.gzf
Ghidra project:      <repo>/proj/st.gpr
```

When an **analyzer asks for a directory**, select `<repo>/recovery`. It creates
or updates the `ST.exe/` child itself. Most analyzers also accept the existing
`<repo>/recovery/ST.exe` directory.

When an **applier asks for a file**, select the exact TSV named below. Sibling
proposal files are located automatically where required.

When `STDecompExport` asks for a directory, select `<repo>/decomp`.

## Path-free recovery pipeline

Normal refreshes no longer require launching every script or selecting every
TSV manually. Run `STRecoveryLauncher` from Script Manager or
**Tools → Submarine Titans → Run Recovery Pipeline**. The launcher
writes `recovery/ST.exe/pipeline_bootstrap.log` before asking Ghidra to load and
run `STRecoveryPipeline`; this preserves provider/runtime diagnostics after the
source bundle has compiled. Because Script Manager is connected directly to
this repository's `scripts/` directory, the pipeline
infers `<repo>` from its own source path and passes these arguments to every
child script:

```text
analyzer output:  <repo>/recovery
applier input:    <repo>/recovery/ST.exe/<exact proposal>.tsv
export output:    <repo>/decomp
```

Only one mode is selected; no file or directory dialogs follow:

| Mode | Purpose |
| --- | --- |
| `core` | Baseline/debug/message recovery followed by bounded unclaimed-code and factory/vtable/constructor/class fixpoint loops. This is the default. |
| `deep` | Slower ownership, ABI, prototype, global, pointer-shape, enum, provenance, control-flow, and library propagation. Requires current core outputs. |
| `full` | Run `core` and then `deep`; does not start the expensive corpus export. |
| `export` | Stabilize script-owned parameter storage, repair stale return rollbacks, stabilize the final indirect/vtable ABI layer, record and verify the current Program plus recovery artifacts, snapshot the last accepted corpus, transactionally export into `<repo>/decomp`, and run the regression gate. |
| `full-export` | Run the complete recovery pipeline, perform the same final ABI synchronization/evidence checkpoint, transactionally export, and run the regression gate. |

The pipeline invokes ordinary Ghidra scripts through `runScript`; it does not
bypass any analyzer/applier validation. In particular, it never changes an
`apply=0` flag, and every child applier still checks manual sources, generated
hashes, stale baselines, and transaction boundaries. Optional curated/audit
inputs are skipped when absent. A failing step stops the sequence before any
downstream applier can consume stale output. All mutating finalization and the
export-only ABI repair finish before `STManualTypeAuditAnalyzer`; that read-only
audit is the last Program consumer before the evidence ledger is recorded.

The regression gate compares exported bodies by function address. A body may
leave the corpus only when that same function is now explicitly classified as
`LIBRARY`; all other per-address body losses remain hard regressions.

`STAbiRegressionGate` is the earlier, cheaper companion to that export gate. It
runs after ABI/indirect-call barriers and before broad pointer, DArray, and class
consumers. It does not mutate the Program. Against the manifest named by the
last accepted receipt it checks every already typed accepted vtable slot for
calling-convention, receiver, argument-count, type-width, varargs/noreturn, and
concrete-to-generic degradation. Physical aliases are merged by table address
just as in the export gate; an accepted address-less dispatch view is keyed by
its type path. The gate
also rejects a new physical-class-vptr to synthetic-dispatch transition. A small
sentinel set is freshly decompiled to catch increases in
`extraout_*`, `in_stack_*`, `unaff_*`, and selected `CONCAT*` artifacts before a
whole-corpus export is attempted.

Persistent sentinel policy lives in
`config/abi-regression-rules.tsv`, not in Java. Add a row when an export
regression reveals a useful high-fanout or ABI-boundary canary. The engine reads
the accepted signature and artifact counts from the accepted corpus, so normal
baseline values are not copied into the rule. A deliberate ABI change must
first fail and print exact baseline/candidate fingerprints. After reviewing the
machine evidence, add only that exact pair to
`config/abi-regression-transitions.tsv`; broad disables and wildcard transitions
do not exist. The gate reports an unused transition as a warning so it can be
removed after the candidate becomes the accepted baseline. A new class-vptr to
synthetic-dispatch substitution is a non-waivable invariant, not a reviewable
transition. The pipeline runs this gate once before any recovery mutation and
again at ABI barriers. Each ignored run archive contains a `policy/` copy of
both TSV files in addition to their hashes in `run.json`, so an old report can
be reproduced against the exact rules which governed it.

Before the first pipeline mutation, Ghidra's configured Java script provider is
asked to load every repository `ST*.java` source. Results and source hashes are
appended immediately to `build_manifest.tsv`, with full provider diagnostics
under `build/`. Any failure blocks the run. Each later `runScript` invocation
tees its complete script stdout and stderr to `steps/<sequence>-<script>/`,
alongside `step.json` and a full `exception.txt` on failure.

`STRecoveryPipeline` closes its own empty implicit `GhidraScript` transaction
before invoking children. Every read-only analyzer/exporter also closes its
unneeded implicit wrapper immediately, and every applier does so before opening
the explicit transactions shown in its source. This is required by Ghidra's
transaction semantics: aborting any nested entry aborts the entire shared
database transaction, even though later scripts can still observe the temporary
state until the outermost entry ends. The pipeline records the Program
modification number around every child, rejects an unexpected open transaction,
and refuses success if observed mutations leave `Program.isChanged()` false.

The orchestrator lets normal Ghidra auto-analysis run, but waits for it to drain
both after a child and immediately before starting the next child. The second
barrier matters because a committed mutation can enqueue analysis just after
the preceding post-step drain observed an empty queue. The
hidden-this applier also drains it after each mutating row because namespace and
signature changes can wake a background analyzer while that short transaction
is ending. This prevents the analysis entry from bridging several independent
row transactions. Transaction failures include the status and exact open
subtransactions so a real script-owned leak remains attributable.
The drain does not rely solely on `AutoAnalysisManager.isAnalyzing()`: Ghidra
12.1.2 can clear that flag just before its `AnalysisWorkerCommand` closes the
outer `Auto Analysis` Program transaction. A short bounded wait covers that
closure window. The boundary check itself retries that exact outer transaction
once more if it appears between the drain and the check. Ghidra may also retain
the just-ended applier as the named outer entry while its only open
subtransaction is `Auto Analysis`; the pipeline waits for that child to close,
then verifies that the applier entry disappeared as well. A real leaked applier
transaction therefore still fails as soon as it remains open without that
analysis child, and any other subtransaction fails immediately.

Bootstrap and other fast structural loops are bounded to 24 passes; expensive
whole-program propagation is bounded to 12. Those bounds are emergency cycle
guards, not the normal stopping rule. After each analyzer/applier pair the
pipeline reconstructs recovery state from the current proposal and apply-report
TSVs and prints `proposals_enabled`, `proposals_review`, `changed`, `unchanged`,
`review`, `conflict`, and `error`. Only `changed` keeps the loop alive;
disabled/preserved/conflicting/error rows are terminal review state for that
automatic pass. A mutating status must also have changed the Program
modification number, so a false `applied` row cannot loop forever. The apply
report remains authoritative in the other direction: Ghidra may advance its
volatile modification counter when a row transaction is rolled back, so a counter
advance without a mutating status is logged as a diagnostic and does not keep the
loop alive. A remaining changing count after the bound is a hard failure, so an
unconverged database cannot be exported accidentally.
Successful mutating modes record a deterministic semantic Program
fingerprint, the diagnostic Ghidra modification number, the monotonic enum-domain
state, and hashes of every proposal/apply TSV in `automation_state.tsv`; export
verifies all of them before invoking `STDecompExport`. The fingerprint
covers loaded memory, disassembly, references, comments, functions, symbols,
data types, imports/exports, defined data, and bookmarks. The volatile
modification number is not used as cross-run identity. A legacy ledger with the
expected one-step counter drift is upgraded once after all TSV hashes verify.

Every invocation is staged under `<repo>/recovery/ST.exe/runs/.current` and
finalized under `runs/<overall-sha256>/`. The directory name has no timestamp; the
hash covers the semantic state, mode, outcome, and deterministic step results.
Run metadata deliberately records elapsed milliseconds, never a wall-clock date
or start/end timestamp. The final console line reports total elapsed time in
`HH:MM:SS`, with the hour component present even for runs shorter than one hour.
Only the three most recently finalized hash directories are retained, and
`latest_run.txt` points at the newest hash. An interrupted `.current` directory is
archived by its content hash on the next invocation. Each retained run contains
`pipeline.log`, structured `events.tsv`, `run.json`, `build_manifest.tsv`,
per-script provider logs, per-step stdout/stderr/metadata, per-pass proposal/apply
snapshots, final evidence/export artifacts, and full exception traces after a failure.
The root `pipeline_report.tsv` remains a latest-run compatibility view.

Before export the pipeline snapshots the previous central corpus indexes and
atomically marks `export_receipt.json` as `incomplete`. `STDecompExport` seeds an
ignored sibling staging tree from the preceding corpus, reuses matching
per-function fingerprints there, writes every root index and function artifact,
and only then swaps the complete tree into `decomp/ST.exe`. A script exception,
cancellation, or I/O error deletes the staging tree and leaves the preceding
corpus intact. Hard links are used when the local filesystem supports them;
otherwise staging falls back to ordinary file copies. Stale staging/rollback
directories from a killed JVM match `decomp/.*.export-*` or
`decomp/.*.previous-*` and are ignored by Git.

After promotion the pipeline runs `STExportRegressionGate`. The gate hard-fails incomplete
decompilation, a tagged `GetMessage` slot left as `void *`, erased per-slot
vtable function types, lost functions, semantic name downgrades, coverage
regressions, critical ABI/decompiler-quality regressions, and any generated
`CASE_*|CASE_*` enum expression. Generated vtable slots are compared by the
physical table address recorded in their provenance plus byte offset; a safe
deterministic type/field rename is not a false erasure. A default-name transition
is also accepted when the current function, or its terminal thunk target, carries
the exact `RECOVERED_HEURISTIC_IDENTITY` retirement marker. Other semantic
name losses remain hard failures. This invariant also catches the known
message-slot regression when the immediately prior corpus already contains it.
Expected changes between layout and semantic-naming stages are warnings. It writes
`export_regression_report.tsv` and replaces the incomplete marker with an atomic
`export_receipt.json` whose status is `passed` or `failed`. The baseline
also retains the pseudocode-idiom snapshot, so every changed quality row includes a
sample of the function addresses and signed per-function deltas instead of only
the corpus-wide total.

A failed gate does not promote the just-written corpus to the next baseline.
An exporter/gate exception leaves the receipt `incomplete`; a gate rejection
writes `failed`. In both cases the pipeline retains that run's `pre_export/`
snapshot (even when ordinary run-history pruning would remove it) and reuses
the snapshot on the next export. If an unaccepted receipt survives but its
accepted snapshot does not, export stops instead of silently blessing the
rejected or interrupted corpus.

For compatibility with runs made before the `incomplete` marker existed, the
pipeline also checks the run named by `latest_run.txt`. If its `run.json` says
`failed` and it contains `pre_export/manifest.json`, that coherent snapshot
wins even when the stale root receipt still says `passed`.

The export safety pass does not perform ordinary return-semantic discovery.
It only repairs a stale mutation carrying the analyzer's exact rollback marker;
new `leaf_void`, `ignored_eax_void`, pointer-return, and boolean candidates remain
the responsibility of `deep` mode. This prevents export from opening a
transitive `void`-inference fixed point immediately before decompilation.

Dispatch interfaces are audit metadata only. The analyzer may describe a
polymorphic tail shared by longer related physical tables, but the applier must
not install that view into a class vptr or type its synthetic tail slots. Old
`apply=1` dispatch proposals are refused. The one historical accepted
`STGameObjCDispatchVTable` remains a migration item; it is not a precedent for
creating another interface.

`Type bootstrap did not reach a fixed point` is a database-recovery failure, not
an export-directory failure. Do not delete `decomp/`: inspect
`type_bootstrap_apply_report.tsv`, update the scripts, and rerun the same
pipeline mode. Stale exported C files do not influence type inference, and the
next successful `STDecompExport` refreshes the generated corpus.

Appliers commit Ghidra transactions to the currently open `Program`, but the
pipeline deliberately does not call `DomainFile.save()` behind the UI's back.
After a successful mutating mode, use **File → Save** when the action is enabled.
If it is disabled, Ghidra's `Program.isChanged()` is already false and there is
nothing for that action to save. Close the CodeBrowser and project normally,
then reopen one newly recovered symbol as a persistence check before producing
the verified packed checkpoint; do not publish while the program is still open. The export-only mode does not modify the program database.

Standalone scripts retain their dialogs for targeted experiments and for using
nonstandard output roots. The path-free pipeline is the canonical routine
workflow.

## Why analyzers and appliers are separate

Reverse-engineering evidence is often strong enough to propose a type or name
but not strong enough to mutate the database blindly. The split makes each run
auditable:

```text
Ghidra database
    → read-only analyzer
    → recovery/ST.exe/*_proposals.tsv
    → review flags and evidence
    → transactional applier
    → apply report
    → refreshed Ghidra database
    → STDecompExport
    → decomp/ST.exe/
```

TSV is the review format because it is easy to diff and edit. JSONL carries the
same proposals for tools. Summary files provide counts, while apply reports
record what was applied, skipped, preserved, or rejected as stale.

Do not bulk-change every `apply=0` row to `1`. Disabled rows include ambiguity,
owner conflicts, stale hypotheses, generic underscore-prefixed functions, and
targets for which automatic modification would destroy useful manual work.

## Why export text instead of querying everything through MCP

A live Ghidra integration is useful for a small targeted question, but it is a
poor transport for the complete program: repeated tool calls spend tokens on
protocol framing, return overlapping context, and are difficult to review or
version. The checked-in corpus instead provides:

- stable function identities based on program name and entry address;
- compact, directly searchable C, assembly, JSON, and JSONL;
- Git diffs for every recovered name, type, comment, and relationship;
- dependency-scoped fingerprints so unchanged functions are not decompiled
  again;
- deterministic inputs that can be handed to different LLMs or local tooling;
- a durable record even when Ghidra is closed.

MCP can still be used for an exceptional interactive inspection. It is not
required for normal corpus generation or downstream source reconstruction.

## Review flags

Different facts are intentionally independent:

| Flag | Meaning |
| --- | --- |
| `apply` | Enable the proposal or table/field row itself. |
| `source_apply` | Add recovered source-file provenance to a function. |
| `name_apply` | Apply a proposed function, constructor, or field name. |
| `type_apply` | Apply a proposed field type. |
| `repair` | The prototype target was changed by an older propagation pass and is eligible for evidence-backed correction. |
| `create_apply` | Create an exact missing function boundary proven by a vtable or referenced direct-JMP chain. |
| `rename_apply` | Rename a reviewed vtable slot target. Never implied by creation. |
| `convention_apply` | Apply a recovered calling convention. |
| `signature_apply` | Apply a recovered function signature. |
| `return_apply` | Apply a recovered return type independently of the rest of a signature. |
| `parameter_apply` | Replace a proven receiver-only function's formal parameter list. |
| `repair_apply` | Remove a stale script-owned semantic owner/type when stronger aggregate evidence disproves it. |

For class fields, semantic types can be enabled automatically while names stay
review-only. Inspect `suggested_name`, `name_confidence`, and `name_evidence` in
`class_field_proposals.tsv`; set `name_apply=1` only for selected rows whose
containing field and class rows also have `apply=1`.

## Recommended full recovery order

The checked-in Ghidra project already contains the accumulated results. This
order is for refreshing the project after script changes or reproducing the
pipeline with the proposal files in `recovery/ST.exe`.

Always save or commit a known-good project state before running a new group of
appliers.

### 1. Baseline types and embedded debug symbols

1. Run `STTypeBootstrapAnalyzer`, then `STTypeBootstrapApplier`.
   - The analyzer discovers only the DArray, message, and system-class anchors
     from method sets, field accesses, reference geometry, and existing
     class/vtable evidence. Spatial and packed command layouts are not bootstrap
     types; later passes recover only observed fields.
   - The scripts contain no program-address or enum-value seed. Legacy packed
     projections are marked `ST_VIEW_ONLY`, never semantic anchors. Exact old
     applier-owned view parameters are neutralized to `void *`, and exact old
     applier-owned view stack locals are removed so SSA can infer independent
     lifetimes. Imported/manual locals and types without both provenance markers
     are preserved. A `USER_DEFINED` signature is otherwise demoted only with
     explicit legacy script/debug provenance; a matching function name alone is
     insufficient.
2. Run `STDebugSymbolAnalyzer`.
   - Directory: `<repo>/recovery`
   - Output: `proposals.tsv`, `debug_string_proposals.tsv`,
     `debug_calling_convention_review.tsv`, `summary.txt`
3. Review `proposals.tsv` and run `STDebugSymbolApplier`.
   - File: `<repo>/recovery/ST.exe/proposals.tsv`
   - The sibling `debug_string_proposals.tsv` is loaded automatically. It
     recovers short NUL-terminated printf formats which Ghidra's normal
     minimum-length discovery misses, such as `%s` at `007A4CCC`.
4. Run `STCallsiteConventionAnalyzer` when
   `debug_calling_convention_review.tsv` is non-empty.
   - File: `<repo>/recovery/ST.exe/debug_calling_convention_review.tsv`
   - Outputs: `callsite_convention_proposals.tsv/jsonl`,
     `callsite_convention_calls.tsv`, and `callsite_convention_summary.txt`
5. Run `STCallsiteConventionApplier`.
   - File: `<repo>/recovery/ST.exe/callsite_convention_proposals.tsv`

The debug analyzer uses embedded `ClassTy::Method`, source path, calling
convention, and diagnostic-line evidence. Address-specific semantic names are
not a bootstrap input; facts without independent evidence remain review-only.

Method evidence is parsed from the decoded string contents, never from Ghidra's
automatic `s_*_ADDRESS` label. Ghidra replaces spaces and punctuation in those
labels with underscores: for example, the diagnostic
`"STOctopusC::Bad direction"` becomes
`s_STOctopusC::Bad_direction_007cba88`, while the method corroborated by the
parallel crab implementation is still `STOctopusC::Bad`.

`__thiscall` is proposed only when the incoming `ECX` value is still live when
the body first uses it; temporary uses after `ECX` has been overwritten do not
count. Incoming `EDX` is tracked independently so a real `__fastcall` second
argument is not silently converted into a stack parameter. Older script runs
may already have assigned `__thiscall` more aggressively. Such functions are
listed in `debug_calling_convention_review.tsv`; they are never reverted
automatically because an instance method is allowed to leave `this` unused.
Allocation diagnostics are a narrower exception: `operator new`, `operator
delete`, and their diagnostic suffixes are retained as the Ghidra-safe
`operator_new`/`operator_delete` overload names. If an older analyzer run
provably produced the lossy leaf `operator`, the debug tag/comment still match,
incoming `ECX` is not live, every `RET` pops zero bytes, and no explicit
parameter is user-defined, the applier removes the synthetic receiver and
restores `__cdecl`. This migration does not authorize changing any unrelated
`USER_DEFINED` signature.

The callsite analyzer resolves every thunk leading to each review candidate and
audits all direct callers. It records explicit `ECX` preparation, a live
pre-existing `ECX`, caller-side stack cleanup, and the callee's `RET n` values.
When every observed caller reclaims the stack, the callee uses a plain `RET`,
and no caller explicitly loads an `ECX` pointer receiver, that unanimous stack
discipline takes precedence over incidental scratch-register uses of `ECX`.
Partial or mixed cleanup evidence remains review-only.
This can confirm an unused-`this` method or identify a likely static `__cdecl`.
`STCallsiteConventionApplier` changes only the strict unanimous case: at least
two calls, caller cleanup at every call, no positive `RET n`, and no explicit
pointer setup in ECX; the unanimous cleanup byte count must also equal the
explicit stack-parameter width. It rechecks the exact signature baseline and preserves
IMPORTED signatures. All partial or contradictory cases remain disabled.
Indirect virtual dispatch cannot be attributed to one concrete implementation
and is reported as a coverage limit rather than treated as negative evidence.

### 2. Messages and handler signatures

1. Run `STMessageIdAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STMessageIdApplier`.
   - File: `<repo>/recovery/ST.exe/message_id_proposals.tsv`
3. Run `STMessageHandlerAnalyzer`.
   - Directory: `<repo>/recovery`
4. Run `STMessageHandlerApplier`.
   - File: `<repo>/recovery/ST.exe/message_handler_proposals.tsv`

This creates and maintains the recovered `STMessageId` enum from `MESS_*`
strings and message dispatch comparisons. `STTypeBootstrapApplier` supplies the
common 0x20-byte `STMessage` envelope: the ID at `+0x10` and three four-byte
arguments at `+0x14`, `+0x18`, and `+0x1c`. Each argument is a union because its
pointer/integer/word interpretation depends on the message ID.

The handler pair then replaces script-generated `AnonShape_*`, `int`, and
`int *` parameters across the named `GetMessage` family with `STMessage *` and
normalizes generic non-void returns to `int`. It also recognizes the shared
`xor eax,eax; ret 4` default handler from its many named callers. Manually
refined semantic signatures and the proven `void` AI event handler are
preserved. Every exact recovered handler also receives the idempotent
`RECOVERED_MESSAGE_HANDLER` provenance tag. Already-correct signatures missing
only that tag are repair proposals, so legacy database state is upgraded without
rewriting the prototype. Run this before vtable recovery so slot definitions
inherit the common signature.

### 3. Vtables and virtual methods

1. Run `STUnclaimedCodeAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STUnclaimedCodeApplier`.
   - File: `<repo>/recovery/ST.exe/unclaimed_code_proposals.tsv`
   - Rerun the pair until `created` and `converted` are zero.
3. Run `STObjectFactoryAnalyzer`.
   - Directory: `<repo>/recovery`
   - Outputs: `object_factory_registry.tsv`,
     `object_factory_proposals.tsv/jsonl`,
     `object_type_consumer_proposals.tsv`, and `object_factory_summary.txt`.
4. Run `STObjectFactoryApplier`.
   - File: `<repo>/recovery/ST.exe/object_factory_proposals.tsv`
   - The registry and consumer TSV files are loaded from the same directory.
   - If exact missing factory entries were created, rerun this pair once.
5. Run `STVTableAnalyzer`.
   - Directory: `<repo>/recovery`
6. Review and run `STVTableApplier`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
7. Rerun the analyzer and applier if the first apply pass created missing
   function boundaries. Stop once the report says the reviewed tables are
   already present and no new boundaries are proposed.
8. Run `STVirtualMethodAnalyzer`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
9. Run `STVirtualMethodApplier`.
   - File: `<repo>/recovery/ST.exe/virtual_method_proposals.tsv`

The unclaimed-code pair consumes the same conservative evidence exposed by the
exporter's coverage audit directly from the live program. An aligned pointer in
non-executable data which selects a direct `JMP` entry proves both that thunk's
entry and the terminal target of its complete direct-jump chain. A direct
`CALL` or a defined data reference to an orphan `JMP` is equivalent evidence.
The analyzer enables only those exact boundaries; it does not give them
semantic names or infer prototypes. Existing manual functions and overlapping
bodies are preserved, while every enabled row is revalidated against its bytes
and live pointer/reference anchor at apply time.

The object-factory pair finds the longest zero-terminated run of eight-byte
`{typeId, executable factory}` records rather than hard-coding its address. The
registry consumer proves an exact `void * __cdecl factory(void)` ABI even when
the factory body currently decompiles as `void`. A concrete `Owner *` result and
`CreateOwner` name require independent evidence from a unique class allocation
size, an allocation-size-matched named constructor, or an already typed class
return. Shared factories
receive one prototype proposal even when several IDs select them. The applier
also creates `STObjectTypeId`, types the registry as
`STObjectFactoryEntry[]`, and propagates that enum only to non-manual
`CreateObject`/`GetObjectTypeId` consumers. Exact raw table targets may become
functions; MSVC EH continuation shapes and overlapping bodies are preserved.

Raw pointers which land directly on plausible code, MSVC exception
filters/funclets, jump-only shared tails, and merely probable instruction bytes
remain `create_apply=0`. They are useful coverage/review records, but creating a
source-level function for each would conflate callback functions with compiler
exception machinery or shared basic blocks. Newly created callback targets are
not dead merely because the direct call graph has no edge to them: their data
table entry is the inbound edge. Run vtable, constructor, prototype, global, and
indirect-call passes afterwards so those new functions acquire the recovered
types and ownership available elsewhere in the database.

For a uniquely owned `__thiscall` slot, signature application may move a
synthetically named global function into the proven class namespace while
leaving its `FUN_*` leaf name unchanged. This is structural ownership, not a
semantic rename: Ghidra derives its immutable automatic `this` parameter from
that class namespace. The applier never edits the auto-parameter directly; a
namespace/type mismatch is reported and the row transaction is rolled back.

`STVTableAnalyzer` distinguishes physical and semantic recovery. A strong vptr
store enables `layout_apply=1`, which safely installs an address-named table
layout even if its class owner is still unknown. `apply=1` is stricter: it also
confirms the semantic owner/name. This lets the corpus retain every strongly
evidenced table without pretending that inherited or secondary tables already
belong to a particular class.

Strongly referenced tables may contain only one slot. Unreferenced pointer runs
still require at least three consecutive callable entries. The analyzer also
resolves an unclaimed direct `JMP` entry to its real target before the thunk has
a Ghidra function boundary. For example, `0079D714[0] -> 00401F8C -> 0067C7E0`
recovers `AiPlrClassTyVTable::GetMessage`; the store at `006788C5` then exposes
`006788B0` to the constructor pass.

When a semantic owner has an unchanged `STClassLayoutApplier` layout, the
vtable applier types every exact, proven `this`-relative store and refreshes the
layout hash. The primary table keeps `<Owner>VTable`; a secondary table gets an
offset-qualified name such as `<Owner>VTable_at_1C` and is installed only at
`this+0x1C`. It can therefore never overwrite the primary `vptr`. A unanimous
foreign named-slot owner contradicting a constructor-derived owner leaves the
physical table enabled but its semantic owner unresolved; this handles nested
base-constructor contamination without an address seed. Generated table types
are never removed while datatype parents still reference them, and an exact
`/-BAD-/` vptr left by an older script deletion is repairable only when its
component comment proves the deleted owner-vtable provenance. Other manually
changed classes are preserved and reported rather than rewritten.
This is what turns a raw slot-zero call into, for example,
`(*aiPlayer->vtable->GetMessage)(aiPlayer, message)`.

A physical base table may end at its last emitted code pointer even though
objects reached through the base class dispatch to additional slots implemented
by derived tables. The indirect-call analyzer records this as an audit-only
`<Owner>DispatchVTable` proposal after at least two longer related tables agree.
It never changes the physical table type, data length, class vptr, or synthetic
tail fields. A tail ABI is reported only from non-contradictory evidence in at
least two implementations and at least half of the candidate tables; it remains
metadata until a representation is proven not to affect the physical ABI.

The vtable applier does not automatically rename slot functions. Virtual-method
name, calling-convention, and signature flags remain independent. Manual
signatures and multi-owner targets are preserved.

An exact tagged `GetMessage` implementation is a trusted slot-signature source
only when it still has `__thiscall` and one explicit `STMessage *` parameter. For
a direct thunk whose folded target is shared by several owners, the applier keeps
the owner-specific thunk receiver instead of replacing it with the folded
target's receiver. This prevents a later vtable pass from degrading a recovered
function definition to `void *`.

For a typed vtable call, Ghidra's C-like output still prints the receiver as the
first call argument, for example
`(*object->vtable->method)(object, argument)`. This is expected: a function
definition stored in a vtable has no C++ member-expression syntax, so its
`__thiscall` ECX receiver must remain explicit in the prototype. Removing that
argument would shift the real first argument into ECX.

When no reviewed slot-family anchor exists, the virtual-method analyzer also
recognizes a narrow structural case: a short, branch-free leaf that reads ECX,
writes EAX, and returns without popping stack arguments. It may safely propose
`__thiscall dword()` for that target, but leaves the semantic method name and a
narrower return type unresolved. After applying such rows, rerun
`STVTableAnalyzer`/`STVTableApplier` so table slot definitions can consume the
newly trusted target signatures.

A one-instruction virtual no-op ending in `RET n` is another provable ABI case.
The cleanup value gives the exact explicit `__thiscall` argument count. When a
reviewed implementation exists in the same inherited slot family, its complete
compatible signature is reused; otherwise the analyzer emits the proven count
with provisional `undefined4` arguments. The semantic slot name remains
structural until independent evidence names it.

### 4. Constructors and class layouts

1. Run `STConstructorAnalyzer`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
2. Run `STConstructorApplier`.
   - File: `<repo>/recovery/ST.exe/constructor_proposals.tsv`
   - Rerun the analyzer after applying. Stop when `name_apply`,
     `convention_apply`, `parameter_apply`, and `return_apply` are all zero.
   - A machine-code constructor which returns the incoming `this` in EAX receives
     an `Owner *` Ghidra return type. Source C++ still has no written constructor
     return type; this models the compiler ABI and prevents `return &this->vtable`.
3. Rerun `STVTableAnalyzer` and `STVTableApplier`, then rerun the virtual-method
   pair. A newly named constructor is exact evidence for the final vtable it
   installs and may safely resolve a table whose inherited slots previously
   made its owner ambiguous.
4. Repeat the constructor/vtable/virtual-method cycle until the physical table
   count, enabled table set, and constructor apply counts no longer change.
5. Run `STClassArrayAnalyzer`.
   - Directory: `<repo>/recovery`
   - It proves fixed member-array extents from bounded
     `this + index * stride` accesses and exact decrementing pointer walks.
     Structural names remain address-based; no semantic field name is guessed.
6. Run `STInlineAggregateAnalyzer`.
   - Directory: `<repo>/recovery`
   - It records exact `REP MOVS`/`REP STOS` spans. Only a complete copy of one
     independently typed structure into an automation-owned owner range is
     enabled as a nested member. Zero spans are extent evidence and require an
     independent class-array stride before they can create an array.
7. Run `STClassLayoutAnalyzer`.
   - Directory: `<repo>/recovery`
   - The launcher locally repeats the class-array, inline-aggregate, and
     class-layout chain until nested pointee/field refinements converge. Only
     then does it restart the enclosing structural/deep loop, avoiding a full
     whole-program propagation pass for every nested layout layer.
   - It automatically consumes the sibling `class_array_proposals.tsv` and
     replaces covered generated scalar fields with one native Ghidra array.
   - An exact interior `&this->field` passed to a trusted recovered `T *`
     parameter proves the field's `T` type. This first turns deallocator-style
     `void **` consumers into a neutral `void *` field; a following fixed-point
     pass may refine that pointer to `byte *`/`ushort *` from actual memory
     dereference width.
8. Optionally review field-name suggestions in
   `class_field_proposals.tsv`.
9. Run `STClassLayoutApplier`.
   - File: `<repo>/recovery/ST.exe/class_layout_proposals.tsv`
   - The sibling `class_field_proposals.tsv` and, when present,
     `class_nested_{type,field}_proposals.tsv` files are loaded automatically.
10. Run `STDArrayElementAnalyzer`.
   - Directory: `<repo>/recovery`
   - It combines an exact constant `DArrayCreate` element size with element
     aliases formed by `array->elementSize * index + array->data`.
   - When a creator receives `&owner->field_X` plus a closing adjacent owner
     field whose extent exactly equals the element size, the analyzer also
     treats the DArray element as a snapshot of that inline record. Existing
     member types and compiler-independent consumer roles (`state`, index,
     handle, and coordinate arguments) are propagated into the element
     proposal; ambiguous roles retain offset-based names.
11. Run `STDArrayElementApplier`.
    - File: `<repo>/recovery/ST.exe/darray_element_proposals.tsv`
    - The sibling `darray_element_field_proposals.tsv` and
      `darray_element_local_proposals.tsv` are loaded automatically.
   - A local proposal either covers one decompiler SSA lifetime whose
     assignments are all matching runtime-stride element addresses or null, or
     requests an exact merge-group split at the DArray-address assignment when
     the same printed local is reused for unrelated pointer roles. The applier
     persists only that HighSymbol as `Element *`, preserving any existing
     user/imported local. Results are written separately to
     `darray_element_local_apply_report.tsv`.
   - `assignment_address` is the stable locator for a split proposal. The
     `rendered_alias` column remains diagnostic only: names such as `puVar6`
     and `puVar10` can change after any decompiler/type update.
   - The applier commits element/descriptor layouts before it decompiles and
     hashes local SSA lifetimes. It then commits locals in a second transaction
     and verifies every reported `applied` row against another fresh
     `HighFunction`. Obsolete script-owned locals left by an earlier pre-layout
     hash or by later register/stack SSA reuse are removed by their exact
     applier marker and database-variable identity; a DB local which does not
     reattach is reported as `conflict`, never as a successful application.
      The generic `DArrayTy` ABI is not changed. One descriptor specialization
      is created per owning class field, and only its `data` member becomes a
      pointer to that field's recovered packed element record.
12. Run `STLocalLifetimeAnalyzer`, then `STLocalLifetimeApplier`.
    - Analyzer directory: `<repo>/recovery`
    - Applier file:
      `<repo>/recovery/ST.exe/local_lifetime_proposals.tsv`
    - This is the general compiler-reuse pass. It considers a rendered local
      whose decompiler `HighVariable` contains several distinct merge groups,
      plus a one-group raw-undefined lifetime when exact evidence exists. A
      typed direct-call return or an exact copy from a typed parameter/global
      or nominal decompiler value is an exact anchor; call-argument evidence
      requires two agreeing callsites because one argument can be an implicit
      conversion. Signed, unsigned, and boolean roles are also recovered from
      p-code operations which explicitly distinguish them
      (`INT_SEXT`/`INT_ZEXT`, signed or unsigned compare/divide/shift, and
      `BOOL_*`). Scalar-role evidence is admitted only for a raw machine
      integer—not for a pointer, enum, or typedef—and an exact nominal
      copy/call wins over the way that value is compared or extended. The
      analyzer revisits its own scalar splits so later exact evidence can
      restore a nominal type. Width, constants, equality, and generic
      arithmetic alone never establish a scalar role.
    - Every proposal is anchored by function address, p-code address/time, and
      operand. The applier invokes the same `splitOutMergeGroup` operation as
      Ghidra's **Split Out As New Variable**, persists only the isolated
      lifetime, and then performs a fresh decompile. It reports `applied` only
      when the database symbol reattaches to that exact anchor and contains one
      merge group. Competing types and inseparable groups remain review-only;
      `USER_DEFINED` and `IMPORTED` locals are preserved.
    - If a committed candidate fails that fresh attachment and is rolled back,
      the apply report retains a hash of the complete proposal/evidence identity.
      An unchanged future run does not repeat the apply/rollback transaction;
      changed anchor/type/evidence produces a new identity and is reconsidered.
    - The DArray pair remains separate and runs first: a runtime stride and
      recovered element layout are stronger type evidence than a generic
      call/copy anchor.
13. Rerun the class-array/inline-aggregate/class-layout/DArray-element sequence once. New constructor ownership can expose
   additional `this + offset` accesses even when no new class is created.
14. Rerun `STObjectFactoryAnalyzer` and `STObjectFactoryApplier`. The completed
   class layouts can turn additional generic `void *` factories into exact
   `Owner *` results and stable `CreateOwner` names.

The class-layout pass consumes constructor allocation sizes and recovered
vtable types. It tracks exact `this + constant` accesses, fields reached through
any existing typed class pointer, exact field-to-field copies across classes,
typed call flows, sign-extension operations, signed/unsigned `CMP`/`DIV`
domains, and x87 memory operations. Pointer/scalar types are
applied only when width and evidence agree. Generated structures carry a safety
hash; a manual change causes later automatic updates to be preserved rather
than overwritten.

Concrete types previously written by this same pair are not treated as eternal
truth. A generated, hash-unchanged component is revised when fresh direct
evidence uniquely disagrees with it. Old unsigned inferences based only on
`AND`/`OR`/`XOR`/`TEST` are retired: those x86 operations do not establish C
signedness and a linear pass could carry a register fact into the wrong CFG arm.
Types supported only by the old bidirectional field-copy propagation are also
retired when the corrected directional pass cannot reproduce them.
Typed cross-class provenance now survives a CFG join only when every reachable
predecessor agrees, preventing a receiver from one switch arm leaking into the
next arm's field evidence.
`class_layout_summary.txt` reports generated revisions and deprecated repairs.
Manual/imported structures and edited generated layouts remain protected.

Incoming `this` values spilled once to an EBP-relative prologue slot are tracked
as immutable receiver anchors. This lets mutually exclusive setjmp/SEH branches
reload `this` into different callee-saved registers without losing later
unaligned fields in a linear instruction scan.

The same pass now follows a value loaded from `[this + field]` when that value is
subsequently used as a memory base. Multiple consistent child offsets create a
separate `ClassPointees/AnonPointee_*` structure and type the parent field as a
pointer. The characteristic `DArrayTy` `+0x8`/`+0x0c`/`+0x1c` layout is mapped
to the existing semantic type instead of creating an anonymous duplicate.
The DArray-element pair then specializes only class fields backed by one exact
factory element size and multiple non-overlapping uses. For example, a
`void *` computed through the runtime stride can become
`Owner_field_0038Element *`, so `*(T **)((int)value + 0x10)` folds to a named
record member. The element count remains dynamic; the scripts never replace
the container with a static C array. Generated descriptors, element records,
and owner layouts are independently hash-protected, and the class pass treats a
specialized descriptor as compatible with its generic `DArrayTy` evidence.

Constructor convention recovery is deliberately conservative. A receiver-only
`__fastcall` candidate is converted to `__thiscall` only when the body reads
neither incoming `EDX` nor a stack argument. The same evidence lets the applier
remove a stale explicit ECX parameter left by an older script version. Real
stack parameters are retained; ambiguous rows stay disabled.

Run this analyzer before applying the final `OURLIB_*` library classifications.
Once those methods are tagged as library code, layout analysis intentionally
skips their implementations.

### 5. Anonymous receivers, non-virtual method owners, and destructors

One-time migration: if `hidden_this_proposals.tsv` was produced by the first,
unversioned analyzer, run the current `STHiddenThisApplier` on that existing
file before step 1. Do not overwrite it with a fresh analysis first.

1. Run `STHiddenThisAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STHiddenThisApplier`.
   - File: `<repo>/recovery/ST.exe/hidden_this_proposals.tsv`
3. Re-decompile or export after applying hidden receivers. A function whose
   incoming `ECX` was previously rendered as an uninitialized local now has a
   persistent anonymous receiver target and neutral vtable slots. The current
   pointer-shape pass intentionally does not rewrite the generated `this`
   structure; semantic receiver fields and slot prototypes are a separate,
   later refinement problem.
4. Run `STMethodOwnerAnalyzer`.
   - Directory: `<repo>/recovery`
5. Run `STMethodOwnerApplier`.
   - File: `<repo>/recovery/ST.exe/method_owner_proposals.tsv`
6. Run `STDestructorAnalyzer`.
   - Directory: `<repo>/recovery`
   - It consumes the sibling `vtable_slots.tsv` when present.
   - Diagnostic output: `destructor_lifetime_candidates.tsv`.
7. Run `STDestructorApplier`.
   - File: `<repo>/recovery/ST.exe/destructor_proposals.tsv`

The hidden-this pass covers the case where no class/debug owner exists yet but
the x86 ABI is still provable. Automatic conversion requires an incoming `ECX`
capture and repeated receiver accesses, either at least two direct or
thunk-mediated call sites that explicitly prepare a pointer in `ECX`, or one
such call corroborated by a multi-function same-receiver family. It also
requires no scalar-ECX or caller-cleanup conflict, no live incoming `EDX`
argument, and exact agreement between `RET n` and the existing stack
parameters. Layouts larger than `0x4000` bytes remain review-only.

Ghidra derives the immutable automatic `this` datatype from a function's class
namespace. The applier therefore creates a structurally named neutral
`SubmarineTitans::Recovered::HiddenThis::AnonReceiver_<address>` class namespace
that mirrors the datatype category. This is an ABI/type carrier, not a claim
about the original semantic class or method name. Neutral vtables are created
only when an indirect slot was actually observed.

The first hidden-this applier version could leave eight enabled rows partially
converted under Ghidra 12.1.2, including dropping the first explicit stack
parameter. If an unversioned `hidden_this_proposals.tsv` is present, run the
current `STHiddenThisApplier` on that existing file **before rerunning the
analyzer**. It restores the exact saved signatures and writes a repair marker;
it also removes the exact untouched v1-generated anonymous datatype/vtable
shapes. A modified datatype is preserved and reported instead. The analyzer
then archives the v1 proposal as `hidden_this_legacy_v1.tsv` and emits version-2
proposals. Version-2 application is atomic per row, so a failed type or
namespace check cannot retain a partial signature change.

The method-owner pass follows only address-resolved calls where a named caller's
incoming `this` value still reaches `ECX`. It follows stable EBP-local spills,
register reloads, and the complete direct-JMP thunk chain before attributing the
target. It assigns structural names such as
`STBoatC::sub_006EA2F0`; it does not invent semantic method names. Automatic
ownership also requires a compatible existing class data type. Ambiguous owner
sets stay disabled. A `__fastcall` candidate is not converted when its incoming
`EDX` value behaves as a real second register argument. When the body has no
incoming `EDX` or stack-argument reads, conversion also removes the old `ECX`
formal so it does not survive as a bogus stack parameter. The same check repairs
receiver-only signatures written by earlier versions of the applier.

Owner evidence is also coverage-checked against every logical non-thunk caller,
including callers which reach the implementation through one or more thunks.
The analyzer distinguishes calls which pass the caller's own incoming `ECX`
from calls on a separately loaded service object. A prior script-owned owner is
eligible for `repair_apply=1` only when named owners conflict, or at least four
incoming-receiver callers dominate a fan-out of at least eight. The applier
returns that shared helper to a neutral global `sub_ADDRESS` `__thiscall` and
resets only downstream receiver types carrying the pointer-shape script's
typed-call marker. Manual names and signatures are never eligible.

The destructor pass first discovers known deallocators and only accepts a small
wrapper when that wrapper forwards its own pointer argument into the real
deallocator. This prevents field-cleanup helpers from being mistaken for
`operator delete`. It then recognizes both deallocation of the incoming `this`
value and a narrow cleanup-only vtable shape: slot `0x0`/`0x4`, at least two
zeroed fields, and multiple same-`this` or field-cleanup calls. The latter can
recover ordinary destructors that do not free their own storage. All examined
vtable methods and lifetime counters remain available in
`destructor_lifetime_candidates.tsv`; shapes outside the conservative rule are
diagnostic only. A receiver-only `__fastcall` candidate is rewritten as a
zero-explicit-argument `__thiscall`; the former `ECX` receiver is not retained
as a bogus stack parameter.

### 6. Switch/state enums

1. Run `STSwitchEnumAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STSwitchEnumApplier`.
   - File: `<repo>/recovery/ST.exe/switch_enum_proposals.tsv`

The analyzer groups repeated numeric switch domains. It decodes exact numeric or
enum bitwise-OR case expressions, so a decompiler rendering such as
`CASE_4|CASE_1` contributes the observed value `5` rather than freezing an
incomplete domain. Safe parameter and script-owned class-field targets may be
enabled automatically. Locals, globals, and ambiguously owned fields stay
review-only.

Typed decompiler aliases such as `STBoatC *this_00` are resolved back to their
actual structure before classifying `this_00->field_*`. This keeps large
functions that save `this` in a local from producing dozens of false local
enums. Repeated switches over the same simple decompiler local are merged only
inside one function and remain review-only; a reused temporary is not stable
enough for automatic type application.

The exact numeric domain of such a local is nevertheless materialized as a
script-owned generated enum. This makes the domain reusable by later
prototype/lifetime analysis without persistently typing an unstable local
symbol; the separate local target remains `apply=0`.

Each candidate first receives a 30-second decompilation attempt. A timeout gets
one 120-second retry; `switch_enum_decompile_retries.tsv` records the address
and whether the retry recovered it, while unrecoverable functions are retained
in `switch_enum_decompile_failures.tsv` instead of disappearing behind a count.
Tagged MSVCRT/DKW implementations stay excluded, but internal `OURLIB_*`
functions remain eligible: their state domains are part of the recovered game
API even though their assembly and decompilation bodies are omitted from the
final LLM corpus.

`switch_enum_domains.tsv` is monotonic analyzer state: each enum keeps the union
of all previously and currently observed values, and a temporarily unobserved
domain is retained rather than shrunk. The file is generated by evidence, not a
hand-maintained seed list, and `STEvidenceLedger` binds it to the exported
semantic state. Removing a value therefore requires an explicit reviewed state
migration instead of happening as a side effect of one decompiler run.

### 7. Utility, return, prototype, global, indirect-call, and type-family propagation

1. Run `STUtilityFunctionAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STUtilityFunctionApplier`.
   - File: `<repo>/recovery/ST.exe/utility_function_proposals.tsv`
3. Run `STAbiConsistencyAnalyzer`.
   - Directory: `<repo>/recovery`
4. Run `STAbiConsistencyApplier`.
   - File: `<repo>/recovery/ST.exe/abi_consistency_proposals.tsv`
5. Run `STReturnSemanticsAnalyzer`.
   - Directory: `<repo>/recovery`
   - Non-leaf `void` recovery is CFG-conservative: every direct callsite must
     reach an EAX overwrite/call without first explicitly reading EAX.
     Branches, loops, and scan limits are counted as `unknown`, not silently
     discarded. A caller `RET` counts as forwarding only when that caller
     already has a protected non-void return ABI; generic return types cannot
     recursively validate one another. Contradictory EAX reads on an existing
     script-owned `void` are review-only, not an automatic rollback.
6. Run `STReturnSemanticsApplier`.
   - File: `<repo>/recovery/ST.exe/return_semantics_proposals.tsv`
7. Run `STPrototypeAnalyzer`.
   - Directory: `<repo>/recovery`
   - A function tagged `RECOVERED_UTILITY_SEMANTICS` owns its complete recovered
     utility ABI and is not specialized from consumer call sites. In particular,
     neutral allocation `void *` parameters remain neutral across heterogeneous
     payload views.
8. If `prototype_summary.txt` reports repair rows, run
   `STPrototypeRepairAnalyzer`.
   - File: `<repo>/recovery/ST.exe/prototype_proposals.tsv`
9. Run `STPrototypeRepairApplier`.
   - File: `<repo>/recovery/ST.exe/prototype_repair_proposals.tsv`
10. After a repair pass, rerun `STPrototypeAnalyzer` so ordinary proposals have
   current baselines.
11. Run `STPrototypeApplier`.
   - File: `<repo>/recovery/ST.exe/prototype_proposals.tsv`
   - Repair rows are deliberately ignored by this applier.
   - Exact unchanged-argument and forwarded-return edges form a boundary graph.
     A true strongly connected wrapper component propagates only when it has one
     unambiguous protected/semantic, ABI, or previously machine-qualified
     external anchor. An unanchored cycle of generic returns cannot validate
     itself.
12. Run `STAllocationRecordAnalyzer`.
   - Directory: `<repo>/recovery`
   - The analyzer follows one neutral allocator result through machine aliases,
     requires that exact root to be returned (null returns are allowed), and
     reconstructs one contiguous source-parameter copy beginning at offset zero.
     It records out-parameter and reallocated copies in
     `allocation_record_machine_audit.tsv`, but leaves them review-only.
13. Run `STAllocationRecordApplier`.
   - File: `<repo>/recovery/ST.exe/allocation_record_proposals.tsv`
   - Only the producer/consumer source parameter and return acquire the generated
     packed record pointer. The allocator retains its neutral `void *` ABI.
     Existing complete structures are reused; shorter generated source views are
     extended monotonically, while manual/imported signatures and edited
     generated layouts are preserved.
14. Run `STGlobalRecordAnalyzer`.
   - Directory: `<repo>/recovery`
   - Rerun `STTypeBootstrapAnalyzer/Applier` first after script updates. The global-record
     geometry itself is inferred from the guarded lookup plus independent stride/range evidence;
     it no longer depends on a predeclared nested player-record layout.
15. Run `STGlobalRecordApplier`.
   - File: `<repo>/recovery/ST.exe/global_record_proposals.tsv`
   - The sibling `global_record_field_proposals.tsv` is loaded automatically.
16. The former `STSpatialGridAnalyzer/Applier` pair is retired.
   - Four adjacent 16-bit values followed by a pointer prove descriptor geometry,
     but not `STWorldCell`, world/pathing semantics, or the pointee layout.
   - Existing bootstrap-owned spatial projections are marked `[ST_VIEW_ONLY]` and
     removed by the lifecycle pass after their last live reference disappears.
17. Run `STGlobalAggregateAnalyzer`.
    - Directory: `<repo>/recovery`
    - In addition to indexed tables, this recognizes bounded Win32 resource-string
      scratch arenas from `LoadStringA`, a global base-plus-cursor destination, and
      the wrapper's exact chunk/capacity checks.
18. Run `STGlobalAggregateApplier`.
    - File: `<repo>/recovery/ST.exe/global_aggregate_proposals.tsv`
19. Run `STGlobalDataAnalyzer`.
   - Directory: `<repo>/recovery`
   - Besides proposals it writes `global_pointer_audit.tsv`, a complete inventory
     of `PTR_*` data symbols split into control-flow/string/code table entries and
     actual pointer-valued globals. Anonymous pointees and any named-type evidence
     are shown explicitly.
   - It also follows named constructor results into global stores. A unique
     constructor result dominates weaker generic use-site casts, allowing a
     script-owned anonymous singleton pointer to graduate to the named class
     without authorizing changes to unrelated concrete/manual globals.
   - A high-fanout anonymous singleton used overwhelmingly as the context argument
     of one statically linked library family becomes a generated
     `<Family>Context`, with the observed anonymous layout copied unchanged.
     A library family is not assumed to have only one context layout: if that
     semantic name is already occupied by a non-equivalent generated structure,
     the additional context is named `<Family>Context_<GLOBAL_ADDRESS>`.
     Taking the address of a pointer-valued singleton for a rare initializer or
     teardown `T **` use does not block promotion when ordinary family-context
     uses outvote it by at least 16:1.
     `GetModuleHandleA("*.dll")` stores also receive a literal-derived module name.
20. Run `STGlobalDataApplier`.
   - File: `<repo>/recovery/ST.exe/global_data_proposals.tsv`
21. Run `STFunctionPointerParameterAnalyzer`.
    - Directory: `<repo>/recovery`
    - The analyzer follows an exact function address or null passed at every
      observed direct callsite into one stack parameter, then proves that the
      callee invokes that same parameter indirectly with one argument count.
      A bounded backward CFG walk preserves VC6 pre-pushed outer arguments
      across shared labels, nested cdecl calls, and their intervening stack
      cleanup instead of assuming that every `CALL` empties the argument stack.
    - Automatic rows require at least two exact target sites and one unanimous
      machine ABI. `RET n` proves stdcall cleanup; cdecl additionally requires
      matching caller cleanup at every indirect site. Unknown callsite values,
      incoming-ECX targets, manual/imported signatures, and concrete parameter
      types remain review-only.
22. Run `STFunctionPointerParameterApplier`.
    - File: `<repo>/recovery/ST.exe/function_pointer_parameter_proposals.tsv`
    - The applier rechecks the parameter baseline and every target's current
      machine ABI, creates only marker-owned function definitions, and applies
      pointer types with `ANALYSIS` provenance transactionally. A stored
      signature hash protects later edits to a generated callback definition.
23. Run `STFunctionPointerFieldAnalyzer`.
    - Directory: `<repo>/recovery`
    - A field is enabled only when an exact function address is stored into it,
      an indirect call loads from that identical field, and all stored targets
      share one trusted ABI.
    - The analyzer first scans machine instructions for a direct function-address
      store or the common `MOV reg,function; MOV [field],reg` form. It decompiles
      those STORE candidates before call-only candidates; when no exact stored
      target survives High p-code tracing, call-only functions are skipped and
      no call-only field rows are emitted.
    - `STRecoveryPipeline` schedules this expensive pass after the broad deep
      structural fixed point. It is not repeated for every intermediate layout
      epoch; export ABI stabilization reruns it if a later Program mutation makes
      the cached evidence stale.
24. Run `STFunctionPointerFieldApplier`.
    - File: `<repo>/recovery/ST.exe/function_pointer_field_proposals.tsv`
    - Only hash-intact generated structures and generic pointer-sized fields are
      mutable. Manual structures, concrete fields, incomplete chains, and ABI
      disagreements remain review-only.
25. Run `STIndirectCallAnalyzer`.
    - Directory: `<repo>/recovery`
26. Run `STIndirectCallApplier`.
    - File: `<repo>/recovery/ST.exe/indirect_call_proposals.tsv`
    - The analyzer also groups physical vtable components by thunk-resolved
      implementation address. A generic occurrence inherits an existing
      function-pointer ABI only when every typed occurrence of that exact
      target is structurally equivalent. Receiver/signature disagreement
      invalidates the family rather than being majority-voted.
    - Polymorphic dispatch interfaces and tail signatures are audit-only. The
      applier also refuses legacy `create_dispatch_vtable`, synthetic-dispatch
      slot, and hard-coded `create_base_vtable` rows even when an old proposal
      file enables them.
27. Run `STPointerRoleRepairAnalyzer`.
   - Directory: `<repo>/recovery`
   - This is normally a one-time cleanup after an older pointer-shape pass. It
     scans only locals carrying an `STPointerShapeApplier` marker.
28. Run `STPointerRoleRepairApplier`.
   - File: `<repo>/recovery/ST.exe/pointer_role_repair_proposals.tsv`
29. Run `STPointerShapeAnalyzer`.
   - Directory: `<repo>/recovery`
   - Run it after global-record application. Typed-call evidence propagates types through
     persistent locals, but no special case reconstructs pointers from a known player-block
     address or from manually named `tempSlots/objectIds` fields.
   - Decompiler C pointer arithmetic is measured in pointee elements until the
     base is explicitly cast to an integer. The analyzer derives the current
     rendered pointee width for parameters and locals before turning `p + n`
     into a byte offset; this also covers a stale Listing local whose current
     HighVariable has become `short *` or `ushort *`. Newly exposed scaled
     geometry is retained for review instead of revising established generated
     layouts in bulk.
   - A local returned by exactly one call may receive a consumer-local record
     view when it has fixed-offset evidence, is passed to an internal generic
     pointer parameter, and has no array/iterator use or competing non-null
     assignment. This types the consumer only: a heterogeneous loader or other
     shared producer keeps its neutral ABI.
   - Ordinary 30-second decompilation failures are retried once with a
     300-second budget. A retry changes no proposal threshold and prevents a
     transient timeout from silently removing previously visible evidence.
30. Run `STPointerShapeApplier`.
   - File: `<repo>/recovery/ST.exe/pointer_shape_target_proposals.tsv`
   - The program directory containing that file is also accepted. The sibling
     type and field proposal TSVs are loaded automatically.
   - A direct compiler spill `local = (Base *)this` is restored to the named
     method owner's most-derived type only when the local is still
     `STPointerShapeApplier`-owned, has stable storage, uses no base adjustment,
     and the derived layout is at least as large as the current base layout.
     Manual/imported locals and anonymous owners are never changed by this rule.
   - Ghidra auto-parameters are never modified directly. A unique typed-call
     receiver can attach an otherwise global helper to an existing named class;
     anonymous receiver shapes remain review-only for `STHiddenThisAnalyzer`.
     No anonymous backing datatype is created for a protected manual/imported
     target which the applier must preserve, or for an anonymous auto-this target
     which HiddenThis must own; this prevents create/remove lifecycle churn.
   - Anonymous types previously assigned by an old `STTypeFamilyApplier` pass are
     split back into target-local shapes when the current target has enough
     consistent fixed-offset evidence. This repairs the former geometry-only
     family heuristic without touching manual or named types.
   - A decompiler-only stack aggregate which is assembled through
     `local._offset_width_ = value` contributes field evidence to its existing
     generated pointer shape. This recovers narrow members which are visible in
     machine stores but absent from Listing locals.
   - An indexed load through a generated context field, for example
     `entry = *(T **)(context->field_01B0 + index * 4)`, is treated as a
     pointer-table member rather than a scalar integer. Uses of the loaded
     record are merged across all functions sharing that generated context.
     Both raw `field_01B0` and an earlier generated `entries_01B0` spelling are
     recognized on subsequent passes. A repeated strict `index < count`
     guard followed by `table[index]` names those proven container roles
     `entryCount` and `entries`; it does not guess the library-specific noun.
     When its first dword is repeatedly tested or updated with bit masks, that
     member is named `flags`; individual mask constants remain unnamed until
     independent enum/debug evidence exists.
   - A constant-index expression such as `generated[1].field_XXXX` may denote a
     continuation beyond a formerly short generated layout. It is automatic only
     when one positive constant index exposes at least three distinct absolute
     members, one member address is taken, and the same base has no variable
     subscript. The analyzer records absolute offsets; it never converts an
     actual indexed collection into one giant structure.
   - Casted accesses may refine weak generated fields only as a connected cluster
     of at least two adjacent equal-width members, with at least one member whose
     current generic type is concretized or safely widened. Lone compiler-wide
     loads, overlaps, concrete/manual layouts, and competing widths remain
     review-only. Weak subpieces fully covered by repeated exact-width evidence
     are suppressed before the proposal is built.
31. Run `STRecursivePointeeAnalyzer`.
    - Directory: `<repo>/recovery`
    - Optional second script argument: one function address for a narrow
      diagnostic run. The normal pipeline does not use that restriction.
    - The analyzer considers only hash-intact generated owner structures and
      pointer-sized fields. Automatic rows require one exact owner-field
      identity, at least two root loads, at least two recursive self-link
      traversals, and at least two independently recovered partial views with
      three nonzero, non-overlapping fields. Equal geometry under another root
      is not identity evidence.
32. Run `STRecursivePointeeApplier`.
    - File: `<repo>/recovery/ST.exe/recursive_pointee_proposals.tsv`
    - The applier creates a deterministic `RecursiveNode_<Owner>_<Offset>_*`,
      installs `Node *next` at offset zero, specializes only that owner field,
      and refreshes both generated safety hashes. Manual/imported/concrete,
      stale, overlapping, COM/table-like, and single-view candidates remain
      review-only. A confirming pass must report `unchanged`. The class-layout
      pair treats a hash-intact recursive target as stronger than generic
      `void *`/byte-pointer evidence and its applier refuses a stale proposal
      which would downgrade it. The node datatype may still coexist with
      function-local partial views when Ghidra merged incompatible SSA
      lifetimes; do not force one persistent local type merely to remove casts.
33. Run `STTypeFamilyAnalyzer`.
    - Directory: `<repo>/recovery`
    - Inspect `<repo>/recovery/ST.exe/anon_named_type_matches.tsv`. Exact full-layout
      matches are automatic only when there is one unique named type with at least
      two concrete, meaningfully named fields. Partial or ambiguous matches remain
      `apply=0`. Anonymous-to-anonymous geometry remains review-only except when
      exact generated HiddenThis members have one unique multi-function
      namespace-backed receiver family, or address-authoritative direct-call
      dataflow proves that the same pointer crosses between complete,
      exact-layout script-owned shapes. The latter additionally requires one
      owner across every function use and forbids global or containing-field
      aliases.
    - Inspect `contextual_record_promotions.tsv`. A small, complete,
      script-owned `AnonShape` used only in one unique class-owner context may
      receive a deterministic generated name such as
      `RecoveredRecord_VisibleClassTy_0055B9F0`. This neither merges layouts nor
      claims an original source noun; it preserves one shape as one record and
      keeps it eligible for later PointerShape refinement.
      The same file can contain several sources targeting one recovered record
      only when `prototype_callsite_audit.tsv` proves direct pointer flow
      between them and their complete layouts, sole owner, and no-alias checks
      all agree.
34. Run `STTypeFamilyApplier`.
    - File: `<repo>/recovery/ST.exe/type_family_proposals.tsv`
35. Run `STManualTypeAuditAnalyzer`.
    - Directory: `<repo>/recovery`
    - Output: `manual_type_conflicts.tsv` and
      `manual_type_conflicts_summary.txt`.
    - This is deliberately read-only. It consolidates strong contradictory
      evidence for protected prototype, class-field, pointer-shape, and
      type-family types; it never silently replaces a `USER_DEFINED` or
      `IMPORTED` decision.

The utility pass is intentionally small and strict. It verifies body shapes before
assigning the semantics and prototypes of `FreeAndNull`, `DArrayDestroy`,
`DArrayCreate`, `SArrayCreate`, `LoadResourceString`, `DArrayGetElement`, and
the behavior-derived `LookupRecordByte`. It also discovers the unique generic `DArrayRemoveAt` helper
and the iterator-style `DArrayGetNext` helper from their descriptor accesses
plus exact `REP MOVSD`/`REP MOVSB` bodies, rather than from ST-specific
addresses. The optimized six-argument pitched-buffer primitive is similarly
recovered as `CopyRows(byte *, int, byte *, int, uint, int)` only when its
complete row-width/pitch and 4/8-byte copy contract is present. The
source-tagged `mfAObjLoad` return is kept
as neutral `byte *`: the archive contains heterogeneous serialized payloads,
and each consumer must recover its own record layout instead of contaminating
all callsites with one payload structure. Typing both DKW array factories is especially important:
their named `DArrayTy *` returns flow into many otherwise anonymous globals.
These high-fanout
facts should precede prototype propagation because one corrected helper signature
can improve many callers.

The ABI-consistency pair handles facts that source-level value domains cannot
prove. It restores the two fixed arguments plus varargs of MSVC `_setjmp3`, the
pointer return of `LoadResourceString`, full-width EAX returns consumed as
32-bit values by every observed caller, and consistently narrowed stack
parameters. Every automatic width repair requires closed machine-code evidence;
manual/imported targets are preserved. Correcting `_setjmp3` removes the large
family of synthetic `unaff_ESI`/`unaff_EDI` inputs produced by a fixed four-arg
prototype.

Return semantics are recovered only from closed evidence: leaf functions with no
return-register write become `void`, and a terminal call is marked `noreturn`
only when its target already has that property. A complete zero/one source domain
is reported as a boolean candidate but remains review-only: it does not by itself
prove whether the x86 ABI value is returned in `AL` or full `EAX`. The ABI pass
handles that width question from callers and return definitions. Existing
manual/imported return types are preserved. A generic pointer-sized return may
also inherit an existing structure pointer when every value-return path forwards
the same persistent Listing variable and that variable/type is manual, imported,
or owned by a hashed recovery pass. This connects return ABI to a recovered
layout; it never creates a structure from a return cast.

`STAbiConsistencyAnalyzer` additionally accepts a narrow `AL`/`AX` return only
after two closed proofs agree. Reverse CFG traversal from every callee `RET`
must encounter the same exact low-accumulator definition before any wider
definition. At every resolved direct callsite, bounded forward CFG traversal
must then either read only that same low width or explicitly kill `EAX`; a
full-width or unresolved path vetoes the proposal. Exact `AND`/`TEST EAX` masks
for `0xff`/`0xffff` count as narrow consumption. This rule recovers machine
width, not a semantic enum or class-specific value domain.

`STGlobalAggregateAnalyzer` writes a broad indexed-global audit. It recognizes both
ordinary SIB operands and compiler sequences which materialize a record stride first
(`SHL`/power-of-two `IMUL`, followed by `[scaled_register + global]`). It also
composes affine stages such as `lea r,[i+i*8]` followed by `[r+r*8+global]`
into the real stride `0x51`. An exact absolute `REP STOSD` zero-fill supplies
the base and extent for a packed array of those records; the extent must divide
the composed stride and independent functions must agree on at least three
fixed member offsets with both reads and writes. Automatic
application requires a proven complete range and element formula. High-confidence
proposals include exact compiler-emitted centered neighbourhood sequences such as
`{2,1,0,-1,-2}` and constant record
tables when every dword field is repeatedly read with the same stride, no write is
observed, and two zero records give an exact trailing boundary. Those tables become
arrays of generated records, so raw base-plus-byte-offset expressions can fold to
`g_constantRecords[index].value_08`. Strong monotone distance/percentage profiles
receive `SoundDistanceProfile` member names; unrelated layouts retain
address-stable structural names. Square byte relation matrices are recovered when
the same function uses both transposed forms `[left + right*N]` and
`[right + left*N]`, tests the cells as binary values, and the next primary symbol
closes the exact `N*N` extent. The structural result is named
`g_u8SquareMatrixN` (with a deterministic ordinal on collisions); no player-specific name or image address is seeded.
A resource-string scratch arena is also automatic
only when one wrapper proves the `LoadStringA` destination base, read/write cursor,
chunk limit, and enclosing capacity. Other indexed bases remain `apply=0` until
their bounds and record shape are proven.

Indirect-call analysis audits every raw call site in `indirect_call_sites.tsv`.
It prefers an independently tagged/imported target signature. If semantic typing
is absent, an owned vtable slot may receive a neutral ABI-only `__thiscall`
definition when the target consumes incoming `ECX` and every `RET` agrees on the
callee-popped stack bytes. A target which does not consume incoming `ECX` but
unanimously uses nonzero `RET n` instead receives a neutral `__stdcall`
definition; this covers compiler-generated vtable adapters which receive the
object as their first stack word. Prologue `PUSH ECX` used solely as stack
allocation is not receiver evidence. Such definitions use only the recovered
receiver where applicable. Each callee-popped four-byte ABI slot remains
`undefined4` unless the callee's exact machine reads consistently prove a narrower
byte/word view; signed or unsigned extension selects the scalar signedness.
Likewise, unanimous writes to `AL` or `AX` before every `RET` recover a narrow
machine return width only when the function's independent analyzed return agrees;
a narrow write by itself cannot discard live high EAX bits. This still recovers
only width, not a semantic type. Unused slots stay `undefined4`.
These definitions do not invent method names or argument meanings. USER_DEFINED
by itself is not trusted, and no
vtable/function address is seeded in this pass. Later vtable rebuilds preserve
these marker-owned slot refinements when the raw target is unchanged, and the
pipeline repeats indirect typing after its final structural pass so definitions
cannot remain orphaned from their slots. The export regression gate counts both
reviewed `VTableFunctions` and neutral `IndirectCallFunctions` as typed slots,
and rejects later erasure of either category. Existing marker-owned neutral
definitions are revalidated on every pass and are replaced or reverted to
`void *` if their machine evidence changes. Ghidra may still render an indirect `__thiscall` as
`(*object->vtable->method)(object, ...)`; the explicit receiver is normal decompiler
syntax, not a missing argument in the recovered prototype.

The type-family pass runs last. It consolidates byte-for-byte identical anonymous
layouts and propagates named aggregate pointer returns into stack locals only when
the local is an anonymous type previously owned by `STPointerShapeApplier`.
Manual/imported locals and scalar pointer returns are excluded. The
`GetObjPtr` base-family correction is derived from the high-fanout named
thunk family and an evidence-qualified `STGameObjC` anchor; no address-specific
override remains.

The old spatial-grid pair was removed because its inference was circular: the
bootstrap created `STWorldCell`, `STWorldGrid`, and `STSpatialGrid16` from generic
`short, short, short, short, pointer` geometry, then the analyzer used those
pointee types to classify the same globals. Geometry remains useful audit
evidence, but a replacement applier must infer cell width/role independently
from indexed consumers before installing a semantic descriptor.

`STPointerRoleRepairAnalyzer` addresses a different failure mode. A large
optimized function can reuse one stack slot for an integer coordinate and,
later, a pointer. A persistent pointer type applied to that storage forces both
lifetimes to render as pointers (`&local->flags + 1` instead of `local + 1`).
The analyzer enables a reset only when the function reports unsettled type
propagation and the script-owned pointer local is directly sourced from a
scalar value. The applier resets that database constraint to `undefined4`, so
the decompiler can infer its SSA lifetimes independently. Manual/imported
locals are preserved. The current pointer-shape analyzer will not auto-type
locals in such unsettled functions again. The same repair path also resets a
script-owned local whose pointee has subsequently become `[ST_VIEW_ONLY]`; this
does not require decompiler instability and lets the generated-type lifecycle
remove an obsolete projection after all real uses disappear.

`STLocalLifetimeAnalyzer/Applier` handles the complementary positive case. If
Ghidra already separated reused storage into distinct merge groups and one
group has an independent exact semantic type anchor, the pair persists a
different type for only that lifetime. It also types a single non-reused
`undefinedN`/`undefinedN *` local when the same exact evidence exists: one
trusted typed return or typed copy, or at least two agreeing typed call
consumers. For a hash-intact recursive structure generated by
`STRecursivePointeeApplier`, an exact component `LOAD`, `STORE`, address, or
same-size p-code `CAST` is also a strong anchor. This permits an already-correct
`Node *` group to be isolated from heterogeneous sibling lifetimes which make
Ghidra print an undefined pointer tower; it does not enable same-type splits for
ordinary scalars, typedefs, or generic pointers. An inseparable group carrying
both `Node *` and `Node **` remains a conflict. It does not use arithmetic shape
or names to guess signedness. Physical register/stack reuse is not itself
evidence: competing anchors, edited/stale generated layouts, and a dynamic local
which reattaches anywhere except its original machine address are rejected.
Typedef aliases and recursively unwrapped pointer spellings are compared by
datatype equivalence before being declared conflicting. Thus `LPSTR`, `CHAR *`,
and `char *` do not create three false lifetime families, while signedness or
domain disagreements such as `int` versus `uint` and `bool` versus `byte`
remain review-only.

The pipeline runs one whole-program local-lifetime pass. If that pass mutates a
function, subsequent staircase passes decompile only the exact changed function
addresses from the apply report. After targeted convergence it runs one final
whole-program analyzer/applier confirmation so the committed proposal and apply
report remain complete; an ordinary settled run still pays for only one broad
pass.

`STAbiConsistencyAnalyzer` separately repairs polluted incoming parameter roles.
A small class of compiler/runtime helpers carries its real context in incoming
EBP without establishing an ordinary frame. The analyzer installs one custom
EBP-stored context parameter only when EBP is dereferenced before any EBP
definition, all current explicit parameters are generic ECX/EDX words, and ECX
and EDX are overwritten or merely preserved before any semantic incoming use.
It recovers an EAX return only when every observed caller use and every return
path agree; a killed caller value may support `void`, but a terminal or
unresolved path is unknown. A later pointer-shape pass may replace the neutral
`void *` context with a generated record from consistent fixed offsets.
A direct x87 `double ptr [EBP+offset]` operand also proves an eight-byte
parameter boundary when it reads the slot before any overlapping stack write.
The analyzer may therefore merge two adjacent generic
32-bit parameters, or retype one generic `undefined8`, as `double` while
preserving the total stack byte count. It emits one full-prototype row and
defers all other repairs for that function until the next fixed-point pass.
The same callee-local proof repairs a truncated `__thiscall`/`__stdcall`
prototype when every machine return uses one nonzero `RET n`. The purge fixes
the complete explicit stack extent; every byte beyond the current signature
must be read before an overlapping listing write, and at least one newly exposed
slot must be an exact x87 qword. Exact repeated `FLOAT PTR` dereferences through
one loaded incoming dword may type that slot as `float *`; remaining dwords stay
generic until later role analysis. This expansion never consults caller
pseudocode, because those calls were themselves rendered from the incomplete
prototype.
For an already eight-byte generic parameter, an exact low/high dword copy into
an independently recovered `double` class member is equivalent evidence; the
two halves must originate from the same incoming qword before stack reuse.
The inverse wrapper pattern is supported too: two adjacent incoming dwords
which are forwarded unchanged, in the correct low/high order, to an already
typed `double` stack parameter prove one eight-byte source slot. This repairs
calls rendered as `0, 0x40240000` from machine dataflow, not from recognizing a
particular constant. A following class-layout pass can likewise fold an exact
low/high copy of that ABI-proven slot into one adjacent `double` member.
A later pass recognizes its own exact installed x87 prototype from the tag and
commented prototype baseline even if another Ghidra update promoted the signature
source. It can then remove a duplicated auto-`this` projection and repack every
stack slot from offset four. Custom storage uses the datatype's exact byte width
while advancing by the four-byte x86 ABI span, so a `short` occupies two storage
bytes without shifting the following argument.
A generic `undefined *` parameter becomes `int`/`uint` only when its machine
lifetime before the first write to the physical argument slot contains multiple
scalar operations, a signed/range comparison, and no pointer dereference. The
first write is a hard lifetime boundary: later pointer use of the same stack word
belongs to a compiler scratch local and is not evidence about the source
parameter. Generic pointer returns similarly gain only a byte/word/dword element
width after at least two caller dereferences agree; the pass does not invent a
semantic table type. `abi_consistency_scalar_audit.tsv` records every attempted
physical frame offset, its evidence counters, score, and final selection so a
missed repair can be diagnosed without modifying the analyzer or relying on
console output.

Pointer-shape analysis follows one-level nested dereferences, pointer values
temporarily represented by `int`/`uint`/`undefined4`, and simple SSA-style
copies. Child layouts are emitted as dependent anonymous types and applied
before their parents. Inlined `DArrayTy` element addressing is recognized as
the known recovered type. Field-by-field construction of a decompiler
HighVariable is also joined back to the same generated pointer shape, including
byte/word pieces not represented by a persistent Listing local. Overlapping
child observations are kept as evidence;
only a strongest non-overlapping ordinary-structure view is eligible for
automatic application. A later fixed-point pass may grow or enrich an unchanged
hashed anonymous shape when the new observation still covers every previously
generated field. Reported lengths are exact observed minimum extents and are not
rounded for alignment; existing generated lengths are never shrunk merely because
one pass observes less.
`pointer_shape_call_type_edges.tsv` records address-stable parameter/receiver
type flow at exact call boundaries. Neutral generated helpers may inherit a
common receiver only after propagation from at least two independently named
caller families and a unique physical-vtable candidate which covers every
observed machine slot with strong target-family agreement. One caller family,
an undersized object, a short candidate vtable, or competing candidates keeps
the row review-only.

Physical indirect-call refinement is monotonic with respect to ABI strength.
If a generated receiver-aware slot definition is stronger than the current
target Listing signature, the analyzer reuses the deterministic generated
family and the applier refuses the generic target-signature downgrade. Class
layout selection likewise ranks a proven primary offset-zero vtable above any
secondary `OwnerVTable_at_OFFSET`; proposal file order is not evidence.

Prototype propagation resolves each direct entry address through its thunk chain
before selecting a target. Overloads are therefore selected by address, never by
their shared qualified name. Stack parameters still require an exact argument
count; explicit `__fastcall` ECX/EDX parameters are matched from their actual
register storage. Stable EBP-local spills preserve trusted incoming parameters
and `this` across compiler-generated save/reload sequences.
Types and names are independent per parameter; conflicting evidence for one
parameter does not block another. Trusted `this` receivers, user/imported
prototypes, concrete parameters of named library functions, semantic pointer/enum
types, and short one-call wrappers provide the strongest evidence. `USER_DEFINED`
and `IMPORTED` parameters and returns are preserved. Every observed call is
written to `prototype_callsite_audit.tsv` with its direct address, thunk chain,
resolved implementation, stack count, per-parameter stack-value mapping, and
register evidence. `exact_address_match` is the only stack form used for automatic
propagation. `address_match_with_prefix_pushes` separates callee-saved/temporary
prefix pushes from a true `stack_argument_underflow`; varargs have their own
status. This is the primary check for same-name overload propagation.

The propagation is not tied to a class or method-name family. It follows exact
fixed-offset fields through any typed structure pointer and preserves a proven
callee-saved `this` alias across distant switch/CFG blocks. `MOVSX`/`MOVZX`
record signedness independently of the source width: when the callee has already
established an `undefined1` or `undefined2` ABI width, repeated sign/zero-extended
call sites can refine it to `char`/`byte` or `short`/`ushort`. Generated primitive
fields require agreement from at least two independent call sites; generic
`field_XXXX` names are never propagated. `prototype_undefined_boundary_audit.tsv`
lists every still-undefined parameter and return, including targets with no
evidence, conflicting evidence, a width mismatch, or too few independent sites.

One analyzer invocation now computes a bounded fixed point over parameter
forwarding. A machine-qualified type may therefore pass through several wrappers
before proposals are written; script-owned types are not blindly reused as
seeds. Integer evidence is normalized to the callee's retained ABI width, so an
`int` source copied into an `undefined2` formal contributes `short`, not a
permanent width mismatch. Explicit sign/zero extension is strong evidence from
one site. If signedness of a one- or two-byte parameter is genuinely
unobservable and its incoming lifetime consists only of exact-width raw copies,
the representation falls back to `byte`/`ushort`. There is intentionally no
equivalent fallback for `undefined4`: local comparisons, shifts, FPU use, pointer
dereferences, or typed callees must distinguish integer, float, pointer, enum,
handle, and record roles first. When exactly one conflicting type has strong
machine evidence, it may override primitive weak callsite guesses; two strong
types remain a conflict.

Return-semantics recovery also resolves non-leaf `void` functions when at least
two observed callers ignore EAX, none consumes or forwards it, and decompilation
contains no value-return statement. Reaching a caller `RET` without redefining
EAX counts as return forwarding only if the caller already has a protected
non-void return ABI. A generic `undefined4` caller is `unknown`: otherwise a
cluster of default signatures can recursively “prove” a return value which no
callee actually defines. An explicit instruction read of EAX remains use
evidence, but by itself cannot roll a previously proven `void` back to
`undefined4`; optimized register carry and SSA joins make that unsafe.

The analyzer also follows the producer of `EAX` until its first local use. A
returned value used as a typed call argument, as the receiver of a known
`__thiscall`, or stored in a typed global/class field can recover the producer's
return type. Register facts never cross an unmerged basic-block boundary, and a
function's direct return is propagated from an argument only for a short
one-call wrapper. Provisional switch enums are not accepted as reverse-return
anchors. These restrictions avoid turning path-dependent integer temporaries
into pointers merely because Ghidra reused a stack/register variable.

The repair pair is normally needed only after upgrading from a prototype
analyzer that did not distinguish x86 subregisters or absolute memory loads. It
isolates only targets carrying an earlier `STPrototypeApplier` marker, verifies
the exact old name/type/source baseline, and leaves later manual changes alone.
It also removes explicit parameter names accidentally propagated as `this`.
After a successful repair and analyzer rerun, `repair_auto_apply` should be
zero. Weak review-only repair rows may remain and are reported separately; they
are not a reason to repeat the automatic pass. Do not apply the pre-repair
`prototype_proposals.tsv`;
rerun the analyzer first. `STPrototypeApplier` refuses rows marked `repair=1`,
so corrections cannot be mixed accidentally into an ordinary propagation pass.
A repair is monotonic in semantic specificity: it may replace a generated
anonymous pointer with a named structure pointer, but it may not degrade that
structure back to `int *`, `byte *`, `char *`, or another generic call-site
spelling. This prevents prototype repair and pointer-shape recovery from
oscillating forever over the same target.

The global-record pair handles a layer that scalar global propagation cannot:
one packed structure repeated at a fixed byte stride. It first identifies the
unique guarded byte-index lookup by machine behavior, then symbolically recovers
the referenced base and stride. The record count is accepted only when
independent exclusive-boundary and total-size evidence agree. Record IDs, type
paths, and global names are derived from the observed geometry, for example
`PackedRecord_A62x8` and `g_packedRecords_A62x8`; no game-specific record name is
seeded. Observed first-record accesses become width-correct fields;
signed/unsigned extension or x87 operations may refine scalar types, while
other offsets stay `undefinedN` until semantic evidence appears. Once geometry
is independently closed, exact rendered scalar casts in every record-using
function may refine fields even when MSVC synthesized the stride through
`LEA`/`SHL`. A four-byte member becomes `T *` only when a locally declared
`T *` is stored into that exact member and the same member is independently
consumed as the unique `T *`; this paired producer/consumer proof outranks the
intermediate decompiler `(int)` cast. Installed hash-owned concrete fields are
retained as a weaker monotonic baseline so successful typing cannot erase its
own evidence on the next pass. Legacy named
fields and old manually shaped projections are deliberately not carried
forward. An existing script-owned record is migrated to the neutral identity
only when its marker and safety hash prove it unchanged; its installed fields
are not treated as fresh eligibility evidence for the next proposal.

Run global records before ordinary global data. The record applier intentionally
refuses to clear concrete unowned data, so first applying a scalar type inside
the same range would turn the record proposal into a preservation conflict.
Both the generated structure and the complete address range have safety hashes;
stale proposals or hand-edited layouts are reported and left untouched. A
second analyzer/applier pass should report `unchanged`.
An ordinary apply can expose a more specific type and thereby create a second
small repair wave. After every analyzer run, service enabled repairs first,
rerun the analyzer, then apply ordinary rows. Stop only when
`repair_auto_apply`, `type_auto_apply`, and `name_auto_apply` are all zero.

Global-data propagation recognizes generic `DAT_*`, `UNK_*`, and `PTR_*`
symbols when the stored value is repeatedly used as a typed receiver or trusted
argument. Automatic replacement is limited to small undefined or script-owned
data. Address-of evidence, overlapping concrete data, and manual symbols remain
review-only. A synthetic `PTR_*` whose existing concrete pointer type already
matches closed receiver evidence can still receive a structural name without
rewriting its type; for example, the `STPlaySystemC *` singleton becomes an
address-stable `g_playSystem_*` symbol. Generated names retain the address suffix.

Pointer-shape propagation handles the corresponding local/parameter layer. It
collects expressions such as `*(uint *)(local_24 + 0xc)`, combines them with
typed call arguments and receivers, and proposes a structure pointer for the
stable Ghidra variable storage. A known type such as `DArrayTy` wins when helper
calls prove it; this lets the decompiler render offset `0xc` as `->count`.
Competing base/derived call evidence is accepted only when one compatible,
larger structure has at least a three-to-one evidence lead.

Parameters used as payload carriers in several arms of the same switch are a
special case: a helper call in one arm does not prove the persistent parameter
type for every arm. The analyzer detects these discriminated carriers and emits
them as review-only instead of, for example, turning a multi-layout `void *`
into `DArrayTy *`. Model confirmed alternatives as members of a union and type
the individual caller-side aggregates.

When no semantic type exists, the analyzer creates a separate address-stable
`AnonShape_*` proposal for each persistent variable with at least two
non-overlapping offsets and three observations. Fields initially retain
structural names such as `field_000C`. A single repeated offset never causes
unrelated variables to share a type, and a field-layout-only resemblance to an
existing class remains `apply=0`. Transient register symbols, concrete types,
and manual/imported variables also remain disabled. Script-owned anonymous
types contain a layout hash; a later manual edit is detected and preserved.

The analyzer writes `pointer_shape_type_proposals.tsv`,
`pointer_shape_field_proposals.tsv`, `pointer_shape_target_proposals.tsv/jsonl`,
`pointer_shape_decompile_failures.tsv`, and `pointer_shape_summary.txt`. Review
the target TSV first. The ordinary automatic rows already have `apply=1`; do
not bulk-enable the review/conflict rows merely to increase coverage.

These passes form a bounded feedback loop. After applying them, rerun
`STClassLayoutAnalyzer`/`STClassLayoutApplier`; this lets the class pass consume
the corrected most-derived saved-`this` locals and cross-class field flows.
Then rerun the prototype and
global-data pairs. Stop when the summaries report no new enabled rows; do not
force conflicting rows merely to continue the loop.

Run these passes before the final `OURLIB_*` library classification so relevant
implementations remain available for data-flow analysis.

### 8. Source provenance and free-function names

1. Run `STSourceProvenanceAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STSourceProvenanceApplier`.
   - File: `<repo>/recovery/ST.exe/source_provenance_proposals.tsv`

Source comments and names have independent flags. Diagnostic line numbers
identify the location of the embedded report/assert site, not necessarily the
original function definition line.

A second strict path recovers free-function names even when the source literal
is not referenced by every function. It requires one mixed-case identifier,
one following call target, and at least four distinct name/function pairs
feeding the same machine-verified diagnostic sink. The sink must consume a
stack argument, clean it with `RET n`, and contain the terminal debug trap
pattern; ordinary resource loaders therefore cannot qualify. A preceding
source-file literal within the bounded string cluster supplies module
provenance but never an invented line number. This recovers families such as
`SprClose`, `SprSetMask`, and `SprMove` from their actual diagnostic arguments.

Run this before the final library applier. Source-provenance analysis skips
functions already tagged as libraries.

### 9. Transparent thunk propagation

1. Run `STThunkPropagationAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STThunkPropagationApplier`.
   - File: `<repo>/recovery/ST.exe/thunk_proposals.tsv`

Ghidra normally mirrors a direct one-instruction `JMP` thunk's target name,
namespace, and signature automatically. A manually named wrapper pins a
separate symbol and prevents later target renames from reaching it. This pair
audits every thunk and releases only an exact redundant `TargetName_thunk` in
the target namespace when the complete ABI already matches. Ghidra's real thunk
signature is already delegated to the target; the applier deliberately never
changes it. Other manual/imported wrappers, non-transparent adapters, and stale
target baselines are preserved. Ordinary automatically forwarded thunks remain
unchanged.

### 10. Structural control-flow labels

1. Run `STControlFlowLabelAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STControlFlowLabelApplier`.
   - File: `<repo>/recovery/ST.exe/control_flow_label_proposals.tsv`

Only labels that are actual decompiler `goto` targets are considered. Common
exits, loop breaks/continues, and well-supported joins can be named; generic
joins remain disabled.

### 11. Library classification

1. Run `STLibraryAnalyzer`.
   - Directory: `<repo>/recovery`
2. Review `library_proposals.tsv` and run `STLibraryApplier`.
   - File: `<repo>/recovery/ST.exe/library_proposals.tsv`

The analyzer recognizes the linked VC6 CRT, DKW modules, and source modules
under `E:\Ourlib\`. Exact source paths outrank the weak leading-underscore
heuristic. The latter remains `apply=0` for manual review.

Existing C++ ownership is preserved: a method such as `cMf32::RecGet` receives
library tags and comments but is not flattened into a module namespace. Global
functions are placed under `Library::...`.

On a completely clean import, an optional early library pass can remove CRT/DKW
noise from later analysis. In that early pass, keep all `OURLIB_*` rows disabled
until source provenance and class-layout analysis have finished. Rerun the
library analyzer at the end to regenerate current rows.

After the final library apply, source-provenance, class-layout, prototype,
global-data, and control-flow analyzers intentionally skip tagged
implementations. Rerunning them at that point therefore produces a smaller
diagnostic set; it does not mean their previously applied facts became invalid.
The switch analyzer is the exception: it continues to inspect internal
`OURLIB_*` functions so their enum/state domains remain stable across reruns.
Keep the richer pre-library proposal files for the other analyzers unless the
purpose of the rerun is specifically to analyze only game-owned code.

The pipeline makes one deliberate exception: immediately after final library
classification it reruns global-data and pointer-shape propagation. Those passes
inspect game-owned callers of the newly tagged callees and can therefore promote
a high-fanout `PTR_*` singleton to the dominant generated library context in the
same full run. They still skip the newly hidden library implementations.

### 12. Export the text corpus

Normally run `STRecoveryPipeline` in `export` or `full-export` mode so evidence
verification, the prior-corpus snapshot, `STDecompExport`, and
`STExportRegressionGate` form one failure-attributed sequence. A standalone
`STDecompExport` remains available for diagnostics.

- Directory: `<repo>/decomp`
- Output: `<repo>/decomp/ST.exe`
- Gate report: `<repo>/recovery/ST.exe/export_regression_report.tsv`
- Early ABI report: `<repo>/recovery/ST.exe/abi_regression_report.tsv`
- Atomic receipt: `<repo>/recovery/ST.exe/export_receipt.json`

The exporter writes program metadata, types, globals, strings, symbols,
callgraph indexes, address-resolved `call_relations.jsonl`, and per-function directories. It reuses an existing function
body when its dependency-scoped fingerprint is unchanged. If a function becomes
a library or thunk, stale `decomp.c` and `listing.asm` files are deleted.

The same run performs executable-section coverage auditing. Known function
bodies are subtracted from every initialized executable memory block. Long
`00`/`90`/`CC` runs are classified as padding; remaining ranges are classified as
orphan instructions, defined data, address tables, import-thunk tables, probable
x86 code, text, or unknown non-padding bytes. Probable-code evidence includes
validated relative calls, return opcodes, and conservative entry-byte patterns;
it is an audit classification and does not create functions in Ghidra.
Aligned raw pointers from non-executable memory are audited even when Ghidra has
not defined the containing data. Matching ranges become `data_referenced_code`;
the characteristic MSVC `mov eax,1; ret` filter followed by an EH funclet is
reported as `seh_funclet_cluster`. These are runtime control-flow records, not
evidence that the whole containing range is one source-level function.
If the raw pointer selects an unclaimed `JMP` entry, the audit follows that one
control-flow edge and classifies the destination as `table_callback_target`.
This covers object/factory registries without treating arbitrary byte patterns
as calls.
`coverage_summary.json` and `unclaimed_ranges.jsonl` contain the complete
inventory. Meaningful ranges are exported as text under
`unclaimed/<START>_<END>/` with `meta.json`, `bytes.txt`, and `listing.asm`; no
original binary blob is copied into the repository.

Reused bodies still pass through the cheap text-normalization/catalog stage; no
decompilation is needed. Terminal x86 `INT3` plus Ghidra's synthetic `swi(3)`
indirect call becomes the standalone noreturn `STDebugBreak()` helper defined in
`pseudocode_runtime.h`. Exact decrementing zero loops produced from
`REP STOSD` plus an optional tail store become byte-counted `memset` calls; the
transfer-only `undefined4 *`/`undefined1` artifacts are removed without replacing
the recovered class fields with an overlapping integer array. Exact typed
`(*object->vtable->slot)(object, ...)` calls become C++ member-call syntax, while
adjusted, cast, missing, and secondary-base receivers remain explicit. Forms that cannot
be safely rewritten from text alone
are grouped by function in `pseudocode_idioms.jsonl`, with line excerpts,
machine/address hints, and the intended structured form. See
[`pseudocode-normalization.md`](pseudocode-normalization.md).
The broader `decomp_quality_summary.json` and `decomp_quality_issues.jsonl`
inventory recursively scans every exported function body and also tracks generic
fields/globals, anonymous shapes, undefined types, enum bitwise compositions,
string labels, and CFG labels. Every issue and summary category records its
`quality_stage` and `regression_policy`: `strict_zero`, blocking or warning-only
`nonincreasing`, stage-transition, or informational. The export gate therefore
blocks exact structural loss and critical ABI debt while reporting expected debt
movement between recovery stages as a warning.
Compilation readiness is intentionally a separate inventory.
`compile_readiness_summary.json` distinguishes missing source/declaration
assembly, compatibility-runtime uses, semantic debt, and truly residual
Ghidra-only syntax; `compile_readiness_issues.jsonl` records every exact site by
function address. `pseudocode_runtime.h` supplies C++17-compatible exact-width
aliases, calling-convention macros, opaque unresolved callable values,
`STPiece`/`STLiteralPiece`/`STField`, and only the observed byte-composition and
carry helpers. These make the operation expressible without claiming a class or
field name. The complete contract and current counts are in
[`compile-readiness.md`](compile-readiness.md).
Each unresolved expression also receives an idempotent `ST_PSEUDO[...]` comment
immediately above it in `decomp.c`; reused bodies have old exporter comments
removed and regenerated before the JSONL line numbers are recorded.

All referenced immutable NUL-terminated strings are rendered as escaped C
literals in `decomp.c`, including `RaiseInternalException`, resource names, and
ordinary helper calls. A datum with a machine-code write reference remains
symbolic. `meta.json` and `strings.jsonl` retain the original address and Ghidra
symbol in either case. Ghidra itself only emits a quoted pointer when the target
is character data in read-only memory; ST keeps many immutable diagnostics in a
writable PE block beside real globals, so changing the entire block to read-only
is not a safe workaround.

Composite layouts are fingerprinted selectively: a function depends on the
identity of its referenced structures and on the components it actually
accesses, not on every field of every structure mentioned by its signature. A
change to an unused field therefore does not invalidate all methods of that
class, while a type/name/comment change at an accessed offset still does. The
access walk follows typed registers and EBP stack spills over the complete CFG,
including a constant member displacement combined with a scaled array index,
so fields used only after calls, switch arms, or reloaded saved `this` pointers
are not incorrectly reused from an older export. Unions
are the exception: their complete ordered member layout is part of the fingerprint
because member order can change which expression Ghidra prints for the same byte
offset. The first export after this fingerprinting revision intentionally
recalculates the corpus once; later exports can reuse unaffected function bodies.
The CFG join retains a typed fact only when every reachable predecessor agrees.
An explicit per-function work limit widens conservatively and records the rare
address in `manifest.json` instead of allowing an irreducible or malformed CFG to
stall the whole export.

## When a rerun can discover something new

The analysis is iterative, but it is not necessary to rerun every script after
every edit. Use the smallest affected loop:

| Database change | Rerun |
| --- | --- |
| New constructor or class owner | vtable → virtual methods → constructors → class layouts |
| New vtable owner or slot function | virtual methods → constructors → destructors |
| New method name, receiver type, or class field type | method owners → prototypes → globals → class layouts |
| Newly proven anonymous ECX receiver | hidden this → prototypes/export audit; anonymous vtable slots may then be refined separately |
| New high-fanout helper semantics | utility functions → ABI consistency → return semantics → prototypes |
| New or corrected `GetMessage` signature | message handlers → vtables → virtual methods → indirect calls → prototypes |
| New named aggregate return type | type families → pointer shapes/prototypes for affected callers |
| New or corrected vtable slot prototype | indirect calls → type families → affected callers |
| New prototype or typed global | prototypes → global records → globals → pointer shapes → class layouts, until enabled counts reach zero |
| New repeated global stride/range | global records → globals → switch enums, then export affected functions |
| New bounded indexed global array | global aggregates → globals → pointer shapes |
| New class field suitable for a switch domain | switch enums, then class layouts once more |
| New source/debug name | source provenance; vtable too if the function writes a vptr |
| New exact function boundary from coverage evidence | unclaimed code → vtables → constructors → prototypes → globals/indirect calls |
| New class layout or constructor allocation size | object factories → vtables/prototypes for newly typed factory callers |
| Final library classification | no recovery loop; export the corpus |

An analyzer may continue to emit enabled rows whose desired state is already
present. The corresponding applier report should say `unchanged` or `already
present`; that is a fixed point. A growing enabled set, an `updated` result, or
a new conflict is what requires another iteration.

## Script reference

| Pair or script | Primary purpose |
| --- | --- |
| `STRecoveryLauncher` | Capture provider/loading/runtime diagnostics for the pipeline itself in `pipeline_bootstrap.log`, then invoke the normal pipeline. |
| `STRecoveryPipeline` | Infer repository paths, run dependency-ordered fixed-point workflows, retain the three newest hash-addressed run logs, and refuse stale/unconverged/regressed exports. |
| `STTypeBootstrapAnalyzer/Applier` | Infer the minimum semantic type anchors from method/access/reference families; migrate exact provenance-owned legacy view parameters and stack locals without embedded addresses, type-name deletion lists, or enum values; atomically normalize signature, return, and explicit-parameter provenance after a tagged heuristic identity retirement. |
| `STDebugSymbolAnalyzer/Applier` | Recover C++ owners, method names, calling conventions, source evidence, and short diagnostic printf strings. |
| `STCallsiteConventionAnalyzer/Applier` | Audit direct and thunk-mediated callers and apply only unanimous high-confidence static `__cdecl` corrections. |
| `STMessageIdAnalyzer/Applier` | Recover the `MESS_*`/`STMessageId` domain. |
| `STMessageHandlerAnalyzer/Applier` | Apply the common `STMessage *` envelope and status return across the named `GetMessage` family, including the shared zero-return handler, and idempotently tag exact recovered handlers as vtable provenance. |
| `STUnclaimedCodeAnalyzer/Applier` | Create only callback/entry targets and complete direct-JMP thunk chains with live pointer/CALL/data anchors; retain EH funclets, direct raw targets, and probable code as review-only coverage. |
| `STObjectFactoryAnalyzer/Applier` | Recover the terminated object-type/factory registry, exact no-argument cdecl factory ABI, concrete class results/names, missing table-selected entries, `STObjectTypeId`, and typed registry consumers. |
| `STVTableAnalyzer/Applier` | Find long and strongly referenced short vtables, resolve direct-JMP thunks, preserve tagged owner-specific message signatures, apply physical layouts separately from semantic owners, type safe owner vptrs, and record owner conflicts. |
| `STVirtualMethodAnalyzer/Applier` | Propagate reviewed virtual slot names, conventions, and compatible signatures. |
| `STConstructorAnalyzer/Applier` | Recover constructors, allocation sizes, direct hierarchy evidence, receiver-only signatures, and ABI `Owner *` returns when EAX is proven to return `this`. |
| `STClassLayoutAnalyzer/Applier` | Build and revalidate conservative class layouts, including fields reached after stable prologue `this` spills, exact x87 float/double operand widths with split dword high halves folded into the qword member, exact low/high copies of ABI-proven `double` parameters, exact address-of-field consumer types, dynamic byte/word buffers, nested class-field pointee layouts, semantic field-type/name proposals, and packed initialization writes between an allocator/factory return and its store into an already typed singleton. An unchanged hash-owned layout generated by `STGlobalDataApplier` may be handed over once, preserving non-overlapping producer fields; manual or edited layouts remain protected. |
| `STClassArrayAnalyzer` | Prove fixed arrays embedded in generated class layouts from bounded indexed accesses and exact pointer-walk loops, and recover a selected pointer element's pointee width from its subsequent dereference; `STClassLayoutAnalyzer/Applier` consumes the proposals. |
| `STInlineAggregateAnalyzer` | Recover exact by-value nested members from complete typed `REP MOVS` source spans and catalogue exact `REP STOS` zero spans. `STClassLayoutAnalyzer/Applier` consumes safe nested-member proposals; zero spans become array bounds only when independent indexed-stride evidence agrees. |
| `STDArrayElementAnalyzer/Applier` | Recover one packed element record and one ABI-compatible descriptor specialization per generated class `DArrayTy` field from exact factory element sizes, runtime-stride aliases, exact inline-record snapshots, typed consumer parameters, and conservative state/index/handle/coordinate roles; decompile candidates in parallel with a short normal budget and retry only timed-out large bodies with the longer budget; retain the monotonic union of fields independently proven on earlier passes so applied member rendering cannot erase its own raw-access evidence. |
| `STLocalLifetimeAnalyzer/Applier` | Split compiler-reused decompiler locals at distinct merge groups, type single-group raw-undefined locals from exact call/copy evidence, propagate hash-intact recursive-node fields through exact load/store/address/cast anchors, and recover scalar roles only from role-bearing p-code; verify the exact machine anchor after a fresh decompile and converge only changed functions before the final broad confirmation. |
| `STMethodOwnerAnalyzer/Applier` | Assign structural class ownership to non-virtual methods, use typed global-singleton values passed in ECX as owner evidence, and repair weak script-owned assignments to high-fanout shared helpers; it participates in the deep fixed point after global typing. |
| `STHiddenThisAnalyzer/Applier` | Recover anonymous `__thiscall` receivers from ECX/RET/call-site evidence with neutral structural owners required by Ghidra. |
| `STDestructorAnalyzer/Applier` | Recover conservative destructor and scalar-deleting-destructor candidates. |
| `STSwitchEnumAnalyzer/Applier` | Turn repeated switch/state domains into enums, decode exact OR-composed cases, retain an evidence-generated monotonic domain state, and materialize exact local domains without typing reused locals. |
| `STUtilityFunctionAnalyzer/Applier` | Verify and name high-fanout runtime helpers, discover generic DArray erase/iterator and pitched row-copy implementations, recover source- and machine-verified DKW allocate/zero-allocate/reallocate contracts with neutral `void *` results, retain heterogeneous object-loader payloads as `byte *`, install their exact prototypes, and attach ID-specific `RECOVERED_UTILITY_*` tags for name/address-independent downstream use. |
| `STAbiConsistencyAnalyzer/Applier` | Repair machine-proven x86 calling/return widths, expand truncated callee-cleaned stack signatures from unanimous `RET n` plus complete incoming-slot reads, merge exact x87 double-width stack slots (including a qword copied into an owner field independently read as `double`, or forwarded as two ordered dword pushes to a typed `double` callee slot), preserve their observed four-byte-aligned x86 stack storage and migrate older script-owned dynamically realigned signatures, preserve Ghidra's unsized one-byte `/undefined` baseline during unrelated full-prototype repairs, `_setjmp3` varargs, and other ABI details that otherwise create `unaff_*`/`extraout_*` artifacts. |
| `STReturnSemanticsAnalyzer/Applier` | Recover conservative leaf and CFG-proven non-leaf `void`, boolean, terminal `noreturn`, and unanimous evidence-backed structure-pointer returns; retain contradictory EAX reads for review and repair the short-lived unsafe automatic `void` rollback. |
| `STPrototypeAnalyzer/Applier` | Propagate compatible parameter/return types and reviewed parameter names across direct calls, including externally anchored SCCs of unchanged wrapper boundaries. |
| `STPrototypeRepairAnalyzer/Applier` | Isolate and safely correct stale types/names previously written by prototype propagation. |
| `STAllocationRecordAnalyzer/Applier` | Recover producer/consumer-local packed records from one returned neutral-allocation root followed by an exact contiguous parameter-to-allocation fixed copy. Install only non-overlapping fields inside the copied span, reuse or monotonically extend hash-owned generated source views, and never specialize the shared allocator ABI. The machine audit retains exact non-returned and reallocated copies for review. |
| `STManualTypeAuditAnalyzer` | Consolidate strong evidence that a protected/manual prototype or field type is stale; read-only by design. |
| `STAbiRegressionGate` | Compare the current in-memory Program with the receipt-selected accepted corpus before expensive consumers run; protect all accepted typed vtable ABIs while merging physical aliases by table address, reject new class-vptr dispatch substitutions, decompile configurable ABI sentinels, and permit only exact fingerprinted reviewed transitions. |
| `STGlobalRecordAnalyzer/Applier` | Recover packed arrays of repeated global records from a symbolically inferred base/stride plus independent extent evidence; create fields only from observed machine accesses and exact rendered scalar casts, recover pointer members only from matching typed stores and consumers, retain hash-owned concrete fields as a monotonic baseline, retire legacy seeded nested layouts, and migrate an obsolete generated Listing element identity only when its producer marker and stored/current layout hashes agree. |
| `STDiscriminatedPayloadAnalyzer/Applier` | Infer per-case payload layouts from direct reads, fixed pointer-advance copy loops, shared goto tails, and single-element DArray appends. The final pass recovers caller stack aggregates only when thunk-resolved vtable-slot machine evidence and the typed decompiler call agree on the exact case/stack pair; obsolete hash-intact generated family identities migrate by function-address/case provenance, never by layout similarity. Imported/library families are excluded, and any intact generated false-positive left by an earlier pre-library pass is retired through the ordinary type lifecycle. |
| `STGlobalAggregateAnalyzer/Applier` | Audit indexed global ranges and install only bounded arrays/matrices with a proven extent/indexing formula, including composed affine packed-record strides closed by exact bulk-zero extents, transpose-proven binary relation matrices, and behavior-proven Win32 resource-string scratch arenas. |
| `STGlobalDataAnalyzer/Applier` | Type generic globals from receiver/argument use and named-constructor stores, follow the constructor-result edge through MSVC new/null join blocks, accept ordinary `T **` address-taking when an unambiguous named-constructor store proves the singleton's `T *` value, promote script-owned anonymous singleton pointers to named classes or dominant statically linked library contexts, name literal-backed module handles, assign address-stable structural names, and audit every `PTR_*` symbol by pointer role. |
| `STFunctionPointerParameterAnalyzer/Applier` | Recover callback stack parameters from complete direct-callsite coverage: every observed caller passes an exact function address or null into the same parameter, the callee invokes it indirectly with one argument count, and at least two exact target sites agree on ECX use, `RET n`, and neutral parameter widths. Cdecl counts additionally require matching caller cleanup. Manual/imported signatures, concrete parameter types, and unknown callsite values remain review-only. |
| `STFunctionPointerFieldAnalyzer/Applier` | Recover non-vtable callback members only from the complete chain “exact stored function address → one generated structure field → indirect call through that same field.” A cheap machine pass recognizes direct and register-mediated function-address stores; High p-code proves the exact field before call-only functions are decompiled. With no exact stored target, call-only decompilation and call-only proposal noise are skipped. All stored targets must have one imported or independently recovered ABI; bare `USER_DEFINED` provenance is review-only, and manual structures and concrete fields are preserved. The report retains all exact observed stores and their rejection reasons. |
| `STIndirectCallAnalyzer/Applier` | Audit raw indirect calls; refine trusted physical slots, install machine-proven neutral thiscall/stdcall definitions, and propagate an ABI only across unanimous typed vtable occurrences of the same resolved target. Polymorphic dispatch interfaces are proposal-only, and the applier refuses legacy attempts to install them into class vptrs or synthetic tail slots. |
| `STPointerRoleRepairAnalyzer/Applier` | Remove prior script-owned pointer constraints from stack slots with proven scalar lifetimes in unsettled functions, and retire locals pointing to generated view-only types. |
| `STPointerShapeAnalyzer/Applier` | Recover and fixed-point-refine known or anonymous pointer-backed structures from fixed, nested, alias-mediated dereferences, typed calls, and field-by-field stack aggregate construction; interpret decompiler pointer additions in current rendered pointee units unless an integer cast proves byte arithmetic; retain newly exposed scaled geometry for review except for a closed single-call consumer-local record view; keep heterogeneous producer ABIs neutral; treat weak scalar pointers such as default `short *`, `ushort *`, and `word *` as replaceable only after the normal thresholds pass; retry ordinary decompile failures once with a 300-second budget; merge non-conflicting generated partial views only when identity is proven; materialize a target-local exact-call superset instead of widening helper-local views; apply auto-`this` types through the owning class namespace. |
| `STRecursivePointeeAnalyzer/Applier` | Recover a recursive linked-node view only when repeated self-link traversal and at least two non-conflicting generated partial views meet at one exact hash-owned owner field. Identity is the owner path plus field offset; the applier installs a deterministic node with `next` at offset zero, refines its scalar members from exact direct casts after identity is proven, preserves provenance for confirming passes, and never merges geometry across roots. |
| `STTypeFamilyAnalyzer/Applier` | Promote anonymous layouts to an explicit semantic anchor, propagate named aggregate returns, and give complete one-owner records deterministic generated names. Anonymous consolidation requires a semantic/HiddenThis anchor, a unique producer view which explicitly records that sole anonymous source and still matches its stored hash (or the complete legacy producer snapshot), exact direct-call pointer dataflow plus complete-layout/one-owner/no-alias agreement, or one unambiguous source basename plus at least three exact first-parameter flows spanning two callees and two semantically named functions. Geometry or basename equality alone never merges types. |
| `STTypeLifecycleAnalyzer/Applier` | Replace legacy views with one equivalent semantic anchor, consolidate an exact orphan HiddenThis duplicate into its unique namespace-backed receiver family, and remove unreferenced views, their direct Pointer/Array derivative chains, and hash-owned anonymous PointerShape/ClassPointee/HiddenThis types after zero-parent/signature/Listing-use revalidation. Analyzer and applier use whole-program usage indexes; the applier validates immutable target and replacement baselines, performs replacements first, then rebuilds one live removal index so a newly referenced type cannot be deleted. `ST_VIEW_ONLY` is an explicit pipeline-owned retirement opt-in which takes precedence over a stale coexisting anchor marker, including the oldest views that predate applier descriptions. |
| `STEvidenceLedger` | Record/verify a deterministic semantic Program fingerprint and hashes of every proposal/apply artifact plus monotonic enum state before export; retain the volatile modification counter for diagnostics only. |
| `STSourceProvenanceAnalyzer/Applier` | Attach original source files and strict free-function names, including unique identifiers passed to repeated machine-verified diagnostic sinks and bounded source-string clusters. |
| `STThunkPropagationAnalyzer/Applier` | Audit transparent direct-JMP thunks, preserve normal Ghidra target forwarding, and release only exact redundant manual `TargetName_thunk` symbols after full ABI and stale-baseline validation; delegated target signatures are never mutated. |
| `STControlFlowLabelAnalyzer/Applier` | Give structural names to real decompiler goto targets. |
| `STLibraryAnalyzer/Applier` | Classify linked CRT, DKW, and internal Ourlib implementations. |
| `STExportRegressionGate` | Compare a fresh corpus with the prior central-index snapshot, report per-function quality deltas, reject exact structural/critical regressions, and write a reproducible export receipt. |
| `STDecompExport` | Transactionally stage and promote the address-stable, dependency-fingerprinted LLM corpus so a failed long export cannot partially overwrite the accepted tree; export resolved thunk/call relations and executable coverage gaps; inline proven immutable strings; normalize terminal traps, compiler bulk-zero and `REP MOVS` loops (including exact structural field-based pointer advances and trailing byte stores), split integer-only lifetimes from pointer-typed SSA names, remove dead opaque-code-pointer declarations, reproduce observable live-out state, exact recovered row-major three-dimensional grid indexing through `STGridAt3D`, exact same-base affine cancellation, ABI-proven narrow-return piece assignments, exact low-byte/word composition, exact generated global-record interior addresses, exact C++ virtual-call sugar, and exact recovered DArray element lifetimes/addresses without persistently typing reused SSA storage; emit the C++17 compatibility boundary plus address-stable compile-readiness summary/sites; fingerprint only composite members actually rendered by each cached body and catalogue stage-aware pseudocode/quality debt. |

## Git and Ghidra database hygiene

- `bin/` is ignored and must never be committed.
- Ghidra `.lock`, `.lock~`, recovery, and temporary files are ignored.
- The expanded database under `proj/` is ignored local working state. Publish
  only the verified packed Program checkpoint under `ghidra/` through Git LFS.
- Local CodeBrowser UI state is not part of the analysis.
- Generated Java `.class` and inner-class files are ignored. Do not deliberately
  compile scripts into `scripts/`.
- Close Ghidra before copying the project or running headless processing. An open
  GUI project is locked.

## Troubleshooting

### A script does not appear

Confirm that the repository's `scripts/` directory is enabled in Script Manager,
then refresh the list. Search by exact class name. Do not add the `scripts/`
parent or copy individual files into Ghidra's installation.

### A Java script fails to compile

Verify Ghidra 12.1.2 and JDK 21 first. Remove any stale local `.class` output and
let Ghidra compile the source again. Compilation failures against other Ghidra
versions can be genuine API differences. Script Manager refresh compiles the
entire source bundle before any repository script can execute, so refresh-time
compiler diagnostics remain in Ghidra's Console/application log. After a
successful refresh, `STRecoveryLauncher` retains provider/runtime output in
`recovery/ST.exe/pipeline_bootstrap.log`; child load diagnostics are retained in
the newest run's `build/` directory and indexed by `build_manifest.tsv`.

### An applier asks for a file instead of a directory

This is expected. Analyzers normally take the recovery root; appliers take their
specific proposal TSV. `STVTableApplier`, for example, expects
`vtable_proposals.tsv`, not the `ST.exe/` directory.

### An applier reports a stale name or signature

The database changed after the proposal was generated. Rerun the matching
analyzer and review the regenerated row instead of forcing the stale one.

### A manual structure is reported as preserved

This is intentional. Script-owned structures contain a layout hash. If the
current structure no longer matches that hash, the applier assumes a human
edited it and refuses to rebuild it.

### `field_type_auto_apply` becomes zero

This can simply mean all currently provable types are already present. Inspect
the apply report and `concrete_type_already_present` evidence before treating it
as a failure.

### Export changes thousands of files

Check whether a shared type, namespace, library tag, or signature changed. Those
facts can legitimately affect many functions. On a no-op rerun, unchanged
functions should be reused through their fingerprints.

### Export stops before the regression gate

Inspect the last `STDecompExport` exception in `pipeline_bootstrap.log` and the
newest retained run. With the current pipeline `export_receipt.json` must say
`incomplete`; an older `passed` receipt is never valid evidence for an
interrupted attempt made by an earlier pipeline version. The
exporter writes under an ignored sibling `.ST.exe.export-<uuid>/` tree and does
not promote it until `manifest.json`, all central indexes, and all function
directories are complete. The accepted `decomp/ST.exe` therefore remains
usable. A hard JVM kill can leave the staging directory behind; it is safe to
remove after Ghidra has stopped, but it is already ignored by Git.

The next `export`/`full-export` recovers its regression baseline from the failed
run's `pre_export/` snapshot. Do not update a hash, delete `decomp/`, or use the
interrupted tree as a new baseline.
