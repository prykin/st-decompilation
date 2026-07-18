
void FUN_0075e260(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  
  iVar3 = *(int *)(param_1 + 0x1b2);
  iVar4 = *(int *)(param_1 + 0x132);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar18 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar14 = *(byte **)(*param_2 + param_3 * 8);
  pbVar15 = *(byte **)(*param_2 + param_3 * 8 + 4);
  pbVar16 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar13 = *(byte **)(param_2[2] + param_3 * 4);
  puVar9 = (undefined1 *)*param_4;
  puVar10 = (undefined1 *)param_4[1];
  for (uVar11 = *(uint *)(param_1 + 0x68) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    bVar2 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    iVar7 = *(int *)(iVar5 + (uint)bVar2 * 4);
    iVar17 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar18 + (uint)bVar2 * 4) >> 0x10;
    iVar8 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar12 = (uint)*pbVar14;
    puVar9[2] = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar9[1] = *(undefined1 *)(uVar12 + iVar17 + iVar4);
    *puVar9 = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    uVar12 = (uint)pbVar14[1];
    pbVar14 = pbVar14 + 2;
    puVar9[5] = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar9[4] = *(undefined1 *)(uVar12 + iVar17 + iVar4);
    puVar9[3] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    uVar12 = (uint)*pbVar15;
    puVar10[2] = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar12 + iVar17 + iVar4);
    *puVar10 = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    uVar12 = (uint)pbVar15[1];
    pbVar15 = pbVar15 + 2;
    puVar10[5] = *(undefined1 *)(iVar7 + uVar12 + iVar4);
    puVar10[4] = *(undefined1 *)(iVar17 + uVar12 + iVar4);
    puVar10[3] = *(undefined1 *)(uVar12 + iVar8 + iVar4);
    puVar9 = puVar9 + 6;
    puVar10 = puVar10 + 6;
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    iVar5 = *(int *)(iVar5 + (uint)*pbVar13 * 4);
    iVar18 = *(int *)(iVar3 + (uint)*pbVar16 * 4) + *(int *)(iVar18 + (uint)*pbVar13 * 4) >> 0x10;
    iVar3 = *(int *)(iVar6 + (uint)*pbVar16 * 4);
    uVar11 = (uint)*pbVar14;
    puVar9[2] = *(undefined1 *)(iVar5 + uVar11 + iVar4);
    puVar9[1] = *(undefined1 *)(uVar11 + iVar18 + iVar4);
    *puVar9 = *(undefined1 *)(uVar11 + iVar3 + iVar4);
    uVar11 = (uint)*pbVar15;
    puVar10[2] = *(undefined1 *)(iVar5 + uVar11 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar11 + iVar18 + iVar4);
    *puVar10 = *(undefined1 *)(uVar11 + iVar3 + iVar4);
  }
  return;
}

