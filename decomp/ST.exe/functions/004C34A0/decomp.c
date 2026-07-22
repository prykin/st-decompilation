
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=9; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall TLOBaseTy::sub_004C34A0(TLOBaseTy *this,int param_1)

{
  int iVar1;

  iVar1 = this->field_0259 / 0xf;
  if (*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) == 0) {
    return 0;
  }
  iVar1 = (((*(int *)(&DAT_007be8c8 + (param_1 / 0xf + iVar1 * 0x18) * 4) < 1) - 1 & 2) - 1) + iVar1
  ;
  if (0x17 < iVar1) {
    sub_004B98E0(this,0);
    return 1;
  }
  if (iVar1 < 0) {
    iVar1 = 0x17;
  }
  sub_004B98E0(this,iVar1 * 0xf);
  return 1;
}

