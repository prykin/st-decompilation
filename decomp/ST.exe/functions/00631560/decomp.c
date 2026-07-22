
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631560(STManRuinC *this)

{
  if (this->field_0034 != 0) {
    FreeAndNull((void **)&this->field_0034);
  }
  if (this->field_0038 != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_0038);
    this->field_0038 = (DArrayTy *)0x0;
  }
  if (-1 < this->field_0061) {
    FUN_006e8ba0(PTR_00807598,this->field_0061);
  }
  if (this->field_003C != (DArrayTy *)0x0) {
    DArrayDestroy(this->field_003C);
    this->field_003C = (DArrayTy *)0x0;
  }
  return;
}

