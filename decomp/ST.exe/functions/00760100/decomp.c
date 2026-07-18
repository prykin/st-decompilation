
void FUN_00760100(int param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  uint uVar14;
  short *psVar15;
  int *piVar16;
  int iVar17;
  int local_28;
  int local_1c;
  int local_18;
  int local_c;
  
  iVar2 = *(int *)(param_1 + 0x1ba);
  iVar3 = *(int *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x132);
  if (0 < param_4) {
    local_28 = param_4;
    iVar11 = param_2 - (int)param_3;
    piVar16 = param_3;
    do {
      FUN_00759f30((undefined4 *)*piVar16,uVar4);
      param_4 = 0;
      if (0 < iVar3) {
        param_3 = (int *)(iVar2 + 0x44);
        do {
          pcVar13 = (char *)*piVar16;
          pbVar12 = (byte *)(*(int *)(iVar11 + (int)piVar16) + param_4);
          if (*(int *)(iVar2 + 0x54) == 0) {
            iVar17 = 1;
            psVar15 = (short *)*param_3;
            local_1c = iVar3;
          }
          else {
            pcVar13 = pcVar13 + (uVar4 - 1);
            pbVar12 = pbVar12 + (uVar4 - 1) * iVar3;
            iVar17 = -1;
            psVar15 = (short *)(*param_3 + 2 + uVar4 * 2);
            local_1c = -iVar3;
          }
          iVar6 = *(int *)(*(int *)(iVar2 + 0x18) + param_4 * 4);
          iVar7 = *(int *)(*(int *)(iVar2 + 0x10) + param_4 * 4);
          iVar8 = 0;
          local_c = 0;
          local_c._0_2_ = 0;
          local_18 = 0;
          for (uVar14 = uVar4; uVar14 != 0; uVar14 = uVar14 - 1) {
            uVar9 = (uint)*(byte *)((uint)*pbVar12 + iVar5 + (psVar15[iVar17] + 8 + iVar8 >> 4));
            bVar1 = *(byte *)(uVar9 + iVar6);
            *pcVar13 = *pcVar13 + bVar1;
            iVar10 = uVar9 - *(byte *)((uint)bVar1 + iVar7);
            *psVar15 = (short)local_c + (short)iVar10 * 3;
            local_c = local_18 + iVar10 * 5;
            iVar8 = iVar10 * 7;
            pbVar12 = pbVar12 + local_1c;
            pcVar13 = pcVar13 + iVar17;
            psVar15 = psVar15 + iVar17;
            local_18 = iVar10;
          }
          *psVar15 = (short)local_c;
          param_4 = param_4 + 1;
          param_3 = param_3 + 1;
        } while (param_4 < iVar3);
      }
      *(uint *)(iVar2 + 0x54) = (uint)(*(int *)(iVar2 + 0x54) == 0);
      piVar16 = piVar16 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  return;
}

