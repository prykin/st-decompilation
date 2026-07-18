
undefined4 FUN_007553f0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x50);
  *(int *)(param_1 + 0xc) = iVar4;
  iVar3 = FUN_00753b80(param_1,*(undefined4 *)(iVar4 + 0x40 + *(int *)(iVar4 + 0x1c) * 8),
                       *(int *)(iVar4 + 0x1c));
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8);
  if (iVar4 == -1) {
    iVar4 = *(int *)(iVar3 + 4);
  }
  else {
    if (iVar4 == *(short *)(iVar3 + 8)) goto LAB_00755464;
    iVar4 = *(int *)(iVar4 + 0x10 + iVar3);
  }
  while (iVar4 != -1) {
    *(int *)(*(int *)(param_1 + 0xc) + 0x1c) = *(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 1;
    iVar3 = FUN_00753b80(param_1,iVar4,*(int *)(*(int *)(param_1 + 0xc) + 0x1c));
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) =
         0xffffffff;
    iVar4 = *(int *)(iVar3 + 4);
  }
LAB_00755464:
  FUN_00757450(param_1,*(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                               *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
  iVar4 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar4 + 0x1c);
  if (*(int *)(iVar4 + 0x44 + iVar2 * 8) == (int)*(short *)(iVar3 + 8)) {
    do {
      if (iVar2 == 0) {
        FUN_00750fb0(param_1,0,0);
        return 0xfffffffc;
      }
      *(int *)(iVar4 + 0x1c) = iVar2 + -1;
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
      iVar3 = FUN_00753b80(param_1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40 + iVar4 * 8),iVar4
                          );
      FUN_00757450(param_1,*(int *)(*(int *)(param_1 + 0xc) + 0x44 +
                                   *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8));
      iVar4 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(iVar4 + 0x1c);
    } while (*(int *)(iVar4 + 0x44 + iVar2 * 8) == (int)*(short *)(iVar3 + 8));
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8);
  puVar7 = (undefined4 *)(iVar4 + 0x10 + iVar3);
  *param_3 = *(undefined4 *)(iVar4 + 0x14 + iVar3);
  *param_4 = *puVar7;
  sVar1 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
  if (sVar1 == 0) {
    uVar6 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(puVar7 + 2);
  }
  else {
    uVar6 = (uint)sVar1;
  }
  if (*param_2 == 1) {
    iVar4 = FUN_006bfb70(uVar6);
    *param_2 = iVar4;
    if (iVar4 == 0) {
      return 0xfffffffe;
    }
  }
  if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
    puVar7 = puVar7 + 2;
    puVar8 = (undefined4 *)*param_2;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  return 0;
}

