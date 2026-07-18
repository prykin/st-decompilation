
int FUN_004d8a80(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = *(int *)((int)&DAT_007f4e47 + iVar1 * 0xa62);
  if (iVar2 < param_2) {
    return -1;
  }
  iVar2 = iVar2 - param_2;
  *(int *)((int)&DAT_007f4e47 + iVar1 * 0xa62) = iVar2;
  return iVar2;
}

