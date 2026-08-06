#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004FA3B0(CPanelTy *this)

{
  if ((this->field_0B63 != '\0') && (this->field_0B64 != '\0')) {
    sub_004F8020(this,'\0',1);
    return;
  }
  if ((this->field_0C51 != '\0') && (this->field_0C52 != '\0')) {
    sub_004F8020(this,'\x01',1);
  }
  return;
}

