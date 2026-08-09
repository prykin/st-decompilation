# Source-tree generation

`tools/st_source_tree.py` turns one accepted `decomp/ST.exe` corpus into a
deterministic C++17 projection under `src/ST.exe`. It is deliberately an
offline consumer: it does not open Ghidra, mutate the Program, or infer a fact
which is absent from the export.

## Running it

From the repository root:

```sh
python3 tools/st_source_tree.py
```

The default inputs and output are:

```text
decomp/ST.exe
recovery/ST.exe/export_receipt.json
src/ST.exe
```

`--corpus`, `--receipt`, `--output`, and `--repo` exist for controlled tests or
another checkout. The generator refuses a receipt whose status is not
`passed`, verifies the SHA-256 of `decomp/ST.exe/manifest.json`, verifies the
body count, writes a sibling staging tree, and promotes it only after every
file and the source manifest have been completed. It refuses to replace an
output directory without its generator marker.

No wall-clock time is written. Repeating the command for the same accepted
corpus and generator produces byte-identical tracked files. The source manifest
pins the generator plus every consumed central corpus index by SHA-256.

After generation, run the compiler audit independently:

```sh
python3 tools/st_compile_audit.py
```

It verifies every file listed by `source_manifest.json`, invokes the selected
C++ compiler separately for all 318 translation units, and maps diagnostics
back to stable function addresses through the generated `#line` directives.
The default report is local under `.st-local/source-compile-audit/ST.exe/` and
therefore never enters Git. `--compiler`, `--jobs`, `--error-limit`,
`--include-warnings`, and `--output` make controlled probes reproducible. The
JSON report contains no wall-clock timestamp; elapsed time is printed only to
the console.

## Output layout

```text
src/ST.exe/
├── CMakeLists.txt
├── README.generated.md
├── source_manifest.json
├── include/st/
│   ├── generated.hpp
│   ├── pseudocode_runtime.hpp
│   ├── recovered_types.hpp
│   ├── recovered_globals.hpp
│   ├── recovered_imports.hpp
│   └── recovered_functions.hpp
├── source/
│   ├── original/       # only paths proven by embedded/debug metadata
│   └── recovered/      # deterministic owner/address fallback placement
└── audit/
    ├── summary.json
    └── issues.jsonl
```

The current accepted corpus produces 5,712 bodies in 318 translation units.
1,044 bodies have a recovered original path; the other 4,668 are grouped by
owner or address page without pretending that this was their original file.

## Identity and ABI policy

Every internal implementation is emitted as `st::fn_ADDRESS`. The address is
the stable identity; recovered names and owners remain beside it as comments
and in the input metadata. Direct calls are rewritten only when the caller's
address-authoritative callee set resolves one target. Address-coded
`FUN_ADDRESS`, `sub_ADDRESS`, and `thunk_FUN_ADDRESS` spellings also resolve by
their encoded exported entry address. This remains valid when a recovered owner
is stale or the qualifier is line-wrapped; the generated spelling is always the
unqualified address identity `st::fn_ADDRESS`. External call identities from
`call_relations.jsonl` receive `st::external_ID` declarations with their
resolved signatures. An ambiguous direct spelling is selected only when exactly
one address-authoritative candidate has the observed argument count; the call
parser tracks nested parentheses, brackets, braced initializers, and template
commas. All remaining overload/thunk ambiguity stays in the audit instead of
being selected by name.

This free-function boundary also handles ownerless `__thiscall`: ECX remains
the explicit first parameter. The generated header maps the otherwise illegal
C++ parameter token `this` to `st_this`; it does not assert a class owner.

`types.jsonl` is rendered by exact datatype path. Records are forward-declared
and then emitted in by-value dependency order. Pointer and callback cycles do
not force complete records. Unique `FunctionDefinition` names receive public
aliases, structure gaps remain byte storage, and repeated anonymous undefined
bytes are coalesced without changing their extent. Recovered enum domains use
exact-width scalar aliases plus their globally unanimous exported constants;
this is a compilation boundary, not a claim that the original enum declaration
has been recovered.

Global declarations use the exported datatype's exact display-name/path pair.
An `int[5]` or record array is therefore emitted as an array, not silently
collapsed to one `undefined4`. A display name is accepted only when all matching
datatype paths render the same declaration; ambiguous or missing types stay in
`audit/issues.jsonl`. Generated code also registers exact typed global records
as field-access roots, so an already exported global structure receives the
same mechanically exact unnamed-field views as a typed local receiver.

Image-backed globals are declarations only. The generator never fabricates a
zero initializer or copies the proprietary image into the repository.

Invalid Ghidra image labels which render as an address-coded C++ token are
matched back to `globals.jsonl` by exact address and exposed as
`st_global_ADDRESS`; the declaration retains the original symbol as provenance.
Likewise, an address-taken `LAB_ADDRESS` which is not a label in the current
function becomes an opaque `st_image_ADDRESS` declaration. Neither rule guesses
the semantic type or redirects a local control-flow label.

Two source-assembly views preserve facts which readable pseudocode uses but a
plain POD declaration would otherwise lose:

- when a statically typed receiver uses `field_0xOFFSET` and that exact offset
  is still one unnamed byte in the exported record, only that path/offset pair
  is materialized as an `undefined1` member; unrelated storage stays coalesced;
- when an exact primary-vtable slot has a receiver-aware function definition,
  its owner record receives a normal non-virtual member wrapper which forwards
  through the explicit physical `vtable` field. Thus `object->slot()` remains
  readable without asking the host compiler to invent a vptr, inheritance, or
  layout;
- when a non-thunk `__thiscall` has one exact exported structure owner and a
  matching receiver parameter, that structure receives an ordinary forwarding
  method over `st::fn_ADDRESS`. Virtual slots keep their dispatch wrappers;
  constructors, destructors, ambiguous overloads, and field-name collisions
  stay in `audit/issues.jsonl` rather than being guessed.
- when the exporter marks the first assignment to a synthetic `_param_N` or
  `_local_N` as stack-slot reuse, the generator may turn that assignment into
  `auto` only if every use remains in the same lexical block and no switch label
  can jump over the initializer. Unsafe scopes remain explicit audit rows.

Nested field chains and indexed/by-value receivers are resolved only through
component types already present in `types.jsonl`. Neither mechanism infers a
semantic field type or changes Ghidra.

Ghidra may legitimately give one vtable record type and its image-backed global
object the same spelling. Those identifiers occupy different practical roles in
the decompiler but the object hides the type in C++. For each unique collision,
the generator keeps the type spelling and gives only exact address-taken object
uses an address-stable `st_global_ADDRESS` source name. The declaration records
the original image symbol in a comment. No Ghidra rename or semantic claim is
made.

## Validation and present boundary

The generated declaration surface can be checked independently:

```sh
python3 tools/test_st_source_tree.py
clang++ -std=c++17 -fms-extensions \
  -I src/ST.exe/include -x c++ -fsyntax-only \
  -include st/generated.hpp /dev/null
```

That host probe checks declaration syntax only. It does not validate layout:
the recovered ABI is 32-bit x86, so pointer size, `long`, `wchar_t`, packing,
and calling conventions require a 32-bit Windows-compatible target toolchain
before layout assertions or a real link are meaningful.

`CMakeLists.txt` exposes every generated translation unit as an object target.
It intentionally does not link. A full object build is expected to fail today
and is now useful evidence rather than a missing-infrastructure failure. The
current Apple Clang C++17 probe, with a limit of 64 diagnostics per translation
unit, passes 71 of 318 units and records 4,496 errors, 4,491 of them mapped to a
function address. This is 266 fewer diagnostics than the preceding accepted
4,762-error checkpoint and 1,094 fewer than the initial 5,590-error baseline.
No syntax diagnostic remains. The cap makes this a monotonic comparison baseline, not the
uncapped total of all errors. Remaining diagnostics principally identify:

- unmaterialized `field_0x...` views over anonymous storage;
- a 32-bit generic word whose pointer/scalar role is still unresolved;
- vtable slots which still lack a receiver-aware callable definition;
- weak or conflicting recovered call prototypes;
- image data whose exact declared type is absent from `globals.jsonl`;
- ambiguous direct spellings which cannot be joined by name.

These must feed address-stable Ghidra recovery or a mechanically exact source
compatibility rule. Do not silence them with generated stubs, arbitrary casts,
or hand-edited `src/ST.exe` files. `audit/issues.jsonl` is the deterministic
assembly queue; compiler diagnostics are the next, narrower queue.
