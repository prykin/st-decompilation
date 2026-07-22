
/* [STMethodOwnerApplier] Structural method owner recovered as cLoadingTy.
   Evidence: this_call_owners=[cLoadingTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall cLoadingTy::sub_00555680(cLoadingTy *this,char *param_1)

{
  if (((int *)this->field_004C != (int *)0x0) && (param_1 != (char *)0x0)) {
    Library::MSVCRT::FUN_0072eb70(param_1,(int *)this->field_004C);
    Library::MSVCRT::FUN_0072eb70(&DAT_007c8ff4,(int *)this->field_004C);
  }
  return;
}

