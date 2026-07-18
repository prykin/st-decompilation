
int thunk_FUN_004e4230(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)&DAT_007f57b6 + param_1 * 0xa62) + param_2;
  *(int *)((int)&DAT_007f57b6 + param_1 * 0xa62) = iVar1;
  return iVar1;
}

