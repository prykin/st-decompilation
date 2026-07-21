
void FUN_006b2020(AnonShape_006B2020_F949DD3E *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  AnonNested_006B2020_01A0_B4F1EFF3 *pAVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;

  iVar2 = param_1->field_01AC;
  if ((param_2 < param_1->field_01A0) &&
     (puVar3 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar3 & 0x80000) == 0)) {
    uVar8 = puVar3[0x12];
    if ((int)param_3 < (int)puVar3[0x11]) {
      puVar3[0x11] = param_3;
      uVar7 = FUN_006cee10((int)param_1,(int)puVar3);
      puVar3[0x14] = uVar7;
      if ((0 < (int)uVar8) && ((int)param_3 < *(int *)(*(int *)(iVar2 + -4 + uVar8 * 4) + 0x44))) {
        if ((*puVar3 & 0x4000) == 0) {
          iVar10 = uVar8 - 1;
          if (-1 < iVar10) {
            piVar9 = (int *)(iVar2 + iVar10 * 4);
            do {
              puVar5 = (uint *)*piVar9;
              if (((int)puVar5[0x11] <= (int)param_3) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              uVar8 = iVar10 + 1;
              piVar9[1] = (int)puVar5;
              iVar10 = iVar10 + -1;
              piVar9 = piVar9 + -1;
              puVar5[0x12] = uVar8;
            } while (-1 < iVar10);
          }
        }
        else {
          iVar10 = uVar8 - 1;
          if (-1 < iVar10) {
            piVar9 = (int *)(iVar2 + iVar10 * 4);
            do {
              iVar4 = *piVar9;
              if (*(int *)(iVar4 + 0x44) <= (int)param_3) break;
              iVar1 = iVar10 + 1;
              piVar9[1] = iVar4;
              iVar10 = iVar10 + -1;
              piVar9 = piVar9 + -1;
              *(int *)(iVar4 + 0x48) = iVar1;
            } while (-1 < iVar10);
          }
        }
        *(uint **)(iVar2 + (iVar10 + 1U) * 4) = puVar3;
        puVar3[0x12] = iVar10 + 1U;
        if ((*puVar3 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else if ((int)puVar3[0x11] < (int)param_3) {
      puVar3[0x11] = param_3;
      uVar7 = FUN_006cee10((int)param_1,(int)puVar3);
      puVar3[0x14] = uVar7;
      pAVar6 = param_1->field_01A0;
      if (((int)uVar8 < (int)((int)&pAVar6[-1].field_0048 + 3)) &&
         (iVar10 = uVar8 + 1, *(int *)(*(int *)(iVar2 + 4 + uVar8 * 4) + 0x44) < (int)param_3)) {
        if ((*puVar3 & 0x4000) == 0) {
          if (iVar10 < (int)pAVar6) {
            piVar9 = (int *)(iVar2 + iVar10 * 4);
            do {
              puVar5 = (uint *)*piVar9;
              if (((int)param_3 <= (int)puVar5[0x11]) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              piVar9[-1] = (int)puVar5;
              puVar5[0x12] = iVar10 - 1;
              iVar10 = iVar10 + 1;
              piVar9 = piVar9 + 1;
            } while (iVar10 < (int)param_1->field_01A0);
          }
        }
        else if (iVar10 < (int)pAVar6) {
          piVar9 = (int *)(iVar2 + iVar10 * 4);
          do {
            iVar4 = *piVar9;
            if ((int)param_3 <= *(int *)(iVar4 + 0x44)) break;
            piVar9[-1] = iVar4;
            *(int *)(iVar4 + 0x48) = iVar10 + -1;
            iVar10 = iVar10 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar10 < (int)param_1->field_01A0);
        }
        *(uint **)(iVar2 + (iVar10 - 1U) * 4) = puVar3;
        puVar3[0x12] = iVar10 - 1U;
        if ((*puVar3 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else {
      uVar8 = FUN_006cee10((int)param_1,(int)puVar3);
      puVar3[0x14] = uVar8;
    }
  }
  return;
}

