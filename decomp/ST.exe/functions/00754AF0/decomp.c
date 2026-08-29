
void FUN_00754af0(AnonShape_00754AF0_86EFDBFA *param_1,AnonShape_00754AF0_163A950B *param_2,
                 uint param_3)

{
  if (param_2->field_000E == 8) {
    if (param_2->field_0020 == 0) {
      param_1->field_0058 = 0x100;
    }
    else {
      param_1->field_0058 = param_2->field_0020;
    }
    param_1->field_004C = 1;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      if ((param_3 & 0x10) != 0) {
        param_1->field_0040 = 2;
      }
    }
    else {
      param_1->field_0040 = 1;
    }
  }
  else {
    param_1->field_0040 = 0;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      if ((param_3 & 0x40) != 0) {
        param_1->field_0050 = 1;
      }
    }
    else {
      param_1->field_0050 = 0;
    }
  }
  else {
    param_1->field_0050 = 2;
  }
  if ((param_3 & 2) != 0) {
    param_1->field_0024 = 1;
    param_1->field_004C = 1;
  }
  if ((param_3 & 0x100) != 0) {
    param_1->field_0044 = 0;
  }
  return;
}

