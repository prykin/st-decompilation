
undefined4 FUN_006b7830(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 < *(uint *)(param_1 + 8)) {
    puVar3 = *(undefined4 **)(param_2 * 4 + *(int *)(param_1 + 0x14));
    if (puVar3 != (undefined4 *)0x0) {
      FUN_006a5e90(puVar3);
    }
    puVar3 = (undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x14));
    puVar4 = puVar3;
    for (uVar1 = (*(int *)(param_1 + 8) - param_2) * 4 - 4 >> 2; puVar3 = puVar3 + 1, uVar1 != 0;
        uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4) = 0;
    if (param_2 < *(uint *)(param_1 + 4)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) - 1;
    }
    return 0;
  }
  return 0xfffffffc;
}

