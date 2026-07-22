
/* [STMethodOwnerApplier] Structural method owner recovered as FSGSTy.
   Evidence: this_call_owners=[FSGSTy]; agreed_this_calls=2; incoming_this_accesses=40;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall FSGSTy::sub_005A07F0(FSGSTy *this)

{
  SetAccelerator(0,this->field_0008,2,0xc0a5,2,0x4000002f,0,0,0,0,0,0);
  SetAccelerator(0,this->field_0008,2,0xc0a4,2,0x8000031,0,0,0,0,0,0);
  SetAccelerator(0,this->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (this->field_1B10 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B10);
  }
  this->field_1B10 = 0;
  if (this->field_1B14 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B14);
  }
  this->field_1B14 = 0;
  if (this->field_1B18 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B18);
  }
  this->field_1B18 = 0;
  if (this->field_1B1C != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B1C);
  }
  this->field_1B1C = 0;
  if (this->field_1B20 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B20);
  }
  this->field_1B20 = 0;
  if (this->field_1B24 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1B24);
  }
  this->field_1B24 = 0;
  if (this->field_1AC4 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1AC4);
  }
  this->field_1AC4 = 0;
  if (this->field_1AC8 != 0) {
    StartSystemTy::sub_006E56B0(this->field_000C,this->field_1AC8);
  }
  this->field_1AC8 = 0;
  if ((DArrayTy *)this->field_1EA2 != (DArrayTy *)0x0) {
    FUN_006b5570((DArrayTy *)this->field_1EA2);
  }
  this->field_1EA2 = (AnonPointee_FSGSTy_1EA2 *)0x0;
  if (this->field_1AE8 != (DArrayTy *)0x0) {
    FUN_006b5570(this->field_1AE8);
  }
  this->field_1AE8 = (DArrayTy *)0x0;
  if (this->field_1AEC != (DArrayTy *)0x0) {
    FUN_006b5570(this->field_1AEC);
  }
  this->field_1AEC = (DArrayTy *)0x0;
  if (this->field_1EA6 != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_1EA6);
  }
  this->field_1EA6 = (DArrayTy *)0x0;
  if (this->field_1EAA != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_1EAA);
  }
  this->field_1EAA = (DArrayTy *)0x0;
  if (this->field_1E8E != 0) {
    FreeAndNull((void **)&this->field_1E8E);
  }
  if (this->field_1E92 != (tagBITMAPINFO *)0x0) {
    FreeAndNull(&this->field_1E92);
  }
  if (this->field_1E9A != (tagBITMAPINFO *)0x0) {
    FreeAndNull(&this->field_1E9A);
  }
  return;
}

