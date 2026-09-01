# Post-Q-059 build, runtime, and SDL3 roadmap

Status: accepted planning reference for the post-recovery build stage. Q-057,
Q-058, and Q-059 now satisfy their independent acceptance gates. This document
does not retroactively extend those completed queue items; it defines the next
link/runtime boundary.

This is a forecast, not an accepted-corpus receipt. Any counts in this document
are reference points from the accepted snapshots available when it was written.
The accepted `manifest.json`, export receipt, generated-source manifest, and
compiler audit remain authoritative for an actual implementation pass.

## Hypothesis and headline outcome

Q-057, Q-058, and Q-059 finished without weakening the evidence policy.

The expected result is the end of the **binary-to-compilable-object-corpus**
stage:

- callable ownership, physical dispatch, callbacks, function tables, external
  interfaces, and linked-library runtime calls have stable classifications;
- remaining unresolved indirect calls have address-stable rejection reasons;
- exact aggregate identities, pointer families, arrays, unions, globals, and
  newly proven function boundaries have been consolidated;
- every residual raw pointer offset and anonymous shape is classified in an
  address-stable review queue, with no remaining safe automatic merge or
  compile/ABI blocker. The historical `<500`/`<1000` counts were progress
  indicators, not acceptance thresholds;
- every remaining generic name, ambiguous shape, and meaningful unclaimed
  executable range has an address-stable review row and rejection reason;
- the freshly regenerated source tree compiles every translation unit
  independently under the pinned C++17, MS-extension, ILP32 audit;
- ABI, readability, export, idempotence, and confirming no-change gates pass.

This does **not** mean that a runnable executable exists. Q-059 explicitly
places linking and image-backed runtime definitions after its translation-unit
compile milestone. The generated CMake target is intentionally object-only.

In concise milestone terms:

| Boundary | Expected after Q-059 |
| --- | --- |
| Every recovered body is representable as C++ | Yes |
| Dependency-ordered generated source tree exists | Yes |
| Every generated translation unit compiles to an object | Yes |
| All objects link into an executable | No; separate milestone |
| The executable reaches application initialization | No; separate milestone |
| The game displays a correct frame | No; separate runtime/platform milestone |
| SDL3 backend exists | No; implementation remains deferred |

## Snapshot and scope caveat

The completed Q-058 checkpoint contains 5,035 exported bodies, 1,546 excluded
library functions, 3,826 thunks, 3,192 typed physical-vtable slots, 459
body-scope raw indirect calls, and 305 body-scope ownerless `__thiscall`
functions. Its generated source passes 312 of 328 translation units with 35
addressed errors and no compiler-regression growth.

The historical drop from 1,318 raw indirect calls is not entirely a new ABI
recovery result. Part of it is a corrected scope boundary: linked-library and
COM runtime bodies no longer count as game bodies. A post-Q-059 assessment must
still regenerate `src/ST.exe` from the final accepted receipt before comparing
counts or compiler results.

## What the resulting corpus should contain

The final Q-059 corpus should provide the following durable inputs for later
engineering:

1. An accepted packed Ghidra Program with a passed whole-corpus export receipt.
2. Address-stable function identity independent of recovered names.
3. A direct-entry/thunk-chain/resolved-target call relation for every known
   direct call.
4. Protected physical-vtable slot ABIs and address-local views where a shared
   physical declaration cannot be widened safely.
5. Explicit classifications for stored callbacks, callback parameters,
   ordinary function tables, COM/external interfaces, and linked-library
   runtime dispatch.
6. Recovered type, global, string, import, coverage, and quality indexes.
7. A deterministic generated C++ source tree with a pinned manifest.
8. A zero-error per-translation-unit compiler audit under the fixed 32-bit
   source-extraction configuration.
9. Address-stable review queues for every fact that remains unproven.

This is enough to begin conventional build-system and runtime work without
using the C++ compiler as a type-inference oracle.

## What will still be semantically incomplete

Q-059 is not a requirement to recover original source spelling or eliminate
all decompiler-oriented compatibility code. Large non-compilation-blocking
queues may remain, including:

- default `FUN_ADDRESS` function names;
- generic `field_XXXX` member names;
- generic `DAT`, `PTR`, and `UNK` data symbols;
- `undefinedN` declarations and weak semantic signatures whose machine width
  is nevertheless representable;
- exact `STField`, `STPiece`, `CONCAT`, `SUB`, carry, packed-bit, fixed-point,
  byte-offset, and x87 compatibility helpers;
- control-flow labels and optimized shared tails;
- return-width/high-register artifacts which lack a complete proof;
- unresolved incoming register values, SEH/setjmp live-ins, and compiler-reused
  stack storage;
- dynamic-stride DArray views which cannot become static C arrays;
- meaningful executable ranges correctly rejected as probable code, EH
  funclets, shared tails, embedded tables, or insufficiently anchored bytes.

The pre-Q-059 accepted corpus has, as scale indicators rather than completion
targets, approximately 17,000 `undefined_type` occurrences, 65,000 generic
field-name occurrences, 14,000 generic data-symbol occurrences, 11,000
control-flow labels, and about 30,000 compatibility-runtime occurrences. Q-059
will improve some of these through aggregate and identity recovery, but its
definition of done does not require eliminating them.

A green C++ compiler proves only that these operations are expressible. It does
not prove that every original semantic type, owner, name, control-flow construct,
or return contract has been recovered.

## Q-057 is an independently closed runtime prerequisite

Completing Q-058 and Q-059 did not logically imply Q-057 completion. It was
therefore closed and audited separately before runtime work. The accepted
Q-057 layer covers:

- pointer-to-float and float-to-pointer lifetime conflicts;
- pointer values used as scalar switch domains;
- values consumed from functions still declared `void`;
- incompatible DArray, scalar, pointer, output-buffer, and post-call lifetimes
  sharing one Listing local or stack slot;
- return-width and x87 result contradictions which can compile through a cast
  but corrupt downstream state.

Every behavior-facing gate must continue to include the Q-057 closure audit,
ABI fixtures, broad export gate, and a confirming no-change recovery pass.

## Next milestone: a real link-clean 32-bit executable

The first post-Q-059 implementation target should be a 32-bit Windows/x86
reference executable. Do not begin by changing the recovered data model to
64-bit or ARM. Pointer width, `long`, `wchar_t`, packing, calling conventions,
x87 behavior, unaligned memory access, and MSVC exception machinery must first
be validated in the environment whose ABI most closely matches the original.

### 1. Regenerate and pin the final source tree

- Generate `src/ST.exe` only from the final passed Q-059 receipt.
- Verify that its input manifest matches the accepted corpus manifest.
- Rerun the pinned compile audit and require every regenerated translation unit
  to pass.
- Treat any older 5,555-body or 334-TU generated tree as a historical audit
  snapshot, not as an input to linking.

### 2. Add a linker-facing inventory before adding definitions

Create a deterministic report which partitions every unresolved symbol into:

- game function implementation;
- address-taken thunk or entry alias;
- statically linked library implementation;
- imported DLL function or data object;
- image-backed writable global;
- image-backed immutable table/string/vtable;
- PE resource;
- CRT, RTTI, exception, or startup object;
- unresolved callback or function-table target;
- genuinely dead/unreachable symbol after entry-rooted section garbage
  collection.

The report should be address-stable and should not be satisfied by arbitrary
zero-filled data or no-op functions.

### 3. Add an executable target and startup boundary

The executable needs:

- one explicit Windows entry point;
- a deliberate choice between the toolchain CRT startup and a recovered
  compatibility startup;
- construction and destruction order for global objects;
- a wrapper which reaches the recovered application lifecycle, including
  `STAppC::InitApp`, message processing, and shutdown;
- definitions for any address-taken entry thunks which cannot be folded into
  ordinary direct calls.

The original statically linked CRT startup need not be reproduced instruction
for instruction when the selected toolchain supplies an observationally
compatible boundary.

### 4. Define image-backed runtime data

The source generator currently emits declarations only. A real link requires
definitions and initial values for:

- mutable singleton and manager objects;
- vtables and callback registries;
- factory and dispatch tables;
- constant lookup, palette, geometry, and string tables;
- pointers which require relocation from original image addresses to new
  source symbols;
- imported-data slots;
- resources which were stored in, or addressed through, the PE image.

Two implementation strategies are valid:

1. Recover semantic source definitions one family at a time.
2. For a local reference build, generate a non-committed data object from the
   user's legally supplied `ST.exe`, then relocate known function, global, and
   import addresses to the reconstructed symbols.

The second strategy is a bring-up bridge, not the final portable representation.
It must not copy proprietary image data into committed repository artifacts.

### 5. Resolve excluded statically linked libraries

The latest accepted corpus classifies roughly 1,546 functions as library code
and intentionally emits declarations without implementations. The largest
current groups include approximately:

- 521 Win32/COM-support functions;
- 388 MSVCRT functions;
- 139 DKW JPG functions;
- 86 DKW DDX functions;
- 18 DKW SND functions;
- 11 DKW WGR functions;
- DKW DB, FIO, PK, DV, FLC, GPC, TBL, FMM, WAY, and STR groups;
- multiple internal Ourlib framework, sprite, image, font, input, resource,
  renderer, and container groups.

Do not assume that the installed game supplies these as separate `.lib` or
`.dll` files. They were statically linked into the original executable.

Use a per-family strategy:

- replace ordinary CRT functionality with the selected compiler/runtime where
  ABI and observable behavior permit it;
- use system COM/Win32 support through explicit adapters;
- use a compatible codec library for well-understood JPG functionality only
  after the DKW-facing contract is known;
- export and compile the entry-reachable DKW/Ourlib reference implementations,
  or implement an ABI-compatible replacement;
- keep exact DKW/Ourlib interfaces stable so that the legacy and portable
  backends can be exchanged without rewriting game callers.

An entry-rooted reachability report should identify which library functions are
actually required by the first executable. There is no requirement to port all
1,546 functions before the first smoke run if unreachable sections are removed
honestly.

#### What can and cannot be recovered as an internal library

The original `.lib` archives cannot be extracted from the final executable as
archives. The PE linker has already combined their code and data into the flat
image and discarded the object-member boundaries, most local symbols, COMDAT
selection state, and COFF symbol relocations which would let an ordinary linker
place individual members again.

The implementations themselves have not been lost. Their machine code, known
entry addresses, direct-call relations, referenced data, source-path evidence,
and current ABIs remain available in the Ghidra Program. Exclusion from the
normal body corpus is a source-generation policy, not removal from the Program.

Therefore distinguish two different meanings of “recover the library”:

1. **Recommended:** turn selected library bodies into ordinary relocatable
   COFF objects, using recompiled reference C++ or reviewed x86 assembly, and
   archive those objects into new internal `.lib` files.
2. **Binary bridge:** execute the already linked machine code from a mapped
   copy of the original image. This preserves old code temporarily but does not
   recreate a normal linkable library.

The first result is a conventional build input. It does not need the original
library name, object subdivision, or source file layout. The linker only needs
one definition for each required address-stable symbol with the exact recovered
ABI.

#### Recommended reference-library layout

A useful initial partition is:

```text
reconstructed ST.exe
    -> st_game objects
    -> st_legacy_exact.lib
    -> st_legacy_dkw.lib
    -> st_legacy_ourlib.lib
    -> st_image_data.lib
    -> st_platform_win32.lib and ordinary Windows import libraries
    -> one selected 32-bit compiler/CRT runtime
```

The names are illustrative. The important property is that the game-facing DKW
and Ourlib declarations remain stable while their implementations can change:

- the first implementation may be recompiled decompiler output or an exact
  relocatable x86 assembly object;
- a better recovered implementation can replace one function family at a time;
- a known compatible third-party component can sit behind an adapter;
- DDX/WGR/SND can later switch to SDL3-backed implementations without changing
  recovered game callers.

#### Named artifact trees and an explicit library-analysis scope

Give every recovered library family its own stable, named directory in both
projections. Do not mix these bodies into the existing application body tree.
A useful shape is:

```text
decomp/ST.exe/
    functions/...                         existing application projection
    libraries/
        DKW/DDX/functions/<ADDRESS>/...
        DKW/WGR/functions/<ADDRESS>/...
        DKW/SND/functions/<ADDRESS>/...
        DKW/<other-family>/functions/<ADDRESS>/...
        Ourlib/<family>/functions/<ADDRESS>/...
        MSVCRT/...                        inventory/disposition by default
        WIN32_COM_SUPPORT/...             inventory/disposition by default
        manifests/...

src/ST.exe/
    source/...                            existing application source tree
    libraries/
        DKW/DDX/{include,source}/...
        DKW/WGR/{include,source}/...
        DKW/SND/{include,source}/...
        DKW/<other-family>/{include,source}/...
        Ourlib/<family>/{include,source}/...
        exact/{include,source}/...         selected relocatable ASM families
        manifests/...
```

The exact spelling may be normalized to lower case by the generator, but the
mapping from one `LIBRARY_*` tag to one directory and build target must be
deterministic. Address remains the primary identity inside every folder; a
recovered source filename or semantic name is presentation/provenance and must
not decide identity. Each family manifest should bind at least:

- the accepted Program/export receipt and generator version;
- the exact `LIBRARY_*` selection rule and member addresses;
- body, declaration, data, thunk, callback, and import dependencies;
- the chosen disposition of every selected member: reference C++, exact ASM,
  replacement/adapter, system/CRT provider, donor-image-only, or unreachable;
- the object/archive target which owns each emitted definition.

This directory split is necessary for ownership, review, incremental builds,
and later SDL3 replacement, but **it is not an analysis scope**. The recovery
analyzers run against functions in the Ghidra Program before these directories
exist. Today many of the strongest analyzers explicitly test `LIBRARY` or
`LIBRARY_*` and skip the function, while the normal exporter records the body as
`skipped_library`. Merely routing already exported files into separate folders
would therefore preserve the current recovery gap.

Add a first-class selector to the pipeline and relevant analyzers, for example:

```text
scope=application
scope=library:DKW_DDX
scope=library:OURLIB_MFIMG
scope=library-set:<receipt-bound selection file>
```

The selector must be based on address plus the authoritative Ghidra library
classification, not on an output pathname. A family-scoped run may inspect the
whole Program for callers, callees, machine references, imports, and dataflow,
but may propose mutations only for the selected family and its explicitly
declared closure. Do not implement this as a global removal of every
`isLibrary()` guard: that would let weak application and cross-library evidence
contaminate unrelated families.

Keep family-specific analyzer proposals, conflicts, baselines, quality reports,
compile diagnostics, and export receipts under corresponding recovery/decomp
subtrees. The main application receipt should bind the exact accepted library
receipts it consumes. This permits DDX, WGR, SND, and Ourlib families to advance
independently without making the application corpus or another library family
look accepted accidentally.

#### `USER_DEFINED` is protection metadata, not binary evidence

The current requirement is that recovery facts be inferred automatically from
the binary and its machine-derived metadata. No function name, signature,
parameter, return, class, or callback ABI may be accepted merely because Ghidra
reports `SourceType.USER_DEFINED`. An automatic recovery applier can itself
write a Ghidra field with this source value, so the label does not necessarily
mean that a human supplied the fact from outside the binary. It describes how a
database field is protected/stored, not why its value is true.

Keep symbol provenance, signature provenance, and evidence provenance separate.
In particular, the top-level `"source"` field currently exported in function
metadata is `function.getSymbol().getSource()`: it describes the **function
symbol/name**, not `function.getSignatureSource()`. It must not be read as the
source or quality of the rendered signature. A future library export should
spell these fields unambiguously as `symbol_source`, `signature_source`, and
per-parameter source, then attach the exact recovery evidence receipt separately.

The current pre-Q-059 planning snapshot illustrates the problem in the 459-body
pool proposed for semantic reference C++ (Ourlib plus the selected stateful DKW
families):

| Measure | Functions |
|---|---:|
| Selected reference-C++ pool | 459 |
| Function **symbol** source is `USER_DEFINED` | 201 |
| Those 201 whose rendered signature still contains `undefined` | 111 |
| Those 201 with at least one non-provenance body/ABI/semantic recovery tag | 53 |
| Those 201 without such independent recovery tagging | 148 |
| Those 201 with `RECOVERED_ABI_CONSISTENCY` | 0 |
| Pool functions with any `USER_DEFINED` parameter | 1 (3 parameter slots) |
| Signature-source field in the current JSON | not exported |

Within those 201 symbol entries, source-file/source-name tags occur on 107 each
and debug-name tags on 94, whereas only 35 have `RECOVERED_PROTOTYPE`; the
smaller message-handler, return, hidden-this, factory, callsite-convention, and
method-owner groups do not close the remainder. This does **not** mean that 201
signatures were manually supplied or that all 201 names are false. Many may be
automatically recovered names stored through an applier. It means only that the
source flag cannot validate either the name or the ABI without its evidence
receipt. These numbers are a planning snapshot, not a permanent baseline, and
must be regenerated from the final accepted Program.

An embedded source path, source basename, diagnostic string, decorated name,
RTTI record, PE import/export record, instruction, or callsite is legitimate
binary-derived evidence for the limited fact it actually proves. For example,
an embedded path may prove module provenance, while a decorated name may prove
part of a calling convention or argument byte count. Neither makes every type
in the current Ghidra signature correct. A `RECOVERED_*` tag is likewise only
useful when its analyzer receipt still binds the exact machine evidence and the
tag's stated fact; the presence of a tag alone must not become circular proof.

Separate two policies which are currently easy to conflate:

1. **Mutation protection.** Preserve `USER_DEFINED` and `IMPORTED` database
   state from silent overwrite. Contradictions go to review unless an exact,
   reviewed baseline-to-candidate transition permits the change.
2. **Evidence trust.** Do not use bare `USER_DEFINED` as an input anchor for
   propagation, prototype voting, callback ABI consensus, or acceptance.
   Trust requires independent current binary evidence and provenance.

Before library recovery, audit all analyzer predicates which treat
`USER_DEFINED` as trusted. In particular, the prototype pass currently accepts
bare `USER_DEFINED` parameters and returns as trusted inputs, while the indirect
call pass already documents that this source is insufficient by itself. The
library-scoped mode must use the stricter rule consistently, and the ordinary
application mode should converge on the same rule after the active Q-058/Q-059
work is safely checkpointed.

Do not bulk-clear or downgrade `USER_DEFINED`. Instead, generate a shadow audit
ledger for every protected target with one of these dispositions:

- independently proved from current machine/PE evidence;
- reproduced by a current script with an exact evidence receipt;
- binary-derived name or module provenance only, with ABI/type still unknown;
- legacy/unproven protected state requiring reinference or review.

Run inference with legacy/unproven targets excluded as evidence anchors, compare
the shadow result with the protected database state, and apply only exact
reviewed transitions. Add a library-scope ABI regression gate, local-lifetime
gate, and compile-readiness report which fail if a result depends solely on a
legacy `USER_DEFINED` input.

Do not raise or lower the library compile-readiness forecast merely from the 201
top-level `USER_DEFINED` values: they are symbol-source values. Recalculate the
forecast only after the exporter exposes the true signature source and the
shadow audit tests each protected name, return, parameter, and datatype against
current machine evidence. Body availability, `undefined` declarations,
unresolved ABI registers, exception/SEH output, global closure, and compiler
diagnostics remain independent measures. Only the final family-specific
diagnostics and receipts are acceptance facts.

Generate the reference-library bodies through a separate, receipt-bound export
or source-generation mode. Do not reclassify them as game code and do not paste
their bodies into generated `src/ST.exe` files by hand. Preserve address as the
internal identity even when several entries receive useful semantic wrapper
names.

Compile library functions into sufficiently fine-grained sections or archive
members that entry-rooted dead-code elimination can omit unreachable families.
One function per object is not mandatory, but very large mixed translation
units can cause an otherwise unused function to pull in its unresolved
dependencies. Record the final selected member set in the linker-surface audit.

#### Required closure around every selected library body

A function-sized machine range is rarely a self-contained library member. The
reference-library exporter must compute a closed implementation set containing:

- direct callees and complete thunk chains;
- address-stored callbacks and ordinary function-table targets;
- physical vtables and required virtual targets;
- immutable tables, strings, switch tables, and RTTI/EH data actually used by
  the selected code;
- writable globals and their required initialization;
- imported functions and imported data;
- constructors, destructors, and library-specific registration steps;
- cross-boundary calls back into reconstructed game code.

Closed strongly connected groups should move together. A family which appears
library-local by source path but calls common allocators, diagnostics, resource
managers, or application callbacks is not a closed binary island until those
edges have explicit adapters.

#### CRT, heap, exception, and ownership boundary

Do not carry the old statically linked CRT wholesale merely because its
functions are classified as library code. Prefer one selected 32-bit compiler
runtime for recompiled code and replace ordinary CRT operations with that
runtime when the observable contract permits it.

When any original machine code remains active, enforce these restrictions at
every old/new boundary:

- memory allocated by one CRT or allocator family must be released by that
  same family unless an exact compatible allocator contract is proved;
- C++ exceptions and RTTI-owned objects must not cross the boundary;
- `FILE`, locale, environment, errno, thread-local, and other CRT-owned state
  must not be assumed interchangeable;
- structure packing, `long`, `wchar_t`, x87 return behavior, and
  `__cdecl`/`__stdcall`/`__thiscall` cleanup must match exactly;
- constructor/destructor ownership must be singular and explicit.

This is a major reason why recompiling selected legacy bodies into new `.lib`
files is safer than calling their original machine code: the recompiled bodies
can share one runtime with the reconstructed application.

#### Available 32-bit Windows CRT profiles

There is no current drop-in replacement for every internal function and global
from the statically linked VC6-era runtime. Select a runtime for newly compiled
code, then supply a small explicit compatibility library for the old
compiler-runtime contracts which remain reachable.

The viable x86 Windows choices are:

| Profile | Runtime components | VC6 proximity | Intended use |
| --- | --- | --- | --- |
| MSVC x86 `/MT` | static `libcmt.lib`, `libvcruntime.lib`, and `libucrt.lib` | high compiler-ABI fit for newly compiled MSVC code; modern C semantics | preferred monolithic reference executable |
| MSVC x86 `/MD` | shared UCRT and `vcruntime` through their import libraries | same code-generation ABI; shared new-runtime state | reconstructed EXE plus reconstructed DLLs which exchange CRT-owned values |
| MinGW-w64 i686 targeting `msvcrt.dll` | MinGW compatibility CRT plus the Windows system `msvcrt.dll` | closest readily available classic C surface | isolated C/ASM adapters and comparison builds |
| direct audited imports from system `msvcrt.dll` | only specific exported C entries | close for those exact old exports only | narrow shims; never assume the complete static runtime is present |
| VC6 `LIBCMT.LIB`/toolchain | original-generation static runtime | closest historical implementation | local oracle or bounded experiment, not the main C++17 build |
| MinGW-w64 i686 targeting UCRT | MinGW runtime plus UCRT | modern C behavior, non-MSVC C++ ABI | secondary portability build after the MSVC reference works |

Microsoft's current CRT split and `/MT`/`/MD` selection are documented at:

- <https://learn.microsoft.com/en-us/cpp/c-runtime-library/crt-library-features?view=msvc-170>
- <https://learn.microsoft.com/en-us/cpp/build/reference/md-mt-ld-use-run-time-library?view=msvc-170>

The current baseline recommendation is **MSVC v143 x86 with `/MT`** for the
first standalone reference executable. It gives one statically linked new
allocator/runtime in the final EXE, integrates naturally with MSVC-compatible
MASM/COFF objects, and removes a deployment dependency while the runtime
boundary is still being audited.

Use **MSVC x86 `/MD`** instead when several newly reconstructed modules must
share CRT-owned allocation, `FILE`, locale, or related state. Every new module
in that boundary must use the same runtime mode and a compatible runtime
version. The current Visual C++ Redistributable supports the common runtime
generation used by the MSVC 2015-and-later toolsets:
<https://learn.microsoft.com/en-us/lifecycle/faq/visual-c-faq>.

Neither selection makes the new runtime state compatible with the CRT already
embedded in the original donor image. Original/new allocator ownership remains
separate even when both sides happen to expose functions named `malloc` and
`free`.

#### The `msvcrt.lib` naming trap

In a current MSVC toolchain, the `msvcrt.lib` selected as part of `/MD` startup
does not mean that the application uses the classic Windows `msvcrt.dll` as a
complete VC6 runtime. Current MSVC divides the standard C surface, compiler
support, and startup between UCRT, `vcruntime`, and startup libraries.

The classic Windows `msvcrt.dll` is a different option. MinGW-w64 can still
target it explicitly, and documents both `msvcrt` and UCRT configurations:
<https://github.com/mingw-w64/mingw-w64/blob/master/mingw-w64-doc/howto-build/ucrt-vs-msvcrt.txt>.
That profile can be valuable for old C behavior, but it is not an MSVC C++
runtime. Do not use it to carry C++ exceptions, RTTI, compiler-owned objects,
or standard-library objects across an MSVC/MinGW boundary.

Direct use of system `msvcrt.dll` is allowed only for a reviewed export whose
C ABI and observable behavior match the recovered caller. It does not supply
the original static startup, debug heap, all compiler helpers, or private CRT
globals. Version-specific `msvcr70` through `msvcr120` runtimes are not closer
enough to justify adding unsupported deployment dependencies, and pre-2015
MSVC object/runtime generations are not covered by the newer MSVC binary-
compatibility guarantee:
<https://learn.microsoft.com/en-us/cpp/porting/binary-compat-2015-2017?view=msvc-170>.

#### `st_vc6_compat.lib`

Create one address- and contract-audited compatibility library between the
recovered call sites and the selected modern CRT. Its contents are selected by
entry-rooted reachability rather than by copying the whole 388-function
`LIBRARY_MSVCRT` classification.

Partition reachable CRT symbols as follows:

- ordinary memory, string, conversion, file, and allocation calls: map to the
  selected CRT only after signature and behavioral comparison;
- compiler arithmetic helpers such as 64-bit divide: use the selected
  `vcruntime` symbol when its exact x86 ABI is verified, otherwise retain a
  small exact ASM implementation;
- stack probes such as `__alloca_probe`: let the selected compiler own new
  calls, but provide a verified alias or exact ASM body for recovered assembly
  entries which still name the old contract;
- `_setjmp3`, `__global_unwind2`, `__local_unwind2`,
  `__seh_longjmp_unwind@4`, and related VC6 SEH paths: do not map by name alone;
  retain exact ASM or redesign the recovered control-flow boundary after
  dedicated tests;
- CRT startup, global initialization, termination, and `atexit`: use one new
  startup owner and register recovered initializers explicitly;
- debug-report and assertion functions: route to a real diagnostic adapter,
  not a silent success/no-op;
- locale, environment, errno, `FILE`, and thread-local globals: never alias old
  and new runtime storage merely because a public function name matches.

Microsoft describes `_setjmp3` as an internal CRT function with extra unwind
arguments and explicitly warns against treating it as an ordinary C++ API:
<https://learn.microsoft.com/en-us/cpp/c-runtime-library/setjmp3?view=msvc-170>.

Every compatibility symbol must record:

- original address and recovered signature;
- selected provider: UCRT, `vcruntime`, system import, exact ASM, or custom
  semantic adapter;
- calling convention, decorated aliases, return ABI, and stack cleanup;
- allocator and state ownership;
- differential-test coverage and any accepted behavior difference.

#### UCRT behavior compatibility audit

UCRT is a stable and supportable Windows runtime, but it intentionally changed
some older behavior for C99 conformance, correctness, and security. The upgrade
boundary is documented at:
<https://learn.microsoft.com/en-us/cpp/porting/upgrade-your-code-to-the-universal-crt?view=msvc-170>.

Before declaring the CRT substitution behaviorally complete, compare at least:

- `printf`/`sprintf` formatting, rounding, NaN/Inf, and error returns;
- x87 and CRT math edge cases used by simulation or rendering;
- locale, character classification, case folding, and path handling;
- errno and invalid-parameter behavior;
- file sharing, text/binary mode, buffering, seek, and EOF/error transitions;
- sorting and comparison callbacks;
- random-number behavior if saved games, scripts, AI, or simulation consume it;
- time-zone conversion and 32-bit versus 64-bit `time_t` layouts.

Use `_USE_32BIT_TIME_T` only when an ABI-facing recovered layout actually
requires the old x86 representation. Prefer explicit fixed-width fields in
save-game, network, and image-backed structures. Microsoft documents the old
32-bit compatibility mode for the current CRT here:
<https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/futime-futime32-futime64?view=msvc-170>.

The CRT-selection gate is complete only when every entry-reachable old runtime
symbol has a provider and test disposition, all reconstructed modules agree on
`/MT` or `/MD`, and no allocation or exception ownership crosses an unreviewed
old/new boundary.

#### Why direct PE-to-DLL conversion is not a normal solution

Changing the original EXE header or copying selected `.text` ranges does not
produce an ordinary DLL. A final PE image contains image-base relocations for
moving an image as a unit; it does not retain the COFF symbol relocations and
archive metadata needed to relink arbitrary functions as independent objects.
See Microsoft's PE/COFF distinction:
<https://learn.microsoft.com/en-us/windows/win32/debug/pe-format>.

The accepted image map does make a whole-image bridge technically plausible:
the program uses image base `0x00400000` and contains a substantial `.reloc`
section. That relocation directory can adjust absolute image addresses by one
load delta. It does not identify new reconstructed C++ symbols for the linker,
and it does not repair direct relative calls when only one end of a call edge
is extracted.

Ordinary `LoadLibrary` is not sufficient. Windows can return a handle for an
EXE for some module/resource uses, but the internal ST functions are not DLL
exports and the EXE must not be treated as a normally initialized callable DLL.
Relevant loader boundaries are documented at:

- <https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibrarya>
- <https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress>

#### Whole-image donor bridge

A temporary local-only `legacy_blob` component can instead manually map the
user's original `ST.exe`, apply its image relocations, resolve imports, set page
permissions, and expose reviewed wrapper entries which dispatch to
`mapped_base + RVA`.

This bridge must treat the original image as one stateful module. Original
library code can directly call original game code, read original globals, use
the original IAT, and invoke original callback/vtable targets. A wrapper around
one entry point does not redirect those internal edges. The bridge must either:

- keep the complete transitive implementation and data closure inside the
  donor image; or
- patch every crossing call, callback, table entry, and global access through
  a reviewed adapter.

The donor bridge is most suitable for narrow, nearly closed functionality such
as a decoder, decompressor, or pure calculation. It is a poor primary boundary
for the CRT, shared object/container framework, DDX/WGR state, or application
managers. It is Windows/x86-specific and should not become a dependency of the
portable build.

Do not commit an embedded copy of the donor image. If used, the local build or
launcher must consume the user's matching original executable and verify its
cryptographic identity before mapping it.

#### Original-image host for progressive replacement

For early behavioral validation, the inverse hybrid is often simpler than a
new executable which embeds the donor image:

1. Run the original executable as the host.
2. Load reviewed reconstructed functions from a new 32-bit DLL or added code
   section.
3. Redirect selected original function entries to those reconstructed
   functions.
4. Leave the original startup, image data, imports, and not-yet-recovered
   library implementations in place.
5. Patch callbacks into a replaced function whenever the original image would
   otherwise bypass its redirected entry.

This is not the standalone recovered executable milestone. It is a strong
differential-test harness: replace one closed function family, compare behavior
against the untouched image, and retain the exact legacy environment while the
normal internal libraries are being assembled.

#### Relocatable x86 assembly is a valid internal-library implementation

A `.lib` is an archive of COFF `.obj` files; its members do not have to be
compiled from C or C++. MASM or another compatible x86 assembler can provide
ordinary linkable objects, and those objects can be mixed freely with the
reconstructed C++ objects when their public symbols and ABIs agree.

The constraint is that a Ghidra assembly listing is an analysis presentation,
not automatically a relocatable source file. Original absolute addresses must
become symbols which cause the assembler to emit COFF relocations. For example,
the conceptual conversion is:

```asm
; final-image spelling: not independently relocatable
call 006AAC10
mov eax, dword ptr [007ED77C]

; relocatable-object spelling
EXTERN st_fn_006AAC10:PROC
EXTERN st_data_007ED77C:DWORD
call st_fn_006AAC10
mov eax, dword ptr [st_data_007ED77C]
```

The exact assembler syntax and symbol decoration depend on the selected x86
toolchain. The resulting object needs `REL32`-class relocations for external
relative calls/jumps and `DIR32`-class relocations for absolute code/data
addresses. Internal short and relative branches can remain local when their
complete target range stays in the same object.

An assembly/COFF exporter must identify and rewrite at least:

- direct calls, jumps, shared tails, and thunk chains;
- absolute memory operands and address-valued immediates;
- IAT references and imported-data slots;
- switch/jump tables and embedded code pointers;
- vtable, callback, constructor, and registration tables;
- strings, constants, RTTI, exception, and SEH metadata;
- references crossing from legacy assembly into reconstructed C++ and back;
- decorated aliases required by `__cdecl`, `__stdcall`, `__thiscall`, and
  address-taken entry points.

An immediate which numerically falls inside the original image is not by itself
an address, and an unmarked address can appear in code or data. Use the
address-authoritative Ghidra references, call relations, data definitions, and
the original base-relocation table together; none of them alone is permission
to rewrite every image-looking constant.

There are three distinct assembly-oriented strategies:

1. **Symbolic assembly.** Emit reviewed MASM-compatible instructions and labels,
   replacing every crossing address with a declared symbol. Let the assembler
   create conventional COFF objects and relocations.
2. **Exact instruction bytes plus synthesized COFF relocations.** Preserve the
   original bytes and use a dedicated object writer to add relocation records
   at every reviewed address-bearing field. This minimizes instruction-encoding
   drift but is a binary-rewriting project, not a simple textual export.
3. **Whole-image placement.** Preserve original relative `.text`, `.rdata`, and
   `.data` layout and apply PE base relocations to the mapped unit. This is the
   donor-image approach described above, not an ordinary per-family `.lib`.

The original `.reloc` section helps only with the third strategy and as evidence
for absolute address-bearing fields in the second. It cannot recreate the lost
COFF symbol target of every extracted function and cannot redirect an original
relative call whose source and target no longer move together.

#### Where assembly is preferable and where it is not

Use exact assembly selectively for:

- small leaf functions and thunks;
- compiler helpers with an independently proven contract;
- x87, fixed-point, packed-bit, flag-sensitive, and overflow-sensitive code;
- compact closed families whose behavior is easier to preserve than to express
  without C++ undefined behavior;
- temporary reference implementations which will be replaced behind a stable
  ABI.

Prefer recompiled reference C++ for:

- stateful DKW/Ourlib subsystems with many globals and callbacks;
- containers, ownership-heavy APIs, and code which must share the selected new
  CRT and allocator;
- code which will be instrumented, tested, understood, or substantially
  rewritten;
- DDX/WGR/SND boundaries intended to receive an SDL3 backend;
- any family where per-instruction relocation recovery is more expensive than
  making its decompiler output compile and validating its behavior.

A practical hybrid is:

```text
st_legacy_exact.lib
    reviewed ASM: thunks, x87/bit helpers, small closed low-level families

st_legacy_dkw.lib and st_legacy_ourlib.lib
    reference C++ for stateful interfaces and later portable replacement

st_platform_win32.lib
    system imports and explicit compatibility adapters

st_image_data.lib
    reviewed initial data, tables, vtables, strings, and relocatable pointers
```

Assembly avoids decompiler type and C++-semantics errors inside one function,
but it does not avoid dependency closure, image-data recovery, initialization,
CRT ownership, or ABI work. Applying it indiscriminately to all excluded
library functions would create a separate large PE-to-COFF recovery project and
would not advance portability by itself.

#### Assembly-object acceptance gates

For every generated assembly family require:

- a deterministic manifest binding source address ranges and original bytes;
- an explicit relocation ledger naming the location, kind, and target symbol;
- no unresolved numeric image address in an instruction or pointer table unless
  it is deliberately retained inside one whole-image unit;
- normalized disassembly or byte comparison against the original after
  accounting for reviewed relocation fields;
- exact public calling convention, decorated alias, return ABI, and stack
  cleanup tests;
- call/reference-graph comparison against the accepted Ghidra relations;
- differential tests against the original implementation for reachable inputs;
- a confirming link in which no arbitrary trampoline, zero object, or no-op
  satisfies a missing dependency.

Generated assembly and COFF objects must remain derived artifacts. Recovery
facts and relocation decisions belong in Ghidra or in a receipt-bound generator
input, not in hand-edited copies of emitted listing text.

#### Strategy decision

Use these strategies in this order of preference:

1. Build entry-reachable new internal `.lib` files from reference C++ and
   selectively generated exact assembly objects.
2. Replace well-understood families with compatible system or third-party
   implementations behind the recovered ABI.
3. Use the original-image host for incremental validation.
4. Use a whole-image donor bridge only for a bounded local bootstrap or an
   independently closed subsystem.
5. Avoid reconstructing arbitrary per-function COFF objects directly from raw
   instruction ranges unless a function family is demonstrably closed and the
   exact-assembly benefit justifies the relocation and validation cost.

The dynamic-library bridge does not eliminate linker/runtime recovery; it moves
part of that work into a custom loader and a set of state-synchronization
adapters. It must not be counted as a portable or semantically reconstructed
library.

### 6. Resolve external DLL imports

The current PE imports 248 functions or data objects from 15 DLL families:

| DLL | Current imports | Expected initial strategy |
| --- | ---: | --- |
| `KERNEL32.DLL` | 122 | Windows import library or compatibility layer |
| `USER32.DLL` | 39 | Windows window/message implementation |
| `GDI32.DLL` | 33 | Retain for reference build; replace fonts/DIB use later |
| `WINMM.DLL` | 15 | Retain timers/reference audio behavior initially |
| `BINKW32.DLL` | 10 | Use the user's original DLL or explicitly skip video |
| `ADVAPI32.DLL` | 7 | Windows registry compatibility |
| `OLE32.DLL` | 6 | System COM boundary |
| `WSOCK32.DLL` | 5 | Reference networking only |
| `DPLAYX.DLL` | 3 | Reference DirectPlay only |
| `DSOUND.DLL` | 2 | Reference audio backend |
| `ST_STRING.DLL` | 2 data imports | Use the user's matching original DLL |
| `D3DRM.DLL` | 1 | Replace vector modulus with ordinary math later |
| `DDRAW.DLL` | 1 | Reference display backend |
| `DINPUT.DLL` | 1 | Reference input backend |
| `SHELL32.DLL` | 1 | Windows reference boundary |

These DLLs can support a Windows reference run, but they do not supply the
excluded DKW and Ourlib implementations.

### 7. Link-completion gate

A meaningful link milestone requires:

- a 32-bit PE is produced without undefined symbols;
- no linker-required game or library function is a fabricated no-op;
- no pointer-bearing image object is replaced by arbitrary zero storage;
- all address-taken functions, thunks, callbacks, vtables, and registries refer
  to valid reconstructed symbols;
- layout assertions pass for recovered ABI-critical records;
- the linker map and unresolved-symbol inventory are deterministic;
- no runtime claim is made merely because the linker succeeded.

## Runtime bring-up with the legacy platform boundary

The fastest route to behavioral evidence is a Windows or Wine-compatible
reference build which retains the original platform APIs and the user's
matching data/DLL files. This should precede the SDL3 rewrite because it creates
an executable reference for differential tests.

### Milestone A: startup smoke

Require the reconstructed process to:

1. enter through the selected startup boundary;
2. initialize the reconstructed global/runtime state;
3. reach `STAppC::InitApp`;
4. open required resource/database files or fail with a controlled diagnostic;
5. enter at least one message-loop iteration;
6. shut down without corrupting allocator or global state.

Rendering, sound, video, and networking may be explicitly unavailable at this
stage, but the disabled path must be an intentional compatibility result rather
than a silent no-op pretending to implement the subsystem.

### Milestone B: first window and first pixels

Bring up enough of the legacy DKW DDX/WGR boundary to:

- create the window and the original 8-bit surface model;
- create/synchronize a palette;
- load one known bitmap or loading-screen resource;
- present one deterministic frame;
- process close, focus, and resize/mode messages safely.

The first visual target may be a loading screen or menu background. It is not
evidence for a complete renderer.

### Milestone C: interactive menu

Add:

- resource archive/database access needed by the UI;
- font rasterization and metrics;
- mouse and keyboard input;
- cursor behavior;
- DIB/sprite copies, clipping, transparency, and palette effects used by the
  menu path;
- explicit skipping or replacement of intro video when Bink is unavailable.

The acceptance gate is a deterministic menu frame plus working navigation and
clean transition into and out of one game-start path.

### Milestone D: legacy single-player visual parity

Complete the entry-reachable DDX/WGR contracts used by game rendering:

- writable CPU pixel buffers and exact pitch;
- row orientation;
- clipping and inclusive/exclusive rectangle rules;
- overlapping copies;
- color keys and transparent palette indices;
- scaling and coordinate rounding;
- palette synchronization and light/shadow lookup tables;
- game-side shadow/mask code from `Td3dshad.cpp`;
- sprite frame/direction selection, tracks, cursor, minimap, panels, menus, and
  object-specific drawing decisions.

Use captured reference frames and image-diff tests. The game-side renderer must
remain game code; it should continue to call a DKW-compatible surface API.

Sound and networking do not have to block this milestone. A muted offline
single-player run is a valid intermediate target.

## SDL3 replacement strategy

Do not translate every DirectDraw call in game code. Preserve one public
surface-oriented DKW compatibility boundary:

```text
recovered game and UI code
    -> recovered DKW-compatible API
    -> indexed 8-bit CPU surfaces and original palette/LUT behavior
    -> conversion or upload to an SDL texture
    -> SDL3 window and presentation
```

The first backend should prioritize behavioral equivalence over GPU
acceleration. The original code assumes writable indexed buffers, explicit
pitch, clipping, palette transformations, and overlap-sensitive copies. Keep
those semantics in a CPU surface model and upload the completed frame.

### Contracts to recover before replacing one DDX/WGR entry point

For every game-facing function, record:

- parameter roles and exact widths;
- surface, bitmap, palette, and rectangle layouts;
- ownership and allocation rules;
- lock/unlock and lifetime behavior;
- pixel format, pitch, and row orientation;
- clipping convention;
- color-key and transparent-index rules;
- overlap behavior;
- palette and lookup-table synchronization;
- scaling and coordinate rounding;
- return/error behavior;
- critical-section and threading requirements.

The replacement need not reproduce the original implementation instruction by
instruction. It must reproduce the observable contract.

### SDL3 milestone order

1. **Platform shell:** SDL window, event pump, timing boundary, logging, and
   clean startup/shutdown while game rendering is still disconnected.
2. **First pixels:** one indexed CPU surface, palette conversion, texture
   upload, and presentation of a deterministic test frame.
3. **UI vertical slice:** resource loading, basic DIB/sprite copies, fonts,
   mouse/keyboard input, cursor, and one interactive menu.
4. **In-game vertical slice:** one deterministic single-player scene with
   sprites, world composition, panels, cursor, and minimap.
5. **Full visual parity:** all required DDX/WGR operations, palette effects,
   shadows, masks, scaling, mode changes, and image-diff coverage.
6. **Optimization:** only after deterministic parity, consider batching, GPU
   acceleration, native texture formats, and removal of avoidable CPU copies.

## Other portable subsystems

Rendering is only one platform family. Keep the following replacements separate
so that a graphics fix cannot silently change audio, file, or network behavior.

### Input

Replace DirectInput with the SDL3 event/controller boundary after the first
window exists and before the interactive-menu milestone. Recover key mapping,
repeat, focus loss, mouse capture, relative motion, and any timing-dependent
input queues.

### Resource and media I/O

Port the DKW DB/FIO/PK boundary early enough for the menu and map-loading paths.
JPG, FLC, DV, bitmap, and palette decoding should be selected by actual
entry-rooted resource use. Bink playback can initially be skipped explicitly,
then replaced as an independent media subsystem.

### Fonts

GDI font rasterization and metrics affect layout as well as pixels. Preserve
glyph metrics, baseline, clipping, and bitmap output closely enough for frame
comparison before changing typography or text layout.

### Audio

Audio can follow a visually playable offline build:

1. recover the game-facing DKW SND contracts and resource formats;
2. implement device startup and shutdown;
3. implement sample loading, channel allocation, mixing, volume, pan, looping,
   and stop semantics;
4. preserve timing behavior which feeds gameplay or UI state;
5. add music/streaming and video-audio synchronization;
6. validate positional/distance effects and simultaneous-channel edge cases.

SDL3 can provide the device/audio boundary, but DKW SND semantics still require
an explicit compatibility implementation.

### Networking

Networking should follow a stable offline single-player build. SDL3 is not a
DirectPlay replacement; use a separate transport layer behind a recovered game
network interface.

Proceed in this order:

1. recover packet, session, player, lobby, discovery, timeout, and ordering
   contracts from DirectPlay/WSOCK consumers;
2. define fixed-width explicit serialization independent of host packing,
   pointer size, and endianness;
3. implement local loopback and deterministic replay tests;
4. implement LAN discovery and session creation/join/leave;
5. implement reliable/unreliable channels, ordering, fragmentation, timeout,
   and disconnect behavior as required by the game;
6. validate multiplayer state synchronization between reconstructed clients;
7. treat interoperability with the original client/protocol as a separate,
   stricter milestone.

Save-game and network formats must not serialize host-native reconstructed C++
objects directly.

## Recommended end-to-end order

The shortest evidence-preserving path is:

1. Finish and accept Q-058.
2. Finish and accept Q-059.
3. Close any remaining Q-057 behavior-facing ABI/lifetime criteria.
4. Regenerate the final source tree and confirm zero TU compiler errors.
5. Produce the deterministic linker-surface inventory.
6. Compute the entry-rooted function/data closure for the first startup target.
7. Add the named per-family `decomp`/`src` artifact trees and a receipt-bound
   library-scope pipeline; audit and quarantine bare legacy `USER_DEFINED`
   signature/type anchors before using library results as evidence.
8. Generate receipt-bound, entry-reachable DKW/Ourlib reference bodies as C++
   or reviewed relocatable x86 assembly, then archive their COFF objects into
   new internal legacy `.lib` files.
9. Establish the MSVC v143 x86 `/MT` reference profile, produce the
   entry-reachable `st_vc6_compat.lib` provider ledger, and switch to `/MD` only
   if reconstructed DLLs must deliberately share new-CRT-owned state.
10. Add explicit Win32/system adapters and the local image-data definitions
   required by the selected closure.
11. Optionally establish the original-image host replacement harness for
   differential validation; do not make it a prerequisite of the portable
   build.
12. Build a link-clean 32-bit Windows/x86 executable without fabricated stubs.
13. Reach startup and controlled shutdown with original local data and external
   DLLs.
14. Reach the first legacy window and deterministic pixels.
15. Reach an interactive menu and one legacy-rendered single-player scene.
16. Capture reference traces and frames at DKW/platform boundaries.
17. Implement the SDL3 platform shell and indexed-surface vertical slice.
18. Reach SDL3 visual parity before optimizing rendering.
19. Port input, resource/media, fonts, and audio as independent compatibility
    layers.
20. Port networking last, with explicit serialization and replay tests.

## Acceptance discipline for later work

- Keep generated `src/ST.exe` files generator-owned; do not hand-edit them to
  satisfy the compiler or linker.
- Treat named library directories as generated ownership/build boundaries, not
  as recovery evidence or an implicit analyzer scope. Select library work by
  address and authoritative `LIBRARY_*` classification.
- Preserve `USER_DEFINED` against silent mutation, but never count the source
  flag itself as evidence for a signature, type, callback, or ABI. Require a
  current machine-evidence receipt and quarantine legacy/unproven anchors from
  automatic propagation.
- A compiler diagnostic may select a recovery target but is never semantic
  evidence for a type.
- A linker error may select a missing boundary but does not license a no-op
  implementation or zero-filled object.
- Record one provider and ownership disposition for every entry-reachable old
  CRT symbol; matching names across VC6, UCRT, `vcruntime`, and system
  `msvcrt.dll` are not compatibility evidence.
- Keep all reconstructed modules on one deliberate `/MT` or `/MD` profile and
  forbid unreviewed cross-runtime allocation, exception, `FILE`, locale, and
  thread-local ownership.
- Preserve address-stable identities until behavioral parity makes semantic
  source identities safe.
- Use the original executable only as a local verification/data source; do not
  commit proprietary binaries or generated binary copies.
- Maintain one 32-bit legacy reference build while the portable backend is
  developed.
- Prefer differential tests at recovered DKW/platform contracts over tests tied
  to internal decompiler spelling.
- Do not remove exact compatibility helpers merely for aesthetics before
  behavior-facing tests cover their semantics.
- Keep rendering, audio, input, media, resource I/O, and networking replacements
  as separate boundaries.

## Authoritative evidence to consult when implementing

Before acting on this roadmap, refresh facts from:

- `docs/recovery-task-queue.md` for accepted Q-058/Q-059 status and criteria;
- `recovery/ST.exe/export_receipt.json` for the accepted corpus state;
- `decomp/ST.exe/manifest.json` for function/body/library/thunk counts;
- `decomp/ST.exe/compile_readiness_summary.json` and
  `compile_readiness_issues.jsonl` for compilation-facing debt;
- `decomp/ST.exe/decomp_quality_summary.json` and
  `decomp_quality_issues.jsonl` for semantic recovery debt;
- `decomp/ST.exe/call_relations.jsonl` for address-authoritative call identity;
- `decomp/ST.exe/program.json` and `memory_map.json` for the image base,
  architecture, section extents, and presence of the original relocation
  section;
- `decomp/ST.exe/coverage_summary.json` and `unclaimed_ranges.jsonl` for code
  coverage;
- `src/ST.exe/source_manifest.json` and `src/ST.exe/audit/` for the generated
  source boundary;
- `config/source-compile-regression-baseline.json` and the ignored current
  compiler audit for the pinned TU regression gate;
- `docs/source-tree-generation.md` for generator and linker boundaries;
- `docs/porting-sdl3.md` for the current rendering analysis.

When these sources disagree, prefer the newest passed export receipt and its
manifest, regenerate the source tree, and treat older prose counts only as
historical comparisons.
