#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=2; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
STManRuinC::sub_00630BB0
          (STManRuinC *this,short param_1,short param_2,short param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{

  memset(&this->field_0040, 0, 0x21); /* compiler bulk-zero initialization */
  this->field_0040 = param_4;
  this->field_0060 = 0;
  this->field_0061 = -1;
  this->field_0054 = (int)(short)(param_1 * 0xc9 + 100);
  this->field_0058 = (int)(short)(param_2 * 0xc9 + 100);
  this->field_005C = (int)(short)(param_3 * 200 + 100);
  this->field_004C = param_5;
  this->field_0050 = param_6;
  return;
}

