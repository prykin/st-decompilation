
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall TLOBaseTy::sub_004C96E0(TLOBaseTy *this)

{
  TLOBaseTy_field_0245State TVar1;
  uint uVar2;
  int iVar3;

  uVar2 = GetPlayerRaceId(*(char *)&this->field_023D);
  TVar1 = this->field_0245;
  iVar3 = (((uVar2 & 0xff) - 1) + this->field_0235 * 3) * 0xc;
  this->field_05EF = *(undefined4 *)((&PTR_PTR_007bb198)[TVar1] + iVar3);
  this->field_05F3 = *(undefined4 *)((&PTR_PTR_007bb198)[TVar1] + iVar3 + 4);
  this->field_05F7 = *(undefined4 *)((&PTR_PTR_007bb198)[TVar1] + iVar3 + 8);
  return;
}

