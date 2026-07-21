
undefined4 __fastcall FUN_004e9c20(AnonShape_004E9C20_50FC91C6 *param_1)

{
  int iVar1;
  AnonShape_004E9C20_50FC91C6 *local_8;

  if (param_1->field_046C != 0) {
    local_8 = param_1;
    if (param_1->field_048C != 0) {
      iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_0470,(int *)&local_8);
      if (iVar1 == 0) {
        thunk_FUN_004e95c0(local_8,(int)param_1);
        param_1->field_048C = 0;
      }
    }
    if (param_1->field_0494 != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,param_1->field_0480,param_1->field_0484,param_1->field_0488);
      param_1->field_0494 = 0;
    }
  }
  return 0;
}

