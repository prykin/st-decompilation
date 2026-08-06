#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 00679FE0 -> 00679F00 @ 00679FFA */

int __thiscall
FUN_00679f00(void *this,uint param_1,AnonShape_0068FD00_A5257008 *param_2,int param_3)

{
  int iVar1;
  AiTactClassTy *this_00;
  undefined4 *puVar2;
  int local_EAX_70;
  int iVar2;

  iVar1 = STField<int>(this,0x695);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)*(uint *)(iVar1 + 0xc))) {
    if (param_1 < *(uint *)(iVar1 + 0xc)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c));
    }
    else {
      puVar2 = nullptr;
    }
    if (((puVar2[1] != 0) && (this_00 = (AiTactClassTy *)*puVar2, this_00 != nullptr))
       && (param_2 != nullptr)) {
      if (param_3 < 0) {
        local_EAX_70 = AiTactClassTy::GetAiMess(this_00,param_2);
        return local_EAX_70;
      }
      iVar2 = thunk_FUN_0068fc70(this_00,param_2,(short)param_3);
      return iVar2;
    }
  }
  return -0x34;
}

