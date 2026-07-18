
int thunk_FUN_0069b910(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_8;
  
  iStack_8 = 0;
  iStack_28 = 0;
  iVar8 = 0;
  if (0 < param_4) {
    iVar9 = param_2 * 3;
    while (iVar8 = iStack_8, 0 < iVar9) {
      uVar5 = FUN_0072e6c0();
      iStack_18 = (int)uVar5 % param_2;
      if (param_6 < *(int *)(iStack_18 * 0x40 + 0x2c + param_1)) {
        iVar8 = iStack_18 * 0x40;
        bVar4 = true;
        iVar1 = *(int *)(iVar8 + 0x30 + param_1);
        iVar2 = *(int *)(iVar8 + 0x38 + param_1);
        iVar8 = iVar8 + param_1;
        iVar3 = *(int *)(iVar8 + 0x3c);
        iVar7 = *(int *)(iVar8 + 0x34);
        if ((iStack_8 != 0) && (iStack_14 = 0, 0 < iStack_8)) {
          piStack_1c = param_3;
          do {
            if (*piStack_1c == iStack_18) {
              bVar4 = false;
              break;
            }
            iVar6 = *piStack_1c * 0x40 + param_1;
            iVar6 = FUN_006acf90((iVar2 - iVar1) / 2 + iVar1,(iVar3 - iVar7) / 2 + iVar7,
                                 (*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x30)) / 2 +
                                 *(int *)(iVar6 + 0x30),
                                 (*(int *)(iVar6 + 0x3c) - *(int *)(iVar6 + 0x34)) / 2 +
                                 *(int *)(iVar6 + 0x34));
            if (iVar6 < param_5) {
              bVar4 = false;
              break;
            }
            iStack_14 = iStack_14 + 1;
            piStack_1c = piStack_1c + 1;
          } while (iStack_14 < iStack_8);
        }
        if (!bVar4) {
          if (iVar9 != 1 && -1 < iVar9 + -1) {
            return iStack_8;
          }
          iStack_24 = 0;
          iStack_20 = iStack_18;
          if (param_2 < 1) {
            return iStack_8;
          }
          do {
            iStack_20 = iStack_20 + 1;
            if (param_6 <= *(int *)(iVar8 + 0x2c)) {
              iVar9 = *(int *)(iVar8 + 0x38);
              iVar1 = *(int *)(iVar8 + 0x30);
              bVar4 = true;
              iVar2 = *(int *)(iVar8 + 0x3c);
              iVar3 = *(int *)(iVar8 + 0x34);
              iStack_14 = 0;
              if (iStack_8 < 1) {
LAB_0069bb27:
                iStack_18 = iStack_20;
                break;
              }
              piStack_1c = param_3;
              while (*piStack_1c != iStack_18) {
                iVar7 = param_1 + *piStack_1c * 0x40;
                iVar7 = FUN_006acf90(iVar9 / 2 + iVar1,iVar2 / 2 + iVar3,
                                     *(int *)(iVar7 + 0x38) / 2 + *(int *)(iVar7 + 0x30),
                                     *(int *)(iVar7 + 0x3c) / 2 + *(int *)(iVar7 + 0x34));
                if (iVar7 < param_5) break;
                iStack_14 = iStack_14 + 1;
                piStack_1c = piStack_1c + 1;
                if (iStack_8 <= iStack_14) goto LAB_0069bb27;
              }
              bVar4 = false;
            }
            iStack_24 = iStack_24 + 1;
          } while (iStack_24 < param_2);
          if (!bVar4) {
            return iStack_8;
          }
        }
        param_3[iStack_8] = iStack_18;
        iStack_8 = iStack_8 + 1;
        iStack_28 = iStack_28 + 1;
        iVar9 = param_2 * 3;
        if (param_4 <= iStack_28) {
          return iStack_8;
        }
      }
      else {
        iVar9 = iVar9 + -1;
      }
    }
  }
  return iVar8;
}

