# Compile-readiness inventory

This document separates three different goals which are easy to conflate:

1. **Syntactically representable pseudocode** contains no Ghidra-only partial
   piece operators and has declarations for decompiler scalar/call intrinsics.
2. **Assemblable source corpus** has dependency-ordered declarations for every
   recovered type, global, function, namespace, and translation unit.
3. **Semantically reconstructed source** replaces generic compatibility views
   with proven classes, fields, callbacks, enums, and source-level control flow.

The accepted corpus has crossed the first boundary and has a deterministic,
compiler-audited assembly for the second. It is not yet a compiling whole or a
semantically reconstructed source tree. `STDecompExport` regenerates the
machine-readable inventory in
`decomp/ST.exe/compile_readiness_summary.json` and the address-stable per-site
rows in `compile_readiness_issues.jsonl`. Counts below are overlapping textual
sites, not unique source objects.

## Corpus scale

| Measure | Current value | Meaning |
| --- | ---: | --- |
| Program functions | 10,688 | Includes 281 external functions. |
| Exported function records | 10,407 | Stable identity is the entry address. |
| Decompiled bodies | 5,555 | Library functions and thunks do not duplicate bodies. |
| Library functions | 1,026 | Kept as declarations/call targets, not decompiled bodies. |
| Thunk functions | 3,826 | Retain direct entry, chain, and resolved target. |
| Failed decompilations | 0 | Every expected body has `decompile_status=ok`. |
| Executable bytes | 3,731,456 | Entire `.text` audit scope. |
| Function-covered bytes | 2,825,571 (75.72%) | Bytes currently owned by Ghidra functions. |
| Meaningful unclaimed bytes | 83,886 (2.25%) | Excludes 821,999 bytes classified as padding. |
| Typed physical-vtable slots | 3,192 | Protected by the ABI regression gate. |

## Compilation-facing inventory

| Class | Functions | Body share | Occurrences | State | What remains |
| --- | ---: | ---: | ---: | --- | --- |
| Translation-unit/declaration assembly | 5,555 | 100.00% | 5,555 | assembled and audited | `tools/st_source_tree.py` emits 322 deterministic TUs; the current 64-diagnostic compiler audit passes 203 and maps 1,092 of 1,109 capped errors to function addresses. |
| Default `FUN_ADDRESS` names | 3,996 | 71.94% | 3,996 | valid but semantic debt | Stable fallback names compile; recover original names only from evidence. |
| Undefined function signatures | 3,745 | 67.42% | 3,745 | runtime-compatible, semantically incomplete | Recover return and parameter meaning at ABI boundaries. |
| Undefined scalar spelling | 3,522 | 63.40% | 17,775 | compatibility implemented | Width is preserved by aliases, including exact 3/6-byte containers; signedness, enum, pointer, and semantic type remain. |
| Typed byte-offset field view | 1,114 | 20.05% | 9,824 | compatibility implemented | `STField<T>(base, offset)` preserves the exact access until owner/layout proof supplies a named member. |
| Typed object byte-offset view | 16 | 0.29% | 112 | compatibility implemented | `STObjectAtByteOffset(base, offset).member` preserves an exact byte induction variable while restoring an already proven member. |
| Ownerless `__thiscall` | 979 | 17.62% | 979 | source ABI emitted | `st::fn_ADDRESS` retains the explicit ECX receiver until a class is proven. |
| Opaque `code *` callback type | 744 | 13.39% | 1,813 | compatibility implemented | Install the exact callback/vtable-slot `FunctionDefinition`. |
| Raw indirect call | 719 | 12.94% | 1,760 | semantic debt | Recover receiver, calling convention, argument count, and return type. One previously malformed exporter-owned callback expression is now honestly included. |
| Unresolved register/high value | 225 | 4.05% | 1,363 | semantic debt | Repair boundary ABI, return width, x87 result, SEH/setjmp live-in, or SSA lifetime. |
| Partial lvalue piece helper | 243 | 4.37% | 1,169 | compatibility implemented | Replace `STPiece<O,W>` only when a field/union facet is proven. |
| `CONCAT*` intrinsic | 228 | 4.10% | 804 | compatibility implemented | Recover a packed value or retain exact byte composition. |
| Nonstandard integer/x87 width | 241 | 4.34% | 1,352 | compatibility implemented | Includes `int3`/`uint3`, `longlong` aliases, `float10`, and unresolved x87 `unkbyte10`. |
| `SUB*` intrinsic | 35 | 0.63% | 163 | compatibility implemented | Recover a named subfield or retain exact extraction. |
| Carry/borrow intrinsic | 26 | 0.47% | 132 | compatibility implemented | Prefer a source comparison only when its arithmetic proof is exact. |
| x87 math intrinsic | 19 | 0.34% | 125 | compatibility implemented | `fsin`/`fcos`/`fpatan` retain long-double semantics pending complete x87-stack recovery. |
| 24-bit sign extension | 1 | 0.02% | 4 | compatibility implemented | `SEXT24` preserves exact signed extension pending a named scalar type. |
| Literal-storage piece | 1 | 0.02% | 3 | compatibility implemented | `STLiteralPiece<O,W>` keeps the little-endian bytes; later recover the intended initializer. |
| Residual Ghidra `._offset_width_` syntax | 0 | 0.00% | 0 | closed | No remaining syntactic occurrence in exported bodies. |

The compatibility surface covers 33,276 occurrences. It does not claim that
`undefined4`, `code *`, or a byte-offset access is the original source type; it
only makes the exact recovered operation expressible in C++ while preserving
the semantic debt for later analyzers.

## Broader reconstruction quality

| Residual class | Functions | Body share | Occurrences | Priority |
| --- | ---: | ---: | ---: | --- |
| Generic `field_XXXX` name | 2,377 | 42.79% | 61,636 | naming after layout; high volume but weak evidence by itself |
| Generic `DAT/PTR/UNK` symbol | 1,494 | 26.89% | 14,543 | classify scalar/string/table/singleton/array first |
| Anonymous recovered type | 1,162 | 20.92% | 3,947 | merge only by identity/flow, never geometry alone |
| Raw pointer offset | 952 | 17.14% | 2,075 | recover complete pointer families or retain byte-buffer arithmetic |
| `goto`/label presentation | 886 | 15.95% | 11,601 | restructure only with CFG/post-dominator proof |
| Cast over generic field | 712 | 12.82% | 3,838 | receiver/field width or overlapping-union refinement |
| Stack-slot lifetime reuse | 100 | 1.80% | 726 | split address-stable HighFunction merge groups |
| Return-width/high-register artifact | 103 | 1.85% | 292 | whole-CFG EAX/x87 and caller-use evidence |
| Unresolved incoming register | 126 | 2.27% | 407 | boundary, calling convention, SEH, or true live-in |
| Dynamic `DArrayTy` indexing | 41 | 0.74% | 77 | per-owner descriptor/element view; runtime stride remains runtime |
| Generic global aggregate | 32 | 0.58% | 101 | singleton/table structure and semantic fields |
| Flattened global record array | 17 | 0.31% | 36 | exact base/stride/count/member proof |
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
3. Recover the remaining 1,722 raw indirect calls from stored targets, physical
   vtable slots, and exact use-site ABI families; unresolved `code *` remains an
   explicit portability boundary.
4. Split undefined debt by role (signature, field, local, return, pointer target)
   before ranking it. The raw 17,609 count is not 17,609 independent problems.
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
all 5,555 bodies are placed in 322 generated C++ translation units, 1,044 under
proven original paths. Its complete generated declaration header passes a
C++17 syntax probe. Full object compilation is the new measurable boundary;
current errors expose residual overlapping `field_0x...` views, pointer/word
role conflicts, untyped vtable slots, and weak prototypes. See
`docs/source-tree-generation.md` and `src/ST.exe/audit/`.

The source-compilation layer now materializes 2,233 exact unnamed-byte views
actually referenced by statically typed bodies, emits 1,130 non-virtual member
wrappers over receiver-aware physical-vtable slots, adds 26 exact use-site
dispatch wrappers, and exposes 1,312 uniquely
owned non-virtual `__thiscall` functions as forwarding class methods over their
address-stable `st::fn_ADDRESS` implementations. It does not alter packed layout
or synthesize inheritance. It also renames 247 exact address-taken global-object
uses whose image symbol collides with a C++ type name to `st_global_ADDRESS`,
without changing the Ghidra symbol. With a fixed 64-error-per-TU Apple Clang
probe, 203 of 322 units pass; 1,109 errors remain, 1,092 mapped to stable
function addresses. The largest typed categories are undeclared identifiers
(135), invalid casts (123), missing record members (100), assignment types (94),
pointer indirection (92), non-callable values (70), invalid operands (62), call
arity (12), and call argument types (9); 411 diagnostics remain in the general
`other` bucket. Exact unnamed component spelling accounts for part
of the remaining missing-record-member queue. Address-
generated aliases now repair 167 invalid address-coded global spellings and 68
address-taken external labels; exact arity resolves 17 otherwise ambiguous
direct calls, 94 exporter-tagged stack-slot lifetimes receive safe lexical
declarations, and 72 promoted narrow parameter slots receive an exact full-word
view. Nine direct-call ambiguities remain. These capped counts are a comparison baseline,
not an assertion that later diagnostics in a failed TU do not exist.
