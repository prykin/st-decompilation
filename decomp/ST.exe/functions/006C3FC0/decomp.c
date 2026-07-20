
void FUN_006c3fc0(AnonShape_006C3FC0_72DDFA27 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5)

{
  param_1->field_0018 = param_2;
  param_1->field_001C = param_3;
  if ((param_1->field_0004 & 2) == 0) {
    param_1->field_0020 = param_4;
    param_1->field_0024 = param_5;
  }
  param_1->field_0004 = param_1->field_0004 | 0x4000000;
  FUN_006c3d80((AnonShape_006C3D80_5E5410BE *)param_1);
  return;
}

