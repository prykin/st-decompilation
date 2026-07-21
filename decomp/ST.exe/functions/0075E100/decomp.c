
void FUN_0075e100(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  byte *pbVar16;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)(param_1 + 0x1b2);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar4 = *(int *)(param_1 + 0x132);
  iVar5 = *(int *)(iVar3 + 0x10);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar16 = *(byte **)(*param_2 + param_3 * 4);
  pbVar14 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar13 = *(byte **)(param_2[2] + param_3 * 4);
  puVar10 = (undefined1 *)*param_4;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  for (uVar11 = *(uint *)(param_1 + 0x68) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
    bVar1 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    bVar2 = *pbVar13;
    pbVar13 = pbVar13 + 1;
    iVar8 = *(int *)(iVar5 + (uint)bVar2 * 4);
    iVar15 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar7 + (uint)bVar2 * 4) >> 0x10;
    iVar9 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar12 = (uint)*pbVar16;
    puVar10[2] = *(undefined1 *)(iVar8 + uVar12 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar12 + iVar15 + iVar4);
    *puVar10 = *(undefined1 *)(uVar12 + iVar9 + iVar4);
    uVar12 = (uint)pbVar16[1];
    pbVar16 = pbVar16 + 2;
    puVar10[5] = *(undefined1 *)(iVar8 + uVar12 + iVar4);
    puVar10[4] = *(undefined1 *)(iVar15 + uVar12 + iVar4);
    puVar10[3] = *(undefined1 *)(uVar12 + iVar9 + iVar4);
    puVar10 = puVar10 + 6;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar14 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar13 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar14 * 4);
    uVar11 = (uint)*pbVar16;
    puVar10[2] = *(undefined1 *)(*(int *)(iVar5 + (uint)*pbVar13 * 4) + uVar11 + iVar4);
    puVar10[1] = *(undefined1 *)(uVar11 + (iVar3 + iVar7 >> 0x10) + iVar4);
    *puVar10 = *(undefined1 *)(uVar11 + iVar6 + iVar4);
  }
  return;
}

