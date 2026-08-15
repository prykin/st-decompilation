#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ST3DSMAPContext::sub_006DDA90(ST3DSMAPContext *this,float param_1,float param_2)

{
  if (param_1 < _DAT_0079034c) {
    param_1 = 0.0;
  }
  if (_DAT_0079dfd0 < param_2) {
    param_2 = _DAT_0079dfd0;
  }
  this->field_015C = (double)param_1;
  this->field_0164 = (double)param_2;
  sub_006DD870(this);
  return;
}

