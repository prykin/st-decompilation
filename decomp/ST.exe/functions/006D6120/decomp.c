
void FUN_006d6120(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x5c) + 0xc);
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}

