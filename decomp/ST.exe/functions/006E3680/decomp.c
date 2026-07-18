
void FUN_006e3680(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = 0;
  while( true ) {
    uVar1 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 0xc) <= uVar1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c);
    *(uint *)(param_1 + 4) = uVar1 + 1;
    if (iVar2 == 0) break;
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_006e3680(*(int *)(iVar2 + 8));
      FUN_006ae110(*(byte **)(iVar2 + 8));
      *(undefined4 *)(iVar2 + 8) = 0;
    }
  }
  return;
}

