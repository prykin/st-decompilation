
uint FUN_006a6320(uint param_1)

{
  uint uVar1;

  uVar1 = param_1 & 0xffff9fff;
  if (uVar1 != 0xffe) {
    uVar1 = (int)(uVar1 + 0xb4) % 0x168;
  }
  if ((param_1 & 0x4000) != 0) {
    return uVar1 | 0x2000;
  }
  if ((param_1 & 0x2000) != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}

