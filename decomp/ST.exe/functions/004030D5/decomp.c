
undefined4 * __thiscall thunk_FUN_005f1fa0(void *this,int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_10 = (undefined4 *)0x0;
  puStack_14 = (uint *)0x0;
  uStack_8 = 0;
  uStack_c = 0;
  if (*(uint **)((int)this + 0x38) != (uint *)0x0) {
    puStack_10 = (undefined4 *)FUN_006b0020(*(uint **)((int)this + 0x38),(int *)&uStack_8);
    if (uStack_8 == 0) {
      FUN_006ae110(*(byte **)((int)this + 0x38));
      *(undefined4 *)((int)this + 0x38) = 0;
    }
  }
  if (*(uint **)((int)this + 0x3c) != (uint *)0x0) {
    puStack_14 = (uint *)FUN_006b0020(*(uint **)((int)this + 0x3c),(int *)&uStack_c);
    if (uStack_c == 0) {
      FUN_006ae110(*(byte **)((int)this + 0x3c));
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
  }
  iVar1 = uStack_c + 0x30 + uStack_8;
  puVar3 = (undefined4 *)FUN_006aac70(iVar1);
  uVar2 = DAT_00811788;
  *(undefined4 *)((int)this + 0x2c) = 2;
  *(undefined4 *)((int)this + 0x34) = uVar2;
  puVar7 = (undefined4 *)((int)this + 0x20);
  puVar9 = puVar3;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = puVar3 + 10;
  if (uStack_8 != 0) {
    *puVar6 = uStack_8;
    puVar7 = puStack_10;
    puVar9 = puVar3 + 0xb;
    for (uVar5 = uStack_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uStack_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_006ab060(&puStack_10);
    puVar6 = (uint *)((int)(puVar3 + 0xb) + uStack_8);
  }
  if (uStack_c != 0) {
    *puVar6 = uStack_c;
    puVar8 = puStack_14;
    for (uVar5 = uStack_c >> 2; puVar6 = puVar6 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar8;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uStack_c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar6 = (char)*puVar8;
      puVar8 = (uint *)((int)puVar8 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    FUN_006ab060(&puStack_14);
    *param_1 = iVar1;
    return puVar3;
  }
  *param_1 = iVar1;
  return puVar3;
}

