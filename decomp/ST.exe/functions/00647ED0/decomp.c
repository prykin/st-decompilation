#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00647DC0 -> 00647ED0 @ 00647E49

   [STMethodOwnerApplier] Structural method owner recovered as AiBossClassTy.
   Evidence: this_call_owners=[AiBossClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall AiBossClassTy::sub_00647ED0(AiBossClassTy *this)

{
  FUN_00402e14((AiEventClassTy *)&this->vtable_at_1c);
  return;
}

