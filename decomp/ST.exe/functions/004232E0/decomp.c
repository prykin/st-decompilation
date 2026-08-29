#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0065D6A0 -> 004232E0 @ 0065D6C8; AiFltClassTy::sub_0065D6A0 this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall STGroupBoatC::sub_004232E0(STGroupBoatC *this,AiFltClassTy *param_1)

{
  this->field_001C = param_1;
  return;
}

