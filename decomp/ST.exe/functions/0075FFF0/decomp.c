
void FUN_0075fff0(AnonShape_0075FFF0_30A040AA *param_1,int param_2,int *param_3,int param_4)

{
  byte bVar1;
  AnonNested_0075FFF0_01BA_DF5323FE *pAVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  
  pAVar2 = param_1->field_01BA;
  iVar3 = *(int *)&param_1->field_0x68;
  piVar4 = pAVar2->field_0018;
  iVar5 = *piVar4;
  iVar6 = piVar4[1];
  iVar7 = piVar4[2];
  if (0 < param_4) {
    iVar12 = param_2 - (int)param_3;
    param_1 = (AnonShape_0075FFF0_30A040AA *)param_3;
    param_2 = param_4;
    do {
      pbVar15 = *(byte **)(iVar12 + (int)param_1);
      iVar8 = pAVar2->field_0030;
      pcVar18 = *(char **)param_1;
      iVar9 = pAVar2->field_0034;
      iVar10 = pAVar2->field_0038;
      iVar11 = pAVar2->field_003C;
      iVar16 = iVar8 * 0x40;
      uVar19 = 0;
      for (iVar17 = iVar3; iVar17 != 0; iVar17 = iVar17 + -1) {
        bVar1 = *pbVar15;
        pbVar13 = pbVar15 + 1;
        pbVar14 = pbVar15 + 2;
        pbVar15 = pbVar15 + 3;
        *pcVar18 = *(char *)(*(int *)(iVar9 + iVar16 + uVar19 * 4) + (uint)bVar1 + iVar5) +
                   *(char *)(*(int *)(iVar10 + iVar16 + uVar19 * 4) + (uint)*pbVar13 + iVar6) +
                   *(char *)(*(int *)(iVar11 + iVar16 + uVar19 * 4) + (uint)*pbVar14 + iVar7);
        pcVar18 = pcVar18 + 1;
        uVar19 = uVar19 + 1 & 0xf;
      }
      param_1 = (AnonShape_0075FFF0_30A040AA *)&param_1->field_0x4;
      pAVar2->field_0030 = iVar8 + 1U & 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

