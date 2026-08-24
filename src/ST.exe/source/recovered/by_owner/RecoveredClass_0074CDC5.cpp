#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/RecoveredClass_0074CDC5.cpp

// 0074C38F RecoveredClass_0074CDC5::sub_0074C38F
#line 4 "decomp/ST.exe/functions/0074C38F/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C38F @ 0074BEA7

   [STMethodOwnerApplier] Structural method owner recovered as RecoveredClass_0074CDC5.
   Evidence: this_call_owners=[RecoveredClass_0074CDC5]; agreed_this_calls=1;
   incoming_this_accesses=5; incoming_edx_uses=0; incoming_stack_parameter_uses=4;
   direct_non_thunk_callers=2; incoming_ecx_receiver_callers=1; attributed_named_callers=1;
   owner_evidence_coverage=adequate */

undefined4 * __thiscall
st::fn_0074C38F
          (RecoveredClass_0074CDC5 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  st::fn_0074857E(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(int *)&this->field_0xd8 = param_2;
  this->field_0000 = (VTable_007A1950 *)&st_global_007A17C8;
  this->field_000C = st::machine_word_boundary_cast<undefined4>(&st_global_007A1780);
  this->field_0010 = st::machine_word_boundary_cast<undefined4>(&st_global_007A1768);
  this->field_0098 = st::machine_word_boundary_cast<undefined4>(&st_global_007A1740);
  return (undefined4 *)&this->field_0000;
}

// 0074CDC5 RecoveredClass_0074CDC5::FUN_0074cdc5
#line 4 "decomp/ST.exe/functions/0074CDC5/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CDC5 @ 006D7212 | 0074C96C -> 0074CDC5 @ 0074C99D */

undefined4 * __thiscall
st::fn_0074CDC5
          (RecoveredClass_0074CDC5 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  st::fn_0074C38F(this,param_1,param_2,param_3,text);
  *(undefined4 *)&this->field_0xe4 = 0;
  this->field_00E0 = param_2;
  this->field_0000 = &st_global_007A1950;
  this->field_000C = st::machine_word_boundary_cast<undefined4>(&st_global_007A1908);
  this->field_0010 = st::machine_word_boundary_cast<undefined4>(&st_global_007A18F0);
  this->field_0098 = st::machine_word_boundary_cast<undefined4>(&st_global_007A18C8);
  return (undefined4 *)&this->field_0000;
}

