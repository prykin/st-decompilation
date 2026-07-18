
undefined4 FUN_006b0c70(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    if (param_2 < *(uint *)(param_1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 8);
      puVar5 = (undefined4 *)(iVar1 * param_2 + *(int *)(param_1 + 0x1c));
      uVar2 = ((*(uint *)(param_1 + 0xc) - param_2) + -1) * iVar1;
      puVar4 = (undefined4 *)(iVar1 + (int)puVar5);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      if (param_2 < *(uint *)(param_1 + 4)) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) - 1;
      }
      return 0;
    }
  }
  return 0xfffffffc;
}

