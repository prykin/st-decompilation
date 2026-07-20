
void FUN_006c3f80(AnonShape_006C3F80_1EACF9F3 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5)

{
  if ((param_1->field_0004 & 2) == 0) {
    param_1->field_0008 = param_2;
    param_1->field_000C = param_3;
    param_1->field_0010 = param_4;
    param_1->field_0014 = param_5;
    param_1->field_0004 = param_1->field_0004 | 0x8000000;
    FUN_006c3d80((AnonShape_006C3D80_5E5410BE *)param_1);
  }
  return;
}

