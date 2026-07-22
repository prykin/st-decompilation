#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ComboTy.
   Evidence: this_call_owners=[ComboTy]; agreed_this_calls=2; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall ComboTy::sub_005943F0(ComboTy *this)

{

  memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  this->field_0020 = this->field_000C->field_0014;
  this->field_0024 = 0;
  this->field_0028 = 10;
  this->field_002C = (ComboTy *)this->field_0008;
  sub_006E60A0(this,(undefined4 *)&this->field_0x18);
  return;
}

