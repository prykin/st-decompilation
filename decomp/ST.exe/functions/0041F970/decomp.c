
/* [STMethodOwnerApplier] Structural method owner recovered as STSprGameObjC.
   Evidence: this_call_owners=[STSprGameObjC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STSprGameObjC::sub_0041F970(STSprGameObjC *this)

{
  if (((void *)this->field_0211 != (void *)0x0) && (this->field_0229 == 1)) {
    FUN_006e66f0((void *)this->field_0211,this->field_01ED);
    this->field_0229 = 0;
  }
  return;
}

