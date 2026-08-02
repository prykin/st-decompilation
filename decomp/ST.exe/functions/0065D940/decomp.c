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
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(param_1, uVar2) (runtime stride) */
          puVar1 = (ushort *)(param_1->elementSize * uVar2 + (int)param_1->data);
        }
        else {
          puVar1 = nullptr;
        }
        objPtr = STAllPlayersC::GetObjPtr
                           (g_allPlayers_007FA174,*(char *)((int)this + 0x24),*puVar1,CASE_1);
        if (objPtr != nullptr) {
          AiFltClassTy::_AddObjFlt(this,(uint)objPtr,param_2);
        }
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < param_1->count;
      } while ((int)uVar2 < (int)param_1->count);
    }
  }
  return;
}

