
undefined4 * __thiscall thunk_FUN_00617fb0(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint *puStack_c;
  uint uStack_8;
  
  iVar5 = *(int *)((int)this + 0x5e);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0xc) * *(int *)(iVar5 + 8) + 0x1c;
  }
  iVar3 = *(int *)((int)this + 0x62);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0xc) * *(int *)(iVar3 + 8) + 0x1c;
  }
  iVar1 = *(int *)((int)this + 0x66);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8) + 0x1c;
  }
  iVar5 = iVar1 + iVar3 + 0x5e + iVar5;
  puVar2 = (undefined4 *)FUN_006aac70(iVar5);
  puVar7 = (undefined4 *)((int)this + 0x1c);
  puVar9 = puVar2;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (uint *)((int)puVar2 + 0x52);
  *(undefined2 *)puVar9 = *(undefined2 *)puVar7;
  puVar2[3] = 2;
  if (*(uint **)((int)this + 0x5e) != (uint *)0x0) {
    puStack_c = (uint *)FUN_006b0020(*(uint **)((int)this + 0x5e),(int *)&uStack_8);
    *puVar6 = uStack_8;
    puVar6 = puStack_c;
    puVar8 = (uint *)((int)puVar2 + 0x56);
    for (uVar4 = uStack_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar4 = uStack_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar8 = (char)*puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
      puVar8 = (uint *)((int)puVar8 + 1);
    }
    puVar6 = (uint *)((int)puVar2 + 0x56 + uStack_8);
    FUN_006ab060(&puStack_c);
  }
  if (*(uint **)((int)this + 0x62) != (uint *)0x0) {
    puStack_c = (uint *)FUN_006b0020(*(uint **)((int)this + 0x62),(int *)&uStack_8);
    *puVar6 = uStack_8;
    puVar8 = puStack_c;
    puVar10 = puVar6 + 1;
    for (uVar4 = uStack_8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar4 = uStack_8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(char *)puVar10 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar10 = (uint *)((int)puVar10 + 1);
    }
    puVar6 = (uint *)((int)(puVar6 + 1) + uStack_8);
    FUN_006ab060(&puStack_c);
  }
  if (*(uint **)((int)this + 0x66) != (uint *)0x0) {
    puStack_c = (uint *)FUN_006b0020(*(uint **)((int)this + 0x66),(int *)&uStack_8);
    *puVar6 = uStack_8;
    puVar8 = puStack_c;
    for (uVar4 = uStack_8 >> 2; puVar6 = puVar6 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
    }
    for (uStack_8 = uStack_8 & 3; uStack_8 != 0; uStack_8 = uStack_8 - 1) {
      *(char *)puVar6 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    FUN_006ab060(&puStack_c);
    *param_1 = iVar5;
    return puVar2;
  }
  *param_1 = iVar5;
  return puVar2;
}

