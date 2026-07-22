
void FUN_007550c0(AnonShape_007550C0_25940DF4 *param_1,undefined4 *param_2)

{
  if ((int)param_2 < 9) {
    param_1->field_0030 = (uint)param_2 & 0xff;
    switch((uint)param_2 & 0xff) {
    case 1:
    case 2:
      param_1->field_0034 = 1;
      return;
    case 3:
    case 4:
      param_1->field_0034 = 2;
      return;
    case 5:
    case 6:
      param_1->field_0034 = 4;
      return;
    case 7:
      param_1->field_0004 = thunk_FUN_00673110;
      param_1->field_0008 = FUN_00757430;
      param_1->field_0034 = 0;
      return;
    case 8:
      param_1->field_0004 = thunk_FUN_00673160;
      param_1->field_0008 = FUN_00757430;
      param_1->field_0034 = 0;
    }
    return;
  }
  param_1->field_0030 = *param_2;
  param_1->field_0034 = *(undefined2 *)(param_2 + 3);
  param_1->field_0004 = param_2[1];
  param_1->field_0008 = param_2[2];
  return;
}

