# Compile-readiness inventory

This document separates three different goals which are easy to conflate:

1. **Syntactically representable pseudocode** contains no Ghidra-only partial
   piece operators and has declarations for decompiler scalar/call intrinsics.
2. **Assemblable source corpus** has dependency-ordered declarations for every
   recovered type, global, function, namespace, and translation unit.
3. **Semantically reconstructed source** replaces generic compatibility views
   with proven classes, fields, callbacks, enums, and source-level control flow.

The accepted corpus is now at the first boundary. It is not yet at the second
or third. `STDecompExport` regenerates the machine-readable inventory in
`decomp/ST.exe/compile_readiness_summary.json` and the address-stable per-site
rows in `compile_readiness_issues.jsonl`. Counts below are overlapping textual
sites, not unique source objects.

## Corpus scale

| Measure | Current value | Meaning |
| --- | ---: | --- |
| Program functions | 10,673 | Includes 281 external functions. |
| Exported function records | 10,392 | Stable identity is the entry address. |
| Decompiled bodies | 5,712 | Library functions and thunks do not duplicate bodies. |
| Library functions | 854 | Kept as declarations/call targets, not decompiled bodies. |
| Thunk functions | 3,826 | Retain direct entry, chain, and resolved target. |
| Failed decompilations | 0 | Every expected body has `decompile_status=ok`. |
| Executable bytes | 3,731,456 | Entire `.text` audit scope. |
| Function-covered bytes | 2,825,113 (75.71%) | Bytes currently owned by Ghidra functions. |
| Meaningful unclaimed bytes | 98,872 (2.65%) | Excludes 807,471 bytes classified as padding. |
| Typed physical-vtable slots | 2,729 | Protected by the ABI regression gate. |

## Compilation-facing inventory

| Class | Functions | Body share | Occurrences | State | What remains |
| --- | ---: | ---: | ---: | --- | --- |
| Translation-unit/declaration assembly | 5,712 | 100.00% | 5,712 | assembled and audited | `tools/st_source_tree.py` emits 318 deterministic TUs; `tools/st_compile_audit.py` currently passes 54 and maps 4,066 capped errors to function addresses. |
| Default `FUN_ADDRESS` names | 4,157 | 72.78% | 4,157 | valid but semantic debt | Stable fallback names compile; recover original names only from evidence. |
| Undefined function signatures | 3,894 | 68.17% | 3,894 | runtime-compatible, semantically incomplete | Recover return and parameter meaning at ABI boundaries. |
| Undefined scalar spelling | 3,658 | 64.04% | 18,595 | compatibility implemented | Width is preserved by aliases, including exact 3/6-byte containers; signedness, enum, pointer, and semantic type remain. |
| Typed byte-offset field view | 1,145 | 20.05% | 9,924 | compatibility implemented | `STField<T>(base, offset)` preserves the exact access until owner/layout proof supplies a named member. |
| Ownerless `__thiscall` | 1,001 | 17.52% | 1,001 | source ABI emitted | `st::fn_ADDRESS` retains the explicit ECX receiver until a class is proven. |
| Opaque `code *` callback type | 793 | 13.88% | 1,936 | compatibility implemented | Install the exact callback/vtable-slot `FunctionDefinition`. |
| Raw indirect call | 773 | 13.53% | 1,885 | semantic debt | Recover receiver, calling convention, argument count, and return type. |
| Unresolved register/high value | 232 | 4.06% | 1,450 | semantic debt | Repair boundary ABI, return width, x87 result, SEH/setjmp live-in, or SSA lifetime. |
| Partial lvalue piece helper | 222 | 3.89% | 1,071 | compatibility implemented | Replace `STPiece<O,W>` only when a field/union facet is proven. |
| `CONCAT*` intrinsic | 234 | 4.10% | 815 | compatibility implemented | Recover a packed value or retain exact byte composition. |
| Nonstandard integer/x87 width | 310 | 5.43% | 2,026 | compatibility implemented | Includes `int3`/`uint3`, `longlong` aliases, `float10`, and unresolved x87 `unkbyte10`. |
| `SUB*` intrinsic | 35 | 0.61% | 162 | compatibility implemented | Recover a named subfield or retain exact extraction. |
| Carry/borrow intrinsic | 27 | 0.47% | 134 | compatibility implemented | Prefer a source comparison only when its arithmetic proof is exact. |
| x87 math intrinsic | 19 | 0.33% | 125 | compatibility implemented | `fsin`/`fcos`/`fpatan` retain long-double semantics pending complete x87-stack recovery. |
| 24-bit sign extension | 1 | 0.02% | 4 | compatibility implemented | `SEXT24` preserves exact signed extension pending a named scalar type. |
| Literal-storage piece | 1 | 0.02% | 3 | compatibility implemented | `STLiteralPiece<O,W>` keeps the little-endian bytes; later recover the intended initializer. |
| Residual Ghidra `._offset_width_` syntax | 0 | 0.00% | 0 | closed | No remaining syntactic occurrence in exported bodies. |

The compatibility surface covers 34,795 occurrences. It does not claim that
`undefined4`, `code *`, or a byte-offset access is the original source type; it
only makes the exact recovered operation expressible in C++ while preserving
the semantic debt for later analyzers.

## Broader reconstruction quality

| Residual class | Functions | Body share | Occurrences | Priority |
| --- | ---: | ---: | ---: | --- |
| Generic `field_XXXX` name | 2,434 | 42.61% | 60,749 | naming after layout; high volume but weak evidence by itself |
| Generic `DAT/PTR/UNK` symbol | 1,583 | 27.71% | 15,894 | classify scalar/string/table/singleton/array first |
| Anonymous recovered type | 1,261 | 22.08% | 4,166 | merge only by identity/flow, never geometry alone |
| Raw pointer offset | 1,024 | 17.93% | 2,240 | recover complete pointer families or retain byte-buffer arithmetic |
| `goto`/label presentation | 915 | 16.02% | 11,738 | restructure only with CFG/post-dominator proof |
| Cast over generic field | 768 | 13.45% | 4,720 | receiver/field width or overlapping-union refinement |
| Stack-slot lifetime reuse | 467 | 8.18% | 4,291 | split address-stable HighFunction merge groups |
| Return-width/high-register artifact | 138 | 2.42% | 558 | whole-CFG EAX/x87 and caller-use evidence |
| Unresolved incoming register | 132 | 2.31% | 472 | boundary, calling convention, SEH, or true live-in |
| Dynamic `DArrayTy` indexing | 39 | 0.68% | 76 | per-owner descriptor/element view; runtime stride remains runtime |
| Generic global aggregate | 37 | 0.65% | 155 | singleton/table structure and semantic fields |
| Flattened global record array | 17 | 0.30% | 36 | exact base/stride/count/member proof |
| String-based aggregate address | 5 | 0.09% | 7 | recover adjacent table and index bias |

## Ten compilation-facing layers implemented

The first ten high-leverage layers are general and contain no image address,
class allow-list, or hand-authored game type:

1. Exact-width aliases for `undefined`, `undefined1/2/4/8`, `byte`, `ushort`,
   `uint`, and 32-bit `ulong`, plus byte-exact `undefined3/6` containers.
2. Compatibility types for `int3`, `uint3`, `longlong`/`ulonglong`, and x87
   `float10`/`unkbyte10`.
3. Portable declarations for MSVC `__thiscall`, `__stdcall`, `__cdecl`, and
   `__fastcall` when compiling outside MSVC.
4. An opaque callable `code` type so unresolved indirect calls remain explicit
   rather than being rewritten to an invented ABI.
5. `STPiece<Offset,Width>` for exact read/write access to a simple lvalue piece.
6. `STLiteralPiece<Offset,Width>` for exact little-endian reads from literal
   storage, eliminating the last exported `"text"._offset_width_` tokens.
7. `STField<T>(base, byteOffset)` for exact typed byte-relative field loads and
   stores without a target-specific `(int)` pointer cast.
8. Width-checked `CONCAT*` helpers for observed byte compositions.
9. Width-checked `SUB*` helpers for observed subpiece extraction.
10. Unsigned carry and signed carry/borrow helpers for the observed arithmetic
    intrinsics.

The independent lexical sweep also found two families outside the original top
ten and closed them in the same runtime boundary: four `SEXT24` sites and 125
`fsin`/`fcos`/`fpatan` sites. They remain separately counted rather than being
hidden under the generic runtime total.

The generated `pseudocode_runtime.h` compiles as a C++17 header. These shims are
an extraction boundary, not recovered game semantics; every use remains in the
readiness inventory so later structural work can remove it monotonically.

## Why the `FUN_006D2820` call is still not a recovered member access

The current export renders the call as:

```cpp
FUN_006d2820(param_1,
    STField<RecoveredSourceFamily_dibcopy *>(this, 0x28),
    param_4, param_5, param_6, param_7, param_8, 0, nullptr, 0, 0, nullptr);
```

This is mechanically correct: the callee's second parameter is one
`RecoveredSourceFamily_dibcopy *`, therefore the receiver stores such a pointer
at byte offset `+0x28`. The ugly part is not an extra pointer level; it is the
unknown owner of the global `__thiscall` function containing the call. Source
family evidence proves the member type but not the receiver class or complete
layout.

An attempted broad receiver-record application was rejected: it cascaded into
unrelated owner/vtable choices and the ABI gate caught 22 hard regressions. The
safe current representation is therefore `STField`, not an invented class. The
next automatic version must require a closed receiver extent and consistent
field family across all direct callers, while treating any class-owner or
physical-vtable disagreement as review-only.

## Ordered path to an actual build

1. **Implemented:** generate a deterministic declaration/type dependency graph
   and object-build harness from `types.jsonl`, `globals.jsonl`,
   `functions.json`, imports, and `call_relations.jsonl`.
2. **Implemented:** emit address-stable `st::fn_ADDRESS` free functions,
   including explicit receiver ABI for ownerless `__thiscall`.
3. Recover the 1,885 raw indirect calls from stored targets and physical vtable
   slots; unresolved `code *` remains an explicit portability boundary.
4. Split undefined debt by role (signature, field, local, return, pointer target)
   before ranking it. The raw 18,595 count is not 18,595 independent problems.
5. Finish whole-CFG return/high-register recovery for the 138 affected bodies.
6. Refine casted generic fields and complete pointer families, prioritizing
   high-fanout structures rather than raw occurrence count.
7. Recover per-owner DArray element descriptors and the remaining bounded
   global record arrays.
8. Bound meaningful unclaimed executable ranges, especially probable code,
   orphan code, and the adjacent jump/lookup-table case.
9. **Partially implemented:** the local compile audit probes every recovered
   source file/TU independently and emits address-stable diagnostics. Add
   dependency-closed component probes after the global declaration surface is
   cleaner; diagnostics never license guessed types.
10. Restructure labels and replace compatibility shims only after the generated
    source compiles and behavior-facing ABI tests exist.

`tools/st_source_tree.py` now crosses the missing-translation-unit boundary:
all 5,712 bodies are placed in 318 generated C++ translation units, 1,044 under
proven original paths. Its complete generated declaration header passes a
C++17 syntax probe. Full object compilation is the new measurable boundary;
current errors expose residual overlapping `field_0x...` views, pointer/word
role conflicts, untyped vtable slots, and weak prototypes. See
`docs/source-tree-generation.md` and `src/ST.exe/audit/`.

The first source-compilation layer materializes 2,664 exact unnamed-byte views
actually referenced by statically typed bodies, emits 780 non-virtual member
wrappers over receiver-aware physical-vtable slots, and exposes 1,292 uniquely
owned non-virtual `__thiscall` functions as forwarding class methods over their
address-stable `st::fn_ADDRESS` implementations. It does not alter packed layout
or synthesize inheritance. It also renames 231 exact address-taken global-object
uses whose image symbol collides with a C++ type name to `st_global_ADDRESS`,
without changing the Ghidra symbol. With a fixed 32-error-per-TU Apple Clang
probe, 54 of 318 units pass; the 4,068 retained errors are dominated by call
argument types (1,198), scalar/pointer assignment roles (1,014), scalar
subscripting (626), and undeclared decompiler temporaries (599). Only 38 missing
record-member diagnostics remain. These capped counts are a comparison baseline,
not an assertion that later diagnostics in a failed TU do not exist.
