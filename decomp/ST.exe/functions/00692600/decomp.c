
void __fastcall FUN_00692600(int *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void **ppvVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void **local_c;
  
  local_c = (void **)(param_1 + 0x655);
  local_14 = 0;
  do {
    FUN_00725e30((int *)(local_c + -1));
    local_18 = 6;
    ppvVar2 = local_c;
    do {
      local_10 = 6;
      do {
        iVar3 = 2;
        do {
          pvVar1 = *ppvVar2;
          if (pvVar1 != (void *)0x0) {
            if (*(int *)((int)pvVar1 + 0x25) == 0) {
              iVar6 = 0;
              if (0 < *(short *)((int)pvVar1 + 0x23)) {
                do {
                  if (*(int *)((int)*ppvVar2 + iVar6 * 4 + 0x2d) != 0) {
                    FreeAndNull((void **)((int)*ppvVar2 + iVar6 * 4 + 0x2d));
                  }
                  iVar6 = iVar6 + 1;
                } while (iVar6 < *(short *)((int)*ppvVar2 + 0x23));
              }
              FreeAndNull(ppvVar2);
            }
            else {
              FUN_00725e30((int *)ppvVar2);
            }
          }
          ppvVar2 = ppvVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 6;
    ppvVar2 = local_c + 0x48;
    do {
      iVar3 = 6;
      do {
        pvVar1 = *ppvVar2;
        if (pvVar1 != (void *)0x0) {
          if (*(int *)((int)pvVar1 + 0x25) == 0) {
            iVar6 = 0;
            if (0 < *(short *)((int)pvVar1 + 0x23)) {
              do {
                if (*(int *)((int)*ppvVar2 + iVar6 * 4 + 0x2d) != 0) {
                  FreeAndNull((void **)((int)*ppvVar2 + iVar6 * 4 + 0x2d));
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(short *)((int)*ppvVar2 + 0x23));
            }
            FreeAndNull(ppvVar2);
          }
          else {
            FUN_00725e30((int *)ppvVar2);
          }
        }
        ppvVar2 = ppvVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_1c = 6;
    local_10 = local_14;
    do {
      local_18 = 0;
      do {
        iVar3 = local_10 + local_18;
        if (param_1[iVar3 + 0x6c2] != 0) {
          piVar4 = param_1 + iVar3 + 0x6c2;
          iVar6 = 0;
          if (0 < *(short *)(param_1[iVar3 + 0x6c2] + 0x23)) {
            do {
              if (*(int *)(*piVar4 + 0x2d + iVar6 * 4) != 0) {
                piVar4 = param_1 + iVar3 + 0x6c2;
                FreeAndNull((void **)(param_1[iVar3 + 0x6c2] + 0x2d + iVar6 * 4));
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(short *)(*piVar4 + 0x23));
          }
          FreeAndNull((void **)(param_1 + iVar3 + 0x6c2));
        }
        local_18 = local_18 + 1;
      } while (local_18 < 6);
      local_10 = local_10 + 6;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    FUN_00725e30((int *)(local_c + 0x6c));
    local_14 = local_14 + 0x92;
    local_c = local_c + 0x92;
  } while (local_14 < 0x1b6);
  local_c = (void **)0x120;
  ppvVar2 = (void **)param_1;
  do {
    iVar3 = 0;
    do {
      iVar6 = 0x1e;
      do {
        if (*ppvVar2 != (void *)0x0) {
          FreeAndNull(ppvVar2);
        }
        ppvVar2 = ppvVar2 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar6 = 10;
      ppvVar5 = (void **)(param_1 + ((int)local_c + -0xb4 + iVar3) * 10);
      do {
        if (*ppvVar5 != (void *)0x0) {
          FreeAndNull(ppvVar5);
        }
        ppvVar5 = ppvVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      ppvVar5 = (void **)(param_1 + ((int)local_c + iVar3) * 5);
      if (ppvVar5 != (void **)0x0) {
        iVar6 = 5;
        do {
          if (*ppvVar5 != (void *)0x0) {
            FreeAndNull(ppvVar5);
          }
          ppvVar5 = ppvVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    local_c = (void **)((int)local_c + 6);
  } while ((int)local_c < 0x144);
  return;
}

