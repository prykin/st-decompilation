
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall CGenerate::sub_00694B90(CGenerate *this)

{
  if (this->field_0008 != (int *)0x0) {
    FUN_006f07e0((int *)&this->field_0008);
  }
  if (this->field_000C != (byte *)0x0) {
    Library::Ourlib::MFSTMAP::mfTMapErase((int *)&this->field_000C);
  }
  this->field_0008 = (int *)0x0;
  this->field_000C = (byte *)0x0;
  return;
}

