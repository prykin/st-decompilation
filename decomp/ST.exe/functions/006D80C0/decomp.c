
uint FUN_006d80c0(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    return 0;
  }
  uVar1 = FUN_006c6be0(param_1);
  if (uVar1 != 0xffffffff) {
    if ((uVar1 == 0) && (uVar1 = FUN_006c6e30(param_1), uVar1 == 0)) {
      *(undefined1 *)(param_1 + 0x17) = 1;
      return 0;
    }
    FUN_006a5e40(uVar1,DAT_007ed77c,0x7ee2d0,0x20);
    return uVar1;
  }
  return 0xffffffff;
}

