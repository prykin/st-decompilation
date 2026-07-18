
uint FUN_00755830(int param_1,uint *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  
  if (param_3 < 0) {
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x40);
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x48);
    for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar3 = FUN_00753b40(param_1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = FUN_006d4c50(*(int *)(param_1 + 8),uVar3,(int)*(short *)(*(int *)(param_1 + 8) + 0x16));
    if (uVar4 == 0) {
      *(uint *)(*(int *)(param_1 + 8) + 8) = *(uint *)(*(int *)(param_1 + 8) + 8) | 0x10;
      iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x34);
      puVar12 = (uint *)(iVar5 + uVar3);
      puVar7 = (uint *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + iVar5);
      uVar6 = (uint)*(short *)(*(int *)(param_1 + 8) + 0x16);
      puVar9 = puVar7;
      puVar11 = puVar12;
      for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar11 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar11 = (uint *)((int)puVar11 + 1);
      }
      *puVar12 = uVar3;
      sVar2 = *(short *)(*(int *)(param_1 + 0xc) + 0x34);
      if (sVar2 == 0) {
        iVar5 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_2 + 2);
      }
      else {
        iVar5 = (int)sVar2;
      }
      uVar4 = iVar5 + 8;
      puVar12 = puVar7 + 4;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *param_2;
        param_2 = param_2 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = uVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar12 = (char)*param_2;
        param_2 = (uint *)((int)param_2 + 1);
        puVar12 = (uint *)((int)puVar12 + 1);
      }
      *(short *)(puVar7 + 2) = (short)uVar4;
      puVar7[1] = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44) = 0;
      psVar1 = (short *)(*(int *)(param_1 + 0xc) + 0x2a);
      *psVar1 = *psVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = 1;
      return 0;
    }
    if (0 < (int)uVar4) {
      return uVar4 | 0xffff0000;
    }
  }
  else {
    FUN_007574c0(param_1,*(int *)(*(int *)(param_1 + 8) + 0x34) + *(int *)(param_1 + 0x10),param_2,
                 *(int *)(*(int *)(param_1 + 0xc) + 0x44 + param_3 * 8));
    uVar4 = 0;
  }
  return uVar4;
}

