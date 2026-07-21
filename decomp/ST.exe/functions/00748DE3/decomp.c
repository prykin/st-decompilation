
undefined4 FUN_00748de3(AnonShape_00748DE3_6873BEB9 *param_1,undefined4 *param_2)

{
  LPVOID pvVar1;

  if ((LPVOID)param_1->field_003C != (LPVOID)0x0) {
    FUN_0074bc50((LPVOID)param_1->field_003C);
    param_1->field_003C = 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    param_1->field_0004 = param_1->field_0004 & 0xfffffff7;
  }
  else {
    pvVar1 = FUN_0074bc6a(param_2);
    param_1->field_003C = pvVar1;
    if (pvVar1 == (LPVOID)0x0) {
      param_1->field_0004 = param_1->field_0004 & 0xfffffff7;
      return 0x8007000e;
    }
    param_1->field_0004 = param_1->field_0004 | 8;
  }
  return 0;
}

