
void FUN_00496b30(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fb270, param_1) (runtime stride) */
  if ((param_1 < PTR_007fb270->count) &&
     (piVar2 = (int *)(PTR_007fb270->elementSize * param_1 + (int)PTR_007fb270->data),
     piVar2 != (int *)0x0)) {
    iVar3 = piVar2[1] + -7;
    if (iVar3 < 0) {
      iVar6 = -iVar3;
      iVar3 = 0;
    }
    else {
      iVar6 = 0;
    }
    uVar1 = *piVar2 - 7;
    if ((int)uVar1 < 0) {
      param_1 = 0;
      iVar5 = -uVar1;
    }
    else {
      iVar5 = 0;
      param_1 = uVar1;
    }
    local_8 = piVar2[1] + 8;
    if (g_worldGrid.sizeY < local_8) {
      local_8 = (int)g_worldGrid.sizeY;
    }
    local_c = *piVar2 + 8;
    if (g_worldGrid.sizeX < local_c) {
      local_c = (int)g_worldGrid.sizeX;
    }
    if (iVar3 < local_8) {
      local_10 = &DAT_007abc64 + iVar5 + iVar6 * 0xf;
      do {
        if ((int)param_1 < local_c) {
          iVar6 = g_worldGrid.sizeX * iVar3 + param_1;
          iVar5 = local_c - param_1;
          pcVar4 = local_10;
          do {
            if (*pcVar4 != '\0') {
              if (param_3 == 0) {
                *(char *)((&DAT_007fb24c)[param_2] + iVar6) =
                     *(char *)((&DAT_007fb24c)[param_2] + iVar6) + -1;
                *(char *)(iVar6 + DAT_007fb26c) = *(char *)(iVar6 + DAT_007fb26c) + -1;
              }
              else {
                *(char *)((&DAT_007fb24c)[param_2] + iVar6) =
                     *(char *)((&DAT_007fb24c)[param_2] + iVar6) + '\x01';
                if (*(char *)(iVar6 + DAT_007fb26c) != -1) {
                  *(char *)(iVar6 + DAT_007fb26c) = *(char *)(iVar6 + DAT_007fb26c) + '\x01';
                }
              }
            }
            pcVar4 = pcVar4 + 1;
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + 1;
        local_10 = local_10 + 0xf;
      } while (iVar3 < local_8);
    }
  }
  return;
}

