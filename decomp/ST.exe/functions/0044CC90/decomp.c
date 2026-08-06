#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044CC90 -> 006ACC70 @ 0044CCAE */

void FUN_0044cc90(uint param_1,DArrayTy *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent->count;
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement(groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
          (pSVar3 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,(char)uVar2,(ushort)param_1,CASE_1),
          pSVar3 != nullptr)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07E6 = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

