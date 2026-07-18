
int __thiscall thunk_FUN_005fcad0(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_10 = (undefined4 *)FUN_006aac70(0x24a);
  puVar6 = (undefined4 *)((int)this + 0x326);
  puVar8 = puStack_10;
  for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  puVar6 = (undefined4 *)((int)this + 0x231);
  puVar8 = (undefined4 *)((int)puStack_10 + 0x155);
  for (iVar2 = 0x3d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
  puStack_10[3] = 2;
  puStack_14 = thunk_FUN_004ad790(&uStack_8);
  puStack_18 = thunk_FUN_004210e0((int *)&uStack_c);
  uVar1 = uStack_c + 0x252 + uStack_8;
  puStack_10 = (undefined4 *)FUN_006acf50(puStack_10,uVar1);
  *(uint *)((int)puStack_10 + 0x246) = uStack_8;
  puVar4 = (undefined4 *)((int)puStack_10 + 0x24a);
  puVar6 = puStack_14;
  puVar8 = puVar4;
  for (uVar3 = uStack_8 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar3 = uStack_8 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_006ab060(&puStack_14);
  puVar5 = (uint *)((int)puVar4 + uStack_8);
  *puVar5 = uStack_c;
  puVar7 = puStack_18;
  for (uVar3 = uStack_c >> 2; puVar5 = puVar5 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
  }
  for (uStack_c = uStack_c & 3; uStack_c != 0; uStack_c = uStack_c - 1) {
    *(char *)puVar5 = (char)*puVar7;
    puVar7 = (uint *)((int)puVar7 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  FUN_006ab060(&puStack_18);
  *param_1 = uVar1;
  return (int)puStack_10;
}

