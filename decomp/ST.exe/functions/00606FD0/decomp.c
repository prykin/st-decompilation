
undefined4
FUN_00606fd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  switch(param_1) {
  case 1:
    *param_2 = 4;
    *param_3 = 0;
    *param_4 = 5;
    *param_5 = 1;
    return 0x50;
  case 2:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0x78;
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 0xc:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 1;
    return 0xd2;
  case 5:
  case 10:
  case 0xb:
    *param_2 = 7;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0xb4;
  default:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x28;
  case 0xd:
  case 0xe:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x78;
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 2;
    return 0xd2;
  case 0x10:
  case 0x17:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0xb4;
  }
}

