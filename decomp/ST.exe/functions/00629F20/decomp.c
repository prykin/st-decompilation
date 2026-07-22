#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STParticleC::sub_00629F20(STParticleC *this)

{
  int iVar1;
  AnonPointee_STParticleC_00EB *local_8;

  local_8 = (AnonPointee_STParticleC_00EB *)this;
  iVar1 = FUN_006e62d0(g_playSystem_00802A38,this->field_00E7,(int *)&local_8);
  if (iVar1 != -4) {
    this->field_00EB = local_8;
    return;
  }
  memset(&this->field_0xd7, 0, 0x2d); /* compiler bulk-zero initialization */
  return;
}

