
undefined4 __fastcall FUN_004ea620(AnonShape_004EA620_716C262B *param_1)

{
  int iVar1;

  if (param_1->field_0245 == 4) {
    iVar1 = param_1->field_046C;
    if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
      return 0;
    }
    param_1->field_046C = 0;
    param_1->field_0470 = 0;
    if (param_1->field_0494 != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,param_1->field_0480,param_1->field_0484,param_1->field_0488);
      param_1->field_0494 = 0;
    }
  }
  return 1;
}

