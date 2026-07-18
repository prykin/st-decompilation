
void thunk_FUN_00496b30(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcStack_10;
  int iStack_c;
  int iStack_8;
  
  if ((param_1 < *(uint *)(DAT_007fb270 + 0xc)) &&
     (piVar2 = (int *)(*(int *)(DAT_007fb270 + 8) * param_1 + *(int *)(DAT_007fb270 + 0x1c)),
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
    iStack_8 = piVar2[1] + 8;
    if (DAT_007fb242 < iStack_8) {
      iStack_8 = (int)DAT_007fb242;
    }
    iStack_c = *piVar2 + 8;
    if (DAT_007fb240 < iStack_c) {
      iStack_c = (int)DAT_007fb240;
    }
    if (iVar3 < iStack_8) {
      pcStack_10 = &DAT_007abc64 + iVar5 + iVar6 * 0xf;
      do {
        if ((int)param_1 < iStack_c) {
          iVar6 = DAT_007fb240 * iVar3 + param_1;
          iVar5 = iStack_c - param_1;
          pcVar4 = pcStack_10;
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
        pcStack_10 = pcStack_10 + 0xf;
      } while (iVar3 < iStack_8);
    }
  }
  return;
}

