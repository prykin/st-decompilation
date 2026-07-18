
undefined4 __cdecl FUN_00693560(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 0x446) {
    if (param_1 == 0x445) {
      return 0x12;
    }
    if (param_1 < 0x12d) {
      if (param_1 == 300) {
        if (param_2 == 0x41b) {
          return 0xe;
        }
      }
      else if (param_1 == 0x10e) {
        if (param_2 == 0x41a) {
          return 0xd;
        }
      }
      else if (param_1 == 0x118) {
        if (param_2 == 0x41c) {
          return 0xf;
        }
      }
      else if ((param_1 == 0x122) && (param_2 == 0x41d)) {
        return 0x10;
      }
    }
    else {
      if (param_1 == 0x442) {
        return 0;
      }
      if (param_1 == 0x443) {
        return 0xb;
      }
      if (param_1 == 0x444) {
        return 0x11;
      }
    }
  }
  else {
    switch(param_1) {
    case 0xbb9:
      if (param_2 == 0x414) {
        return 1;
      }
      if (param_2 == 0x417) {
        return 2;
      }
      if (param_2 == 0x418) {
        return 3;
      }
      break;
    case 0xbbc:
      if (param_2 == 0x410) {
        return 4;
      }
      if (param_2 == 0x411) {
        return 5;
      }
      break;
    case 0xbbe:
      return 6;
    case 0xbbf:
      return 7;
    case 0xbc0:
      return 8;
    case 0xbc2:
      uVar1 = 0xc;
    }
  }
  return uVar1;
}

