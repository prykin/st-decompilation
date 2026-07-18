
int FUN_0074fdeb(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar1 = -0x7ffbfdcc;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(param_1 + -0xc);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}

