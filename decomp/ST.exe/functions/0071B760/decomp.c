
undefined4
FUN_0071b760(uint param_1,byte param_2,int param_3,int param_4,uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  uint uVar2;
  
  switch(param_1 & 0xfffff) {
  case 0xfb:
    uVar2 = (uint)*(byte *)(param_4 + 0xf);
    break;
  case 0xfc:
    uVar2 = (uint)*(byte *)(param_4 + 0xe);
    break;
  case 0xfd:
    uVar2 = (uint)*(byte *)(param_4 + 0xd);
    break;
  case 0xfe:
    uVar2 = (uint)*(byte *)(param_4 + 0xc);
    break;
  default:
    uVar2 = (uint)*(byte *)((param_1 & 0xfffff) + param_3);
  }
  *param_5 = uVar2 & 0x80;
  *param_6 = 1;
  if ((param_2 & 0x10) == 0) {
    bVar1 = (byte)(param_1 >> 0x18);
    if (((((param_1 & 0x40000000) != 0) && ((*(byte *)(param_3 + 0x38) & 0x80) == 0)) &&
        ((*(byte *)(param_3 + 0xb8) & 0x80) == 0)) ||
       (((param_1 & 0x40000000) == 0 &&
        (((bVar1 >> 5 & 1) != *(byte *)(param_3 + 0x38) >> 7 ||
         ((bVar1 >> 4 & 1) != *(byte *)(param_3 + 0xb8) >> 7)))))) {
      *param_6 = 0;
    }
    if (((((param_1 & 0x8000000) != 0) && ((*(byte *)(param_3 + 0x1d) & 0x80) == 0)) &&
        ((*(byte *)(param_3 + 0x9d) & 0x80) == 0)) ||
       (((param_1 & 0x8000000) == 0 &&
        (((bVar1 >> 2 & 1) != *(byte *)(param_3 + 0x1d) >> 7 ||
         ((bVar1 >> 1 & 1) != *(byte *)(param_3 + 0x9d) >> 7)))))) {
      *param_6 = 0;
    }
    if ((((param_1 & 0x1000000) == 0) || ((*(byte *)(param_3 + 0x2a) & 0x80) != 0)) ||
       ((*(byte *)(param_3 + 0x36) & 0x80) != 0)) {
      if ((param_1 & 0x1000000) != 0) {
        return 0;
      }
      if (((byte)(param_1 >> 0x17) & 1) == *(byte *)(param_3 + 0x2a) >> 7) {
        if (((byte)(param_1 >> 0x16) & 1) == *(byte *)(param_3 + 0x36) >> 7) {
          return 0;
        }
        *param_6 = 0;
        return 0;
      }
    }
  }
  else if (((((((param_1 & 0x40000000) == 0) || ((*(byte *)(param_3 + 0x38) & 0x80) != 0)) ||
             ((*(byte *)(param_3 + 0xb8) & 0x80) != 0)) &&
            (((param_1 & 0x20000000) == 0 || ((*(byte *)(param_3 + 0x38) & 0x80) != 0)))) &&
           ((((((param_1 & 0x10000000) == 0 || ((*(byte *)(param_3 + 0xb8) & 0x80) != 0)) &&
              ((((param_1 & 0x8000000) == 0 || ((*(byte *)(param_3 + 0x1d) & 0x80) != 0)) ||
               ((*(byte *)(param_3 + 0x9d) & 0x80) != 0)))) &&
             ((((param_1 & 0x4000000) == 0 || ((*(byte *)(param_3 + 0x1d) & 0x80) != 0)) &&
              (((param_1 & 0x2000000) == 0 || ((*(byte *)(param_3 + 0x9d) & 0x80) != 0)))))) &&
            ((((param_1 & 0x1000000) == 0 || ((*(byte *)(param_3 + 0x2a) & 0x80) != 0)) ||
             ((*(byte *)(param_3 + 0x36) & 0x80) != 0)))))) &&
          (((param_1 & 0x800000) == 0 || ((*(byte *)(param_3 + 0x2a) & 0x80) != 0)))) {
    if ((param_1 & 0x400000) == 0) {
      return 0;
    }
    if ((*(byte *)(param_3 + 0x36) & 0x80) != 0) {
      return 0;
    }
  }
  *param_6 = 0;
  return 0;
}

