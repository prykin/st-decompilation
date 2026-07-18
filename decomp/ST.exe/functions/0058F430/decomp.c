
bool __fastcall FUN_0058f430(int param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int local_14;
  int local_c;
  
  local_14 = 0x7fff;
  *(undefined4 *)(param_1 + 0x23d) = 0;
  *(undefined4 *)(param_1 + 0x249) = 0xff;
  iVar7 = *(short *)(param_1 + 0x47) + -4;
  if (iVar7 < *(short *)(param_1 + 0x47) + 4) {
    do {
      if (((iVar7 <= DAT_007fb240) && (-1 < iVar7)) &&
         (iVar10 = *(short *)(param_1 + 0x49) + -4, sVar8 = DAT_007fb240,
         iVar10 < *(short *)(param_1 + 0x49) + 4)) {
        do {
          if ((iVar10 <= DAT_007fb242) && (-1 < iVar10)) {
            local_c = 0;
            do {
              sVar6 = (short)iVar7;
              if ((((-1 < sVar6) && (sVar6 < sVar8)) &&
                  ((sVar9 = (short)iVar10, -1 < sVar9 &&
                   ((((sVar9 < DAT_007fb242 && (sVar2 = (short)local_c, -1 < sVar2)) &&
                     (sVar2 < DAT_007fb244)) &&
                    ((piVar1 = *(int **)(DAT_007fb248 +
                                        ((int)sVar9 * (int)sVar8 + (int)sVar2 * (int)DAT_007fb246 +
                                        (int)sVar6) * 8), piVar1 != (int *)0x0 &&
                     (piVar1[8] == 0x14)))))))) &&
                 (iVar3 = (**(code **)(*piVar1 + 0x2c))(), iVar3 == 0x15)) {
                iVar3 = *(short *)(param_1 + 0x47) - iVar7;
                if (iVar3 < 0) {
                  iVar3 = -iVar3;
                }
                iVar4 = *(short *)(param_1 + 0x49) - iVar10;
                if (iVar4 < 0) {
                  iVar4 = -iVar4;
                }
                iVar5 = *(short *)(param_1 + 0x4b) - local_c;
                if (iVar5 < 0) {
                  iVar5 = -iVar5;
                }
                iVar3 = iVar5 + iVar4 + iVar3;
                if (iVar3 < local_14) {
                  *(undefined2 *)(param_1 + 0x24d) = *(undefined2 *)((int)piVar1 + 0x32);
                  *(int *)(param_1 + 0x249) = piVar1[9];
                  *(short *)(param_1 + 0x231) = sVar6;
                  *(short *)(param_1 + 0x233) = sVar9;
                  *(short *)(param_1 + 0x235) = sVar2;
                  *(undefined4 *)(param_1 + 0x23d) = 1;
                  local_14 = iVar3;
                }
              }
              local_c = local_c + 1;
              sVar8 = DAT_007fb240;
            } while (local_c < 5);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(short *)(param_1 + 0x49) + 4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(short *)(param_1 + 0x47) + 4);
  }
  return *(int *)(param_1 + 0x23d) != 0;
}

