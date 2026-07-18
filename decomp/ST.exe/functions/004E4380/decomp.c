
int FUN_004e4380(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)&DAT_007f57be + param_1 * 0xa62) + param_2;
  *(int *)((int)&DAT_007f57be + param_1 * 0xa62) = iVar1;
  return iVar1;
}

