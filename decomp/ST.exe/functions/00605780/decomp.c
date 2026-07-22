
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STExplosion::sub_00605780(STExplosion *this)

{
  if ((STT3DSprC *)this->field_02AF != (STT3DSprC *)0x0) {
    thunk_FUN_004ad310((STT3DSprC *)this->field_02AF);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this->field_02AF);
    this->field_02AF = 0;
  }
  return;
}

