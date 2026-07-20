
void __fastcall FUN_00678fc0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  AnonShape_006B0CD0_C8D121FA *pAVar7;
  uint uVar8;
  uint uVar9;
  
  pAVar7 = *(AnonShape_006B0CD0_C8D121FA **)(param_1 + 0x695);
  uVar8 = pAVar7->field_000C;
  if (1 < (int)uVar8) {
    do {
      bVar2 = false;
      uVar9 = 0;
      if ((int)(uVar8 - 1) < 1) {
        return;
      }
      do {
        if (uVar9 < uVar8) {
          piVar5 = (int *)(pAVar7->field_0008 * uVar9 + pAVar7->field_001C);
        }
        else {
          piVar5 = (int *)0x0;
        }
        uVar1 = uVar9 + 1;
        if (uVar1 < uVar8) {
          piVar3 = (int *)(pAVar7->field_0008 * uVar1 + pAVar7->field_001C);
        }
        else {
          piVar3 = (int *)0x0;
        }
        if ((*piVar5 != 0) && (*piVar3 != 0)) {
          if ((pAVar7 == (AnonShape_006B0CD0_C8D121FA *)0x0) ||
             (((int)uVar1 < 0 || ((int)uVar8 <= (int)uVar1)))) {
LAB_00679056:
            iVar6 = 0;
          }
          else {
            if (uVar1 < uVar8) {
              piVar5 = (int *)(pAVar7->field_0008 * uVar1 + pAVar7->field_001C);
            }
            else {
              piVar5 = (int *)0x0;
            }
            if (piVar5[1] == 0) {
              iVar6 = *piVar5;
            }
            else {
              if (*piVar5 == 0) goto LAB_00679056;
              iVar6 = *piVar5 + 0x20;
            }
          }
          if (((pAVar7 == (AnonShape_006B0CD0_C8D121FA *)0x0) || ((int)uVar9 < 0)) ||
             ((int)uVar8 <= (int)uVar9)) {
LAB_00679087:
            iVar4 = 0;
          }
          else {
            if (uVar9 < uVar8) {
              piVar5 = (int *)(pAVar7->field_0008 * uVar9 + pAVar7->field_001C);
            }
            else {
              piVar5 = (int *)0x0;
            }
            iVar4 = *piVar5;
            if (piVar5[1] != 0) {
              if (iVar4 == 0) goto LAB_00679087;
              iVar4 = iVar4 + 0x20;
            }
          }
          if (*(short *)(iVar4 + 0x5c) < *(short *)(iVar6 + 0x5c)) {
            FUN_006b0cd0(pAVar7,uVar9,uVar1);
            bVar2 = true;
          }
        }
        pAVar7 = *(AnonShape_006B0CD0_C8D121FA **)(param_1 + 0x695);
        uVar8 = pAVar7->field_000C;
        uVar9 = uVar1;
      } while ((int)uVar1 < (int)(uVar8 - 1));
    } while (bVar2);
  }
  return;
}

