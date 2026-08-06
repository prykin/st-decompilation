#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_007178C0(ST3DSMAPContext *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == this->field_04BA) {
    uVar2 = this->field_04B2 * param_3 + param_2 ^ 7;
    pbVar1 = (byte *)((int)this->field_046E + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    this->field_046A = 1;
  }
  return;
}

