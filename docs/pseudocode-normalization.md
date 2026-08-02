# Pseudocode normalization boundary

The Ghidra database remains the authoritative source for names, types, function
boundaries, calling conventions, globals, and vtables. `STDecompExport` performs
only presentation repairs that are either mechanically proven or explicitly
recorded for a later source postprocessor.

## What Ghidra can and cannot be made to fold

Correct Ghidra data types are still the first solution. A typed global array,
class field, function return, or vtable slot often makes the decompiler replace
pointer arithmetic with a field or array expression on its next decompilation.
The recovery scripts therefore apply those facts before export.

There is no CodeBrowser option or ordinary Java-script API that forces every
equivalent address expression into a particular C spelling. The decompiler
works on SSA/p-code and chooses one legal high-level expression after alias,
type, and optimization analysis. It can retain flat arithmetic when:

- the compiler formed an interior pointer before adding array indices;
- a packed or unaligned field crosses the decompiler's preferred component;
- one machine stack/register location contains several SSA lifetimes;
- an element stride is a runtime value, as in `DArrayTy::elementSize`;
- a virtual or callback slot still lacks an exact function definition.

A custom Ghidra decompiler rule/action could rewrite selected p-code forms, but
that is a compiled Ghidra extension tied much more closely to decompiler
internals. It would still need the same evidence and ambiguity policy as an
export postprocessor. For this project, address-stable export normalization is
the smaller and more auditable boundary.

### Reused incoming stack slots

Optimized 32-bit MSVC code often reads an incoming `[EBP+N]` argument, lets that
value die, writes an unrelated loop cursor or pointer back to the same word, and
then reads the new lifetime. Ghidra may spell the result as assignments to
`param_N`/`_param_N`, even after the ABI parameter itself has the correct scalar
type. The exporter detects the machine read → overwrite → read sequence and
inserts:

```c
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot;
   split the post-write lifetime into a local variable */
```

This is not a request to change the ABI signature. A later source extractor
should introduce a distinct local at the first overwrite. The same sites are
catalogued in `pseudocode_idioms.jsonl` and `decomp_quality_issues.jsonl`.

## Automatically normalized terminal `INT3`

Ghidra commonly renders a terminal x86 `INT3` as if `swi(3)` returned a function
pointer:

```c
pcVar1 = (code *)swi(3);
uVar3 = (*pcVar1)();
return uVar3;
```

The standalone reconstructed program has no supported debugger-continuation
path. The exporter therefore emits:

```c
STDebugBreak(); /* noreturn in standalone pseudocode */
```

`decomp/ST.exe/pseudocode_runtime.h` defines this helper as a noreturn call to
`abort()`. A function containing the helper also receives the relative include
`#include "../../pseudocode_runtime.h"`, so the exported call is declared when
the function is lifted into a compilable translation unit. Ghidra's database
function is not globally marked noreturn, so this presentation choice cannot
corrupt control-flow analysis elsewhere.

## Automatically normalized typed virtual calls

Ghidra models a typed vtable slot as a C function pointer, so its native
decompiler output retains the ABI receiver:

```c
iVar1 = (*this->vtable->vfunc_08)(this);
```

For the future C++ source projection, `STDecompExport` folds only an exact
duplicated simple receiver into member-call syntax:

```cpp
iVar1 = this->vfunc_08();
```

The transformation is deliberately not applied when the receiver is absent,
cast, adjusted, differs from the object before `->vtable`, or dispatches through
a secondary vtable. Those cases still carry ABI/prototype information that must
be recovered rather than hidden by presentation sugar.

## Automatically normalized bulk zero initialization

MSVC frequently lowers aggregate initialization to `REP STOSD` followed by a
short tail store. Ghidra renders that machine operation as a loop over an
`undefined4 *` and, for an odd byte count, a final `undefined1` store:

```c
puVar2 = (undefined4 *)&this->field_0x1c;
for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
  *puVar2 = 0;
  puVar2 = puVar2 + 1;
}
*(undefined1 *)puVar2 = 0;
```

Those transfer widths do not prove that the initialized range is an array of
37 integers. It can contain independently recovered integers, pointers, enums,
packed fields, and padding. Creating an overlapping array in the Ghidra class
would therefore make later decompilation worse. The exporter instead folds the
exact zero-loop semantics into:

```c
memset(&this->field_0x1c, 0, 0x95); /* compiler bulk-zero initialization */
```

Dead loop temporaries are removed. If a temporary is genuinely live after the
loop, the exporter preserves its post-loop value. The generated runtime header
includes `<string.h>`, and every normalized site is recorded as
`bulk_zero_initialization` in `pseudocode_idioms.jsonl`.

The same normalization accepts the exact dynamic-size `REP STOSD` plus
`REP STOSB` pair when the advanced pointer and both counters are dead. If
Ghidra has already typed the destination as `byte *`, the dword store may render
as four consecutive `buffer[0..3] = 0` assignments; that exact unrolled spelling
is accepted as the same machine operation:

```c
memset(buffer, 0, byteCount); /* compiler bulk-zero initialization */
```

The `byteCount >> 2` and `byteCount & 3` expressions are instruction counts for
the dword and trailing-byte transfers; they are not source-level array
arithmetic.

## Automatically normalized overlap-safe byte copies

MSVC similarly lowers byte copies to `REP MOVSD` followed by `REP MOVSB`.
When the exporter sees the exact dynamic pair, or a constant-count dword loop
with an exact contiguous zero-to-three-byte tail through the same advanced
source and destination, and one source and destination increment in each loop
body, it emits:

```c
memmove(destination, source, byteCount); /* compiler REP MOVS byte copy */
```

`memmove` is intentional. Generic DArray erase shifts a tail toward a lower
address, so the ranges overlap even though the forward machine copy is safe for
that direction. A contiguous fixed tail is included in the byte count, so the
otherwise dead advanced pointers disappear instead of becoming byte-cast
assignments. If a pointer or exhausted counter is genuinely used later, the
exporter reproduces its exact live-out value; constant pointer advances are
rendered in native element units when the declared pointee width is known.
For a symbolic byte count, the source-level equivalent is deliberately byte
based:

```c
destination = (T *)((byte *)destination + byteCount);
source = (T *)((byte *)source + byteCount);
```

The byte count is not necessarily an integer literal. Literal parsing is only
an optional presentation optimization; an identifier or arithmetic expression
must retain the byte-cast form and must never abort the export.
Reused cached bodies are passed through the same presentation normalization:
the exporter recognizes its older `memmove` plus byte-cast pointer advances and
an exact contiguous tail, then migrates that form without changing the semantic
function fingerprint or forcing a new Ghidra decompilation. Adjusted copies and
extra observable loop statements remain untouched. Normalized sites are
recorded as `bulk_byte_copy` in `pseudocode_idioms.jsonl`.

## Catalogued forms awaiting typed rewriting

Every export recreates `decomp/ST.exe/pseudocode_idioms.jsonl`. Each JSON object
contains the stable function address and name, `decomp.c` path, line numbers,
short excerpts, occurrence count, detector, address/symbol hints, and the
intended transformation. Line numbers are convenient but not stable across
decompilation; the program and function entry address are the durable key.

For the compiler spelling
`CONCAT22(CONCAT11(tag, (char)(value >> 16)), (short)value)`, the in-place
comment records the exact equivalent `STPackTagged24(tag, value)`. The helper
keeps the low 24 value bits and places the low eight tag bits in bits 24–31.
This is a presentation normalization, not evidence for a semantic name of the
packed key or the function consuming it.

The exporter also recreates `decomp_quality_summary.json` and
`decomp_quality_issues.jsonl`. Unlike the focused idiom catalogue, this second
layer inventories all `functions/**/decomp.c` bodies and includes valid-but-poor
forms such as `field_XXXX`, `DAT_XXXXXXXX`, anonymous shapes, undefined types,
and residual control-flow labels. It is intended for prioritizing the next
analyzer/applier family, not for blindly rewriting every match.

The same unresolved forms receive a one-line comment immediately before the
affected expression in `decomp.c`:

```c
/* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar10) (runtime stride) */
piVar14 = (int *)(pDVar8->elementSize * uVar10 + (int)pDVar8->data);
```

The comment deliberately contains only the kind and local expected form; the
single root JSONL catalog is already documented and does not need to be linked
from every occurrence. Before annotating a reused body, the exporter removes all
comments with its reserved `ST_PSEUDO[` marker and recreates them from the
current expression. Repeated exports therefore do not duplicate or preserve
stale hints. JSONL line numbers refer to the raw expression in the final
annotated `decomp.c`.

### Flattened fixed-stride records

An optimized interior-pointer expression can remain flat even though the global
range is already typed as a geometry-derived `PackedRecord_A62x8[8]`:

```c
*(DArrayTy **)(param_3 * 0x10 + 0x7f4fdd + param_1 * 0xa62)
```

The recovery pass can safely name the containing array from that geometry:

```c
g_packedRecords_A62x8[(char)param_1]
```

It must not invent semantic members such as player slots or object IDs. A later
rewriter may introduce a field/element expression only after proving the base,
component offset, and every index term from the installed generated layout.
The inferred stride, referenced global component, and function location are
catalogued as `flattened_global_record_array`; matching a literal stride or
absolute address alone is never sufficient.

### Runtime-stride dynamic arrays

This is real runtime arithmetic, not a missing fixed C array type:

```c
(DArrayElementHeader *)
    (array->elementSize * index + (int)array->data)
```

The readable form needs a helper or a typed wrapper, for example:

```c
DArrayAt<DArrayElementHeader>(array, index)
```

When `STDArrayElementApplier` has installed an exact per-owner-field descriptor
whose `data` member points to a recovered element record, the exporter performs
this rendering automatically. If Ghidra reused the primitive temporary for
another SSA lifetime, the exporter creates a separate `darray_<temporary>`
alias only for the interval ending at the next non-DArray definition. Exact
constant element accesses in that interval become named record fields:

```c
STManRuinC_field_003CElement *darray_puVar6;
darray_puVar6 = DArrayAt<STManRuinC_field_003CElement>(array, index);
darray_puVar6->field_0021 = value;
```

The transformation is deliberately withheld for a generic `DArrayTy`, an
unknown element record, control flow containing raw labels/gotos, a non-exact
field offset/width, or an address expression with an additional constant.
Those sites remain catalogued as `dynamic_array_indexing`. A static Ghidra
array cannot represent them because `elementSize` is not part of the datatype.

### Packed and unaligned fields

For an expression such as:

```c
*(int *)((int)&payload->packed.value_05 + 3)
```

the byte address is payload offset `0x08`. Depending on the command
discriminator, the compilable form is either a proven semantic member such as
`payload->position.z` or an explicit unaligned operation such as:

```c
load_i32_unaligned(&payload->bytes[8])
```

The shared union cannot globally select the correct facet for every switch arm.
These cases are catalogued as `packed_or_unaligned_piece`; source reconstruction
must use the discriminator and local data flow.

### Raw indirect calls

```c
(**(code **)(object->field_0000 + 8))(0x65, &order);
```

After vtable ownership and slot prototype recovery this should become the
Ghidra-compatible typed form:

```c
(*object->vtable->vfunc_08)(object, 0x65, &order);
```

The explicit receiver is correct for a `__thiscall` function pointer stored in
a table. Source extraction may later render it as a real C++ member call.
Unresolved sites are catalogued as `raw_indirect_call`.

### ABI high-variable artifacts

`unaff_ESI`, `unaff_EDI`, and `extraout_*` (including `CONCAT*` expressions
built from `extraout_*`) usually indicate that a callee prototype lost
information visible in the x86 ABI. Other `CONCAT*` expressions are classified
as partial/packed value assembly instead. `_setjmp3`, for
example, must be varargs with two fixed parameters; otherwise Ghidra invents
unaffected-register inputs for the omitted unwind metadata. A narrow return
type whose callers consume full `EAX` produces the corresponding `extraout_*`
and `CONCAT*` artifacts.

Run `STAbiConsistencyAnalyzer`/`STAbiConsistencyApplier` before export. Residue
is catalogued as `unresolved_register_input` or `return_width_artifact` rather
than rewritten without a database-level proof.

### Exact affine cancellation and partial-register returns

Ghidra can preserve pointer arithmetic after all terms cancel:

```c
(byte *)((int)(p + 0x21) + (-0x84 - (int)p))
```

The exporter renders this as `(byte *)0x0` only when both occurrences are the
same pointer variable and `0x21 * sizeof(*p) == 0x84`. Expressions involving
two different bases remain untouched because they commonly encode a real
relative offset.

Likewise, x86 code such as:

```asm
CMP EAX,0xff
JNZ other
XOR AL,AL
RET
```

may decompile as a `uint3` shift which merely spells the preserved upper three
bytes of EAX. The guarded value proves those bytes are zero, so the exporter
uses `return 0;`. The textual shape alone is insufficient: the exact
machine-code guard, partial-register clear, and return path are required.

## Safety rule for future normalization

A rewrite may be automatic only when it preserves the exact byte address,
access width, signedness, evaluation order, and call ABI. Otherwise it remains
a catalogued suggestion. The original `listing.asm`, stable function address,
and JSON metadata are always retained next to the normalized pseudocode for
verification.
