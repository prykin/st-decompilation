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
2. Open the CodeBrowser tool and load `proj/st.gpr`.
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
Ghidra project:      <repo>/proj/st.gpr
```

When an **analyzer asks for a directory**, select `<repo>/recovery`. It creates
or updates the `ST.exe/` child itself. Most analyzers also accept the existing
`<repo>/recovery/ST.exe` directory.

When an **applier asks for a file**, select the exact TSV named below. Sibling
proposal files are located automatically where required.

When `STDecompExport` asks for a directory, select `<repo>/decomp`.

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
| `create_apply` | Create a missing function boundary for a vtable target. |
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

1. Run `STRecoveredTypesApplier`.
   - Input: none; the conservative baseline definitions are embedded in the
     script.
   - Besides the core records, this installs byte/word/dword views for packed
     command payloads, confirmed `CmdToPlsObj` stack aggregates, and the
     `STWorldGrid` block rooted at `007FB240` with its two-object cells. The
     proven `STGroupBoatC::SetOrderData` discriminator is represented by the
     neutrally named `STGroupBoatOrderType` enum.
2. Run `STDebugSymbolAnalyzer`.
   - Directory: `<repo>/recovery`
   - Output: `proposals.tsv`, `proposals.jsonl`, `conflicts.jsonl`,
     `debug_string_proposals.tsv`, `debug_calling_convention_review.tsv`,
     `summary.txt`
3. Review `proposals.tsv` and run `STDebugSymbolApplier`.
   - File: `<repo>/recovery/ST.exe/proposals.tsv`
   - The sibling `debug_string_proposals.tsv` is loaded automatically. It
     recovers short NUL-terminated printf formats which Ghidra's normal
     minimum-length discovery misses, such as `%s` at `007A4CCC`.
4. If present and reviewed, run `STCuratedRecoveryApplier`.
   - File: `<repo>/recovery/ST.exe/curated_recovery.tsv`
5. Run `STCallsiteConventionAnalyzer` when
   `debug_calling_convention_review.tsv` is non-empty.
   - File: `<repo>/recovery/ST.exe/debug_calling_convention_review.tsv`
   - Outputs: `callsite_convention_proposals.tsv/jsonl`,
     `callsite_convention_calls.tsv`, and `callsite_convention_summary.txt`

The debug analyzer uses embedded `ClassTy::Method`, source path, calling
convention, and diagnostic-line evidence. The curated applier is reserved for
address-specific knowledge that cannot yet be derived generically.

`__thiscall` is proposed only when the incoming `ECX` value is still live when
the body first uses it; temporary uses after `ECX` has been overwritten do not
count. Incoming `EDX` is tracked independently so a real `__fastcall` second
argument is not silently converted into a stack parameter. Older script runs
may already have assigned `__thiscall` more aggressively. Such functions are
listed in `debug_calling_convention_review.tsv`; they are never reverted
automatically because an instance method is allowed to leave `this` unused.

The callsite analyzer resolves every thunk leading to each review candidate and
audits all direct callers. It records explicit `ECX` preparation, a live
pre-existing `ECX`, caller-side stack cleanup, and the callee's `RET n` values.
When every observed caller reclaims the stack, the callee uses a plain `RET`,
and no caller explicitly loads an `ECX` pointer receiver, that unanimous stack
discipline takes precedence over incidental scratch-register uses of `ECX`.
Partial or mixed cleanup evidence remains review-only.
This can confirm an unused-`this` method or identify a likely static `__cdecl`,
but it is deliberately read-only: all `apply` flags are zero and there is no
matching applier. Indirect virtual dispatch cannot be attributed to one
concrete implementation and is reported as a coverage limit rather than
treated as negative evidence.

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
strings and message dispatch comparisons. `STRecoveredTypesApplier` supplies the
common 0x20-byte `STMessage` envelope: the ID at `+0x10` and three four-byte
arguments at `+0x14`, `+0x18`, and `+0x1c`. Each argument is a union because its
pointer/integer/word interpretation depends on the message ID.

The handler pair then replaces script-generated `AnonShape_*`, `int`, and
`int *` parameters across the named `GetMessage` family with `STMessage *` and
normalizes generic non-void returns to `int`. It also recognizes the shared
`xor eax,eax; ret 4` default handler from its many named callers. Manually
refined semantic signatures and the proven `void` AI event handler are
preserved. Run this before vtable recovery so slot definitions inherit the
common signature.

### 3. Vtables and virtual methods

1. Run `STVTableAnalyzer`.
   - Directory: `<repo>/recovery`
2. Review and run `STVTableApplier`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
3. Rerun the analyzer and applier if the first apply pass created missing
   function boundaries. Stop once the report says the reviewed tables are
   already present and no new boundaries are proposed.
4. Run `STVirtualMethodAnalyzer`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
5. Run `STVirtualMethodApplier`.
   - File: `<repo>/recovery/ST.exe/virtual_method_proposals.tsv`

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
`this+0x1C`. It can therefore never overwrite the primary `vptr`. Manually
changed classes are preserved and reported rather than rewritten.
This is what turns a raw slot-zero call into, for example,
`(*aiPlayer->vtable->GetMessage)(aiPlayer, message)`.

The vtable applier does not automatically rename slot functions. Virtual-method
name, calling-convention, and signature flags remain independent. Manual
signatures and multi-owner targets are preserved.

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
5. Run `STClassLayoutAnalyzer`.
   - Directory: `<repo>/recovery`
6. Optionally review field-name suggestions in
   `class_field_proposals.tsv`.
7. Run `STClassLayoutApplier`.
   - File: `<repo>/recovery/ST.exe/class_layout_proposals.tsv`
   - The sibling `class_field_proposals.tsv` and, when present,
     `class_nested_{type,field}_proposals.tsv` files are loaded automatically.
8. Rerun the class-layout pair once. New constructor ownership can expose
   additional `this + offset` accesses even when no new class is created.

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

The method-owner pass follows only direct calls where a named caller's incoming
`this` value still reaches `ECX`. It assigns structural names such as
`STBoatC::sub_006EA2F0`; it does not invent semantic method names. Automatic
ownership also requires a compatible existing class data type. Ambiguous owner
sets stay disabled. A `__fastcall` candidate is not converted when its incoming
`EDX` value behaves as a real second register argument. When the body has no
incoming `EDX` or stack-argument reads, conversion also removes the old `ECX`
formal so it does not survive as a bogus stack parameter. The same check repairs
receiver-only signatures written by earlier versions of the applier.

Owner evidence is also coverage-checked against every non-thunk direct caller.
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

The analyzer groups repeated numeric switch domains. Safe parameter and
script-owned class-field targets may be enabled automatically. Locals, globals,
and ambiguously owned fields stay review-only.

Typed decompiler aliases such as `STBoatC *this_00` are resolved back to their
actual structure before classifying `this_00->field_*`. This keeps large
functions that save `this` in a local from producing dozens of false local
enums. Repeated switches over the same simple decompiler local are merged only
inside one function and remain review-only; a reused temporary is not stable
enough for automatic type application.

Each candidate first receives a 30-second decompilation attempt. A timeout gets
one 120-second retry; `switch_enum_decompile_retries.tsv` records the address
and whether the retry recovered it, while unrecoverable functions are retained
in `switch_enum_decompile_failures.tsv` instead of disappearing behind a count.
Tagged MSVCRT/DKW implementations stay excluded, but internal `OURLIB_*`
functions remain eligible: their state domains are part of the recovered game
API even though their assembly and decompilation bodies are omitted from the
final LLM corpus.

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
6. Run `STReturnSemanticsApplier`.
   - File: `<repo>/recovery/ST.exe/return_semantics_proposals.tsv`
7. Run `STPrototypeAnalyzer`.
   - Directory: `<repo>/recovery`
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
12. Run `STGlobalRecordAnalyzer`.
   - Directory: `<repo>/recovery`
   - Rerun `STRecoveredTypesApplier` first after script updates: the global-record
     model depends on the recovered packed `STPlayerTempSlot` type.
13. Run `STGlobalRecordApplier`.
   - File: `<repo>/recovery/ST.exe/global_record_proposals.tsv`
   - The sibling `global_record_field_proposals.tsv` is loaded automatically.
14. Run `STSpatialGridAnalyzer`.
   - Directory: `<repo>/recovery`
15. Run `STSpatialGridApplier`.
   - File: `<repo>/recovery/ST.exe/spatial_grid_proposals.tsv`
   - The containing program directory is also accepted.
16. Run `STGlobalAggregateAnalyzer`.
    - Directory: `<repo>/recovery`
17. Run `STGlobalAggregateApplier`.
    - File: `<repo>/recovery/ST.exe/global_aggregate_proposals.tsv`
18. Run `STGlobalDataAnalyzer`.
   - Directory: `<repo>/recovery`
   - Besides proposals it writes `global_pointer_audit.tsv`, a complete inventory
     of `PTR_*` data symbols split into control-flow/string/code table entries and
     actual pointer-valued globals. Anonymous pointees and any named-type evidence
     are shown explicitly.
19. Run `STGlobalDataApplier`.
   - File: `<repo>/recovery/ST.exe/global_data_proposals.tsv`
20. Run `STIndirectCallAnalyzer`.
    - Directory: `<repo>/recovery`
21. Run `STIndirectCallApplier`.
    - File: `<repo>/recovery/ST.exe/indirect_call_proposals.tsv`
22. Run `STPointerRoleRepairAnalyzer`.
   - Directory: `<repo>/recovery`
   - This is normally a one-time cleanup after an older pointer-shape pass. It
     scans only locals carrying an `STPointerShapeApplier` marker.
23. Run `STPointerRoleRepairApplier`.
   - File: `<repo>/recovery/ST.exe/pointer_role_repair_proposals.tsv`
24. Run `STPointerShapeAnalyzer`.
   - Directory: `<repo>/recovery`
   - Run it after global-record application: it also propagates
     `STPlayerTempSlot *` and `DArrayTy *` through persistent locals derived
     from packed `g_playerRuntime` address arithmetic.
25. Run `STPointerShapeApplier`.
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
   - Anonymous types previously assigned by an old `STTypeFamilyApplier` pass are
     split back into target-local shapes when the current target has enough
     consistent fixed-offset evidence. This repairs the former geometry-only
     family heuristic without touching manual or named types.
26. Run `STTypeFamilyAnalyzer`.
    - Directory: `<repo>/recovery`
    - Inspect `<repo>/recovery/ST.exe/anon_named_type_matches.tsv`. Exact full-layout
      matches are automatic only when there is one unique named type with at least
      two concrete, meaningfully named fields. Partial or ambiguous matches remain
      `apply=0`; anonymous-to-anonymous geometry is never merged automatically.
27. Run `STTypeFamilyApplier`.
    - File: `<repo>/recovery/ST.exe/type_family_proposals.tsv`

The utility pass is intentionally small and strict. It verifies body shapes before
assigning the semantics and prototypes of `FreeAndNull`, `DArrayDestroy`,
`DArrayCreate`, `SArrayCreate`, `LoadResourceString`, `DArrayGetElement`, and
`GetPlayerRaceId`. Typing both DKW array factories is especially important:
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
manual/imported return types are preserved.

`STGlobalAggregateAnalyzer` writes a broad SIB-index audit, but automatic application
requires a proven complete range and element formula. High-confidence proposals
include the 64-byte `g_playerRelationMatrix[8][8]` and exact compiler-emitted
centered neighbourhood sequences such as `{2,1,0,-1,-2}`. Other indexed bases
remain `apply=0` until their bounds and record shape are proven.

Indirect-call analysis audits every raw call site in `indirect_call_sites.tsv` and
then refines only slots backed by a trusted vtable layout and compatible target
signature. In particular, it installs the shared `STGameObjCVTable` view used by
`GetObjPtr` results. Ghidra may still render an indirect `__thiscall` as
`(*object->vtable->method)(object, ...)`; the explicit receiver is normal decompiler
syntax, not a missing argument in the recovered prototype.

The type-family pass runs last. It consolidates byte-for-byte identical anonymous
layouts and propagates named aggregate pointer returns into stack locals only when
the local is an anonymous type previously owned by `STPointerShapeApplier`.
Manual/imported locals and scalar pointer returns are excluded. The curated
`GetObjPtr` base-family correction is the sole manual-type override and is guarded by
its exact addresses and proposal baseline.

The spatial-grid pair recognizes the three adjacent runtime descriptors at
`007FB230`, `007FB240`, and `007FB278`. Each descriptor is laid out as four
signed 16-bit values (`sizeX`, `sizeY`, `sizeZ`, `planeStride`) followed by a
cell pointer. It installs `STWorldGrid`/`STPathingGrid16` and the stable names
`g_worldGrid`, `g_pathingGrid`, and `g_pathingScratchGrid`. This turns hundreds
of raw `DAT_... + (...)*2` and separate `SHORT_...` expressions into field and
array accesses. It does not invent a fixed C array dimension: all dimensions
are runtime values, and the recovered linear index remains
`x + sizeX*y + planeStride*z`.

`STPointerRoleRepairAnalyzer` addresses a different failure mode. A large
optimized function can reuse one stack slot for an integer coordinate and,
later, a pointer. A persistent pointer type applied to that storage forces both
lifetimes to render as pointers (`&local->flags + 1` instead of `local + 1`).
The analyzer enables a reset only when the function reports unsettled type
propagation and the script-owned pointer local is directly sourced from a
scalar value. The applier resets that database constraint to `undefined4`, so
the decompiler can infer its SSA lifetimes independently. Manual/imported
locals are preserved. The current pointer-shape analyzer will not auto-type
locals in such unsettled functions again.

Pointer-shape analysis follows one-level nested dereferences, pointer values
temporarily represented by `int`/`uint`/`undefined4`, and simple SSA-style
copies. Child layouts are emitted as dependent anonymous types and applied
before their parents. Inlined `DArrayTy` element addressing is recognized as
the known recovered type. Overlapping child observations are kept as evidence;
only a strongest non-overlapping ordinary-structure view is eligible for
automatic application.

Prototype propagation uses direct calls with an exact explicit argument count.
Types and names are independent per parameter; conflicting evidence for one
parameter does not block another. Trusted `this` receivers, user/imported
prototypes, semantic pointer/enum types, and short one-call wrappers provide the
strongest evidence. `USER_DEFINED` and `IMPORTED` parameters and returns are preserved.

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

The global-record pair handles a layer that scalar global propagation cannot:
one packed structure repeated at a fixed byte stride. For the player runtime
block it verifies base `007F4E20`, stride `0xA62`, total extent `0x5310`, eight
records, and exclusive end `007FA130` directly from the code. It creates the
packed `STPlayerRuntimeRecord` and types the complete range as
`g_playerRuntime[8]`. Proven fields include `raceId`, the `groups` and `objects`
DArray pointers, `pgPairs`, and the contiguous tail block operated on by the
recovered DArray helpers. Other observed offsets remain width-correct
`undefinedN` fields until semantic evidence appears.

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
review-only. Generated names are structural and retain the address suffix.

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

Run this before the final library applier. Source-provenance analysis skips
functions already tagged as libraries.

### 9. Structural control-flow labels

1. Run `STControlFlowLabelAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STControlFlowLabelApplier`.
   - File: `<repo>/recovery/ST.exe/control_flow_label_proposals.tsv`

Only labels that are actual decompiler `goto` targets are considered. Common
exits, loop breaks/continues, and well-supported joins can be named; generic
joins remain disabled.

### 10. Library classification

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

### 11. Export the text corpus

Run `STDecompExport`.

- Directory: `<repo>/decomp`
- Output: `<repo>/decomp/ST.exe`

The exporter writes program metadata, types, globals, strings, symbols,
callgraph indexes, and per-function directories. It reuses an existing function
body when its dependency-scoped fingerprint is unchanged. If a function becomes
a library or thunk, stale `decomp.c` and `listing.asm` files are deleted.

Reused bodies still pass through the cheap text-normalization/catalog stage; no
decompilation is needed. Terminal x86 `INT3` plus Ghidra's synthetic `swi(3)`
indirect call becomes the standalone noreturn `STDebugBreak()` helper defined in
`pseudocode_runtime.h`. Exact decrementing zero loops produced from
`REP STOSD` plus an optional tail store become byte-counted `memset` calls; the
transfer-only `undefined4 *`/`undefined1` artifacts are removed without replacing
the recovered class fields with an overlapping integer array. Forms that cannot
be safely rewritten from text alone
are grouped by function in `pseudocode_idioms.jsonl`, with line excerpts,
machine/address hints, and the intended structured form. See
[`pseudocode-normalization.md`](pseudocode-normalization.md).
The broader `decomp_quality_summary.json` and `decomp_quality_issues.jsonl`
inventory recursively scans every exported function body and also tracks generic
fields/globals, anonymous shapes, undefined types, string labels, and CFG labels.
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
| Final library classification | no recovery loop; export the corpus |

An analyzer may continue to emit enabled rows whose desired state is already
present. The corresponding applier report should say `unchanged` or `already
present`; that is a fixed point. A growing enabled set, an `updated` result, or
a new conflict is what requires another iteration.

## Script reference

| Pair or script | Primary purpose |
| --- | --- |
| `STRecoveredTypesApplier` | Install conservative known structures, discriminated payload unions, stack aggregates, enums, and selected signatures. |
| `STDebugSymbolAnalyzer/Applier` | Recover C++ owners, method names, calling conventions, source evidence, and short diagnostic printf strings. |
| `STCallsiteConventionAnalyzer` | Audit uncertain conventions through direct and thunk-mediated callers; never auto-apply. |
| `STCuratedRecoveryApplier` | Apply reviewed address-specific facts that are not yet generic. |
| `STMessageIdAnalyzer/Applier` | Recover the `MESS_*`/`STMessageId` domain. |
| `STMessageHandlerAnalyzer/Applier` | Apply the common `STMessage *` envelope and status return across the named `GetMessage` family, including the shared zero-return handler. |
| `STVTableAnalyzer/Applier` | Find long and strongly referenced short vtables, resolve direct-JMP thunks, apply physical layouts separately from semantic owners, type safe owner vptrs, and record owner conflicts. |
| `STVirtualMethodAnalyzer/Applier` | Propagate reviewed virtual slot names, conventions, and compatible signatures. |
| `STConstructorAnalyzer/Applier` | Recover constructors, allocation sizes, direct hierarchy evidence, receiver-only signatures, and ABI `Owner *` returns when EAX is proven to return `this`. |
| `STClassLayoutAnalyzer/Applier` | Build and revalidate conservative class layouts, including fields reached after stable prologue `this` spills, dynamic byte/word buffers, nested class-field pointee layouts, and semantic field-type/name proposals. |
| `STMethodOwnerAnalyzer/Applier` | Assign structural class ownership to non-virtual methods and repair weak script-owned assignments to high-fanout shared helpers. |
| `STHiddenThisAnalyzer/Applier` | Recover anonymous `__thiscall` receivers from ECX/RET/call-site evidence with neutral structural owners required by Ghidra. |
| `STDestructorAnalyzer/Applier` | Recover conservative destructor and scalar-deleting-destructor candidates. |
| `STSwitchEnumAnalyzer/Applier` | Turn repeated switch/state domains into enums. |
| `STUtilityFunctionAnalyzer/Applier` | Verify and name high-fanout runtime helpers and install their exact prototypes. |
| `STAbiConsistencyAnalyzer/Applier` | Repair machine-proven x86 calling/return widths, `_setjmp3` varargs, and other ABI details that otherwise create `unaff_*`/`extraout_*` artifacts. |
| `STReturnSemanticsAnalyzer/Applier` | Recover conservative `void`, boolean, and terminal `noreturn` behavior. |
| `STPrototypeAnalyzer/Applier` | Propagate compatible parameter/return types and reviewed parameter names across direct calls. |
| `STPrototypeRepairAnalyzer/Applier` | Isolate and safely correct stale types/names previously written by prototype propagation. |
| `STGlobalRecordAnalyzer/Applier` | Recover packed arrays of repeated global records and their proven fields, including nested temporary-object slot arrays, from stride/range evidence. |
| `STSpatialGridAnalyzer/Applier` | Collapse the shared world/pathing x-y-z-stride globals into typed runtime grid descriptors. |
| `STGlobalAggregateAnalyzer/Applier` | Audit indexed global ranges and install only bounded arrays/matrices with a proven extent and indexing formula. |
| `STGlobalDataAnalyzer/Applier` | Type generic globals from receiver/argument use, assign address-stable structural names, and audit every `PTR_*` symbol by pointer role. |
| `STIndirectCallAnalyzer/Applier` | Audit raw indirect calls and refine trusted vtable/callback slots with compatible function definitions. |
| `STPointerRoleRepairAnalyzer/Applier` | Remove prior script-owned pointer constraints from stack slots with proven scalar lifetimes in unsettled functions. |
| `STPointerShapeAnalyzer/Applier` | Recover known or anonymous pointer-backed structures from fixed, nested, alias-mediated dereferences and typed calls; apply auto-`this` types through the owning class namespace. |
| `STTypeFamilyAnalyzer/Applier` | Promote anonymous layouts only to a unique exact named type and propagate named aggregate return types into script-owned anonymous locals; geometry-only anonymous families remain review-only. |
| `STSourceProvenanceAnalyzer/Applier` | Attach original source files and strict free-function names. |
| `STControlFlowLabelAnalyzer/Applier` | Give structural names to real decompiler goto targets. |
| `STLibraryAnalyzer/Applier` | Classify linked CRT, DKW, and internal Ourlib implementations. |
| `STDecompExport` | Export the address-stable, dependency-fingerprinted LLM corpus with a bounded CFG worklist for cache-hit fingerprints, inline proven immutable strings, normalize terminal traps and compiler bulk-zero loops, and catalogue pseudocode idioms plus corpus-wide residual quality debt. |

## Git and Ghidra database hygiene

- `bin/` is ignored and must never be committed.
- Ghidra `.lock`, `.lock~`, recovery, and temporary files are ignored.
- Files under `proj/st.rep/idata/` are the actual program database and are
  tracked. Ghidra commonly replaces one `db.N.gbf` file with a newer one; commit
  the old-file deletion and new-file addition together.
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
versions can be genuine API differences.

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
