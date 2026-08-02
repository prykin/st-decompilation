# Submarine Titans Decompilation

An evidence-driven decompilation of the original 32-bit Windows release of
**Submarine Titans**.

Repository: [prykin/st-decompilation](https://github.com/prykin/st-decompilation)

The project combines a versioned Ghidra database, conservative recovery
scripts, reviewable proposal files, and an address-stable text corpus intended
for human and LLM-assisted reverse engineering. The long-term goal is to turn
the recovered program into readable, buildable, and eventually portable source
code under `src/`.

This is a work in progress. The repository is an analysis and recovery
environment, not yet a source port or a replacement game executable.

## Current snapshot

All recovered addresses and fingerprints are specific to these inputs:

| File | Size | SHA-256 |
| --- | ---: | --- |
| `ST.exe` | 4,337,716 bytes | `86fad7845393f34671993fb767d345bb471a764548a2618da835637a926284de` |
| `ST_String.dll` | 438,272 bytes | `cf8e84d9011e45fbfefb8c549e2272b962585f50234002ca89ec8617139f3606` |

Both are 32-bit Intel 80386 PE files. A different regional release or patch may
have different addresses and must not be assumed compatible with the checked-in
proposals.

The checked-in corpus is generated with Ghidra 12.1.2 from `ST.exe`. Current
coverage and recovery statistics are generated rather than duplicated here;
see [`decomp/ST.exe/manifest.json`](decomp/ST.exe/manifest.json) and the summary
files under [`recovery/ST.exe/`](recovery/ST.exe/).

## Repository layout

| Path | Purpose |
| --- | --- |
| `ghidra/` | Verified packed Ghidra Program checkpoint tracked through Git LFS. |
| `proj/` | Ignored local expanded Ghidra working project, hydrated from `ghidra/`. |
| `scripts/` | Ghidra Java analyzers, review/apply scripts, and the LLM corpus exporter. |
| `recovery/` | Reviewable TSV proposals, conflicts, summaries, and apply reports. |
| `decomp/` | Address-stable text export of functions, types, globals, strings, and call graphs. |
| `src/` | Reconstructed source code as it becomes ready to leave the Ghidra corpus. |
| `docs/` | Recovery workflow and deferred porting notes. |
| `bin/` | Local original binaries and tools. This directory is intentionally ignored. |

Original game executables, DLLs, data files, and other redistributable inputs
are not part of the repository. Supply your own legally obtained copy under
`bin/` when one is needed for verification or a clean import.

## How the recovery works

Most automation is split into two stages:

1. An **analyzer** reads the current Ghidra program and writes proposals under
   `recovery/ST.exe/`. It does not modify the program database.
2. A matching **applier** consumes reviewed rows and changes the Ghidra database
   inside a transaction.

Every potentially destructive decision is represented by an explicit flag such
as `apply`, `name_apply`, `type_apply`, `create_apply`, or `signature_apply`.
Low-confidence rows remain disabled. Existing manual names, signatures,
structures, enums, and labels are preserved wherever the scripts can establish
ownership.

The final exporter writes one directory per function address:

```text
decomp/ST.exe/functions/005B3C30/
├── decomp.c
├── listing.asm
├── meta.json
└── fingerprint.sha256
```

`meta.json` retains the address, qualified name, signature, comments, callers,
callees, strings, globals, tags, source evidence, and other context. Library and
thunk implementations are represented without duplicating unnecessary bodies.
Per-function fingerprints allow unchanged bodies to be reused on later exports.
A single fingerprinted shard cache also reuses per-function pseudocode and
quality catalogues, avoiding thousands of redundant body reads on network
filesystems.
`call_relations.jsonl` records each call's direct entry address, complete thunk
chain, resolved implementation, and final prototype, so overloaded methods are
never joined merely because their names match.

The exporter also audits every initialized executable section. Bytes not owned
by any Ghidra function are inventoried in `coverage_summary.json` and
`unclaimed_ranges.jsonl`; non-padding ranges receive text-only byte/listing
directories under `decomp/ST.exe/unclaimed/`. This exposes missed code, embedded
tables, import-thunk runs, and other meaningful leftovers without checking in
another binary copy. Raw ranges with conservative x86 call/return evidence are
marked `probable_code`; this is a review hint, not an automatic function boundary.
The audit also scans aligned words in non-executable blocks for otherwise
undefined code pointers. MSVC exception-filter/funclet clusters are separated
from ordinary data-referenced code instead of being reported as unreferenced
standalone functions. A raw table pointer which lands on a `JMP` thunk is carried
through to its target and reported as `table_callback_target`.
The matching `STUnclaimedCodeAnalyzer/Applier` pair can promote the exact,
live-anchored callback entries and complete direct-`JMP` chains into real Ghidra
functions. Direct raw targets, EH funclets, shared jump tails, and merely
probable bytes stay review-only.

`STObjectFactoryAnalyzer/Applier` separately recovers the game's central
zero-terminated `{objectTypeId, factory}` registry. It installs the exact
no-argument `__cdecl` factory ABI, creates `STObjectTypeId` and a typed registry
record, and uses allocation-size/matched-constructor evidence to recover concrete
`CreateOwner` functions without guessing from code similarity. Shared factory
targets are applied once, and manual names or prototypes are never replaced.

The exporter also normalizes proven terminal `INT3` artifacts and compiler
bulk-zero loops (`REP STOS*`) into standalone `STDebugBreak`/`memset` source, and
writes `pseudocode_idioms.jsonl` for forms that Ghidra cannot
reliably spell as structured C (packed/unaligned fields, runtime-stride arrays,
flat global-record arithmetic, raw indirect calls, and residual ABI artifacts).
Physical argument-slot reuse is catalogued separately so a later source
extractor can split the post-overwrite lifetime into a local without changing
the recovered ABI parameter.
Every referenced immutable NUL-terminated string is emitted as an escaped C
literal while its original symbol and address remain in metadata.
The exporter also writes `decomp_quality_summary.json` and
`decomp_quality_issues.jsonl`, a recursive inventory of residual type, field,
global, CFG, enum-domain, and ABI debt across all exported
`functions/**/decomp.c` bodies. Every category carries a recovery stage and
regression policy, so expected layout-to-naming transitions are reported
separately from hard ABI or type erasure regressions. Generated
`CASE_*|CASE_*` enum compositions are a strict-zero export invariant (reported
as unresolved quality debt, not as a baseline regression). The switch-enum
recovery assigns case labels to the innermost nested switch, lets an existing
script-owned enum grow from a single new arm, and folds unambiguous typed
`CASE_A|CASE_B`/`~(CASE_A|CASE_B)` uses back into its monotonic domain. It never
uses that heuristic to create or alter a manual/semantic enum. If Ghidra still
prints an OR after the generated enum already contains the exact combined
member, the exporter normalizes only that type-proven spelling to the existing
`CASE_<value>` name; missing or ambiguous values remain a strict error.
The same hints appear as idempotent `ST_PSEUDO[...]` comments immediately above
the corresponding expressions in each `decomp.c`.
The normalization contract and examples are documented in
[`docs/pseudocode-normalization.md`](docs/pseudocode-normalization.md).

This format is deliberately usable without a live Ghidra/MCP connection. An LLM
can load a narrow set of functions and metadata from disk instead of spending
context on interactive database queries.

## Getting started

Requirements:

- Ghidra 12.1.2;
- the JDK supported by that Ghidra release (JDK 21 for the current setup);
- Git with enough free space for the Ghidra database and generated corpus;
- a legally obtained Submarine Titans installation for binary verification.

Hydrate the ignored `proj/` working copy from `ghidra/ST.exe.gzf`, then open `proj/st.gpr` in Ghidra, add this repository's `scripts/` directory to the
Ghidra Script Manager, and run scripts from the **SubmarineTitans** categories.
The scripts are compiled by Ghidra on demand; they are not a separately built
extension.

For routine work, run `STRecoveryLauncher` instead of launching every pair
manually. The launcher retains compiler/bootstrap output and then invokes
`STRecoveryPipeline`, which infers the repository from its location under `scripts/`, supplies
all `recovery/ST.exe/*.tsv` and `decomp/` paths automatically, and offers
bounded `core`, `deep`, `full`, `export`, and `full-export` sequences. It never
enables review-only rows and fails rather than exporting when a mutating loop
has not reached a fixed point. Each loop continues from the current
proposal/apply state only while an enabled row both reports a mutation and
changes the Ghidra Program; review, conflict, error, preserved, and unchanged
rows are terminal for that automatic pass. Structural and deep loops have
bounded emergency cycle guards. `automation_state.tsv` binds an export to a
deterministic semantic Program fingerprint, monotonic enum-domain state, and
proposal/apply hashes. Ghidra's volatile modification number is retained only as
a diagnostic. Each run is staged in `recovery/ST.exe/runs/.current` and finalized
as `runs/<overall-sha256>/`; directory names contain no timestamp and only a
small bounded recent history is retained. Expensive whole-program analyzers
reuse artifacts only when the Program semantic fingerprint, analyzer source,
declared inputs, and outputs all match; within one run, clean analyzer nodes are
not recomputed after an unrelated fixed-point check. This includes class-layout
recovery and the callback-field pass, whose proposal inputs are hashed explicitly.
The callback-field pass runs after the broad deep structural fixed point rather
than once per intermediate epoch; final export ABI stabilization still reruns it
after any later Program mutation.
Class-layout refinements have their own bounded local fixed point, so a nested
layout staircase converges before restarting unrelated whole-program analyzers.
`build_manifest.tsv`,
per-script provider load logs,
per-step stdout/stderr and exceptions, `pipeline.log`, `events.tsv`, per-pass TSV
snapshots, and the export receipt make failures inspectable, while
`pipeline_report.tsv` remains the latest-run compatibility view. Export mode first
snapshots the prior corpus and then runs a stage-aware regression gate.
`STDecompExport` builds the complete program corpus in an ignored sibling
staging directory and promotes it only after every function and root index has
been written. A decompiler, normalizer, cancellation, or I/O exception therefore
leaves the preceding `decomp/ST.exe` tree intact instead of mixing two Program
states. The pipeline marks the root export receipt `incomplete` before starting;
only the regression gate may replace it with `passed` or `failed`.
Neither committed corpus manifests nor retained pipeline metadata record a
wall-clock start/end time. Logs retain elapsed durations only. At completion,
the launcher prints the total elapsed time as `HH:MM:SS` (including `00` hours).

Detailed installation instructions, script dependencies, review flags, and the
canonical run order are documented in
[`docs/ghidra-workflow.md`](docs/ghidra-workflow.md).
The current taxonomy of unresolved raw memory forms and the safety boundary of
automatic structure recovery are recorded in
[`docs/structure-recovery-gaps.md`](docs/structure-recovery-gaps.md).
The boundary between Ghidra typing and export-time pseudocode rewriting is
recorded in
[`docs/pseudocode-normalization.md`](docs/pseudocode-normalization.md).

## Project status and direction

The current work focuses on recovering what the binary can prove:

- original C++ class and method names embedded in diagnostics;
- source-file provenance and compilation-unit boundaries;
- calling conventions, callsite/thunk evidence, parameters, and selected free-function names;
- automatic target metadata forwarding for transparent direct-JMP thunks, including
  audited release of redundant manually pinned `_thunk` aliases;
- anonymous hidden-`this` receivers proven from ECX flow and stack discipline;
- message IDs and anonymous state/switch domains;
- the common `STMessage` envelope and compatible `GetMessage` handler family;
- heuristic bootstrap of descriptor/envelope types without embedded addresses
  or enum values, plus discriminator-specific payload and stack-lifetime types;
- physical and owner-resolved vtables (including one-slot and secondary-subobject
  tables), virtual slots, direct-JMP thunks, constructors, and class relationships;
- exact table/CALL-referenced function boundaries recovered from previously
  unclaimed executable bytes, without promoting EH funclets or probable code;
- non-virtual method ownership, cleanup/destructor shapes, and direct-call prototype propagation;
- reverse return-type recovery from typed arguments, class receivers, and field/global stores;
- one-shot audited repair of stale automatically propagated prototypes;
- read-only contradiction auditing for stale manual/protected types;
- verified semantics for high-fanout utility functions and conservative `void`/boolean/noreturn
  returns, plus unanimous propagation of already recovered structure pointers through EAX;
- conservative class layouts, field types, and fixed member arrays proven by
  bounded indexing or exact pointer-walk loops;
- per-owner-field `DArrayTy` specializations whose runtime stride is proven by
  `DArrayCreate`, with separately recovered packed element records;
- packed global record arrays recovered from x86 stride, range, and field-access evidence;
- bounded indexed global aggregates such as the player relation matrix;
- typed global data recovered from class-receiver and trusted-argument use;
- pointer-backed structures recovered and monotonically refined from fixed-offset dereferences
  and typed helper calls, using observed packed extents rather than assumed alignment;
- exact anonymous type-family consolidation and named return-to-local propagation;
- trusted indirect-call/vtable prototypes, neutral machine-proven thiscall/stdcall slot ABIs,
  separately inferred polymorphic dispatch interfaces, and automatic unanimous-callsite
  `__cdecl` correction, with ambiguous callsites retained for review;
- non-vtable callback fields proven by an exact function-address store and a later
  indirect call through the same generated structure member;
- by-value nested records and fixed member-array bounds proven by exact typed
  `REP MOVS` copies and independently corroborated zero-initialization spans;
- statically linked CRT, DKW, and internal `Ourlib` modules;
- structured control-flow labels where the decompiler emits unavoidable gotos.
- strict free-function names passed to repeated diagnostic sinks, with bounded
  source-string-cluster provenance for statically linked modules.

The next stage is to move stable subsystems into `src/`, validate their behavior
against the original executable, and define portable boundaries for platform
services. Rendering and SDL3 considerations are recorded separately in
[`docs/porting-sdl3.md`](docs/porting-sdl3.md); implementation of that port is
currently deferred.

## License

The recovery scripts, documentation, and original project material in this
repository are licensed under the [GNU General Public License v3.0](LICENSE). This license
does not
cover the original game binaries, data, names, or assets.

## Disclaimer

This is an unofficial reverse-engineering project and is not affiliated with or
endorsed by the original developers or publishers. Submarine Titans and related
names and assets belong to their respective owners. The repository does not
distribute the original game binaries or data files.
