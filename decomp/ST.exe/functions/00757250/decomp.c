
void FUN_00757250(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x192);
  if (*(int *)(param_1 + 0x4c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1ba) + 8))(param_1);
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}

