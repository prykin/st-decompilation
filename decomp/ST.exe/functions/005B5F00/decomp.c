
/* [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SettMapMTy::sub_005B5F00(SettMapMTy *this,AnonShape_006B5B10_E0D06CF1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = (*param_2 + -1) * param_2[5];
  FUN_006b4170(param_1,0,iVar2,0,param_2[5] + -2,param_1->field_0008,0xff);
  if (param_2[1] == 1) {
    FUN_006b4170(param_1,0,iVar2,3,param_2[5] + -2,param_2[6] + -3,0);
    FUN_006b4170(param_1,0,iVar2 + 2,1,param_2[5] + -6,2,0);
    FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] - ((*param_2 != 1) + 1),
                 iVar2,3,(byte)this->field_1A5B->field_0140,0xd);
    FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,3,iVar2 + 3,0,
                 (byte)this->field_1A5B->field_0140,0xd);
    FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,0,param_2[5] + -6 + iVar2,0,
                 (byte)this->field_1A5B->field_0140,0xd);
    FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,param_2[5] + iVar2 + -6,0,
                 param_2[5] + iVar2 + -3,3,(byte)this->field_1A5B->field_0140,0xd);
    iVar2 = param_2[5] + -3 + iVar2;
    FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,3,iVar2,param_2[6] + -2,
                 (byte)this->field_1A5B->field_0140,0xd);
    return;
  }
  FUN_006b4170(param_1,0,iVar2 + 1,4,param_2[5] + -4,param_2[6] + -5,0);
  FUN_006b4170(param_1,0,iVar2 + 2,2,param_2[5] + -6,2,0);
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] + -1,iVar2,4,
               (byte)this->field_1A5B->field_0140,0xd);
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,4,iVar2 + 3,1,
               (byte)this->field_1A5B->field_0140,0xd);
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2 + 3,1,param_2[5] + -6 + iVar2,1,
               (byte)this->field_1A5B->field_0140,0xd);
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,param_2[5] + iVar2 + -6,1,
               param_2[5] + iVar2 + -3,4,(byte)this->field_1A5B->field_0140,0xd);
  iVar1 = param_2[5] + -3 + iVar2;
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar1,4,iVar1,param_2[6] + -1,
               (byte)this->field_1A5B->field_0140,0xd);
  FUN_006b5b10((AnonShape_006E6FB0_BC494FEA *)param_1,0,iVar2,param_2[6] + -1,
               param_2[5] + -3 + iVar2,param_2[6] + -1,(byte)this->field_1A5B->field_0140,0xd);
  return;
}

