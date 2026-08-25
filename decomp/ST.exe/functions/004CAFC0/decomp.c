#include "../../pseudocode_runtime.h"


/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004CAFC0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14;CASE_33=51;CASE_35=53;CASE_38=56;CASE_39=57;CASE_45=69;CASE_4E=78;CASE_4F=79;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5E=94;CASE_70=112

   [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=101; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_sub_004CAFC0_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_7=7;CASE_8=8;CASE_9=9;CASE_C=12;CASE_D=13;CASE_E=14;CASE_33=51;CASE_35=53;CASE_38=56;CASE_39=57;CASE_45=69;CASE_4E=78;CASE_4F=79;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5E=94;CASE_70=112
    */

void __thiscall
TLOBaseTy::sub_004CAFC0
          (TLOBaseTy *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,uint param_2,uint *param_3,
          uint *param_4)

{
  uint uVar2;
  byte bVar3;
  int uVar1;
  int iVar4;
  TLOBaseTy_field_05ACState TVar5;
  TLOBaseTy_field_0245State TVar6;

  /* ST_CALLSITE[004CAFD5]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  uVar1 = LookupRecordByte((char)this->field_023D);
  uVar1 = (int)(byte)uVar1;
  iVar4 = uVar1 + -1;
  TVar5 = this->field_05AC;
  if (TVar5 == CASE_32) {
    /* ST_CALLSITE[004CAFFF]: CALL 0x00404895; direct=00404895 TLOBaseTy::sub_004CFA00 */
    sub_004CFA00(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_5C) {
    thunk_FUN_004cfbe0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_40) {
    thunk_FUN_004cfff0(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_49) {
    thunk_FUN_004cfde0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_4D) {
    thunk_FUN_004deeb0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_4C) {
    thunk_FUN_004dcaa0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_43) {
    thunk_FUN_004df6f0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_44) {
    thunk_FUN_004dea90(this,param_1,param_2,(int *)param_3,(int *)param_4);
    return;
  }
  if (TVar5 == CASE_52) {
    thunk_FUN_004ec700(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_5F) {
    thunk_FUN_004ec900(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_68) {
    thunk_FUN_004dc4b0(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_37) {
    thunk_FUN_004e8e50(this,param_1,param_2,param_3,param_4);
    return;
  }
  if (TVar5 == CASE_63) {
    thunk_FUN_004b7b20(this,param_1,param_2,param_3,param_4);
    return;
  }
  TVar6 = this->field_0245;
  if ((TVar6 == CASE_1) && (this->field_024D == 4)) {
    TVar6 = CASE_4;
  }
  switch(param_1) {
  case CASE_7:
    if (TVar5 == CASE_4E) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_2:
      case CASE_3:
      case CASE_4:
      case CASE_5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case CASE_1:
        *param_3 = 0;
        *param_4 = 0x11;
      }
    }
    if (this->field_05AC == CASE_72) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_2:
      case CASE_3:
      case CASE_4:
      case CASE_5:
        *param_4 = 0;
        *param_3 = 0;
        break;
      case CASE_1:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
      }
    }
    if (this->field_05AC != CASE_70) {
      return;
    }
    switch(this->field_04D0) {
    case CASE_0:
    case CASE_2:
    case CASE_3:
    case CASE_4:
    case CASE_5:
      *param_4 = 0;
      *param_3 = 0;
      return;
    case CASE_1:
      *param_3 = 0;
      *param_4 = 0x11;
      return;
    default:
      return;
    }
  case CASE_8:
  case CASE_9:
    goto switchD_004cb1d7_caseD_8;
  default:
    goto cf_common_exit_004CB6D2;
  case CASE_C:
    switch(TVar5) {
    case CASE_33:
      if (this->field_04E0[0x10] == 0) {
cf_common_exit_004CB489:
        uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      }
      break;
    case CASE_35:
    case CASE_45:
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
      if (this->field_04D0 != CASE_0) {
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        return;
      }
cf_common_exit_004CB504:
      uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                       (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    case CASE_38:
    case CASE_39:
    case CASE_4F:
    case CASE_5E:
      if (this->field_04D0 == CASE_0) goto cf_common_exit_004CB489;
      if (this->field_04D0 != CASE_1) {
        return;
      }
      break;
    case CASE_4E:
      switch(this->field_04D0) {
      case CASE_0:
switchD_004cb5c6_caseD_0:
        *param_4 = 0;
        *param_3 = 0;
        return;
      case CASE_1:
        goto cf_common_exit_004CB489;
      case CASE_2:
        goto cf_common_exit_004CB504;
      case CASE_3:
        break;
      case CASE_4:
switchD_004cb5c6_caseD_4:
        uVar2 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_5:
switchD_004cb5c6_caseD_5:
        *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
        goto cf_common_exit_004CB6D2;
      }
    case CASE_70:
      switch(this->field_04D0) {
      case CASE_0:
        goto switchD_004cb5c6_caseD_0;
      case CASE_1:
        goto cf_common_exit_004CB489;
      case CASE_2:
        goto cf_common_exit_004CB504;
      case CASE_3:
        break;
      case CASE_4:
        goto switchD_004cb5c6_caseD_4;
      case CASE_5:
        goto switchD_004cb5c6_caseD_5;
      default:
        goto cf_common_exit_004CB6D2;
      }
    }
    *param_3 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                        (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b8310)[TVar6] +
                        (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
    return;
  case CASE_D:
    break;
  case CASE_E:
    goto switchD_004cb1d7_caseD_e;
  }
  /* ST_CALLSITE[004CB1F0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
  if ((TVar5 == CASE_4F) && (bVar3 = LookupRecordByte((char)this->field_023D), bVar3 == 2)) {
    *param_4 = 0;
    *param_3 = 0;
    return;
  }
switchD_004cb1d7_caseD_e:
  if ((this->field_05AC == CASE_4F) &&
     /* ST_CALLSITE[004CB22C]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
     (bVar3 = LookupRecordByte((char)this->field_023D), bVar3 == 2)) {
    if (this->field_04D0 != CASE_1) {
      uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                       (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
      *param_4 = uVar2;
      *param_3 = uVar2;
      return;
    }
  }
  else {
    TVar5 = this->field_05AC;
    if (TVar5 == CASE_6E) {
      switch(this->field_04D0) {
      case CASE_0:
        goto switchD_004cb2cd_caseD_0;
      case CASE_1:
switchD_004cb2cd_caseD_1:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        return;
      case CASE_2:
switchD_004cb2cd_caseD_2:
        uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_3:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
cf_common_exit_004CB6D2:
        return;
      }
    }
switchD_004cb1d7_caseD_8:
    if (TVar5 == CASE_72) {
      switch(this->field_04D0) {
      case CASE_0:
      case CASE_1:
      case CASE_2:
switchD_004cb2cd_caseD_0:
        uVar2 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                         (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        *param_4 = uVar2;
        *param_3 = uVar2;
        return;
      case CASE_3:
        goto switchD_004cb2cd_caseD_1;
      case CASE_4:
        goto switchD_004cb2cd_caseD_2;
      case CASE_5:
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                            (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
        return;
      default:
        goto cf_common_exit_004CB6D2;
      }
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                      (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[TVar6] +
                      (param_2 + (iVar4 + this->field_0235 * 3) * 4) * 8 + 4);
  return;
}

