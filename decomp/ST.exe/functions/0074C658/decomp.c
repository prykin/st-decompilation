#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C658 @ 0074BED6

   [STMethodOwnerApplier] Structural method owner recovered as RecoveredClass_0074CFC0.
   Evidence: this_call_owners=[RecoveredClass_0074CFC0]; agreed_this_calls=1;
   incoming_this_accesses=5; incoming_edx_uses=0; incoming_stack_parameter_uses=4;
   direct_non_thunk_callers=2; incoming_ecx_receiver_callers=1; attributed_named_callers=1;
   owner_evidence_coverage=adequate */

undefined4 * __thiscall
RecoveredClass_0074CFC0::sub_0074C658
          (RecoveredClass_0074CFC0 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  CBaseOutputPin(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(undefined4 *)&this->field_0xa4 = 0;
  *(int *)&this->field_0xa0 = param_2;
  this->field_0000 = (VTable_007A19F0 *)&VTable_007A1868;
  this->field_000C = &VTable_007A1820;
  this->field_0010 = &VTable_007A1808;
  return &this->field_0000;
}

