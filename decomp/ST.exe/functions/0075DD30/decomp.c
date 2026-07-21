
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void FUN_0075dd30(AnonShape_0075DB50_5854A0B6 *param_1,int *param_2,int param_3,undefined4 *param_4,
                 int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int local_8;

  iVar3 = param_1->field_01B6;
  iVar4 = param_1->field_0068;
  iVar5 = param_1->field_0132;
  iVar6 = *(int *)(iVar3 + 8);
  iVar7 = *(int *)(iVar3 + 0xc);
  iVar8 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x14);
  if (-1 < param_5 + -1) {
    local_8 = param_5;
    iVar11 = param_3 * 4;
    do {
      pbVar9 = *(byte **)(iVar11 + param_2[1]);
      if (iVar4 != 0) {
        iVar14 = *(int *)(*param_2 + iVar11) - (int)pbVar9;
        iVar15 = *(int *)(param_2[2] + iVar11) - (int)pbVar9;
        iVar12 = *(int *)(iVar11 + param_2[3]) - (int)pbVar9;
        puVar10 = (undefined1 *)*param_4;
        param_3 = iVar4;
        do {
          uVar13 = (uint)pbVar9[iVar14];
          bVar1 = *pbVar9;
          bVar2 = pbVar9[iVar15];
          *puVar10 = *(undefined1 *)(((iVar5 - *(int *)(iVar6 + (uint)bVar2 * 4)) - uVar13) + 0xff);
          puVar10[1] = *(undefined1 *)
                        (((iVar5 - (*(int *)(iVar3 + (uint)bVar1 * 4) +
                                    *(int *)(iVar8 + (uint)bVar2 * 4) >> 0x10)) - uVar13) + 0xff);
          pbVar9 = pbVar9 + 1;
          puVar10[2] = *(undefined1 *)
                        (((iVar5 - *(int *)(iVar7 + (uint)bVar1 * 4)) - uVar13) + 0xff);
          puVar10[3] = pbVar9[iVar12 + -1];
          param_3 = param_3 + -1;
          puVar10 = puVar10 + 4;
        } while (param_3 != 0);
      }
      local_8 = local_8 + -1;
      iVar11 = iVar11 + 4;
      param_4 = param_4 + 1;
    } while (local_8 != 0);
  }
  return;
}

