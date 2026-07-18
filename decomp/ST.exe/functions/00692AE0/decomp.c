
undefined4 __thiscall FUN_00692ae0(void *this,uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < 5)) {
    if ((param_1 & 0x1000) == 0) {
      if ((*(byte *)((int)this +
                    (param_2 +
                    (((param_1 >> 4 & 0xf) + (param_1 >> 8 & 0xf) * 2) * 0xf + (param_1 & 0xf)) * 4)
                    * 4 + 0x2a78) & 0x80) != 0) {
        uVar1 = 1;
      }
    }
    else if ((*(byte *)((int)this +
                       (param_2 +
                       (((param_1 >> 4 & 0xf) + (param_1 >> 8 & 0xf) * 2) * 0xf + (param_1 & 0xf)) *
                       4) * 4 + 0x1d58) & 0x80) != 0) {
      return 1;
    }
    return uVar1;
  }
  return 0;
}

