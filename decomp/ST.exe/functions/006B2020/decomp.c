#include "../../pseudocode_runtime.h"


void FUN_006b2020(RecoveredRecordView_006B2020_4DD6C4AD *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  RecoveredRecord_006CEE10_585981DD *pRVar4;
  uint *puVar5;
  AnonNested_006B2020_01A0_B4F1EFF3 *pAVar6;
  int local_EAX_79;
  int uVar7;
  int iVar7;
  int uVar8;
  int *piVar8;
  int iVar9;

  iVar3 = param_1->field_01AC;
  if ((param_2 < param_1->field_01A0) &&
     (pRVar4 = *(RecoveredRecord_006CEE10_585981DD **)(param_1->field_01B0 + param_2 * 4),
     (*(uint *)pRVar4 & 0x80000) == 0)) {
    iVar9 = *(int *)&pRVar4->field_0x48;
    if ((int)param_3 < pRVar4->field_0044) {
      pRVar4->field_0044 = param_3;

      local_EAX_79 = FUN_006cee10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = local_EAX_79;
      if ((0 < iVar9) && ((int)param_3 < *(int *)(*(int *)(iVar3 + -4 + iVar9 * 4) + 0x44))) {
        if ((*(uint *)pRVar4 & 0x4000) == 0) {
          iVar9 = iVar9 + -1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar3 + iVar9 * 4);
            do {
              puVar5 = (uint *)*piVar8;
              if (((int)puVar5[0x11] <= (int)param_3) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              uVar2 = iVar9 + 1;
              piVar8[1] = (int)puVar5;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              puVar5[0x12] = uVar2;
            } while (-1 < iVar9);
          }
        }
        else {
          iVar9 = iVar9 + -1;
          if (-1 < iVar9) {
            piVar8 = (int *)(iVar3 + iVar9 * 4);
            do {
              iVar7 = *piVar8;
              if (STField<int>(iVar7,0x44) <= (int)param_3) break;
              iVar1 = iVar9 + 1;
              piVar8[1] = iVar7;
              iVar9 = iVar9 + -1;
              piVar8 = piVar8 + -1;
              STField<int>(iVar7,0x48) = iVar1;
            } while (-1 < iVar9);
          }
        }
        *(RecoveredRecord_006CEE10_585981DD **)(iVar3 + (iVar9 + 1) * 4) = pRVar4;
        *(int *)&pRVar4->field_0x48 = iVar9 + 1;
        if ((*(byte *)pRVar4 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else if (pRVar4->field_0044 < (int)param_3) {
      pRVar4->field_0044 = param_3;

      uVar7 = FUN_006cee10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = uVar7;
      pAVar6 = param_1->field_01A0;
      if ((iVar9 < (int)((int)&pAVar6[-1].field_0048 + 3)) &&
         (iVar7 = iVar9 + 1, *(int *)(*(int *)(iVar3 + 4 + iVar9 * 4) + 0x44) < (int)param_3)) {
        if ((*(uint *)pRVar4 & 0x4000) == 0) {
          if (iVar7 < (int)pAVar6) {
            piVar8 = (int *)(iVar3 + iVar7 * 4);
            do {
              puVar5 = (uint *)*piVar8;
              if (((int)param_3 <= (int)puVar5[0x11]) &&
                 ((param_3 != puVar5[0x11] || ((*puVar5 & 0x4000) == 0)))) break;
              piVar8[-1] = (int)puVar5;
              puVar5[0x12] = iVar7 - 1;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (iVar7 < (int)param_1->field_01A0);
          }
        }
        else if (iVar7 < (int)pAVar6) {
          piVar8 = (int *)(iVar3 + iVar7 * 4);
          do {
            iVar9 = *piVar8;
            if ((int)param_3 <= STField<int>(iVar9,0x44)) break;
            piVar8[-1] = iVar9;
            STField<int>(iVar9,0x48) = iVar7 + -1;
            iVar7 = iVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar7 < (int)param_1->field_01A0);
        }
        *(RecoveredRecord_006CEE10_585981DD **)(iVar3 + (iVar7 + -1) * 4) = pRVar4;
        *(int *)&pRVar4->field_0x48 = iVar7 + -1;
        if ((*(byte *)pRVar4 & 0x20) != 0) {
          param_1->field_01B4 = 1;
          return;
        }
      }
    }
    else {

      uVar8 = FUN_006cee10((int)param_1,pRVar4);
      *(int *)(pRVar4 + 1) = uVar8;
    }
  }
  return;
}

