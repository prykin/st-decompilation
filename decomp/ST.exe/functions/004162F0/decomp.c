#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFishC.
   Evidence: this_call_owners=[STFishC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
STFishC::sub_004162F0(STFishC *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_1 = this->field_005B;
  *param_2 = this->field_005D;
  *param_3 = this->field_005F;
  return;
}

