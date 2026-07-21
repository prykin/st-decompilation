
void FUN_006db1f0(ushort *param_1,int param_2,byte *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined4 *puVar10;

  iVar5 = param_5;
  if (((uint)param_1 & 2) == 0) {
    do {
      do {
        bVar2 = *param_3;
        param_3 = param_3 + 1;
        *(uint *)param_1 =
             /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
             CONCAT22(*(undefined2 *)(param_7 + (uint)bVar2 * 2),
                      *(undefined2 *)(param_7 + (uint)bVar2 * 2));
        param_1 = param_1 + 2;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      pbVar8 = param_3 + -param_5;
      puVar10 = (undefined4 *)((int)param_1 + param_5 * -4 + param_2);
      iVar5 = param_5;
      do {
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        *puVar10 = CONCAT22(*(undefined2 *)(param_7 + (uint)bVar2 * 2),
                            *(undefined2 *)(param_7 + (uint)bVar2 * 2));
        puVar10 = puVar10 + 1;
        iVar6 = iVar5 + -1;
        bVar3 = 0 < iVar5;
        iVar5 = iVar6;
      } while (iVar6 != 0 && bVar3);
      param_3 = pbVar8 + (param_4 - param_5);
      param_1 = (ushort *)((int)puVar10 + param_5 * -4 + param_2);
      iVar6 = param_6 + -1;
      bVar3 = 0 < param_6;
      iVar5 = param_5;
      param_6 = iVar6;
    } while (iVar6 != 0 && bVar3);
  }
  else {
    do {
      uVar7 = *(ushort *)(param_7 + (uint)*param_3 * 2);
      pbVar8 = param_3 + 1;
      *param_1 = uVar7;
      puVar9 = (uint *)(param_1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *(ushort *)(param_7 + (uint)*pbVar8 * 2);
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          pbVar8 = pbVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      puVar1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      uVar7 = *(ushort *)(param_7 + (uint)pbVar8[-param_5] * 2);
      pbVar8 = pbVar8 + -param_5 + 1;
      *puVar1 = uVar7;
      puVar9 = (uint *)(puVar1 + 1);
      if (param_5 + -1 != 0 && 0 < param_5) {
        uVar4 = (uint)uVar7 << 0x10;
        iVar5 = param_5 + -1;
        do {
          uVar7 = *(ushort *)(param_7 + (uint)*pbVar8 * 2);
          uVar4 = uVar4 >> 0x10 | (uint)uVar7 << 0x10;
          pbVar8 = pbVar8 + 1;
          *puVar9 = uVar4;
          puVar9 = puVar9 + 1;
          iVar6 = iVar5 + -1;
          bVar3 = 0 < iVar5;
          iVar5 = iVar6;
        } while (iVar6 != 0 && bVar3);
      }
      *(ushort *)puVar9 = uVar7;
      param_3 = pbVar8 + (param_4 - param_5);
      param_1 = (ushort *)((int)puVar9 + param_5 * -4 + param_2 + 2);
      iVar5 = param_6 + -1;
      bVar3 = 0 < param_6;
      param_6 = iVar5;
    } while (iVar5 != 0 && bVar3);
  }
  return;
}

