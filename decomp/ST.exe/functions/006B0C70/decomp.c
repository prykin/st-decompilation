#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00496E40 -> 006B0C70 @ 00496E9C | 004D2760 -> 006B0C70 @ 004D28A9 | 004D2760 ->
   006B0C70 @ 004D2C21 | 004D8530 -> 006B0C70 @ 004D8583 | 004D9700 -> 006B0C70 @ 004D9741 |
   0054D640 -> 006B0C70 @ 0054D803

   [STUtilityFunctionApplier] darray_remove_at: removes one indexed dynamic-array element, shifts
   the byte tail, updates count/iterator state, and returns zero or -4
   Evidence: body pattern verified */

int DArrayRemoveAt(DArrayTy *array,uint index)

{
  dword dVar1;
  uint uVar2;
  byte *puVar4;
  byte *puVar5;

  if (array != (DArrayTy *)0x0) {
    if (index < array->count) {
      dVar1 = array->elementSize;
      puVar5 = (byte *)(dVar1 * index + (int)array->data);
      uVar2 = ((array->count - index) + -1) * dVar1;
      puVar4 = (byte *)(dVar1 + (int)puVar5);
      memmove(puVar5, puVar4, uVar2); /* compiler REP MOVS byte copy */
      array->count = array->count - 1;
      if (index < array->iteratorIndex) {
        array->iteratorIndex = array->iteratorIndex - 1;
      }
      return 0;
    }
  }
  return -4;
}

