# Structure-recovery gap inventory

Snapshot: current `decomp/ST.exe/functions/*/decomp.c` corpus, 5,632 decompiled
functions. Counts below are diagnostic regex matches, not mutually exclusive
objects: one expression can belong to several rows.

The exporter now turns this static inventory into an address-stable per-function
catalog at `decomp/ST.exe/pseudocode_idioms.jsonl`. See
[`pseudocode-normalization.md`](pseudocode-normalization.md) for the rewrite
boundary and concrete before/after forms.

## Current post-ABI snapshot

The latest corpus contains 5,632 function bodies. `pseudocode_idioms.jsonl`
records 4,176 function/kind rows across 2,830 bodies (50.2%); kinds overlap:

| Remaining presentation class | Functions | Occurrences | Main next step |
| --- | ---: | ---: | --- |
| Raw pointer + constant offset | 1,178 | 3,475 | Recover compatible pointer families; retain real byte-buffer arithmetic. |
| Packed/piece/CONCAT value | 520 | 2,629 | Use discriminator-local union facets, bit extraction, or explicit unaligned access. |
| Raw indirect call | 907 | 2,380 | Recover callback/COM/vtable slot prototypes; audit likely unclassified runtime code separately. |
| Residual call-output artifact | 208 | 1,499 | Distinguish return width, register clobbers, x87 stack outputs, and merged high variables. |
| Terminal debug trap | 968 | 1,277 | Already normalized to standalone noreturn `STDebugBreak()`. |
| Residual live-in register | 192 | 763 | Verify function boundaries, SEH/setjmp state, and calling conventions. |
| Runtime-stride DArray indexing | 149 | 313 | Present through a typed `DArrayAt<T>` source helper; a static datatype cannot fold it. |
| Flattened player record array | 54 | 94 | Recompose only after exact base, stride, field, and index proof. |

## Broad recursive textual audit

The focused table above contains transformation idioms. A second recursive scan
of all 5,632 `functions/**/decomp.c` files shows the larger naming/type debt in
the same snapshot. Counts are overlapping textual matches and therefore are not
numbers of unique recovered objects:

| Residual class | Functions | Matches | Interpretation |
| --- | ---: | ---: | --- |
| String-backed `s_*_ADDRESS` labels | 1,088 | 3,740 | Pre-generalized-export baseline. The exporter now inlines every referenced immutable NUL-terminated string, so this should fall sharply on the next export. |
| Scalar cast over a generic structure field | 1,056 | 12,046 | Usually a wrong receiver/pointer family or a field-width overlap; prioritize this structural cluster. |
| Any generic `field_XXXX` name | 2,085 | 57,690 | Mostly semantic naming debt; a generic name alone does not mean the width/layout is wrong. |
| Generic global pointer plus field | 495 | 2,731 | Singleton/aggregate layout is present but its global and/or member semantics are unnamed. |
| Anonymous recovered type | 1,537 | 6,588 | Cross-function shape-family consolidation remains incomplete. |
| Explicit `undefined*` type | 4,124 | 34,071 | Mixed prototype, local, field, and return-type debt; not all instances are independently actionable. |
| Generic `DAT/PTR/UNK` symbol | 2,068 | 23,606 | Requires scalar/string/table/singleton/array classification before naming. |
| `goto` or `LAB_*` control-flow label | 934 | 11,956 | Includes legitimate optimized shared tails as well as still-unstructured CFGs. |
| Raw indirect call spelling | 907 | 2,434 | Callback/vtable/function-pointer prototype debt. |
| `unaff/in/extraout` register artifact | 417 | 3,272 | ABI, boundary, SEH/setjmp, or return-width debt. |
| `CONCAT` or partial-piece spelling | 599 | 3,908 | Packed/unaligned access, missing stack aggregate, or SSA merge. |

`STDecompExport` now regenerates `decomp_quality_summary.json` and
`decomp_quality_issues.jsonl` from this recursive pass. The JSONL rows carry the
function address, path, lines, excerpts, severity, and recommended analyzer
family, so future prioritization no longer depends on ad hoc searches or one
representative function.

The ABI pass applied 140 closed-evidence repairs and reduced the old widespread
`unaff_*` family substantially. The remaining work is no longer one missing
global type database. It is concentrated in semantic ownership and optimized
per-use representation:

- 4,581 of 5,632 bodies still have a default Ghidra function symbol, and 4,625
  still use a `FUN_`/`sub_`-style qualified name;
- placeholder `field_XXXX` forms remain in 2,088 bodies;
- 878 bodies still contain at least one `goto`;
- 178 physical vtable candidates are known, but only 57 have an active semantic
  owner; eight owner conflicts remain;
- virtual-method analysis leaves 207 placeholder names and 91 multi-owner
  targets unresolved;
- indirect-call application currently proves only a small subset of the full
  audit; roughly half the raw-call functions lie in the late runtime address
  range and should be checked against library classification before game types
  are invented for them.

Before treating this snapshot as a fixed point, service the 12 automatic rows
currently reported as `repair_auto_apply` in `prototype_summary.txt`, rerun the
prototype analyzer, and apply ordinary rows only after the repair count reaches
zero.

| Raw form / cause | Matches | Functions | General treatment |
| --- | ---: | ---: | --- |
| Direct nested dereference (`*(T *)(*(U *)(base+a)+b)`) | 969 | 432 | `STPointerShapeAnalyzer` now records `a` as a pointer field and recovers a child layout at `b`. `STClassLayoutAnalyzer` does the same for fields reached from `this`. |
| Three-or-more-level direct dereference | 31 | 21 | Kept as evidence after the first recovered pointee. Recursive anonymous type synthesis is not auto-applied yet; many current sites are COM/table chains where vtable or external interface typing is the stronger solution. |
| Pointer loaded into a scalar temporary and dereferenced later | 549 | 354 | Pointer aliases are now followed even when Ghidra calls the loaded value `int`, `uint`, or `undefined4`; simple copies/casts are propagated. |
| Inlined `DArrayTy` addressing (`elementSize * index + data`) | 541 | 271 | Recognized as the existing `DArrayTy`, both for persistent pointer targets and class pointer fields. It is not emitted as another anonymous structure. |
| Raw constant access relative to `this` | 11,219 | 1,122 | Direct fields belong to `STClassLayoutAnalyzer`; nested pointee fields are now recovered too. Residue usually means a wrong owner/calling convention, a preserved manual class, or conflicting/overlapping widths. |
| Raw constant access relative to a parameter | 5,319 | 1,058 | `STPointerShapeAnalyzer`; automatic application requires a persistent, replaceable Ghidra parameter and sufficient consistent evidence. |
| Raw constant access relative to a temporary | 7,191 | 928 | Aliases with a persistent origin are redirected to that origin. A genuinely transient High Variable remains report-only because Listing-variable typing cannot safely represent an SSA split. |
| Variable index/stride in an address | 2,912 | 731 | This is an array/record problem rather than a fixed field. Known global player records use `STGlobalRecordAnalyzer`; `STGlobalAggregateAnalyzer` audits SIB-indexed ranges and installs only bounded arrays/matrices. Unknown strides still require an array-element/record proof before application. |
| Absolute indexed global record | 49 | 32 | The confirmed `0xA62` player record is handled by `STGlobalRecordAnalyzer`. Other bases/strides stay separate candidates; an address plus a multiplication alone does not prove record boundaries or count. |
| Raw indirect/vtable call | 2,658 | 856 | `STVTable*` and `STVirtualMethod*` recover table ownership and slots. `STIndirectCall*` audits all remaining sites and refines trusted table slots, including the shared `STGameObjCVTable`; `STHiddenThis*` handles ownerless ECX receivers. A raw call by itself is still not enough to invent a semantic class or callback signature. |
| Already typed `->vtable->slot` call | 822 | 225 | This is successful recovery, not residue. Ghidra intentionally prints the receiver as the first argument of an indirect `__thiscall` function pointer. |
| Decompiled partial-field syntax (`._offset_size_`) | 1,815 | 282 | This mixes real subfield operations with missing stack aggregates. Confirmed `CmdToPlsObj` copy ranges are installed as discriminator-specific structures; giant compiler temporaries and reused SSA storage still require function-specific proof. |
| Flat packed-command field access | 75 | 1 | All matches are in `STAllPlayersC::CmdToPlsObj`. `STPackedValue32` now exposes whole-dword, two-word, and four-byte views without choosing one layout for every command variant. |
| Casted access through an existing `field_XXXX` | 2,128 | 457 | The parent structure exists but the field type is missing. Nested class/pointer-shape recovery now types non-overlapping pointees; known `DArrayTy` fields receive the semantic type. |
| Generic `field_XXXX` occurrences | 54,082 | 1,914 | Not all are structural failures. Often layout and widths are already correct and only semantic field names are unknown. `STTypeFamily*` removes exact duplicate anonymous layouts, but naming still needs call/accessor/state evidence rather than another shape. |

## Important non-equivalent cases

- Packed and unaligned structures are valid in this binary. Offsets such as `+0x17`
  and `+0x1d` must not be rounded to four-byte boundaries.
- Overlapping observations may be a union, a tagged payload, a base/derived overlay,
  or an incorrectly merged variable. The automatic scripts keep the strongest
  non-overlapping view and retain the alternatives as evidence instead of installing
  an impossible ordinary structure.
- Variable indexing (`base + index * stride + field`) cannot be treated as one very
  large structure. The stride, base, field set, bounds, and preferably allocation or
  producer evidence must agree before an array-of-records type is safe.
- Negative offsets can mean `container_of`, an interior pointer, an array look-behind,
  or decompiler algebra. They are not automatically folded into a structure whose
  address would begin before the observed pointer.
- One decompiler local can represent several SSA values because the compiler reused a
  register. Assigning one persistent Listing type to that local can make unrelated
  expressions worse. Only aliases traceable to one stable parameter/local/global are
  auto-applied.
  A concrete current example is `pDVar10` in `STAllPlayersC::CmdToPlsObj`: some
  SSA instances are genuine `DArrayTy *`, while a later instance is a polymorphic
  object and renders as `(**(code **)pDVar10->flags)(...)`. No ordinary C type can
  make both instances correct; this needs a decompiler high-variable split, not a
  larger or more permissive structure.
- Raw virtual calls require both receiver type and vtable slot knowledge. A field-shape
  match alone cannot choose a class hierarchy or virtual signature.

## Confirmed packed control-command case

`STPlaySystemC::SetCtrlCmd` constructs a packed 0x1b-byte header consumed by
`STAllPlayersC::CmdToPlsObj`. The recovered `STControlCommand` layout includes:

| Offset | Field |
| ---: | --- |
| `0x08` | `playerId` |
| `0x0a` | `objectId` |
| `0x0c` | `targetKind` |
| `0x0e` | `commandType` |
| `0x0f` | `primaryPayloadSize` |
| `0x13` | `secondaryPayloadSize` |
| `0x17` | `STControlCommandPayload *payload` (discriminated union) |

Therefore

```c
*(int *)(*(int *)(param_1 + 0x17) + 0x1d)
```

is structurally available through the union's packed view as:

```c
command->payload->packed.value_1d
```

The payload is discriminator-dependent, so its common field names remain
intentionally neutral. Four-byte packed values provide `.whole`, `.words.low/high`,
and `.bytes.byte0..byte3` views. Confirmed position layouts are separate union
members; pretending there is one universal active layout would lose information.

One current `commandType == 0x14` store still appears as

```c
*(int *)((int)&local_68->packed.value_05 + 3) = value;
```

The arithmetic is an aligned dword at payload offset `+0x08`, used as the third
grid coordinate in that arm. Making an aligned position view the default union
member cleans this one expression but makes several unaligned discriminator arms
worse, so the scripts deliberately do not reorder the union globally. The exact
presentation requires a Ghidra per-use union facet (`Force Field`) or a persistent
high-variable split for that switch arm; it is not evidence for changing the shared
payload layout.

## Confirmed world-cell case

The contiguous globals at `007FB240` are recovered as `STWorldGrid`: three
exclusive coordinate bounds, `planeStride`, and the cell pointer at `+0x08`.
The latter is allocated as `voxelCount * 8`, cleared as two dwords per voxel,
and indexed elsewhere as `(voxelIndex * 2 + layer) * 4`. Each `STWorldCell`
therefore has two polymorphic world-object pointers, while the linear index is
`z * planeStride + y * sizeX + x`. The shared object interface names only proven material:
the vtable pointer, the field at `+0x20`, and the receiver-only virtual getter at
slot `+0x2c` whose result is compared with object-type constants. It deliberately
does not claim every cell object is one concrete derived class such as `STFishC`.

## Safety policy

Generated anonymous layouts are applied only to database-backed variables with
replaceable generic types and consistent non-overlapping evidence. User/imported
types, edited generated structures whose stored layout hash no longer matches, and
concrete unowned globals are preserved. Known semantic types take precedence over
anonymous shapes.
