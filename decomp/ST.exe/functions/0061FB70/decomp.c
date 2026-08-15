#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
SndUnderAttMenegC::sub_0061FB70
          (SndUnderAttMenegC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  SndUnderAttMenegC_field_00B9DArray *pSVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00B9 == nullptr) {
    pSVar1 = (SndUnderAttMenegC_field_00B9DArray *)
             Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
    this->field_00B9 = pSVar1;
  }
  if (this->field_00B9 != nullptr) {
    uVar2 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_00B9,&local_18);
    return uVar2;
  }
  return 0xffffffff;
}

