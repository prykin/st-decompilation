
undefined4 __cdecl FUN_00740e60(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 < DAT_0085a2dc) &&
      (iVar2 = (int)param_1 >> 5,
      (*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) &&
     (*(int *)((&DAT_0085a1a0)[iVar2] + (param_1 & 0x1f) * 8) != -1)) {
    if (DAT_007f14d0 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_0085a1a0)[iVar2] + (param_1 & 0x1f) * 8) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

