
int __fastcall FUN_007233f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 100);
  iVar2 = *piVar1;
  iVar3 = -1;
  if (iVar2 != 0) {
    iVar3 = 0;
    while (iVar2 != *(int *)(param_1 + 0x68)) {
      iVar2 = piVar1[0x1c];
      piVar1 = piVar1 + 0x1c;
      iVar3 = iVar3 + 1;
      if (iVar2 == 0) {
        return -1;
      }
    }
  }
  return iVar3;
}

