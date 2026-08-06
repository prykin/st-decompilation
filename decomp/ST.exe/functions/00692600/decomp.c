#include "../../pseudocode_runtime.h"


void __fastcall FUN_00692600(int *param_1)

{
  int *piVar1;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
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
    piVar2 = local_c;
    do {
      local_10 = 6;
      do {
        iVar1 = 2;
        do {
          iVar4 = *piVar2;
          if (iVar4 != 0) {
            if (*(int *)(iVar4 + 0x25) == 0) {
              iVar3 = 0;
              if (0 < *(short *)(iVar4 + 0x23)) {
                do {
                  if (*(int *)(*piVar2 + 0x2d + iVar3 * 4) != 0) {
                    FreeAndNull((void *)(*piVar2 + iVar3 * 4 + 0x2d));
                  }
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *(short *)(*piVar2 + 0x23));
              }
              FreeAndNull(piVar2);
            }
            else {
              FUN_00725e30(piVar2);
            }
          }
          piVar2 = piVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 6;
    piVar2 = local_c + 0x48;
    do {
      iVar1 = 6;
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) {
          if (*(int *)(iVar4 + 0x25) == 0) {
            iVar3 = 0;
            if (0 < *(short *)(iVar4 + 0x23)) {
              do {
                if (*(int *)(*piVar2 + 0x2d + iVar3 * 4) != 0) {
                  FreeAndNull((void *)(*piVar2 + iVar3 * 4 + 0x2d));
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(short *)(*piVar2 + 0x23));
            }
            FreeAndNull(piVar2);
          }
          else {
            FUN_00725e30(piVar2);
          }
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = 6;
    local_10 = local_14;
    do {
      local_18 = 0;
      do {
        iVar1 = local_10 + local_18;
        if (param_1[iVar1 + 0x6c2] != 0) {
          piVar2 = param_1 + iVar1 + 0x6c2;
          iVar4 = 0;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (0 < *(short *)(param_1[iVar1 + 0x6c2] + 0x23)) {
            do {
              if (*(int *)(*piVar2 + 0x2d + iVar4 * 4) != 0) {
                piVar2 = param_1 + iVar1 + 0x6c2;
                FreeAndNull((void *)(param_1[iVar1 + 0x6c2] + 0x2d + iVar4 * 4));
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(short *)(*piVar2 + 0x23));
          }
          FreeAndNull(param_1 + iVar1 + 0x6c2);
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
    iVar1 = 0;
    do {
      iVar4 = 0x1e;
      do {
        if (*piVar1 != 0) {
          FreeAndNull(piVar1);
        }
        piVar1 = piVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar4 = 10;
      piVar2 = param_1 + ((int)local_c + -0xb4 + iVar1) * 10;
      do {
        if (*piVar2 != 0) {
          FreeAndNull(piVar2);
        }
        piVar2 = piVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      piVar2 = param_1 + ((int)local_c + iVar1) * 5;
      if (piVar2 != nullptr) {
        iVar4 = 5;
        do {
          if (*piVar2 != 0) {
            FreeAndNull(piVar2);
          }
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    local_c = (int *)((int)local_c + 6);
  } while ((int)local_c < 0x144);
  return;
}

