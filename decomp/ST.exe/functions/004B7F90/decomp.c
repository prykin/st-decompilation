
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_34=52;CASE_35=53;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_41=65;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4F=79;CASE_50=80;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_73=115
    */

undefined4 __thiscall TLOBaseTy::sub_004B7F90(TLOBaseTy *this,int param_1)

{
  TLOBaseTy_field_046CState TVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(this->field_0245) {
  case CASE_0:
    if (((this->field_0255 != 0) && (param_1 == 2)) && (this->field_0259 != 0)) {
      return 0;
    }
    break;
  case CASE_4:
    if ((this->field_03DC != 0) ||
       (((TVar1 = this->field_046C, TVar1 != 0 && (TVar1 != CASE_1)) && (TVar1 != CASE_2)))) {
      uVar3 = 0;
      goto cf_common_exit_004B8058;
    }
    break;
  case CASE_5:
    if (((param_1 != 0) && (param_1 != 1)) && (param_1 != 6)) goto cf_common_exit_004B8058;
    break;
  case ~CASE_0:
    goto switchD_004b7fa6_caseD_ffffffff;
  }
  iVar2 = thunk_FUN_004ac910(&this->field_01D5,'\x0e');
  if ((iVar2 == this->field_01F5->field_0208) ||
     (iVar2 = thunk_FUN_004ac910(&this->field_01D5,'\x0e'), iVar2 == this->field_01F5->field_020C))
  {
    if (*(int *)(&DAT_00791a10 + this->field_0235 * 4) == 0) {
switchD_004b7fa6_caseD_ffffffff:
      uVar3 = 1;
    }
    else {
      uVar3 = thunk_FUN_004cc040((int)this);
    }
  }
cf_common_exit_004B8058:
  if (param_1 != 3) {
    return uVar3;
  }
  uVar3 = sub_004C7070(this,1);
  return uVar3;
}

