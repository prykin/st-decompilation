
/* [STMethodOwnerApplier] Structural method owner recovered as TLOBaseTy.
   Evidence: this_call_owners=[TLOBaseTy]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

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
  case CASE_4|CASE_1:
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
  uVar3 = thunk_FUN_004c7070(this,1);
  return uVar3;
}

