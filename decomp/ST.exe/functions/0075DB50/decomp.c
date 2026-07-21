
void FUN_0075db50(AnonShape_0075DB50_5854A0B6 *param_1,int *param_2,int param_3,undefined4 *param_4,
                 int param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;

  iVar5 = param_1->field_0068;
  iVar6 = param_1->field_01B6;
  iVar7 = param_1->field_0132;
  iVar8 = *(int *)(iVar6 + 8);
  iVar9 = *(int *)(iVar6 + 0xc);
  iVar10 = *(int *)(iVar6 + 0x10);
  iVar6 = *(int *)(iVar6 + 0x14);
  if (-1 < param_5 + -1) {
    iVar11 = param_3 << 2;
    param_3 = param_5;
    do {
      piVar1 = (int *)(*param_2 + iVar11);
      pbVar12 = *(byte **)(iVar11 + param_2[1]);
      piVar2 = (int *)(param_2[2] + iVar11);
      iVar11 = iVar11 + 4;
      if (iVar5 != 0) {
        iVar15 = *piVar1 - (int)pbVar12;
        iVar16 = *piVar2 - (int)pbVar12;
        puVar13 = (undefined1 *)*param_4;
        param_5 = iVar5;
        do {
          uVar14 = (uint)pbVar12[iVar15];
          bVar3 = *pbVar12;
          bVar4 = pbVar12[iVar16];
          puVar13[2] = *(undefined1 *)(*(int *)(iVar8 + (uint)bVar4 * 4) + uVar14 + iVar7);
          puVar13[1] = *(undefined1 *)
                        ((*(int *)(iVar6 + (uint)bVar3 * 4) + *(int *)(iVar10 + (uint)bVar4 * 4) >>
                         0x10) + uVar14 + iVar7);
          pbVar12 = pbVar12 + 1;
          param_5 = param_5 + -1;
          *puVar13 = *(undefined1 *)(*(int *)(iVar9 + (uint)bVar3 * 4) + uVar14 + iVar7);
          puVar13 = puVar13 + 3;
        } while (param_5 != 0);
      }
      param_3 = param_3 + -1;
      param_4 = param_4 + 1;
    } while (param_3 != 0);
  }
  return;
}

