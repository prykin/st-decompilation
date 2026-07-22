
/* [STMethodOwnerApplier] Structural method owner recovered as STExplosion.
   Evidence: this_call_owners=[STExplosion]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STExplosion::sub_00604120(STExplosion *this)

{
  if ((DArrayTy *)this->field_0215 != (DArrayTy *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_0215);
  }
  if (this->field_02B3 != 0) {
    FreeAndNull((void **)&this->field_02B3);
  }
  return;
}

