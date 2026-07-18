
undefined4 __cdecl thunk_FUN_004b2d10(byte param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if ((param_2 < 0x32) || (0x73 < param_2)) {
    if (param_2 < 1) {
      return 0;
    }
    if (0x28 < param_2) {
      return 0;
    }
    iStack_24 = *(int *)(&DAT_007dfbac + param_2 * 4);
  }
  else {
    uVar5 = thunk_FUN_004406c0(param_1);
    iStack_24 = *(int *)(&DAT_007e3f20 + ((uVar5 & 0xff) + param_2 * 3) * 4);
  }
  iStack_34 = 0;
  if (DAT_007951b0 / 0xc9 < 1) {
    return 0;
  }
  iStack_c = param_3;
  iStack_10 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  iStack_18 = 0;
  iStack_14 = 0;
  do {
    iStack_30 = 0;
    if (0 < iStack_10) {
      do {
        if (iStack_30 < iStack_34 * 2) {
          iVar7 = (iStack_30 - iStack_34) + param_3;
          param_2 = (param_4 - param_3) + iStack_c;
        }
        else if (iStack_30 < iStack_14) {
          iVar7 = param_3 + iStack_34;
          param_2 = iStack_30 + iStack_34 * -3 + param_4;
        }
        else {
          if (iStack_30 < iStack_18) {
            iVar7 = (iStack_1c - iStack_30) + param_3;
            iVar6 = iStack_34;
          }
          else {
            iVar6 = iStack_20 - iStack_30;
            iVar7 = iStack_c;
          }
          param_2 = iVar6 + param_4;
        }
        if (((((-1 < iVar7) && (iVar7 < DAT_007fb240)) && (-1 < param_2)) &&
            ((param_2 < DAT_007fb242 &&
             (iVar6 = FUN_006aced8(param_3,param_4,iVar7,param_2), iVar6 <= DAT_007951b0 / 0xc9))))
           && (iStack_2c = 0, 0 < DAT_007fb244)) {
          do {
            piVar3 = *(int **)(DAT_007fb248 +
                              (DAT_007fb240 * param_2 + iVar7 + DAT_007fb246 * iStack_2c) * 8);
            if ((((piVar3 != (int *)0x0) && ((uint)piVar3[9] < 8)) &&
                ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar3[9] * 0x51] < 8)))) &&
               (iVar6 = (**(code **)(*piVar3 + 0x2c))(), iVar6 == 0x73)) {
              bVar1 = *(byte *)(piVar3 + 9);
              if (*(char *)(DAT_00806728 + 0x146f) == '\0') {
                if (bVar1 == param_1) {
LAB_004b2fd4:
                  iVar6 = 0;
                }
                else {
                  uVar5 = (uint)bVar1;
                  uVar4 = (uint)param_1;
                  cVar2 = *(char *)(uVar4 + uVar5 * 8 + 0x142f + DAT_00806728);
                  if ((cVar2 == '\0') &&
                     (*(char *)(uVar5 + uVar4 * 8 + 0x142f + DAT_00806728) == '\0')) {
                    iVar6 = -2;
                  }
                  else if ((cVar2 == '\x01') &&
                          (*(char *)(uVar5 + uVar4 * 8 + 0x142f + DAT_00806728) == '\0')) {
                    iVar6 = -1;
                  }
                  else if ((cVar2 == '\0') &&
                          (*(char *)(uVar5 + uVar4 * 8 + 0x142f + DAT_00806728) == '\x01')) {
                    iVar6 = 1;
                  }
                  else {
                    if ((cVar2 != '\x01') ||
                       (*(char *)(uVar5 + uVar4 * 8 + 0x142f + DAT_00806728) != '\x01'))
                    goto LAB_004b2fd4;
                    iVar6 = 2;
                  }
                }
                bVar8 = iVar6 < 0;
              }
              else {
                bVar8 = *(char *)((uint)param_1 * 0x51 + 0x11ca + DAT_00806728) !=
                        *(char *)((uint)bVar1 * 0x51 + 0x11ca + DAT_00806728);
              }
              if ((bVar8) && (iStack_24 <= piVar3[0x134])) {
                iVar7 = piVar3[0x134];
                piVar3[0x134] = iVar7 - iStack_24;
                if (iVar7 - iStack_24 < 0) {
                  piVar3[0x134] = 0;
                }
                piVar3[0x135] = *(int *)(DAT_00802a38 + 0xe4);
                return 1;
              }
            }
            iStack_2c = iStack_2c + 1;
          } while (iStack_2c < DAT_007fb244);
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < iStack_10);
    }
    iStack_14 = iStack_14 + 4;
    iStack_1c = iStack_1c + 5;
    iStack_34 = iStack_34 + 1;
    iStack_18 = iStack_18 + 6;
    iStack_c = iStack_c + -1;
    iStack_10 = iStack_10 + 8;
    iStack_20 = iStack_20 + 7;
    if (DAT_007951b0 / 0xc9 <= iStack_34) {
      return 0;
    }
  } while( true );
}

