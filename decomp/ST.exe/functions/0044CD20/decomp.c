#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00436F20 -> 0044CD20 @ 004372DA | 00436F20 -> 0044CD20 @ 004373EE

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_0044cd20(uint param_1,uint *groupContent,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  STGameObjC *pSVar3;
  uint index;
  uint uVar4;

  uVar2 = param_1;
  uVar4 = 0;
  uVar1 = groupContent[3];
  if (uVar1 != 0) {
    index = 0;
    do {
      DArrayGetElement((DArrayTy *)groupContent,index,&param_1);
      if ((((ushort)param_1 != 0xffff) &&
          (pSVar3 = STAllPlayersC::GetObjPtr
                              (g_allPlayers_007FA174,(char)uVar2,(ushort)param_1,CASE_1),
          pSVar3 != nullptr)) && (pSVar3->field_0020 == 0x14)) {
        pSVar3->field_07EA = param_3;
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}

