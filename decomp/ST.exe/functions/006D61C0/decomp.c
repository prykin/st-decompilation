
void FUN_006d61c0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x18) + 0x68);
  *piVar1 = *piVar1 + 1;
  FUN_00748b37(param_1);
  return;
}

