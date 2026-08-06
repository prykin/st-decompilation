#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056DB80 -> 006DDBB0 @ 0056E453

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DDBB0(ST3DSMAPContext *this)

{
  this->field_0144 = 0;
  this->field_02D8 = 1;
  FreeAndNull(&this->field_001C);
  return;
}

