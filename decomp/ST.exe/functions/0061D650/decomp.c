
/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STLightC::sub_0061D650(STLightC *this)

{
  if (this->field_0057 != 0) {
    FreeAndNull((void **)&this->field_0057);
  }
  if (this->field_009B != 0) {
    FreeAndNull((void **)&this->field_009B);
  }
  if (this->field_009F != 0) {
    FreeAndNull((void **)&this->field_009F);
  }
  this->field_0093 = 0;
  this->field_0097 = 0;
  return;
}

