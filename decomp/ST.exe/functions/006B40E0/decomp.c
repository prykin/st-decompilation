
void FUN_006b40e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1dc);
  *(int *)(param_1 + 0x1dc) = param_2;
  if (iVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
  }
  return;
}

