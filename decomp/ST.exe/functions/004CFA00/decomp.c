
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_sub_004CFA00_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14 */

void __thiscall
TLOBaseTy::sub_004CFA00
          (TLOBaseTy *this,TLOBaseTy_sub_004CFA00_param_1Enum param_1,int param_2,int *param_3,
          int *param_4)

{
  TLOBaseTy_field_0245State TVar1;
  TLOBaseTy_field_04D0State TVar2;
  int iVar3;
  uint uVar4;
  int iVar5;

  iVar3 = GetPlayerRaceId(*(char *)&this->field_023D);
  iVar3 = (-(uint)((char)iVar3 != '\x01') & 0xfffffffd) + 0x13;
  uVar4 = GetPlayerRaceId(*(char *)&this->field_023D);
  TVar1 = this->field_0245;
  iVar5 = (uVar4 & 0xff) - 1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
    TVar2 = this->field_04D0;
    break;
  default:
    goto switchD_004cfa5c_caseD_a;
  case CASE_D:
  case CASE_E:
    TVar2 = this->field_04D0;
  }
  if (TVar2 == CASE_3) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5;
    *param_4 = iVar5 + iVar3;
    return;
  }
  if (TVar2 == CASE_4) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_3 = iVar5 + iVar3;
    *param_4 = iVar5 + iVar3;
    return;
  }
  if (TVar2 == CASE_5) {
    iVar5 = *(int *)((&PTR_DAT_007b5170)[TVar1] + (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8
                    );
    *param_4 = iVar5;
    *param_3 = iVar5 + iVar3;
    return;
  }
  *param_3 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8);
  *param_4 = *(int *)((&PTR_DAT_007b5170)[TVar1] +
                     (param_2 + (iVar5 + this->field_0235 * 3) * 4) * 8 + 4);
switchD_004cfa5c_caseD_a:
  return;
}

