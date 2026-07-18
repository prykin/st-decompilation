
int FUN_004b71f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((int)&DAT_007f5796 + (char)param_1 * 0xa62);
  *piVar1 = *(int *)((int)&DAT_007f5796 + (char)param_1 * 0xa62) + param_2;
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return *piVar1;
}

