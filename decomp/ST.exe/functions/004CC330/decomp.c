
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004CC330(TLOBaseTy *this)

{
  if (this->field_0603 != (STT3DSprC *)0x0) {
    thunk_FUN_004ad310(this->field_0603);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this->field_0603);
    this->field_0603 = (STT3DSprC *)0x0;
  }
  return 0;
}

