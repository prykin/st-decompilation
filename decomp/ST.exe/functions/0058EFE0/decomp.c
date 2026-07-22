#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STSharkC.
   Evidence: this_call_owners=[STSharkC]; agreed_this_calls=5; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall STSharkC::sub_0058EFE0(STSharkC *this)

{
  undefined4 local_24 [8];

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_24[3] = 0;
  local_24[5] = this->field_0008;
  local_24[4] = 10;
  sub_006E60A0(this,local_24);
  return;
}

