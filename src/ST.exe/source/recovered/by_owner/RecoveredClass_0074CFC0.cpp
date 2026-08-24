#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/RecoveredClass_0074CFC0.cpp

// 0074C658 RecoveredClass_0074CFC0::sub_0074C658
#line 4 "decomp/ST.exe/functions/0074C658/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 0074BE76 -> 0074C658 @ 0074BED6

   [STMethodOwnerApplier] Structural method owner recovered as RecoveredClass_0074CFC0.
   Evidence: this_call_owners=[RecoveredClass_0074CFC0]; agreed_this_calls=1;
   incoming_this_accesses=5; incoming_edx_uses=0; incoming_stack_parameter_uses=4;
   direct_non_thunk_callers=2; incoming_ecx_receiver_callers=1; attributed_named_callers=1;
   owner_evidence_coverage=adequate */

undefined4 * __thiscall
st::fn_0074C658
          (RecoveredClass_0074CFC0 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  st::fn_00748308(this,param_1,param_2,param_2 + 0x5c,param_3,(short *)text);
  *(undefined4 *)&this->field_0xa4 = 0;
  *(int *)&this->field_0xa0 = param_2;
  this->field_0000 = (VTable_007A19F0 *)&st_global_007A1868;
  this->field_000C = st::machine_word_boundary_cast<undefined4>(&st_global_007A1820);
  this->field_0010 = st::machine_word_boundary_cast<undefined4>(&st_global_007A1808);
  return (undefined4 *)&this->field_0000;
}

// 0074CFC0 RecoveredClass_0074CFC0::FUN_0074cfc0
#line 4 "decomp/ST.exe/functions/0074CFC0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 006D71D0 -> 0074CFC0 @ 006D7273 | 0074C96C -> 0074CFC0 @ 0074C9D4

   [STPrototypeApplier] Propagated return.
   Evidence: 0074CFC0 returns RecoveredClass_0074CFC0::FUN_0074cfc0 this @ 0074CFF8 */

RecoveredClass_0074CFC0 * __thiscall
st::fn_0074CFC0
          (RecoveredClass_0074CFC0 *this,undefined4 param_1,int param_2,undefined4 param_3,
          char *text)

{
  st::fn_0074C658(this,param_1,param_2,param_3,text);
  this->field_00A8 = param_2;
  this->field_0000 = &st_global_007A19F0;
  this->field_000C = st::machine_word_boundary_cast<undefined4>(&st_global_007A19A8);
  this->field_0010 = st::machine_word_boundary_cast<undefined4>(&st_global_007A1990);
  return this;
}

