
uint __cdecl thunk_FUN_00675430(uint param_1)

{
  undefined2 uVar2;
  uint uVar1;
  
  if (param_1 < 0x101) {
    if (param_1 == 0x100) {
      return 0x32;
    }
    uVar2 = (undefined2)(param_1 - 1 >> 0x10);
    uVar1 = param_1 - 1;
    switch(param_1) {
    case 1:
    case 2:
      return CONCAT22(uVar2,0x1e);
    case 4:
      return CONCAT22(uVar2,0x5f);
    case 8:
      return CONCAT22(uVar2,100);
    case 0x10:
      return CONCAT22(uVar2,0x46);
    case 0x20:
      return CONCAT22(uVar2,0x28);
    case 0x40:
      return CONCAT22(uVar2,0x5a);
    case 0x80:
      return CONCAT22(uVar2,0x6e);
    }
  }
  else {
    uVar1 = param_1;
    if (param_1 < 0x100001) {
      if (param_1 == 0x100000) {
LAB_006754a8:
        return CONCAT22((short)(param_1 >> 0x10),10);
      }
      if (param_1 < 0x40001) {
        if (param_1 == 0x40000) {
          return 0x4003c;
        }
        if ((param_1 == 0x10000) || (param_1 == 0x20000)) goto LAB_006754a8;
      }
      else if (param_1 == 0x80000) {
        return 0x80050;
      }
    }
    else if (((param_1 == 0x200000) || (param_1 == 0x400000)) || (param_1 == 0x800000))
    goto LAB_006754a8;
  }
  return uVar1 & 0xffff0000;
}

