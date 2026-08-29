#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005FA070 -> 005FA030 @ 005FA08A; STColl3C::sub_005FA070 this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STColl3C::sub_005FA030(STColl3C *this)

{
  thunk_FUN_005f9f70(this);
  thunk_FUN_005f9ff0(this);
  if (this->field_02E6 != nullptr) {
    FreeAndNull(&this->field_02E6);
  }
  return;
}

