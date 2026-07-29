#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STVolcanoC::sub_00646DB0(STVolcanoC *this,undefined4 *param_1)

{
  byte *puVar2;

  if (this == (STVolcanoC *)0x0) {
    puVar2 = (byte *)0x0;
  }
  else {
    puVar2 = (byte *)&this->field_0x1c;
  }
  memmove(puVar2, param_1, 0x95); /* compiler REP MOVS byte copy */
  this->field_0061 = (ushort *)0x0;
  this->field_005D = -1;
  this->field_007A = -1;
  this->field_0086 = -1;
  return 0x95;
}

