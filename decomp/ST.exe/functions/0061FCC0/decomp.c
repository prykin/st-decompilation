
/* [STMethodOwnerApplier] Structural method owner recovered as SndUnderAttMenegC.
   Evidence: this_call_owners=[SndUnderAttMenegC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall SndUnderAttMenegC::sub_0061FCC0(SndUnderAttMenegC *this)

{
  if ((DArrayTy *)this->field_00B9 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00B9);
    this->field_00B9 = 0;
  }
  if ((DArrayTy *)this->field_00C5 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00C5);
    this->field_00C5 = 0;
  }
  if ((DArrayTy *)this->field_00D1 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00D1);
    this->field_00D1 = 0;
  }
  if ((DArrayTy *)this->field_00DD != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00DD);
    this->field_00DD = 0;
  }
  if ((DArrayTy *)this->field_00E9 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00E9);
    this->field_00E9 = 0;
  }
  if ((DArrayTy *)this->field_00F5 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_00F5);
    this->field_00F5 = 0;
  }
  if ((DArrayTy *)this->field_0101 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_0101);
    this->field_0101 = 0;
  }
  if ((DArrayTy *)this->field_010A != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_010A);
    this->field_010A = 0;
  }
  return;
}

