#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STDestC::sub_00602660(STDestC *this,undefined4 *param_1)

{
  byte *puVar2;

  puVar2 = (byte *)&this->field_0x231;
  memmove(puVar2, param_1, 0x17e); /* compiler REP MOVS byte copy */
  this->field_039B = -1;
  if (this->field_0241 == 1) {
    this->field_0047 = this->field_0255;
    this->field_0049 = this->field_0257;
    this->field_004B = this->field_0259;
  }
  this->field_0041 = (short)this->field_037B;
  this->field_0043 = (short)this->field_037F;
  this->field_0045 = (short)this->field_0383;
  return 0x17e;
}

