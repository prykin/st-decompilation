
undefined4 * __thiscall FUN_005f5a90(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_c;
  uint local_8;
  
  puVar1 = (undefined4 *)FUN_006aac70(0x128);
  *(undefined4 *)((int)this + 0x16d) = *(undefined4 *)((int)this + 0x1c);
  puVar4 = (undefined4 *)((int)this + 0x4d);
  puVar5 = puVar1;
  for (iVar2 = 0x4a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar1[3] = 2;
  if (*(uint **)((int)this + 0x169) != (uint *)0x0) {
    local_c = (undefined4 *)FUN_006b0020(*(uint **)((int)this + 0x169),(int *)&local_8);
    puVar1 = (undefined4 *)FUN_006acf50(puVar1,local_8 + 300);
    puVar1[0x4a] = local_8;
    puVar4 = local_c;
    puVar5 = puVar1 + 0x4b;
    for (uVar3 = local_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = local_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    if (local_c != (undefined4 *)0x0) {
      FUN_006ab060(&local_c);
    }
    *param_1 = local_8 + 0x128;
    return puVar1;
  }
  *param_1 = 0x128;
  return puVar1;
}

