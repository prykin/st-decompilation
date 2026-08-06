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
address-authoritative callee set resolves one target. External call identities
from `call_relations.jsonl` receive `st::external_ID` declarations with their
resolved signatures. Ambiguous overload/thunk spellings remain in the audit
instead of being selected by name.

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

Image-backed globals are declarations only. The generator never fabricates a
zero initializer or copies the proprietary image into the repository.

## Validation and present boundary

The generated declaration surface can be checked independently:

```sh
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
remaining diagnostics principally identify:

- unmaterialized `field_0x...` views over anonymous storage;
- a 32-bit generic word whose pointer/scalar role is still unresolved;
- virtual-call member sugar without a proven source-level member declaration;
- weak or conflicting recovered call prototypes;
- image data whose exact declared type is absent from `globals.jsonl`;
- ambiguous direct spellings which cannot be joined by name.

These must feed address-stable Ghidra recovery or a mechanically exact source
compatibility rule. Do not silence them with generated stubs, arbitrary casts,
or hand-edited `src/ST.exe` files. `audit/issues.jsonl` is the deterministic
assembly queue; compiler diagnostics are the next, narrower queue.
