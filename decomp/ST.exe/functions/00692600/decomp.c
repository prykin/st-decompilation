
void __fastcall FUN_00692600(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  
  local_c = param_1 + 0x655;
  local_14 = 0;
  do {
    FUN_00725e30(local_c + -1);
    local_18 = 6;
    piVar1 = local_c;
    do {
      local_10 = 6;
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
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 6;
    piVar1 = local_c + 0x48;
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
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = 6;
    local_10 = local_14;
    do {
      local_18 = 0;
      do {
        iVar2 = local_10 + local_18;
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
        local_18 = local_18 + 1;
      } while (local_18 < 6);
      local_10 = local_10 + 6;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    FUN_00725e30(local_c + 0x6c);
    local_14 = local_14 + 0x92;
    local_c = local_c + 0x92;
  } while (local_14 < 0x1b6);
  local_c = (int *)0x120;
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
      piVar3 = param_1 + ((int)local_c + -0xb4 + iVar2) * 10;
      do {
        if (*piVar3 != 0) {
          FUN_006ab060(piVar3);
        }
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      piVar3 = param_1 + ((int)local_c + iVar2) * 5;
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
    local_c = (int *)((int)local_c + 6);
  } while ((int)local_c < 0x144);
  return;
}

