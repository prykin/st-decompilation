#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065ED90 -> 0065E700 @ 0065EDAD */

undefined4 __fastcall
FUN_0065e700(RecoveredReceiver_0065ED90 *param_1,undefined4 param_2,int *param_3,int *param_4,
            int *param_5)

{
  DArrayTy *array;
  ushort *puVar1;
  STFishC *this;
  uint uVar2;
  bool bVar3;
  short local_a;
  short local_8;
  short local_6;

  /* ST_CALLSITE[0065E70F]: CALL 0x004018cf; direct=004018CF AiFltClassTy::sub_0065DA10; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__fastcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/AiFltClassTy;/undefined4 */
  array = AiFltClassTy::sub_0065DA10((AiFltClassTy *)param_1,param_2);
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
        puVar1 = DArrayAt<ushort>(array, uVar2);
      }
      else {
        puVar1 = nullptr;
      }
      /* ST_CALLSITE[0065E773]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STFishC; signature=__thiscall;pointer:/STFishC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
      this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,param_1->field_0024,*puVar1,CASE_1);
      if (this != nullptr) {
        /* ST_CALLSITE[0065E78A]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
        STFishC::sub_004162B0(this,&local_6,&local_8,&local_a);
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

