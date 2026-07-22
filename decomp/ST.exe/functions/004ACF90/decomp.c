
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STT3DSprC::sub_004ACF90(STT3DSprC *this,char param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)param_1;
  FUN_006ea6d0(this->field_003C,this->field_0018,iVar3,0);
  iVar2 = this->field_0020;
  puVar1 = (ushort *)(iVar2 + 0xe + iVar3 * 0x24);
  *puVar1 = *puVar1 & 0xffbf;
  return iVar2 + 0xe + iVar3 * 0x24;
}

