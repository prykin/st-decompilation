# Structure-recovery gap inventory

Snapshot: last completed central `decomp/ST.exe/functions/*/decomp.c` corpus,
5,720 decompiled functions. Counts below are diagnostic matches, not mutually
exclusive objects: one expression can belong to several rows. An interrupted
export does not establish a newer snapshot; check that
`recovery/ST.exe/export_receipt.json` says `passed`.

The exporter now turns this static inventory into an address-stable per-function
catalog at `decomp/ST.exe/pseudocode_idioms.jsonl`. See
[`pseudocode-normalization.md`](pseudocode-normalization.md) for the rewrite
boundary and concrete before/after forms.

## Current post-ABI snapshot

The last completed corpus contains 5,720 function bodies.
`pseudocode_idioms.jsonl` records 4,568 function/kind rows across 2,987 bodies
(52.3%); kinds overlap. The table below uses the narrowest current inventory
for each row (`pseudocode_idioms`, `decomp_quality`, or `compile_readiness`), so
it should not be summed. For the complete compilation-facing view, see
[`compile-readiness.md`](compile-readiness.md).

| Remaining presentation class | Functions | Occurrences | Main next step |
| --- | ---: | ---: | --- |
| Stack-slot lifetime reuse | 467 | 4,283 | Split only address-stable HighFunction merge groups; inseparable groups remain presentation debt. |
| Raw pointer + constant offset | 1,007 | 2,169 | Recover compatible pointer families; retain real byte-buffer arithmetic. |
| Packed/piece compatibility view | 230 | 1,095 | Replace `STPiece` only with a discriminator-local union facet, named field, or equally exact packed helper. |
| Raw indirect call | 775 | 1,888 | Recover callback/COM/vtable slot prototypes; audit likely unclassified runtime code separately. |
| Residual return-width use | 103 | 292 | Distinguish return width, register clobbers, x87 stack outputs, and merged high variables. |
| Terminal debug trap | 968 | 1,277 | Already normalized to standalone noreturn `STDebugBreak()`. |
| Residual live-in register | 133 | 474 | Verify function boundaries, SEH/setjmp state, and calling conventions. |
| Runtime-stride DArray indexing | 39 | 76 | Present through a typed `DArrayAt<T>` source helper; a static datatype cannot fold it. |
| Flattened global record array | 17 | 36 | Recompose only after exact base, stride, field, and index proof. |

## Broad recursive textual audit

The focused table above contains transformation idioms. A second recursive scan
of all 5,720 `functions/**/decomp.c` files shows the larger naming/type debt in
the same snapshot. Counts are overlapping textual matches and therefore are not
numbers of unique recovered objects:

| Residual class | Functions | Matches | Interpretation |
| --- | ---: | ---: | --- |
| Scalar cast over a generic structure field | 767 | 4,610 | Usually a wrong receiver/pointer family or a field-width overlap; prioritize this structural cluster. |
| Any generic `field_XXXX` name | 2,433 | 60,843 | Mostly semantic naming debt; a generic name alone does not mean the width/layout is wrong. |
| Generic global aggregate | 32 | 98 | Singleton/aggregate layout is present but its global and/or member semantics are unnamed. |
| Anonymous recovered type | 1,255 | 4,231 | Cross-function shape-family consolidation remains incomplete. |
| Explicit `undefined*` type | 3,651 | 18,286 | Mixed prototype, local, field, and return-type debt; aliases now make it syntactically expressible, not semantically resolved. |
| Generic `DAT/PTR/UNK` symbol | 1,517 | 14,879 | Requires scalar/string/table/singleton/array classification before naming. |
| `goto` or `LAB_*` control-flow label | 915 | 11,731 | Includes legitimate optimized shared tails as well as still-unstructured CFGs. |
| Raw indirect call spelling | 775 | 1,888 | Callback/vtable/function-pointer prototype debt. |
| Unresolved register input | 133 | 474 | ABI, boundary, or SEH/setjmp live-in debt. |
| Raw pointer offset | 1,007 | 2,169 | Missing complete pointer family or intentional byte-buffer arithmetic. |

`STDecompExport` now regenerates `decomp_quality_summary.json` and
`decomp_quality_issues.jsonl` from this recursive pass. The JSONL rows carry the
function address, path, lines, excerpts, severity, and recommended analyzer
family, so future prioritization no longer depends on ad hoc searches or one
representative function.

Across the preceding fixed-point passes, closed-evidence ABI repairs reduced
the old widespread `unaff_*` family substantially. The remaining work is no
longer one missing global type database. It is concentrated in semantic
ownership and optimized per-use representation:

- 4,163 of 5,720 bodies still have a default Ghidra function symbol; qualified
  `FUN_`/`sub_`-style names remain a separate semantic-naming queue;
- placeholder `field_XXXX` forms remain in 2,339 bodies;
- 917 bodies still contain at least one `goto`;
- 180 physical vtable candidates are known, 56 are high-confidence, and 28
  owner conflicts remain;
- virtual-method analysis leaves 196 placeholder names and 91 multi-owner
  targets unresolved;
- indirect-call application currently proves only a small subset of the full
  audit; roughly half the raw-call functions lie in the late runtime address
  range and should be checked against library classification before game types
  are invented for them.

The prototype cycle is currently at its automatic fixed point. Its three
remaining repair rows are review-only; do not enable them in bulk.

The detailed detector table below is a qualitative cause-and-treatment map.
Its raw-match columns came from an earlier corpus scan and are intentionally
historical; use the regenerated `decomp_quality_summary.json` and
`pseudocode_idioms.jsonl` for current counts.

| Raw form / cause | Matches | Functions | General treatment |
| --- | ---: | ---: | --- |
| Direct nested dereference (`*(T *)(*(U *)(base+a)+b)`) | 969 | 432 | `STPointerShapeAnalyzer` now records `a` as a pointer field and recovers a child layout at `b`. `STClassLayoutAnalyzer` does the same for fields reached from `this`. |
| Three-or-more-level direct dereference | 31 | 21 | `STRecursivePointeeAnalyzer/Applier` now handles the strict linked-list subset: one generated owner field, repeated self-link traversal, and at least two non-conflicting partial generated views. COM/table chains and geometry-only matches remain review-only because vtable or external-interface typing is stronger evidence. |
| Pointer loaded into a scalar temporary and dereferenced later | 549 | 354 | Pointer aliases are now followed even when Ghidra calls the loaded value `int`, `uint`, or `undefined4`; simple copies/casts are propagated. |
| Inlined `DArrayTy` addressing (`elementSize * index + data`) | 541 | 271 | Recognized as the existing `DArrayTy`, both for persistent pointer targets and class pointer fields. It is not emitted as another anonymous structure. |
| Raw constant access relative to `this` | 11,219 | 1,122 | Direct fields belong to `STClassLayoutAnalyzer`; nested pointee fields are now recovered too. Residue usually means a wrong owner/calling convention, a preserved manual class, or conflicting/overlapping widths. |
| Raw constant access relative to a parameter | 5,319 | 1,058 | `STPointerShapeAnalyzer`; automatic application requires a persistent, replaceable Ghidra parameter and sufficient consistent evidence. |
| Raw constant access relative to a temporary | 7,191 | 928 | Aliases with a persistent origin are redirected to that origin. A genuinely transient High Variable remains report-only because Listing-variable typing cannot safely represent an SSA split. |
| Variable index/stride in an address | 2,912 | 731 | This is an array/record problem rather than a fixed field. `STGlobalRecordAnalyzer` infers complete runtime-record geometry from a guarded accessor plus independent call-site and boundary evidence; `STGlobalAggregateAnalyzer` audits other SIB-indexed ranges and installs only bounded arrays/matrices. Unknown strides still require an array-element/record proof before application. |
| Fixed member array flattened into adjacent class fields | review current export | review current export | `STClassArrayAnalyzer` proves count/stride from an unsigned bound or an exact decrementing pointer walk, then `STClassLayoutAnalyzer/Applier` installs one native array while preserving manual layouts. |
| Absolute indexed global record | 49 | 32 | `STGlobalRecordAnalyzer` derives a candidate base, stride, and count from machine flow and accepts them only when independent total-size and boundary evidence agree. Other bases/strides remain separate candidates; an address plus a multiplication alone never proves record boundaries or count. |
| Raw indirect/vtable call | 2,658 | 856 | `STVTable*` and `STVirtualMethod*` recover physical table ownership and slots. `STIndirectCall*` refines trusted physical slots and may install neutral thiscall/stdcall ABIs from non-contradictory machine evidence; `STHiddenThis*` handles ownerless ECX receivers. When longer related tables prove a polymorphic tail beyond a physical base table, the inferred `<Owner>DispatchVTable` and tail ABIs are audit-only: they never replace the class vptr or mutate synthetic slot types. A raw call by itself is not enough to invent a semantic class or callback signature. |
| Callback passed as a stack parameter | current proposals | current proposals | `STFunctionPointerParameterAnalyzer/Applier` requires every observed direct callsite to pass an exact function address or null into the same callee parameter and requires the callee to call through it with one argument count. At least two exact target sites must share one ECX/`RET n` machine ABI; cdecl counts also need matching caller cleanup. Unknown callsites, concrete/manual parameters, or signature disagreement remain review-only. |
| Stored non-vtable callback | current proposals | current proposals | `STFunctionPointerFieldAnalyzer/Applier` requires an exact function address stored into a generated structure field and a `CALLIND` loaded from the identical field. A machine STORE prefilter covers direct and register-mediated address materialization; call-only decompilation is skipped until at least one exact stored target is proven, and call-only rows are not proposals. Every stored target must share one imported or independently recovered ABI; bare `USER_DEFINED` source is not ABI evidence. The report preserves rejected stores and their reasons. A store without a call or a manual/concrete field remains review-only. |
| Allocation-backed packed record | current proposals | current proposals | `STAllocationRecordAnalyzer/Applier` follows one neutral allocator result, an exact source-parameter copy from offset zero, packed overwrites inside that fixed span, and the unique returned root. It types only that producer/consumer boundary and keeps the shared allocator as `void *`. Out-parameter allocations, reallocations, overlaps, manual/imported baselines, and incomplete copies remain in the machine audit. |
| Recursive linked-node root | 4 rooted candidates | 269 candidate functions | `STRecursivePointeeAnalyzer/Applier` keys identity to one hash-owned owner field, proves repeated self-link traversal, and merges only non-conflicting partial generated views observed at that exact root. The accepted run installs one 76-byte node with `Node *next` at offset zero; three rows remain review-only. `STClassLayout` preserves that hash-owned node over generic pointer evidence. `STLocalLifetimeAnalyzer/Applier` now re-proves exact generated-layout hashes and field load/store/address/cast anchors before isolating a `Node *` merge group. The accepted `006DDD50` witness no longer contains compounded undefined pointer towers; one inseparable `Node *`/`Node **` group correctly remains a conflict. |
| Exact nested copy / zero span | current proposals | current proposals | `STInlineAggregateAnalyzer` installs a nested by-value member only when `REP MOVS` copies one complete independently typed structure into an automation-owned class range. `REP STOS` contributes an exact extent, but becomes a fixed array only when `STClassArrayAnalyzer` independently proves a stride and indexed use. |
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
  expressions worse. `STLocalLifetimeAnalyzer/Applier` can persist separate types only
  when Ghidra exposes distinct merge groups and each enabled group has an independent
  exact call/copy type anchor. The applier verifies the original p-code address after a
  fresh decompile; physical-storage coincidence alone is never accepted.
  A concrete current example is `pDVar10` in `STAllPlayersC::CmdToPlsObj`: some
  SSA instances are genuine `DArrayTy *`, while a later instance is a polymorphic
  object and renders as `(**(code **)pDVar10->flags)(...)`. No ordinary C type can
  make both instances correct. If both roles remain in one inseparable merge group,
  the database cannot safely express the source-level split and exporter-side
  normalization remains necessary.
- A declaration such as `undefined4 ******ppppppuVar6` is usually not six
  source-level pointer layers. In the current late-renderer example, Ghidra has
  one singly linked node (`next` at `+0`, scalar/coordinate members at fixed
  offsets) but propagates each raw `undefined4 *` load as another pointer to the
  current type. The result compounds through list traversal and pointer-to-link
  locals. The safe database fix is to recover the node record and distinguish
  `Node *` from `Node **`; blindly collapsing stars in exported text would hide a
  real link-to-link variable. The current accepted late-renderer witness now uses
  `RecursiveNode_*` and `->next` after address-stable lifetime splitting. One
  inseparable link cursor remains explicit because Ghidra has not exposed a safe
  distinct `Node **` lifetime.
- Unaligned stores such as `*(uint *)(buffer + 1)`, `*(byte *)(buffer + 5)`, and
  `*(int *)(buffer + 0x4a)` are often genuine packed serialization. In
  `BossDataPack`, the machine first copies a fixed `0x85`-byte header, overwrites
  packed metadata, and appends a runtime-sized payload at `+0x84`. The allocator
  must keep its neutral byte-buffer ABI, and a runtime payload length prevents a
  single fixed structure from describing the whole result. Recover a packed
  header view at consumers; do not align the fields or propagate that view back
  into the heterogeneous allocator.
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
The exporter renders any exact recovered aggregate with this same three-term
geometry as `STGridAt3D(grid, x, y, z)`. This is presentation-only and does not
merge the distinct world/pathing grid types or invent coordinate semantics.

## Safety policy

Generated anonymous layouts are applied only to database-backed variables with
replaceable generic types and consistent non-overlapping evidence. User/imported
types, edited generated structures whose stored layout hash no longer matches, and
concrete unowned globals are preserved. Known semantic types take precedence over
anonymous shapes. Later fixed-point passes can extend an unchanged hashed anonymous
shape only when the current evidence covers every old generated field; observed
minimum extents are not rounded, and a temporarily smaller observation never shrinks
an existing generated structure. Decompiler-only stack values may contribute
missing component widths and scalar types when their `_offset_width_` stores name
the same generated structure. Once such a shape is complete and all of its
signature uses resolve to one class-owner context, `STTypeFamilyAnalyzer` may
replace the hash-heavy `AnonShape_*` spelling with a deterministic
`RecoveredRecord_<Owner>_<Anchor>` name. This is a presentation/identity
promotion of one existing shape, never permission to merge unrelated equal
geometries or invent semantic field names.
