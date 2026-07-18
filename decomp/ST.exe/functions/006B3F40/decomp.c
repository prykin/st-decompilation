
void FUN_006b3f40(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(int *)(param_1 + 0x208) = param_2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x20c) = param_3;
    return;
  }
  iVar1 = FUN_006b4fa0(param_2);
  *(int *)(param_1 + 0x20c) = iVar1;
  return;
}

