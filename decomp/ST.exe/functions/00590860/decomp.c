#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MAdvTy.
   Evidence: this_call_owners=[MAdvTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall MAdvTy::sub_00590860(MAdvTy *this)

{

  memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  this->field_0020 = *(undefined4 *)(this->field_000C + 0x14);
  this->field_0024 = 0;
  this->field_0028 = 10;
  this->field_002C = this->field_0008;
  sub_006E60A0(this,(undefined4 *)&this->field_0x18);
  return;
}

