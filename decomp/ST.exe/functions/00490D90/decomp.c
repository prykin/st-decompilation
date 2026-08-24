#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00490D90 @ 0049E0F6 | 004A0990 -> 00490D90 @ 004A0AE6 */

undefined4 __fastcall FUN_00490d90(STGameObjC *objPtr)

{
  int iVar1;
  uint uVar2;
  iVar1 = objPtr->field_06F7;
  if (((((iVar1 == 8) || (iVar1 == 0x14)) || (iVar1 == 0x1a)) ||
      ((((iVar1 == 7 || (iVar1 == 0x13)) || ((iVar1 == 0x1b || ((iVar1 == 0xc || (iVar1 == 0x18)))))
        ) || (iVar1 == 0x19)))) ||
     (((iVar1 == 9 || (iVar1 == 0x15)) || (uVar2 = 1, objPtr->field_073E != 1)))) {
    uVar2 = 0;
  }
  return uVar2;
}

