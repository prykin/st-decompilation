
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiTactClassTy::sub_00690AB0(AiTactClassTy *this)

{
  int iVar1;

  if ((this->field_0089 == 0) || (this->field_008D + this->field_0089 <= this->field_012C)) {
    this->field_008D = this->field_012C;
    iVar1 = thunk_FUN_006777d0(CASE_DE,0,0,0,-1,-1);
    this->field_0134 = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_DD,0,0,0,-1,-1);
    this->field_0138 = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_E1,0,0,0,-1,-1);
    this->field_013C = iVar1;
    iVar1 = thunk_FUN_006777d0(CASE_E2,0,0,0,-1,-1);
    this->field_0140 = iVar1;
  }
  return;
}

