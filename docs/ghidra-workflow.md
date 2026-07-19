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
| `create_apply` | Create a missing function boundary for a vtable target. |
| `rename_apply` | Rename a reviewed vtable slot target. Never implied by creation. |
| `convention_apply` | Apply a recovered calling convention. |
| `signature_apply` | Apply a recovered function signature. |

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
2. Run `STDebugSymbolAnalyzer`.
   - Directory: `<repo>/recovery`
   - Output: `proposals.tsv`, `proposals.jsonl`, `conflicts.jsonl`, `summary.txt`
3. Review `proposals.tsv` and run `STDebugSymbolApplier`.
   - File: `<repo>/recovery/ST.exe/proposals.tsv`
4. If present and reviewed, run `STCuratedRecoveryApplier`.
   - File: `<repo>/recovery/ST.exe/curated_recovery.tsv`

The debug analyzer uses embedded `ClassTy::Method`, source path, calling
convention, and diagnostic-line evidence. The curated applier is reserved for
address-specific knowledge that cannot yet be derived generically.

### 2. Message IDs

1. Run `STMessageIdAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STMessageIdApplier`.
   - File: `<repo>/recovery/ST.exe/message_id_proposals.tsv`

This creates and maintains the recovered `STMessageId` enum from `MESS_*`
strings and message dispatch comparisons.

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

The vtable applier does not automatically rename slots. Virtual-method name,
calling-convention, and signature flags remain independent. Manual signatures
and multi-owner targets are preserved.

### 4. Constructors and class layouts

1. Run `STConstructorAnalyzer`.
   - File: `<repo>/recovery/ST.exe/vtable_proposals.tsv`
2. Run `STConstructorApplier`.
   - File: `<repo>/recovery/ST.exe/constructor_proposals.tsv`
3. Run `STClassLayoutAnalyzer`.
   - Directory: `<repo>/recovery`
4. Optionally review field-name suggestions in
   `class_field_proposals.tsv`.
5. Run `STClassLayoutApplier`.
   - File: `<repo>/recovery/ST.exe/class_layout_proposals.tsv`
   - The sibling `class_field_proposals.tsv` is loaded automatically.

The class-layout pass consumes constructor allocation sizes and recovered
vtable types. It tracks exact `this + constant` accesses, typed call flows,
sign-extension operations, and x87 memory operations. Pointer/scalar types are
applied only when width and evidence agree. Generated structures carry a safety
hash; a manual change causes later automatic updates to be preserved rather
than overwritten.

Run this analyzer before applying the final `OURLIB_*` library classifications.
Once those methods are tagged as library code, layout analysis intentionally
skips their implementations.

### 5. Switch/state enums

1. Run `STSwitchEnumAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STSwitchEnumApplier`.
   - File: `<repo>/recovery/ST.exe/switch_enum_proposals.tsv`

The analyzer groups repeated numeric switch domains. Safe parameter and
script-owned class-field targets may be enabled automatically. Locals, globals,
and ambiguously owned fields stay review-only.

### 6. Source provenance and free-function names

1. Run `STSourceProvenanceAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STSourceProvenanceApplier`.
   - File: `<repo>/recovery/ST.exe/source_provenance_proposals.tsv`

Source comments and names have independent flags. Diagnostic line numbers
identify the location of the embedded report/assert site, not necessarily the
original function definition line.

Run this before the final library applier. Source-provenance analysis skips
functions already tagged as libraries.

### 7. Structural control-flow labels

1. Run `STControlFlowLabelAnalyzer`.
   - Directory: `<repo>/recovery`
2. Run `STControlFlowLabelApplier`.
   - File: `<repo>/recovery/ST.exe/control_flow_label_proposals.tsv`

Only labels that are actual decompiler `goto` targets are considered. Common
exits, loop breaks/continues, and well-supported joins can be named; generic
joins remain disabled.

### 8. Library classification

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

### 9. Export the text corpus

Run `STDecompExport`.

- Directory: `<repo>/decomp`
- Output: `<repo>/decomp/ST.exe`

The exporter writes program metadata, types, globals, strings, symbols,
callgraph indexes, and per-function directories. It reuses an existing function
body when its dependency-scoped fingerprint is unchanged. If a function becomes
a library or thunk, stale `decomp.c` and `listing.asm` files are deleted.

The first export after broad type or namespace changes can still touch many
functions because those definitions legitimately affect their decompiler
output.

## Script reference

| Pair or script | Primary purpose |
| --- | --- |
| `STRecoveredTypesApplier` | Install conservative known structures, enums, and selected signatures. |
| `STDebugSymbolAnalyzer/Applier` | Recover C++ owners, method names, calling conventions, and source evidence from diagnostics. |
| `STCuratedRecoveryApplier` | Apply reviewed address-specific facts that are not yet generic. |
| `STMessageIdAnalyzer/Applier` | Recover the `MESS_*`/`STMessageId` domain. |
| `STVTableAnalyzer/Applier` | Find vtables, create missing targets, type table layouts, and record owner conflicts. |
| `STVirtualMethodAnalyzer/Applier` | Propagate reviewed virtual slot names, conventions, and compatible signatures. |
| `STConstructorAnalyzer/Applier` | Recover constructors, allocation sizes, and direct hierarchy evidence. |
| `STClassLayoutAnalyzer/Applier` | Build conservative class layouts and semantic field-type/name proposals. |
| `STSwitchEnumAnalyzer/Applier` | Turn repeated switch/state domains into enums. |
| `STSourceProvenanceAnalyzer/Applier` | Attach original source files and strict free-function names. |
| `STControlFlowLabelAnalyzer/Applier` | Give structural names to real decompiler goto targets. |
| `STLibraryAnalyzer/Applier` | Classify linked CRT, DKW, and internal Ourlib implementations. |
| `STDecompExport` | Export the address-stable, dependency-fingerprinted LLM corpus. |

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
