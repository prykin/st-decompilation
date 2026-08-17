#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0068FB30 -> 0065D940 @ 0068FBC1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall FUN_0065d940(void *this,DArrayTy *param_1,int param_2)

{
  ushort *puVar1;
  STGameObjC *objPtr;
  uint uVar2;
  bool bVar3;

  if (param_1 != nullptr) {
    uVar2 = 0;
    if (0 < (int)param_1->count) {
      bVar3 = param_1->count != 0;
      do {
        if (bVar3) {
          puVar1 = DArrayAt<ushort>(param_1, uVar2);
        }
        else {
          puVar1 = nullptr;
        }
        /* ST_CALLSITE[0065D97B]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
        objPtr = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,STField<char>(this,0x24),*puVar1,CASE_1);
        if (objPtr != nullptr) {
          /* ST_CALLSITE[0065D98B]: CALL 0x00404200; direct=00404200 AiFltClassTy::_AddObjFlt */
          AiFltClassTy::_AddObjFlt(this,(uint)objPtr,param_2);
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < param_1->count;
      } while ((int)uVar2 < (int)param_1->count);
    }
  }
  return;
}

