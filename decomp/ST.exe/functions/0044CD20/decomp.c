#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044CD20 -> 006ACC70 @ 0044CD3E */

void FUN_0044cd20(uint param_1,DArrayTy *groupContent,undefined4 param_3)

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
          /* ST_CALLSITE[0044CD56]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
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

