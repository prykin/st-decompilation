
void FUN_006b2020(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x1ac);
  if ((param_2 < *(uint *)(param_1 + 0x1a0)) &&
     (puVar3 = *(uint **)(*(int *)(param_1 + 0x1b0) + param_2 * 4), (*puVar3 & 0x80000) == 0)) {
    uVar7 = puVar3[0x12];
    if ((int)param_3 < (int)puVar3[0x11]) {
      puVar3[0x11] = param_3;
      uVar5 = FUN_006cee10(param_1,(int)puVar3);
      puVar3[0x14] = uVar5;
      if ((0 < (int)uVar7) && ((int)param_3 < *(int *)(*(int *)(iVar2 + -4 + uVar7 * 4) + 0x44))) {
        if ((*puVar3 & 0x4000) == 0) {
          iVar9 = uVar7 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              puVar4 = (uint *)*piVar8;
              if (((int)puVar4[0x11] <= (int)param_3) &&
                 ((param_3 != puVar4[0x11] || ((*puVar4 & 0x4000) == 0)))) break;
              uVar7 = iVar9 + 1;
              piVar8[1] = (int)puVar4;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              puVar4[0x12] = uVar7;
            } while (-1 < iVar9);
          }
        }
        else {
          iVar9 = uVar7 - 1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar9 * 4);
            do {
              iVar6 = *piVar8;
              if (*(int *)(iVar6 + 0x44) <= (int)param_3) break;
              iVar1 = iVar9 + 1;
              piVar8[1] = iVar6;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              *(int *)(iVar6 + 0x48) = iVar1;
            } while (-1 < iVar9);
          }
        }
        *(uint **)(iVar2 + (iVar9 + 1U) * 4) = puVar3;
        puVar3[0x12] = iVar9 + 1U;
        if ((*puVar3 & 0x20) != 0) {
          *(undefined4 *)(param_1 + 0x1b4) = 1;
          return;
        }
      }
    }
    else if ((int)puVar3[0x11] < (int)param_3) {
      puVar3[0x11] = param_3;
      uVar5 = FUN_006cee10(param_1,(int)puVar3);
      puVar3[0x14] = uVar5;
      iVar9 = *(int *)(param_1 + 0x1a0);
      if (((int)uVar7 < iVar9 + -1) &&
         (iVar6 = uVar7 + 1, *(int *)(*(int *)(iVar2 + 4 + uVar7 * 4) + 0x44) < (int)param_3)) {
        if ((*puVar3 & 0x4000) == 0) {
          if (iVar6 < iVar9) {
            piVar8 = (int *)(iVar2 + iVar6 * 4);
            do {
              puVar4 = (uint *)*piVar8;
              if (((int)param_3 <= (int)puVar4[0x11]) &&
                 ((param_3 != puVar4[0x11] || ((*puVar4 & 0x4000) == 0)))) break;
              piVar8[-1] = (int)puVar4;
              puVar4[0x12] = iVar6 - 1;
              iVar6 = iVar6 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar6 < *(int *)(param_1 + 0x1a0));
          }
        }
        else if (iVar6 < iVar9) {
          piVar8 = (int *)(iVar2 + iVar6 * 4);
          do {
            iVar9 = *piVar8;
            if ((int)param_3 <= *(int *)(iVar9 + 0x44)) break;
            piVar8[-1] = iVar9;
            *(int *)(iVar9 + 0x48) = iVar6 + -1;
            iVar6 = iVar6 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar6 < *(int *)(param_1 + 0x1a0));
        }
        *(uint **)(iVar2 + (iVar6 - 1U) * 4) = puVar3;
        puVar3[0x12] = iVar6 - 1U;
        if ((*puVar3 & 0x20) != 0) {
          *(undefined4 *)(param_1 + 0x1b4) = 1;
          return;
        }
      }
    }
    else {
      uVar7 = FUN_006cee10(param_1,(int)puVar3);
      puVar3[0x14] = uVar7;
    }
  }
  return;
}

