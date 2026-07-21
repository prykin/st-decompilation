
undefined4 __fastcall FUN_004ecdf0(AnonShape_004D9BD0_B3B50583 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0245;
  if (iVar1 == 0) {
    if (param_1->field_04D0 != 0) {
      if (param_1->field_04D0 != 1) {
        return 0;
      }
      param_1->field_0261 = 1;
      return 0;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 6)) {
      return 0;
    }
    param_1->field_04D0 = 0;
  }
  param_1->field_0261 = 0;
  return 0;
}

