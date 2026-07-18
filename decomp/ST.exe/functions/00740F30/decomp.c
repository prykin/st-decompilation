
undefined4 __cdecl FUN_00740f30(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < DAT_0085a2dc) &&
     ((*(byte *)((&DAT_0085a1a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    uVar1 = *(undefined4 *)((&DAT_0085a1a0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  else {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

