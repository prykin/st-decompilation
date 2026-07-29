
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631560(STManRuinC *this)

{
  if (this->field_0034 != (byte *)0x0) {
    FreeAndNull(&this->field_0034);
  }
  if (this->field_0038 != (STManRuinC_field_0038DArray *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_0038);
    this->field_0038 = (STManRuinC_field_0038DArray *)0x0;
  }
  if (-1 < (int)this->field_0061) {
    Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,this->field_0061);
  }
  if (this->field_003C != (STManRuinC_field_003CDArray *)0x0) {
    DArrayDestroy((DArrayTy *)this->field_003C);
    this->field_003C = (STManRuinC_field_003CDArray *)0x0;
  }
  return;
}

