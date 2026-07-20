
int __fastcall FUN_004c90c0(TLOBaseTy *param_1)

{
  TLOBaseTy_field_0361State TVar1;
  TLOBaseTy_field_05ACState TVar2;
  int iVar3;
  
  TVar1 = param_1->field_0361;
  if (TVar1 == 0) {
    return 1;
  }
  if (TVar1 == CASE_1) {
    iVar3 = thunk_FUN_004ce7d0((AnonShape_004CE7D0_208BB40F *)param_1);
  }
  else {
    if (TVar1 != CASE_2) {
      if (TVar1 == CASE_5) {
        thunk_FUN_004cc900((AnonShape_004CC900_31EE9CAA *)param_1);
      }
      iVar3 = 1;
      goto LAB_004c9106;
    }
    iVar3 = thunk_FUN_004e3120(param_1);
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_004c9106:
  param_1->field_0361 = 0;
  if ((((*(int *)(&DAT_00792778 + param_1->field_0235 * 4) != 0) &&
       ((TVar2 = param_1->field_05AC, TVar2 != CASE_45 || (param_1->field_04D0 == 1)))) &&
      ((TVar2 != CASE_4E || (param_1->field_04D0 == 1)))) &&
     ((TVar2 != CASE_72 || (param_1->field_04D0 == 1)))) {
    *(undefined4 *)&param_1->field_0x261 = 1;
    *(undefined4 *)&param_1->field_0x2e1 = 1;
  }
  TLOBaseTy::RotateSpr(param_1,1);
  return iVar3;
}

