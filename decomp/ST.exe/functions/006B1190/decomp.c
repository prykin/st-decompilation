#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004AF080 -> 006B1190 @ 004AF371 | 004AF080 -> 006B1190 @ 004AF3C6 | 004AFFA0 ->
   006B1190 @ 004AFFCC | 004AFFA0 -> 006B1190 @ 004B0159 | 004B0250 -> 006B1190 @ 004B05D5 |
   004B0250 -> 006B1190 @ 004B062A | 004B0250 -> 006B1190 @ 004B09CB | 004B1120 -> 006B1190 @
   004B11A8 | 004B1120 -> 006B1190 @ 004B12BE | 004B1690 -> 006B1190 @ 004B1B19 | 004B1690 ->
   006B1190 @ 004B1B65 | 004B1FB0 -> 006B1190 @ 004B207D | 004B1FB0 -> 006B1190 @ 004B21F2 |
   004B31C0 -> 006B1190 @ 004B3200 | 004B31C0 -> 006B1190 @ 004B3258 | 004B33D0 -> 006B1190 @
   004B368B | 004B33D0 -> 006B1190 @ 004B389E | 004B33D0 -> 006B1190 @ 004B47AD | 004B33D0 ->
   006B1190 @ 004B4823 | 004D8530 -> 006B1190 @ 004D854E | 004D8530 -> 006B1190 @ 004D8568 |
   004D85E0 -> 006B1190 @ 004D8600 | 004D85E0 -> 006B1190 @ 004D8649 | 004DE820 -> 006B1190 @
   004DE96C | 00540DC0 -> 006B1190 @ 00540EDF | 00540DC0 -> 006B1190 @ 00540F08 | 00541030 ->
   006B1190 @ 0054108B | 00541030 -> 006B1190 @ 005410D9 | 006E4C90 -> 006B1190 @ 006E4CAA

   [STUtilityFunctionApplier] darray_get_next: copies the element at iteratorIndex to caller
   storage, advances the iterator, and returns the previous index or -4
   Evidence: body pattern verified */

int __fastcall DArrayGetNext(DArrayTy *array,byte *outElement)

{
  dword dVar1;
  uint uVar3;
  byte *pbVar4;

  if (array->iteratorIndex < array->count) {
    uVar3 = array->elementSize;
    pbVar4 = (byte *)(uVar3 * array->iteratorIndex + (int)array->data);
    memmove(outElement, pbVar4, uVar3); /* compiler REP MOVS byte copy */
    dVar1 = array->iteratorIndex;
    array->iteratorIndex = dVar1 + 1;
    return dVar1;
  }
  return -4;
}

