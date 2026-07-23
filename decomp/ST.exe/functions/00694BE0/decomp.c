
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00694BE0(CGenerate *this)

{
  if (this->field_0010 != 0) {
    FUN_006f07e0(&this->field_0010);
  }
  if (this->field_0014 != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase(&this->field_0014);
  }
  this->field_0010 = 0;
  this->field_0014 = 0;
  return;
}

