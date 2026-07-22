#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STParticleC::sub_0062A860(STParticleC *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_10 = this->field_00D2;
  local_14 = 10;
  thunk_FUN_00604870((void *)this->field_00CE,local_24);
  return;
}

