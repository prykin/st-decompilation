
int thunk_FUN_004e6c20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1 < 0) || (7 < param_1)) || (param_2 < 0x32)) || (0x73 < param_2)) {
    return 0;
  }
  iVar4 = 1;
  uVar3 = thunk_FUN_004406c0((char)param_1);
  iVar5 = 0;
  iVar1 = param_2 + -0x32 + ((uVar3 & 0xff) - 1) * 0x42;
  iVar2 = iVar1 * 3;
  if ((&DAT_007c0e4c)[iVar1 * 3] != '\0') {
    while (iVar5 < 3) {
      if (iVar5 == 0) {
        iVar4 = thunk_FUN_004e6010(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar2]);
      }
      else {
        iVar4 = thunk_FUN_004e60d0(param_1,(uint)(byte)(&DAT_007c0e4c + iVar2)[iVar5]);
      }
      if (iVar4 == 0) {
        return 0;
      }
      iVar1 = iVar5 + iVar2;
      iVar5 = iVar5 + 1;
      if ((&DAT_007c0e4d)[iVar1] == '\0') {
        return iVar4;
      }
    }
  }
  return iVar4;
}

