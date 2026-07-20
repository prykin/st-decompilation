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

The checked-in corpus is generated with Ghidra 12.1.2 from `ST.exe`:

| Item | Count |
| --- | ---: |
| Program functions, including externals | 10,225 |
| Exported internal functions | 9,944 |
| Functions with exported bodies | 5,630 |
| Recognized library functions | 823 |
| Thunks | 3,491 |
| Source-file evidence records | 1,258 |
| Candidate vtables | 131 |
| Classes with recovered layout evidence | 126 |
| Recovered message IDs | 260 |

The live values are recorded in
[`decomp/ST.exe/manifest.json`](decomp/ST.exe/manifest.json) and the summary
files under [`recovery/ST.exe/`](recovery/ST.exe/).

## Repository layout

| Path | Purpose |
| --- | --- |
| `proj/` | Versioned Ghidra project and the authoritative analysis database. |
| `scripts/` | Ghidra Java analyzers, review/apply scripts, and the LLM corpus exporter. |
| `recovery/` | Reviewable TSV/JSONL proposals, conflicts, summaries, and apply reports. |
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

This format is deliberately usable without a live Ghidra/MCP connection. An LLM
can load a narrow set of functions and metadata from disk instead of spending
context on interactive database queries.

## Getting started

Requirements:

- Ghidra 12.1.2;
- the JDK supported by that Ghidra release (JDK 21 for the current setup);
- Git with enough free space for the Ghidra database and generated corpus;
- a legally obtained Submarine Titans installation for binary verification.

Open `proj/st.gpr` in Ghidra, add this repository's `scripts/` directory to the
Ghidra Script Manager, and run scripts from the **SubmarineTitans** categories.
The scripts are compiled by Ghidra on demand; they are not a separately built
extension.

Detailed installation instructions, script dependencies, review flags, and the
canonical run order are documented in
[`docs/ghidra-workflow.md`](docs/ghidra-workflow.md).

## Project status and direction

The current work focuses on recovering what the binary can prove:

- original C++ class and method names embedded in diagnostics;
- source-file provenance and compilation-unit boundaries;
- calling conventions, parameters, and selected free-function names;
- message IDs and anonymous state/switch domains;
- vtables, virtual slots, constructors, thunks, and class relationships;
- non-virtual method ownership, cleanup/destructor shapes, and direct-call prototype propagation;
- reverse return-type recovery from typed arguments, class receivers, and field/global stores;
- one-shot audited repair of stale automatically propagated prototypes;
- conservative class layouts and field types;
- typed global data recovered from class-receiver and trusted-argument use;
- statically linked CRT, DKW, and internal `Ourlib` modules;
- structured control-flow labels where the decompiler emits unavoidable gotos.

The next stage is to move stable subsystems into `src/`, validate their behavior
against the original executable, and define portable boundaries for platform
services. Rendering and SDL3 considerations are recorded separately in
[`docs/porting-sdl3.md`](docs/porting-sdl3.md); implementation of that port is
currently deferred.

## Contributing

Useful contributions are evidence-backed and address-stable. When changing the
analysis:

1. preserve manual Ghidra work and review disabled proposals individually;
2. keep addresses in comments or metadata even after assigning semantic names;
3. rerun the affected analyzer before its applier rather than applying stale TSV
   rows;
4. regenerate the corpus after database changes;
5. commit the Ghidra database rotation, recovery reports, scripts, and resulting
   text export together when they describe one recovery step;
6. never add original game binaries or generated `.class` files.

## Disclaimer

This is an unofficial reverse-engineering project and is not affiliated with or
endorsed by the original developers or publishers. Submarine Titans and related
names and assets belong to their respective owners. The repository does not
distribute the original game binaries or data files.
