
void FUN_00615bb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 undefined2 *param_5)

{
  switch(param_1) {
  case 0:
  case 1:
  case 0x17:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 0;
      return;
    }
    break;
  case 2:
  case 3:
  case 4:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0xffff;
      return;
    }
    *param_2 = 1;
    *param_3 = 0xffffffff;
    return;
  case 5:
  case 6:
  case 7:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 1;
      param_5[3] = 0;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 0xffffffff;
    return;
  case 8:
  case 9:
  case 10:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      param_5[3] = 0xffff;
      param_5[4] = 0xffff;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 0xffffffff;
    return;
  case 0xb:
  case 0xc:
  case 0xd:
    if (param_4 == 0) {
      *param_2 = 0xffffffff;
      *param_3 = 0;
      return;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 1;
      return;
    }
    *param_2 = 0xffffffff;
    *param_3 = 1;
    return;
  case 0x11:
  case 0x12:
  case 0x13:
    if (param_4 != 0) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0xffff;
      param_5[3] = 0;
      param_5[4] = 1;
      param_5[5] = 0;
      return;
    }
    *param_2 = 0;
    *param_3 = 1;
    return;
  case 0x14:
  case 0x15:
  case 0x16:
    if (param_4 == 0) {
      *param_2 = 1;
      *param_3 = 1;
      return;
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 1;
    param_5[3] = 0;
    param_5[4] = 0;
    param_5[5] = 1;
  default:
    return;
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0xffff;
  param_5[4] = 0;
  param_5[5] = 1;
  return;
}

