
uint FUN_006aff93(void)

{
  uint in_EAX;
  uint uVar1;
  
  if (0x5a < in_EAX) {
    in_EAX = -(in_EAX - 0xb4);
  }
  uVar1 = (uint)*(ushort *)(&DAT_006ce9a0 + in_EAX * 2);
  if (DAT_007eda8c == 100) {
    uVar1 = uVar1 / 100;
  }
  return uVar1;
}

