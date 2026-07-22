
/* [STMethodOwnerApplier] Structural method owner recovered as PrividerTy.
   Evidence: this_call_owners=[PrividerTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall PrividerTy::sub_005BB9F0(PrividerTy *this)

{
  *(undefined4 *)&this->field_0x1a65 = 1;
  *(undefined4 *)&this->field_0x29 = 2;
  this->field_002D = 0x20;
  if (this->field_1A73 != 0) {
    *(undefined4 *)&this->field_0x25 = this->field_1A73;
    this->field_0031 = 1;
    (*this->field_000C->vtable->vfunc_18)(&this->field_0x1d);
  }
  return;
}

