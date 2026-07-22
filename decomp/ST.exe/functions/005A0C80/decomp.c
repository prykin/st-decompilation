
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=23;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall FSGSTy::sub_005A0C80(FSGSTy *this)

{
  if (this->field_1AC4 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1EB6 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1EB6);
  }
  this->field_1EB6 = 0;
  if (this->field_1EBA != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1EBA);
  }
  this->field_1EBA = 0;
  if (this->field_1ED3 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1ED3);
  }
  this->field_1ED3 = 0;
  if (this->field_1ED7 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1ED7);
  }
  this->field_1ED7 = 0;
  if (this->field_1B24 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B24);
  }
  this->field_1B24 = 0;
  if (this->field_1AE8 != (DArrayTy *)0x0) {
    FUN_006b5570(this->field_1AE8);
  }
  this->field_1AE8 = (DArrayTy *)0x0;
  if (this->field_1EDB != 0) {
    FreeAndNull((void **)&this->field_1EDB);
  }
  if (this->field_1E8E != 0) {
    FreeAndNull((void **)&this->field_1E8E);
  }
  if (this->field_1E92 != (tagBITMAPINFO *)0x0) {
    FreeAndNull(&this->field_1E92);
  }
  return;
}

