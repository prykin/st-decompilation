#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C38F @ 0074BEA7

   [STMethodOwnerApplier] Structural method owner recovered as RecoveredClass_0074CDC5.
   Evidence: this_call_owners=[RecoveredClass_0074CDC5]; agreed_this_calls=1;
   incoming_this_accesses=5; incoming_edx_uses=0; incoming_stack_parameter_uses=4;
   direct_non_thunk_callers=2; incoming_ecx_receiver_callers=1; attributed_named_callers=1;
   owner_evidence_coverage=adequate */

undefined4 * __thiscall
RecoveredClass_0074CDC5::sub_0074C38F
          (RecoveredClass_0074CDC5 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  FUN_0074857e(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(int *)&this->field_0xd8 = param_2;
  this->field_0000 = (VTable_007A1950 *)&VTable_007A17C8;
  this->field_000C = &VTable_007A1780;
  this->field_0010 = &VTable_007A1768;
  this->field_0098 = &VTable_007A1740;
  return &this->field_0000;
}

