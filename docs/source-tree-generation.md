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

Before promotion it also compares an address-stable readability profile with
the currently published generated tree. One function cannot compensate for a
degradation in another. The blocking profile includes reintroduced raw
`code *` calls, duplicated-receiver vtable calls, generic pointer towers,
generic `undefinedN` declarations, stale address-coded member calls, dangling
qualified address prefixes, invalid `static_cast<undefinedN>`, presentation
failures, and newly required pointer-boundary casts. A removed stale member or
raw-vtable spelling may pay for only its corresponding exact boundary cast.
Failure leaves the old `src/ST.exe` intact and reports the exact address and
metric delta; it never updates a baseline merely because generation changed.

No wall-clock time is written. Repeating the command for the same accepted
corpus and generator produces byte-identical tracked files. The source manifest
pins the generator plus every consumed central corpus index by SHA-256.

After generation, run the compiler audit independently:

```sh
python3 tools/st_compile_audit.py
```

It verifies every file listed by `source_manifest.json`, invokes the selected
C++ compiler separately for all 322 translation units, and maps diagnostics
back to stable function addresses through the generated `#line` directives.
The default report is local under `.st-local/source-compile-audit/ST.exe/` and
therefore never enters Git. `--compiler`, `--jobs`, `--error-limit`,
`--include-warnings`, and `--output` make controlled probes reproducible. The
JSON report contains no wall-clock timestamp; elapsed time is printed only to
the console.

The audit also compares the candidate with the tracked deterministic baseline
in `config/source-compile-regression-baseline.json`.  Compiler identity, ILP32
configuration, language mode, and error limit must match.  It rejects a newly
failing translation unit, a newly reached diagnostic cap, growth of an
address-stable `(function, diagnostic family)`, or a new stable unaddressed
family.  A baseline TU which already hit the cap contains only a diagnostic
prefix; newly exposed families from that TU are therefore compared only after
the candidate is no longer truncated.  This prevents the old cap from
manufacturing regressions while retaining the stronger TU-level guards.

The pinned Docker commands are:

```sh
./docker/run.sh compile-audit
./docker/run.sh compile-audit-baseline
```

The second command is deliberately explicit and refuses to replace a failing
baseline.  Use it only after reviewing an improved, passed candidate.  Neither
the baseline nor the ignored local reports contain wall-clock timestamps.

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

The current accepted corpus produces 5,555 bodies in 322 translation units.
1,044 bodies have a recovered original path; the other 4,511 are grouped by
owner or address page without pretending that this was their original file.

## Identity and ABI policy

Every internal implementation is emitted as `st::fn_ADDRESS`. The address is
the stable identity; recovered names and owners remain beside it as comments
and in the input metadata. Direct calls are rewritten only when the caller's
address-authoritative callee set resolves one target. Address-coded
`FUN_ADDRESS`, `sub_ADDRESS`, and `thunk_FUN_ADDRESS` spellings also resolve by
their encoded exported entry address. This remains valid when a recovered owner
is stale or the qualifier is line-wrapped, but an existing `object->sub_ADDRESS`
or `object.sub_ADDRESS` forwarding-member call is never reclassified as a free
direct call. Qualified free calls become the unqualified address identity
`st::fn_ADDRESS`. External call identities from
`call_relations.jsonl` receive `st::external_ID` declarations with their
resolved signatures. An ambiguous direct spelling is selected only when exactly
one address-authoritative candidate has the observed argument count; the call
parser tracks nested parentheses, brackets, braced initializers, and template
commas. All remaining overload/thunk ambiguity stays in the audit instead of
being selected by name.

This free-function boundary also handles ownerless `__thiscall`: ECX remains
the explicit first parameter. The generated header maps the otherwise illegal
C++ parameter token `this` to `st_this`; it does not assert a class owner.

Functions classified as statically linked libraries keep address-stable
declarations because recovered game callers still need a compile-time boundary,
but receive no generated implementation. Their declaration comment explicitly
states `statically linked library; implementation excluded`; the corresponding
implementation must come from a selected replacement library or compatibility
port rather than stale decompiler output.

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
- when a per-call override proves a receiver-aware ABI which cannot safely
  widen the shared physical slot declaration, the same owner may receive one
  exact non-virtual forwarding wrapper for that slot. The generator refuses to
  emit a duplicated-receiver
  `exact_indirect_callee<...>(slot)(object, ...)` regression when this member
  form is available;
- when the physical slot is variadic, its non-virtual wrapper preserves the
  proven fixed prefix and forwards the remaining arguments through a template
  pack.  It does not replace or narrow the physical function-pointer ABI;
- fixed arguments of an already folded physical member call use the same exact
  pointer/word boundary classifier as a raw indirect call.  Variadic tail
  arguments remain untouched;
- when a non-thunk `__thiscall` has one exact exported structure owner and a
  matching receiver parameter, that structure receives an ordinary forwarding
  method over `st::fn_ADDRESS`. Virtual slots keep their dispatch wrappers;
  constructors, destructors, ambiguous overloads, and field-name collisions
  stay in `audit/issues.jsonl` rather than being guessed.
- when the exporter marks the first assignment to a synthetic `_param_N` or
  `_local_N` as stack-slot reuse, the generator may turn that assignment into
  `auto` only if every use remains in the same lexical block and no switch label
  can jump over the initializer. Unsafe scopes remain explicit audit rows.
- when Ghidra retains the full `_param_N` machine-slot view of an otherwise
  recovered 8- or 16-bit stack parameter, the generator materializes that view
  as the target's ordinary `int` promotion. This applies only to an exact
  exported parameter ordinal and never to pointers or full-width parameters.
- when a compiler stack-slot split is initialized with `auto` and every
  address-of use reaches one unanimous exact scalar output parameter, its
  source storage receives that exact non-generic four-byte view.  Concrete
  pointer semantics are not inferred from this rule;
- `STGridAt3D` coordinates are machine-word indices.  If a coordinate still
  carries a pointer type from a reused SSA lifetime, the source tree places the
  exact pointer-to-word boundary at that callsite rather than allowing a
  template diagnostic to lose the function address;
- an exact fixed raw-stack root covered by a machine-proven bulk zero span is
  already named by the exporter as `stack_bytes_neg_OFFSET[N]`. This is a real
  storage extent, but its byte element type does not assert an original record
  or array declaration. It may overlap another decompiler local whose lexical
  lifetime occupies the same physical bytes;
- residual `&stack0xXXXXXXXX` tokens include dynamic-`alloca`, SEH bookkeeping,
  reused slots, and unclassified EBP-relative addresses. The generator places
  all residual references in one uninitialized, aligned local byte arena whose
  bounds preserve their exported relative offsets and stack-frame extent. It
  does not infer an aggregate or initialize bytes which the machine code did
  not initialize.

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
and is now useful evidence rather than a missing-infrastructure failure.
Remaining diagnostics principally identify:

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

The current pinned Docker Clang audit passes 258 of 322 translation units and
retains 329 errors. All 329 map to stable function addresses, no translation
unit reaches the 64-error limit, and the tracked regression gate passes. The
former variadic-wrapper arity cluster, undeclared-identifier diagnostics, and
unaddressed template errors are closed. Eleven address-stable call-arity sites
remain as ABI recovery debt rather than source-generator declaration failures.
