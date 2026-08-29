#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00678980 -> 00678BA0 @ 00678AE8

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as AiPlrClassTy.
   Evidence: this_call_owners=[AiPlrClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall AiPlrClassTy::sub_00678BA0(AiPlrClassTy *this)

{
  FUN_00402e14((AiEventClassTy *)&this->vtable_at_1c);
  if (this != nullptr) {
    thunk_FUN_0067d0a0((AnonShape_0067D0A0_8092D907 *)&this->field_05D3);
    return;
  }
  thunk_FUN_0067d0a0(nullptr);
  return;
}

