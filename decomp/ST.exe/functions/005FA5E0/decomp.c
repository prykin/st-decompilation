
int FUN_005fa5e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;

  iVar2 = param_3 - param_1;
  if (iVar2 == 0) {
    return ((param_4 - param_2 < 1) - 1 & 0xfffffff8) + 0xc;
  }
  iVar1 = ((param_4 - param_2) * 1000) / iVar2;
  if (iVar2 < 0) {
    if (iVar1 < -0x13a3) {
      return 0xc;
    }
    if (iVar1 < -0x5d9) {
      return 0xb;
    }
    if (iVar1 < -0x29c) {
      return 10;
    }
    if (iVar1 < -199) {
      return 9;
    }
    if (iVar1 < 199) {
      return 8;
    }
    if (iVar1 < 0x29c) {
      return 7;
    }
    if (iVar1 < 0x5d9) {
      return 6;
    }
    if (iVar1 < 0x13a3) {
      return 5;
    }
    if (iVar1 < 0x2ff1509) {
      return 0;
    }
  }
  else {
    if (iVar1 < -0x13a3) {
      return 0xc;
    }
    if (-0x5da < iVar1) {
      if (iVar1 < -0x29c) {
        return 3;
      }
      if (iVar1 < -199) {
        return 2;
      }
      if (iVar1 < 199) {
        return 1;
      }
      if (0x29b < iVar1) {
        if (iVar1 < 0x5d9) {
          return 0xf;
        }
        if (0x13a2 < iVar1) {
          if (iVar1 < 0x2ff1509) {
            return 0;
          }
          return 0xd;
        }
        return 0xe;
      }
      return 0;
    }
  }
  return 4;
}

