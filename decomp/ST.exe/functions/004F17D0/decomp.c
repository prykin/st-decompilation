
/* [STMethodOwnerApplier] Structural method owner recovered as CPanelTy.
   Evidence: this_call_owners=[CPanelTy]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=2; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=6; owner_evidence_coverage=adequate */

void __thiscall CPanelTy::sub_004F17D0(CPanelTy *this,int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  CPanelTy_field_0B99State *pCVar5;

  if (param_2 < 6) {
    pCVar5 = &this->field_0B99;
    if (param_1 == 0) {
      pCVar5 = &this->field_0BF5;
    }
    uVar2 = (uint)param_2;
    iVar1 = uVar2 + (uint)(param_1 == 0) * 6;
    (&this->field_0x780)[iVar1 * 0x27] = 1;
    iVar3 = thunk_FUN_00525390(*(Global_sub_00525390_param_1Enum *)(uVar2 + 9 + (int)pCVar5),*pCVar5
                              );
    *(int *)(&this->field_0x781 + iVar1 * 0x27) = iVar3;
    uVar4 = thunk_FUN_005272b0(*(Global_sub_005272B0_param_1Enum *)(uVar2 + 9 + (int)pCVar5));
    *(undefined4 *)(&this->field_0x789 + iVar1 * 0x27) = uVar4;
    (&this->field_0x78d)[iVar1 * 0x27] = 3;
  }
  return;
}

