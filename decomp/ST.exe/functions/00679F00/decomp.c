#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 00679FE0 -> 00679F00 @ 00679FFA */

int __thiscall
FUN_00679f00(void *this,uint param_1,AnonShape_0068FD00_A5257008 *param_2,int param_3)

{
  int iVar1;
  AiTactClassTy *this_00;
  uint *puVar2;
  int local_EAX_70;
  int iVar2;

  iVar1 = STField<int>(this,0x695);
  if (((iVar1 != 0) && (-1 < (int)param_1)) && ((int)param_1 < (int)STField<uint>(iVar1,0xC))) {
    if (param_1 < STField<uint>(iVar1,0xC)) {
      puVar2 = (undefined4 *)(STField<int>(iVar1,0x8) * param_1 + STField<int>(iVar1,0x1C));
    }
    else {
      puVar2 = nullptr;
    }
    if (((puVar2[1] != 0) && (this_00 = (AiTactClassTy *)*puVar2, this_00 != nullptr))
       && (param_2 != nullptr)) {
      if (param_3 < 0) {
        /* ST_CALLSITE[00679F46]: CALL 0x004010e1; direct=004010E1 AiTactClassTy::GetAiMess */
        local_EAX_70 = AiTactClassTy::GetAiMess(this_00,param_2);
        return local_EAX_70;
      }
      iVar2 = thunk_FUN_0068fc70(this_00,param_2,(short)param_3);
      return iVar2;
    }
  }
  return -0x34;
}

