#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=4; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006E6500(ST3DSMAPContext *this,undefined4 *param_1)

{
  if (param_1 == nullptr) {
    this->field_0456 = nullptr;
    this->field_045A = nullptr;
    this->field_045E = nullptr;
    this->field_0462 = nullptr;
    return;
  }
  this->field_0456 = (void *)*param_1;
  this->field_045A = (void *)param_1[1];
  this->field_045E = (void *)param_1[2];
  this->field_0462 = (void *)param_1[3];
  return;
}

