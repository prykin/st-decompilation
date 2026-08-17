#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_0065F980(AiFltClassTy *this)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_24.arg0.words.low = *(undefined2 *)&this->field_0024;
    local_24.arg0.words.high = this->field_007D;
    local_24.arg2.words.low = *(undefined2 *)&this->field_00B3;
    local_24.id = 0x5de5;
    local_24.arg1 = (STMessageArg)this;
    /* ST_CALLSITE[0065F9CD]: CALL dword ptr [EAX] */
    g_aiBossClass_008117BC->GetMessage(&local_24);
    this->field_00B3 = 0;
    return;
  }
  this->field_00B3 = 0;
  return;
}

