
int FUN_004e4330(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)&DAT_007f57b6 + param_1 * 0xa62);
  iVar2 = *(int *)((int)&DAT_007f57b6 + param_1 * 0xa62) - param_2;
  *piVar1 = iVar2;
  if (iVar2 < 0) {
    *piVar1 = 0;
  }
  return *piVar1;
}

