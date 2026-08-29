#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006202B0 -> 00620520 @ 0062032F; FUN_006202b0 parameter param_1

   [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall
SndUnderAttMenegC::sub_00620520
          (SndUnderAttMenegC *this,undefined4 param_1,int param_2,undefined4 param_3,
          undefined4 param_4)

{
  DArrayTy *pSVar1;
  uint uVar1;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  local_14 = param_1;
  local_18 = param_1;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_4;
  if (this->field_00D1 == nullptr) {
    /* ST_CALLSITE[0062055A]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/SndUnderAttMenegC_field_00D1DArray; source view only; no Ghidra override */
    pSVar1 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x14,10);
    this->field_00D1 = (SndUnderAttMenegC_field_00D1DArray *)pSVar1;
  }
  if (this->field_00D1 != nullptr) {

    uVar1 = Library::DKW::TBL::DArrayAppend((DArrayTy *)this->field_00D1,&local_18);
    return uVar1;
  }
  return 0xffffffff;
}

