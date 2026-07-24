
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBldMark::sub_004C61A0(TLOBldMark *this)

{
  if (this->field_0018 == 0) {
    thunk_FUN_004ad310((STT3DSprC *)this->field_002C);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this->field_002C);
  }
  g_tLOBldMark_007FB2AC = (TLOBldMark *)0x0;
  return 0;
}

