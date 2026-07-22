
/* [STMethodOwnerApplier] Structural method owner recovered as AiTactClassTy.
   Evidence: this_call_owners=[AiTactClassTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall AiTactClassTy::sub_0068E010(AiTactClassTy *this)

{
  AnonShape_00691480_E757992C *pAVar1;

  if (this == (AiTactClassTy *)0x0) {
    pAVar1 = (AnonShape_00691480_E757992C *)0x0;
  }
  else {
    pAVar1 = (AnonShape_00691480_E757992C *)&this->field_0020;
  }
  thunk_FUN_00691480(pAVar1);
  if (this->field_0130 != 0) {
    FreeAndNull((void **)&this->field_0130);
  }
  return;
}

