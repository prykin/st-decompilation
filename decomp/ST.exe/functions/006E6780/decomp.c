#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=9;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E6780(ST3DSMAPContext *this,int param_1)

{
  AnonPointee_ST3DSMAPContext_044E *pAVar1;

  pAVar1 = this->field_044E;
  if (pAVar1 != nullptr) {
    while (pAVar1->field_0004 != param_1) {
      pAVar1 = (AnonPointee_ST3DSMAPContext_044E *)pAVar1->field_0000;
      if (pAVar1 == nullptr) {
        return;
      }
    }
    if (pAVar1 != nullptr) {
      FUN_006b98c0((int *)&this->field_044E,(int *)pAVar1);
      FUN_006a5e90((short *)pAVar1);
    }
  }
  return;
}

