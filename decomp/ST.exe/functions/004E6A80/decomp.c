
int FUN_004e6a80(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 < 0) || (7 < param_1)) || (param_2 < 1)) || (0x28 < param_2)) {
    return 0;
  }
  pbVar1 = &DAT_007c0dd1 + param_2 * 3;
  iVar4 = 0;
  iVar3 = 1;
  if (*pbVar1 != 0) {
    while (iVar4 < 3) {
      if (iVar4 == 0) {
        iVar3 = thunk_FUN_004e6010(param_1,(uint)*pbVar1);
      }
      else {
        iVar3 = thunk_FUN_004e60d0(param_1,(uint)pbVar1[iVar4]);
      }
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar4 + param_2 * 3;
      iVar4 = iVar4 + 1;
      if ((&DAT_007c0dd2)[iVar2] == '\0') {
        return iVar3;
      }
    }
  }
  return iVar3;
}

