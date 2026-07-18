
uint __cdecl FUN_006a2bf0(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 & 0xf;
  uVar1 = uVar2 << 8;
  if (param_1 == 1) {
    uVar2 = (uint)CONCAT11(2,(byte)param_4 & 0xf) << 4 | uVar1;
    uVar1 = uVar2 | param_5 & 0xf;
    if ((param_2 == 0) && (uVar1 = uVar2 | param_5 & 0xf | 0x1000, param_3 == 1)) {
      return 0x1100;
    }
  }
  else {
    if (param_1 == 3) {
      return (param_4 - 7U & 0xf) << 4 | (uVar2 | 0x30) << 8 | param_5 & 0xf;
    }
    if (param_1 == 0) {
      if (param_2 == 0) {
        if (param_3 == 1) {
          return 0x1100;
        }
        uVar1 = (uint)(byte)((byte)uVar2 | 0x10) << 8;
      }
      return (uint)CONCAT11((char)(uVar1 >> 8),(undefined1)param_5);
    }
    if (param_1 == 2) {
      return (uint)CONCAT11(0x71,(char)(param_5 << 5) + -0x10);
    }
  }
  return uVar1;
}

