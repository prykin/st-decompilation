
undefined4 FUN_00606a50(int param_1)

{
  if (0xb4 < param_1) {
    switch(param_1) {
    case 0xc3:
      goto switchD_00606a6e_caseD_a5;
    default:
switchD_00606a6e_caseD_0:
      return 0;
    case 0xd2:
    case 0xe1:
    case 0xf0:
      return 5;
    case 0xff:
    case 0x10e:
    case 0x11d:
      return 6;
    case 300:
    case 0x13b:
    case 0x14a:
      return 7;
    }
  }
  if (param_1 != 0xb4) {
    switch(param_1) {
    default:
      goto switchD_00606a6e_caseD_0;
    case 0x1e:
    case 0x2d:
    case 0x3c:
      return 1;
    case 0x4b:
    case 0x5a:
    case 0x69:
      return 2;
    case 0x78:
    case 0x87:
    case 0x96:
      return 3;
    case 0xa5:
      break;
    }
  }
switchD_00606a6e_caseD_a5:
  return 4;
}

