
undefined4 __fastcall FUN_004dfb00(AnonShape_004DFB00_599AF150 *param_1)

{
  uint uVar1;
  int iVar2;

  if ((int)param_1->field_04D0 < 500) {
    uVar1 = thunk_FUN_004df910((int)param_1);
    if (uVar1 / 100 + param_1->field_04D4 <= PTR_00802a38->field_00E4) {
      iVar2 = param_1->field_04D0 + 5;
      param_1->field_04D0 = iVar2;
      if (500 < iVar2) {
        param_1->field_04D0 = 500;
      }
      param_1->field_04D4 = PTR_00802a38->field_00E4;
    }
  }
  return 0;
}

