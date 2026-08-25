#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STParticleC::sub_0062AEF0(STParticleC *this,undefined4 *param_1)

{
  uint uVar1;
  STParticleC *pSVar3;

  uVar1 = this->field_00CE;
  pSVar3 = this;
  memmove(pSVar3, param_1, 0xd6); /* compiler REP MOVS byte copy */
  pSVar3 = (STParticleC *)((byte *)pSVar3 + 0xd4);
  param_1 = param_1 + 0x35;
  pSVar3->field_0x2 = STField<undefined1>(param_1,2);
  this->field_00CE = uVar1;
  this->field_00CA = nullptr;
  this->field_00C6 = -1;
  return;
}

