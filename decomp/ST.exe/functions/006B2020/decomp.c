
void FUN_006b2020(AnonShape_006B2020_F949DD3E *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  AnonNested_006B2020_01A0_B4F1EFF3 *pAVar7;
  int local_EAX_79;
  int uVar7;
  int uVar8;
  int *piVar8;
  int iVar9;

  iVar2 = param_1->field_01AC;
  if ((param_2 < param_1->field_01A0) &&
     (puVar3 = *(uint **)(param_1->field_01B0 + param_2 * 4), (*puVar3 & 0x80000) == 0)) {
    uVar4 = puVar3[0x12];
    if ((int)param_3 < (int)puVar3[0x11]) {
      puVar3[0x11] = param_3;
      local_EAX_79 = FUN_006cee10((int)param_1,(int)puVar3);
      puVar3[0x14] = local_EAX_79;
      if ((0 < (int)uVar4) && ((int)param_3 < *(int *)(*(int *)(iVar2 + -4 + uVar4 * 4) + 0x44))) {
        if ((*puVar3 & 0x4000) == 0) {
          iVar9 = uVar4 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              puVar6 = (uint *)*piVar8;
              if (((int)puVar6[0x11] <= (int)param_3) &&
                 ((param_3 != puVar6[0x11] || ((*puVar6 & 0x4000) == 0)))) break;
              uVar4 = iVar9 + 1;
              piVar8[1] = (int)puVar6;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              puVar6[0x12] = uVar4;
            } while (-1 < iVar9);
          }
        }
        else {
          iVar9 = uVar4 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              iVar5 = *piVar8;
              if (*(int *)(iVar5 + 0x44) <= (int)param_3) break;
              iVar1 = iVar9 + 1;
              piVar8[1] = iVar5;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              *(int *)(iVar5 + 0x48) = iVar1;
            } while (-1 < iVar9);
          }
        }
        *(uint **)(iVar2 + (iVar9 + 1U) * 4) = puVar3;
        puVar3[0x12] = iVar9 + 1U;
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
      pAVar7 = param_1->field_01A0;
      if (((int)uVar4 < (int)((int)&pAVar7[-1].field_0048 + 3)) &&
         (iVar9 = uVar4 + 1, *(int *)(*(int *)(iVar2 + 4 + uVar4 * 4) + 0x44) < (int)param_3)) {
        if ((*puVar3 & 0x4000) == 0) {
          if (iVar9 < (int)pAVar7) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              puVar6 = (uint *)*piVar8;
              if (((int)param_3 <= (int)puVar6[0x11]) &&
                 ((param_3 != puVar6[0x11] || ((*puVar6 & 0x4000) == 0)))) break;
              piVar8[-1] = (int)puVar6;
              puVar6[0x12] = iVar9 - 1;
              iVar9 = iVar9 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar9 < (int)param_1->field_01A0);
          }
        }
        else if (iVar9 < (int)pAVar7) {
          piVar8 = (int *)(iVar2 + iVar9 * 4);
          do {
            iVar5 = *piVar8;
            if ((int)param_3 <= *(int *)(iVar5 + 0x44)) break;
            piVar8[-1] = iVar5;
            *(int *)(iVar5 + 0x48) = iVar9 + -1;
            iVar9 = iVar9 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar9 < (int)param_1->field_01A0);
        }
        *(uint **)(iVar2 + (iVar9 - 1U) * 4) = puVar3;
        puVar3[0x12] = iVar9 - 1U;
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

