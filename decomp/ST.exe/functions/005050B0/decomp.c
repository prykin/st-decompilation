
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005050B0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=5; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall CPanelTy::sub_005050B0(CPanelTy *this,Global_sub_005050B0_param_1Enum param_1)

{
  char cVar1;
  bool bVar2;

  if (DAT_0080874e == '\x01') {
    bVar2 = this->field_09D4 != '\x01';
  }
  else {
    cVar1 = this->field_09D4;
    bVar2 = cVar1 == '\x01';
    if (DAT_0080874e == '\x03') {
      if ((param_1 == CASE_3) && (cVar1 == '\x01')) {
        return -1;
      }
      return (-(uint)(cVar1 != '\x01') & 0xfffffffc) + 4 + (uint)param_1;
    }
  }
  if (bVar2) {
    switch(param_1) {
    case CASE_0:
      goto switchD_005050fb_caseD_0;
    case CASE_1:
      return 3;
    case CASE_2:
      return 9;
    case CASE_3:
      return 7;
    case CASE_4:
      return 4;
    case CASE_5:
      return 8;
    default:
switchD_005050fb_default:
      return -1;
    }
  }
  switch(param_1) {
  case CASE_0:
switchD_005050fb_caseD_0:
    return 0;
  case CASE_1:
    return 1;
  case CASE_2:
    return 2;
  case CASE_3:
    return 5;
  case CASE_4:
    return 6;
  default:
    goto switchD_005050fb_default;
  }
}

