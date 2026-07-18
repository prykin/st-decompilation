
undefined4 thunk_FUN_004f19d0(char param_1,byte param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (DAT_00806730 == 0x400) {
    if (1 < param_2) {
      return 0;
    }
    if (param_2 == 1) {
      *param_3 = 0x12;
      *param_4 = 0x5b;
      return 1;
    }
    *param_3 = 0x12;
    *param_4 = 10;
    return 1;
  }
  if (DAT_00806730 != 0x500) {
    return 0;
  }
  if (param_1 == '\0') {
    switch(param_2) {
    case 1:
      *param_3 = 0xa2;
      *param_4 = 0x5a;
      return 1;
    case 2:
      *param_3 = 0x53;
      *param_4 = 9;
      return 1;
    case 3:
      *param_3 = 0x53;
      *param_4 = 0x5a;
      return 1;
    case 4:
      *param_3 = 4;
      *param_4 = 9;
      return 1;
    case 5:
      *param_3 = 4;
      *param_4 = 0x5a;
      return 1;
    default:
      *param_3 = 0xa2;
      *param_4 = 9;
      return 1;
    }
  }
  switch(param_2) {
  case 1:
    *param_3 = 3;
    *param_4 = 0x5a;
    return 1;
  case 2:
    *param_3 = 0x52;
    *param_4 = 9;
    return 1;
  case 3:
    *param_3 = 0x52;
    *param_4 = 0x5a;
    return 1;
  case 4:
    *param_3 = 0xa1;
    *param_4 = 9;
    return 1;
  case 5:
    *param_3 = 0xa1;
    *param_4 = 0x5a;
    return 1;
  default:
    *param_3 = 3;
    *param_4 = 9;
    return 1;
  }
}

