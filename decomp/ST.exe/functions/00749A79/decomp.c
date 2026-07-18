
int FUN_00749a79(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x40) == 3) {
    iVar1 = *(int *)(param_1 + 0x30) + 0x3c;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30) + 0x30;
  }
  return iVar1 + param_1;
}

