
int FUN_00753b40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (iVar1 == -1) {
    iVar3 = *(int *)(iVar3 + 0x18);
  }
  else {
    iVar3 = FUN_006d4a40(iVar3,iVar1,&param_1);
    if (iVar3 == 0) {
      *(int *)(*(int *)(iVar2 + 8) + 0x1c) = param_1;
      return iVar1;
    }
  }
  return iVar3;
}

