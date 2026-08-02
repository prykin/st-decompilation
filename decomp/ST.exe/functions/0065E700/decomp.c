#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065ED90 -> 0065E700 @ 0065EDAD */

undefined4 __fastcall
FUN_0065e700(AnonReceiver_0065ED90 *param_1,undefined4 param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  uint uVar2;
  bool bVar3;
  short local_a;
  short local_8;
  short local_6;

  array = (DArrayTy *)AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if ((array == nullptr) || (array->count == 0)) {
    return 0xffffffff;
  }
  uVar2 = 0;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (0 < (int)array->count) {
    bVar3 = array->count != 0;
    do {
      if (bVar3) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar2) (runtime stride) */
        puVar1 = (ushort *)(array->elementSize * uVar2 + (int)array->data);
      }
      else {
        puVar1 = nullptr;
      }
      this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,param_1[1].field_0x4,*puVar1,CASE_1);
      if (this != nullptr) {
        STFishC::sub_004162B0((STFishC *)this,&local_6,&local_8,&local_a);
        *param_3 = *param_3 + (int)local_6;
        *param_4 = *param_4 + (int)local_8;
        *param_5 = *param_5 + (int)local_a;
      }
      uVar2 = uVar2 + 1;
      bVar3 = uVar2 < array->count;
    } while ((int)uVar2 < (int)array->count);
  }
  DArrayDestroy(array);
  if (0 < (int)uVar2) {
    *param_3 = *param_3 / (int)uVar2;
    *param_4 = *param_4 / (int)uVar2;
    *param_5 = *param_5 / (int)uVar2;
    return 0;
  }
  return 0xffffffff;
}

