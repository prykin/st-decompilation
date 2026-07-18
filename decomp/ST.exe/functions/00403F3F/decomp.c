
uint __cdecl thunk_FUN_006a29b0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar3;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (byte)param_3;
  if (param_4 != 1) {
    if (param_4 == 3) {
      uVar2 = 0x64a0;
      if ((param_3 < 2) && (0 < param_3)) {
        uVar2 = (param_2 + -1 + param_3 & 0xfU) << 8 | 0x60a0;
      }
      return (param_3 - 7U & 0xf) << 4 | uVar2 & 0xff0f;
    }
    if (param_4 == 0) {
      if (param_1 == 0) {
        bVar3 = (byte)param_2 - 1 & 0xf | 0x40;
        if (param_2 == 1) {
          return (uint)(ushort)(bVar1 | 0x5000);
        }
      }
      else {
        bVar3 = (byte)param_2 & 0xf;
      }
      return (uint)CONCAT11(bVar3,bVar1);
    }
    if (param_4 == 2) {
      uVar2 = (param_3 - 7U & 0xf) << 8 | 0x3010;
    }
    return uVar2;
  }
  if (param_1 != 0) {
    if ((param_3 < 2) && (0 < param_3)) {
      uVar2 = (param_2 + -1 + param_3 & 0xfU) << 8;
    }
    return uVar2 | 0x2010;
  }
  if (param_2 == 1) {
    return (uint)(bVar1 & 0xf | 0x10) << 8 | (param_5 & 3) << 0xe | 0x2010;
  }
  if ((param_3 < 2) && (0 < param_3)) {
    uVar2 = (param_2 + -2 + param_3 & 0xfU) << 8;
  }
  return uVar2 | (param_5 & 3) << 0xe | 0x2010;
}

