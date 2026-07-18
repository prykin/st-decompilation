
int __thiscall thunk_FUN_005f68b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int aiStack_28 [8];
  undefined4 *puStack_8;
  
  if (this == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)((int)this + 0x231);
  }
  puVar1 = param_1;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = *(undefined2 *)puVar1;
  *(undefined4 *)((int)this + 0x2b7) = 0xffffffff;
  aiStack_28[0] = FUN_006aac70(0x44);
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + aiStack_28[0]) = DAT_00806774;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x44);
  aiStack_28[1] = 0;
  aiStack_28[2] = 0;
  aiStack_28[3] = 0;
  aiStack_28[4] = 0;
  aiStack_28[6] = 0;
  aiStack_28[5] = 0x10;
  thunk_FUN_004adba0(aiStack_28,(undefined4 *)((int)param_1 + 0xc6));
  thunk_FUN_00416240(this,*(undefined2 *)((int)this + 0x2c1),*(undefined2 *)((int)this + 0x2c5),
                     *(undefined2 *)((int)this + 0x2c9));
  FUN_006ab060(aiStack_28);
  iVar3 = *(int *)((int)param_1 + 0xc2);
  piVar5 = (int *)((int)param_1 + 0xc6 + iVar3);
  piVar6 = piVar5 + 1;
  thunk_FUN_00422210(piVar6);
  iVar2 = *piVar5;
  puVar7 = (undefined4 *)((int)piVar6 + iVar2);
  iVar2 = iVar3 + 0xca + iVar2;
  if (*(int *)((int)this + 0x2e6) == 0) {
    return iVar2;
  }
  puStack_8 = puVar7;
  puVar1 = (undefined4 *)FUN_006aac70(0x6c);
  *(undefined4 **)((int)this + 0x2e6) = puVar1;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar2 = iVar2 + 0x6c;
  **(undefined4 **)((int)this + 0x2e6) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x2e6) + 4) = 0xffffffff;
  if (*(int *)(*(int *)((int)this + 0x2e6) + 0x58) != 0) {
    uVar4 = *(uint *)(*(int *)((int)this + 0x2e6) + 0x5c);
    iVar8 = uVar4 * 4;
    aiStack_28[7] = iVar8;
    iVar3 = FUN_006aac70(iVar8);
    *(int *)(*(int *)((int)this + 0x2e6) + 0x58) = iVar3;
    puVar7 = *(undefined4 **)(*(int *)((int)this + 0x2e6) + 0x58);
    for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puStack_8;
      puStack_8 = puStack_8 + 1;
      puVar7 = puVar7 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puStack_8;
      puStack_8 = (undefined4 *)((int)puStack_8 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    return iVar2 + iVar8;
  }
  return iVar2;
}

