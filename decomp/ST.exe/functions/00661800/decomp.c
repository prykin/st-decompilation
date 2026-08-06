#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __fastcall AiFltClassTy::sub_00661800(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  int iVar3;
  int iVar2;
  uint uVar4;
  bool bVar5;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)sub_0065DA10((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    uVar4 = 0;
    iVar3 = 0;
    if (0 < (int)array->count) {
      bVar5 = array->count != 0;
      do {
        if (bVar5) {
          puVar1 = DArrayAt<ushort>(array, uVar4);
        }
        else {
          puVar1 = nullptr;
        }
        this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,param_1->field_0024,*puVar1,CASE_1);
        if ((((this != nullptr) && (iVar3 = (*this->vtable->vfunc_2C)(), 0x31 < iVar3)) &&
            (iVar3 < 0x74)) &&
           ((*(short *)&param_1->field_0x39 != 3 &&
            ((this->field_0361 == 5 || (iVar2 = thunk_FUN_004c93e0(this,5), 0 < iVar2)))))) {
          local_8 = local_8 + 1;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < array->count;
        iVar3 = local_8;
      } while ((int)uVar4 < (int)array->count);
    }
    DArrayDestroy(array);
    return iVar3;
  }
  return 0;
}

