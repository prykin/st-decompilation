
undefined4 FUN_006e45c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = *(uint *)(iVar1 + 4);
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      return 0;
    }
    piVar3 = (int *)(*(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c));
    *(uint *)(iVar1 + 4) = uVar2 + 1;
    if (piVar3 == (int *)0x0) break;
    if ((*piVar3 != 1) && (*piVar3 = 1, piVar3[2] != 0)) {
      FUN_006e45c0((int)piVar3);
    }
  }
  return 0;
}

