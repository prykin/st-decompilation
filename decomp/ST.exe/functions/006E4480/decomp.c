
int FUN_006e4480(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
    do {
      iVar2 = *(int *)(param_1 + 8);
      uVar1 = *(uint *)(iVar2 + 4);
      if (*(uint *)(iVar2 + 0xc) <= uVar1) {
        return 0;
      }
      iVar3 = *(int *)(iVar2 + 8) * uVar1 + *(int *)(iVar2 + 0x1c);
      *(uint *)(iVar2 + 4) = uVar1 + 1;
      if (iVar3 == 0) {
        return 0;
      }
      if (*(int *)(*(int *)(iVar3 + 4) + 0x14) == param_2) {
        return *(int *)(iVar3 + 4);
      }
      iVar2 = FUN_006e4480(iVar3,param_2);
    } while (iVar2 == 0);
  }
  return iVar2;
}

