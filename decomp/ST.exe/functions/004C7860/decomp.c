#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=15; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115;CASE_FFFFFFFF=4294967295
    */

int __thiscall
TLOBaseTy::sub_004C7860
          (TLOBaseTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int local_EAX_52;
  int iVar3;
  int iVar2;
  int iVar4;
  int local_EAX_285;
  dword dVar5;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  byte *pbVar7;

  iVar6 = 0;
  switch(param_1 + -1) {
  case 0:

    local_EAX_52 = thunk_FUN_004e6a80(this->field_0024,param_2);
    if ((local_EAX_52 != 0) && (this->field_05B8 < g_worldGrid.sizeZ + -1))
    goto switchD_004c787f_caseD_2;
    break;
  case 1:

    iVar3 = thunk_FUN_004e5910((int)this->field_0024,param_2);
    if (iVar3 == 0) {

      iVar2 = thunk_FUN_004e60d0((int)this->field_0024,param_2);
      /* ST_CALLSITE[004C78F5]: CALL 0x00402342; direct=00402342 STAllPlayersC::sub_004E7F20 */
      iVar2 = STAllPlayersC::sub_004E7F20
                        (g_allPlayers_007FA174,(int)this->field_0024,param_2,iVar2 + 1);
      if (iVar2 == 0) break;
    }

    iVar2 = thunk_FUN_004e6140((int)this->field_0024,param_2);

    iVar4 = thunk_FUN_004e60d0((int)this->field_0024,param_2);
    if (iVar4 < iVar2) {
      iVar6 = 1;
      goto LAB_004c796d;
    }
    break;
  case 2:
  case 4:
  case 6:
switchD_004c787f_caseD_2:
    iVar6 = 1;
    goto LAB_004c796d;
  case 3:
    pbVar7 = this->field_0024;
    iVar6 = 0x31;
    goto LAB_004c795c;
  case 5:
    /* ST_CALLSITE[004C7947]: CALL 0x00405821; direct=00405821 TLOBaseTy::sub_004DE7D0 */
    iVar6 = sub_004DE7D0(this,param_1,param_2,param_3);
    goto LAB_004c7967;
  case 7:
    pbVar7 = this->field_0024;
    iVar6 = 0x75;
LAB_004c795c:

    iVar6 = thunk_FUN_004e60d0((int)pbVar7,iVar6);
LAB_004c7967:
    if (iVar6 != 0) {
LAB_004c796d:
      if (param_5 != 0) {
        /* ST_CALLSITE[004C797D]: CALL 0x00401b59; direct=00401B59 TLOBaseTy::sub_004C9370 */
        local_EAX_285 = sub_004C9370(this,param_1,param_2,-1);
        if ((*(int *)&this->field_0x361 == param_1) && (*(uint *)&this->field_0x369 == param_2)) {
          local_EAX_285 = local_EAX_285 + *(int *)&this->field_0x36d;
        }
        if (99 < local_EAX_285 + param_3) {
          iVar6 = 0;
        }
      }
    }
  }
  if (param_4 == 0) {
    return iVar6;
  }
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = 0;
  /* ST_CALLSITE[004C79C5]: CALL dword ptr [EAX + 0xf8] */
  dVar5 = this->vfunc_F8();
  if (dVar5 == 0) {
    return 0;
  }
  if (this->field_0245 == CASE_6) {
    return 0;
  }
  switch(param_1 + -1) {
  case 0:
    goto cf_common_exit_004C7B08;
  case 1:
    if (*(int *)&this->field_0x361 != 0) {
      return 0;
    }

    iVar5 = thunk_FUN_004e5f90((int)this->field_0024,param_2);
    if (iVar5 != 0) {
      return 0;
    }
    if ((&PTR_DAT_007bfc04)[this->field_0239][param_2] != '\0') {
      bVar1 = thunk_FUN_004e5c40(this->field_0024,param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 0;
      }
      return 1;
    }
    goto cf_common_exit_004C7B08;
  case 2:
  case 3:
    if (this->field_04D0 == CASE_0) {
      return 1;
    }
    break;
  case 4:
    /* ST_CALLSITE[004C7A7A]: CALL dword ptr [EDX + 0x7c] */
    iVar2 = this->sub_004BE380();
    if (iVar2 == 100) {
      return 0;
    }
  case 5:
    if (*(int *)&this->field_0x361 == 0) {
      return 1;
    }
    break;
  case 6:

    iVar2 = thunk_FUN_004e1490((STBoatC *)this);
    if (iVar2 != 0) {
      if (param_2 == 0xdd) {

        iVar2 = thunk_FUN_004d89b0(*(char *)&this->field_0024);
        if (param_3 <= iVar2) {
          return 1;
        }
      }
      else if ((param_2 == 0xde) &&

              (iVar2 = thunk_FUN_004d8af0(*(char *)&this->field_0024), param_3 <= iVar2)) {
        return 1;
      }
    }
    break;
  case 7:
    if (this->field_04D0 != CASE_0) {
      return 0;
    }
cf_common_exit_004C7B08:
    iVar6 = 1;
  }
  return iVar6;
}

