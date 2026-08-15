#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
SndUnderAttMenegC::sub_006203F0(SndUnderAttMenegC *this,int param_1,int param_2,int param_3)

{
  SndUnderAttMenegC_field_00D1DArray *array;
  uint index;
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;

  uVar2 = 0xffffffff;
  local_8 = 0xffffffff;
  if ((this->field_00D1 != nullptr) &&
     (index = this->field_00D1->count - 1, -1 < (int)index)) {
    do {
      array = this->field_00D1;
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((index < array->count) &&
         (piVar1 = (int *)((int)&array->data->field_0000 + array->elementSize * index),
         piVar1 != nullptr)) {
        if ((param_2 < piVar1[2] + -3) ||
           (((piVar1[2] + 3 < param_2 || (uVar2 = local_8, param_3 < piVar1[3] + -3)) ||
            (piVar1[3] + 3 < param_3)))) {
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            DArrayRemoveAt((DArrayTy *)array,index);
          }
        }
        else {
          piVar1[2] = param_2;
          uVar2 = 1;
          local_8 = 1;
          piVar1[3] = param_3;
          piVar1[1] = param_1;
          if (0x1194 < (uint)(param_1 - *piVar1)) {
            uVar2 = 2;
            *piVar1 = param_1;
            local_8 = 2;
          }
        }
      }
      index = index - 1;
    } while (-1 < (int)index);
    return uVar2;
  }
  return 0xffffffff;
}

