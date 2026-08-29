#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0065D2A0 -> 0065D480 @ 0065D3D6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_0065D480(AiFltClassTy *this)

{
  if (this != nullptr) {
    thunk_FUN_00668670((RecoveredRecord_00668670_926FA73E *)&this->field_0020);
    return;
  }
  thunk_FUN_00668670(nullptr);
  return;
}

