
/* [STMethodOwnerApplier] Structural method owner recovered as STColl3C.
   Evidence: this_call_owners=[STColl3C]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STColl3C::sub_005FA070(STColl3C *this)

{
  if (this->field_02DD == CASE_5) {
    (*this->vtable[8].vfunc_00)();
    sub_004167A0(this);
  }
  thunk_FUN_005fa030((AnonShape_005F9F70_43CA4DAC *)this);
  return;
}

