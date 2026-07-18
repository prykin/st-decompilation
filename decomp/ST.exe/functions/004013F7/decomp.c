
int thunk_FUN_004e4100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)&DAT_007f57ba + param_1 * 0xa62) + -1;
  *(int *)((int)&DAT_007f57ba + param_1 * 0xa62) = iVar1;
  return iVar1;
}

