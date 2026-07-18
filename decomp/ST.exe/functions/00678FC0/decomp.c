
void __fastcall FUN_00678fc0(int param_1)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar7 = *(int *)(param_1 + 0x695);
  uVar8 = *(uint *)(iVar7 + 0xc);
  if (1 < (int)uVar8) {
    do {
      bVar2 = false;
      uVar9 = 0;
      if ((int)(uVar8 - 1) < 1) {
        return;
      }
      do {
        if (uVar9 < uVar8) {
          piVar5 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        uVar1 = uVar9 + 1;
        if (uVar1 < uVar8) {
          piVar3 = (int *)(*(int *)(iVar7 + 8) * uVar1 + *(int *)(iVar7 + 0x1c));
        }
        else {
          piVar3 = (int *)0x0;
        }
        if ((*piVar5 != 0) && (*piVar3 != 0)) {
          if ((iVar7 == 0) || (((int)uVar1 < 0 || ((int)uVar8 <= (int)uVar1)))) {
LAB_00679056:
            iVar6 = 0;
          }
          else {
            if (uVar1 < uVar8) {
              piVar5 = (int *)(*(int *)(iVar7 + 8) * uVar1 + *(int *)(iVar7 + 0x1c));
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
          if (((iVar7 == 0) || ((int)uVar9 < 0)) || ((int)uVar8 <= (int)uVar9)) {
LAB_00679087:
            iVar4 = 0;
          }
          else {
            if (uVar9 < uVar8) {
              piVar5 = (int *)(*(int *)(iVar7 + 8) * uVar9 + *(int *)(iVar7 + 0x1c));
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
            FUN_006b0cd0(iVar7,uVar9,uVar1);
            bVar2 = true;
          }
        }
        iVar7 = *(int *)(param_1 + 0x695);
        uVar8 = *(uint *)(iVar7 + 0xc);
        uVar9 = uVar1;
      } while ((int)uVar1 < (int)(uVar8 - 1));
    } while (bVar2);
  }
  return;
}

