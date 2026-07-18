
int FUN_004d8a30(char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 == 0xff) {
    return 0;
  }
  iVar2 = *(int *)((int)&DAT_007f4e47 + iVar1 * 0xa62) + param_2;
  *(int *)((int)&DAT_007f4e47 + iVar1 * 0xa62) = iVar2;
  return iVar2;
}

