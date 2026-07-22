
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall FSGSTy::sub_005A0A50(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if (this->field_1EB6 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1EB6);
  }
  this->field_1EB6 = 0;
  if (this->field_1AE8 != (DArrayTy *)0x0) {
    FUN_006b5570(this->field_1AE8);
  }
  this->field_1AE8 = (DArrayTy *)0x0;
  if (this->field_1AEC != (DArrayTy *)0x0) {
    FUN_006b5570(this->field_1AEC);
  }
  this->field_1AEC = (DArrayTy *)0x0;
  return;
}

