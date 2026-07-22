
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STT3DSprC::sub_004ACFE0(STT3DSprC *this,char param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;

  iVar3 = (int)param_1;
  FUN_006ea800(this->field_003C,this->field_0018,iVar3,1);
  iVar2 = this->field_0020;
  pbVar1 = (byte *)(iVar2 + 0xe + iVar3 * 0x24);
  *pbVar1 = *pbVar1 | 0x80;
  return iVar2 + 0xe + iVar3 * 0x24;
}

