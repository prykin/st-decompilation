
undefined4 FUN_004b72e0(char param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((0x31 < param_2) && (param_2 < 0x74)) {
    uVar2 = thunk_FUN_004406c0(param_1);
    return *(undefined4 *)(&DAT_007e0c04 + ((uVar2 & 0xff) + param_2 * 3) * 4);
  }
  if (param_2 == 0x78) {
    uVar1 = 2;
  }
  return uVar1;
}

