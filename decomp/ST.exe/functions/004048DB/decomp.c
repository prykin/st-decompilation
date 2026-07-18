
int thunk_FUN_004b7240(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)&DAT_007f5796 + (char)param_1 * 0xa62);
  iVar2 = *(int *)((int)&DAT_007f5796 + (char)param_1 * 0xa62) - param_2;
  *piVar1 = iVar2;
  if (iVar2 < 0) {
    *piVar1 = 0;
  }
  if (param_2 != 0) {
    thunk_FUN_004b7750(param_1);
  }
  return *piVar1;
}

