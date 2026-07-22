
/* [STMethodOwnerApplier] Structural method owner recovered as STVolcanoC.
   Evidence: this_call_owners=[STVolcanoC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STVolcanoC::sub_006472B0(STVolcanoC *this)

{
  undefined4 uVar1;
  int iVar2;

  uVar1 = 0;
  iVar2 = this->field_0050 + 1;
  this->field_0050 = iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    this->field_003C = (this->field_0030 + 2) * 0xc9;
    this->field_0040 = (this->field_0034 + 2) * 0xc9;
    this->field_0044 = this->field_0038 * 200 + 0x78;
    uVar1 = 1;
  }
  else if (iVar2 == 2) {
    this->field_003C = (this->field_0030 + 2) * 0xc9;
    this->field_0040 = (this->field_0034 + 2) * 0xc9;
    this->field_0044 = this->field_0038 * 200 + 0xde;
    return 1;
  }
  return uVar1;
}

