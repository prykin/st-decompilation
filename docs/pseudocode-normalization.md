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

## Catalogued forms awaiting typed rewriting

Every export recreates `decomp/ST.exe/pseudocode_idioms.jsonl`. Each JSON object
contains the stable function address and name, `decomp.c` path, line numbers,
short excerpts, occurrence count, detector, address/symbol hints, and the
intended transformation. Line numbers are convenient but not stable across
decompilation; the program and function entry address are the durable key.

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

### Flattened player-runtime records

An optimized interior-pointer expression can remain flat even though the global
range is already typed as `STPlayerRuntimeRecord[8]`:

```c
*(DArrayTy **)(param_3 * 0x10 + 0x7f4fdd + param_1 * 0xa62)
```

With the surrounding index setup, its intended structured form is:

```c
g_playerRuntime[(char)param_1]
    .tempSlots[param_2][param_3]
    .objectIds
```

The `0xA62` stride, absolute address hint, referenced global component, and
function location are catalogued as `flattened_global_record_array`. A future
rewriter must prove the base and all index terms; matching the literal stride
alone is not sufficient.

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

Such sites are catalogued as `dynamic_array_indexing`. A static Ghidra array
cannot represent them because `elementSize` is not part of the datatype.

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

## Safety rule for future normalization

A rewrite may be automatic only when it preserves the exact byte address,
access width, signedness, evaluation order, and call ABI. Otherwise it remains
a catalogued suggestion. The original `listing.asm`, stable function address,
and JSON metadata are always retained next to the normalized pseudocode for
verification.
