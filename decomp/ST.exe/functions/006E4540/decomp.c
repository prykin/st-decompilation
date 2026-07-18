
int FUN_006e4540(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  do {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      return iVar2;
    }
    iVar3 = *(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (iVar3 == 0) {
      return iVar2;
    }
    if (*(int *)(*(int *)(iVar3 + 4) + 0x14) == param_2) {
      return iVar3;
    }
  } while ((*(int *)(iVar3 + 8) == 0) ||
          (iVar2 = FUN_006e4540(*(int *)(iVar3 + 8),param_2), iVar2 == 0));
  return iVar2;
}

