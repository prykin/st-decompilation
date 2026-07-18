
void __fastcall thunk_FUN_00692600(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  
  piStack_c = param_1 + 0x655;
  iStack_14 = 0;
  do {
    FUN_00725e30(piStack_c + -1);
    iStack_18 = 6;
    piVar1 = piStack_c;
    do {
      iStack_10 = 6;
      do {
        iVar2 = 2;
        do {
          iVar5 = *piVar1;
          if (iVar5 != 0) {
            if (*(int *)(iVar5 + 0x25) == 0) {
              iVar4 = 0;
              if (0 < *(short *)(iVar5 + 0x23)) {
                do {
                  if (*(int *)(*piVar1 + 0x2d + iVar4 * 4) != 0) {
                    FUN_006ab060((undefined4 *)(*piVar1 + iVar4 * 4 + 0x2d));
                  }
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(short *)(*piVar1 + 0x23));
              }
              FUN_006ab060(piVar1);
            }
            else {
              FUN_00725e30(piVar1);
            }
          }
          piVar1 = piVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
      iStack_18 = iStack_18 + -1;
    } while (iStack_18 != 0);
    iStack_18 = 6;
    piVar1 = piStack_c + 0x48;
    do {
      iVar2 = 6;
      do {
        iVar5 = *piVar1;
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x25) == 0) {
            iVar4 = 0;
            if (0 < *(short *)(iVar5 + 0x23)) {
              do {
                if (*(int *)(*piVar1 + 0x2d + iVar4 * 4) != 0) {
                  FUN_006ab060((undefined4 *)(*piVar1 + iVar4 * 4 + 0x2d));
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *(short *)(*piVar1 + 0x23));
            }
            FUN_006ab060(piVar1);
          }
          else {
            FUN_00725e30(piVar1);
          }
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iStack_18 = iStack_18 + -1;
    } while (iStack_18 != 0);
    iStack_1c = 6;
    iStack_10 = iStack_14;
    do {
      iStack_18 = 0;
      do {
        iVar2 = iStack_10 + iStack_18;
        if (param_1[iVar2 + 0x6c2] != 0) {
          piVar1 = param_1 + iVar2 + 0x6c2;
          iVar5 = 0;
          if (0 < *(short *)(param_1[iVar2 + 0x6c2] + 0x23)) {
            do {
              if (*(int *)(*piVar1 + 0x2d + iVar5 * 4) != 0) {
                piVar1 = param_1 + iVar2 + 0x6c2;
                FUN_006ab060((undefined4 *)(param_1[iVar2 + 0x6c2] + 0x2d + iVar5 * 4));
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(short *)(*piVar1 + 0x23));
          }
          FUN_006ab060(param_1 + iVar2 + 0x6c2);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 6);
      iStack_10 = iStack_10 + 6;
      iStack_1c = iStack_1c + -1;
    } while (iStack_1c != 0);
    FUN_00725e30(piStack_c + 0x6c);
    iStack_14 = iStack_14 + 0x92;
    piStack_c = piStack_c + 0x92;
  } while (iStack_14 < 0x1b6);
  piStack_c = (int *)0x120;
  piVar1 = param_1;
  do {
    iVar2 = 0;
    do {
      iVar5 = 0x1e;
      do {
        if (*piVar1 != 0) {
          FUN_006ab060(piVar1);
        }
        piVar1 = piVar1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar5 = 10;
      piVar3 = param_1 + ((int)piStack_c + -0xb4 + iVar2) * 10;
      do {
        if (*piVar3 != 0) {
          FUN_006ab060(piVar3);
        }
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      piVar3 = param_1 + ((int)piStack_c + iVar2) * 5;
      if (piVar3 != (int *)0x0) {
        iVar5 = 5;
        do {
          if (*piVar3 != 0) {
            FUN_006ab060(piVar3);
          }
          piVar3 = piVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    piStack_c = (int *)((int)piStack_c + 6);
  } while ((int)piStack_c < 0x144);
  return;
}

