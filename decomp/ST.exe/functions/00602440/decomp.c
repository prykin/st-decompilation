#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STDestC.
   Evidence: this_call_owners=[STDestC]; agreed_this_calls=4; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_6=6

   [STSwitchEnumApplier] Switch target field_036E uses
   /SubmarineTitans/Recovered/Enums/STDestC_field_036EState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_6=6 */

void __thiscall STDestC::sub_00602440(STDestC *this)

{
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_18 = 0;
  local_10 = this->field_0008;
  local_14 = 10;
  sub_006E60A0(this,local_24);
  this->field_036E = CASE_6;
  return;
}

