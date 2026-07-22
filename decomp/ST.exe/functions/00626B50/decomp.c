
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00626B50_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STMineSetC::sub_00626B50(STMineSetC *this,Global_sub_00626B50_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    this->field_02D6 = 0;
    return;
  case CASE_1:
    this->field_02D6 = 1;
    return;
  case CASE_2:
    this->field_02D6 = 2;
    return;
  case CASE_3:
    this->field_02D6 = 3;
  }
  return;
}

