
int * __fastcall thunk_FUN_00586320(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  bool bVar14;
  int iStack_44;
  int iStack_40;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_c;
  
  sVar12 = *(short *)(param_1 + 0x41);
  if (sVar12 < 0) {
    iVar13 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                    (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar13 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                         (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  sVar12 = *(short *)(param_1 + 0x43);
  if (sVar12 < 0) {
    iStack_14 = (short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                       (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_14 = (int)(short)((sVar12 / 0xc9 + (sVar12 >> 0xf)) -
                            (short)((longlong)(int)sVar12 * 0x28c1979 >> 0x3f));
  }
  *(undefined2 *)(param_1 + 0x273) = 0;
  *(undefined4 *)(param_1 + 0x26f) = 0xff;
  *(undefined4 *)(param_1 + 0x231) = 1;
  iVar9 = iVar13 + 5;
  iStack_40 = iVar13 + -5;
  if (DAT_007fb240 <= iVar9) {
    iVar9 = DAT_007fb240 + -1;
  }
  if (iStack_40 < 0) {
    iStack_40 = 0;
  }
  iVar10 = iStack_14 + 5;
  iStack_44 = iStack_14 + -5;
  if (DAT_007fb242 <= iVar10) {
    iVar10 = DAT_007fb242 + -1;
  }
  if (iStack_44 < 0) {
    iStack_44 = 0;
  }
  if ((((iVar13 <= iVar9) && (iStack_14 <= iVar10)) && (iStack_40 <= iVar13)) &&
     (iStack_44 <= iStack_14)) {
    iStack_1c = 0;
    do {
      sVar12 = (short)iVar13;
      if ((((((-1 < sVar12) && (sVar12 < DAT_007fb240)) &&
            ((-1 < (short)iStack_14 &&
             (((short)iStack_14 < DAT_007fb242 && (sVar11 = (short)iStack_1c, -1 < sVar11)))))) &&
           (sVar11 < DAT_007fb244)) &&
          (((piVar4 = *(int **)(DAT_007fb248 +
                               ((int)(short)iStack_14 * (int)DAT_007fb240 +
                                (int)sVar11 * (int)DAT_007fb246 + (int)sVar12) * 8),
            piVar4 != (int *)0x0 &&
            (((piVar4[8] == 1000 || (piVar4[8] == 0x14)) &&
             (iVar7 = (**(code **)(*piVar4 + 0xf0))(), iVar7 != 0)))) && ((uint)piVar4[9] < 8)))) &&
         (((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar4[9] * 0x51] < 8)) &&
          (iVar7 = (**(code **)(*piVar4 + 0xf8))(), iVar7 != 0)))) {
        bVar1 = *(byte *)(piVar4 + 9);
        bVar2 = *(byte *)(param_1 + 0x24);
        iVar7 = *(int *)(param_1 + 0x10);
        if (*(char *)(iVar7 + 0x146f) == '\0') {
          if (bVar1 == bVar2) {
            iVar7 = 0;
          }
          else {
            uVar5 = (uint)bVar1;
            uVar6 = (uint)bVar2;
            cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
            if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -2;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
              iVar7 = -1;
            }
            else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
              iVar7 = 1;
            }
            else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
            {
              iVar7 = 2;
            }
            else {
              iVar7 = 0;
            }
          }
          bVar14 = iVar7 < 0;
        }
        else {
          bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                   *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
        }
        if (bVar14) {
          *(undefined4 *)(param_1 + 0x231) = 0;
          *(undefined4 *)(param_1 + 599) = 0;
          *(undefined2 *)(param_1 + 0x273) = *(undefined2 *)((int)piVar4 + 0x32);
          *(int *)(param_1 + 0x26f) = piVar4[9];
          return piVar4;
        }
      }
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < 5);
  }
  iStack_1c = 0;
  do {
    iStack_c = iStack_14 + 1;
    iStack_18 = iVar13 + 1;
    iStack_34 = 1;
    iStack_24 = 0;
    iStack_28 = 3;
    iStack_2c = DAT_007cb95c;
    iStack_30 = DAT_007cb968;
LAB_00586642:
    iStack_18 = iStack_18 + iStack_2c;
    iStack_c = iStack_c + iStack_30;
    iVar7 = iStack_18 - iVar13;
    if (iVar7 < 0) {
      iVar7 = iVar13 - iStack_18;
    }
    if (iVar7 <= iStack_34) {
      iVar7 = iStack_c - iStack_14;
      if (iVar7 < 0) {
        iVar7 = iStack_14 - iStack_c;
      }
      if (iStack_34 < iVar7) goto LAB_0058667b;
      goto LAB_00586713;
    }
LAB_0058667b:
    bVar14 = false;
    iStack_24 = iStack_24 + 1;
    if (iStack_24 < 4) {
      bVar14 = true;
      iStack_18 = iStack_18 - iStack_2c;
      iStack_c = iStack_c - iStack_30;
LAB_005866e6:
      iStack_28 = iStack_28 + 1;
      if (3 < iStack_28) {
        iStack_28 = 0;
      }
      iStack_2c = (&DAT_007cb95c)[iStack_24];
      iStack_30 = (&DAT_007cb95c)[iStack_28];
      if (!bVar14) {
LAB_00586713:
        if ((((((iStack_18 <= iVar9) && (iStack_c <= iVar10)) && (iStack_40 <= iStack_18)) &&
             (((iStack_44 <= iStack_c && (sVar12 = (short)iStack_18, -1 < sVar12)) &&
              ((sVar12 < DAT_007fb240 &&
               ((sVar11 = (short)iStack_c, -1 < sVar11 && (sVar11 < DAT_007fb242)))))))) &&
            (((sVar8 = (short)iStack_1c, -1 < sVar8 &&
              ((sVar8 < DAT_007fb244 &&
               (piVar4 = *(int **)(DAT_007fb248 +
                                  ((int)sVar8 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar11
                                  + (int)sVar12) * 8), piVar4 != (int *)0x0)))) &&
             (((piVar4[8] == 1000 || (piVar4[8] == 0x14)) &&
              ((iVar7 = (**(code **)(*piVar4 + 0xf0))(), iVar7 != 0 && ((uint)piVar4[9] < 8))))))))
           && ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar4[9] * 0x51] < 8)))) {
          bVar1 = *(byte *)(piVar4 + 9);
          bVar2 = *(byte *)(param_1 + 0x24);
          iVar7 = *(int *)(param_1 + 0x10);
          if (*(char *)(iVar7 + 0x146f) == '\0') {
            if (bVar1 == bVar2) {
              iVar7 = 0;
            }
            else {
              uVar5 = (uint)bVar1;
              uVar6 = (uint)bVar2;
              cVar3 = *(char *)(uVar6 + uVar5 * 8 + 0x142f + iVar7);
              if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0')) {
                iVar7 = -2;
              }
              else if ((cVar3 == '\x01') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\0'))
              {
                iVar7 = -1;
              }
              else if ((cVar3 == '\0') && (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01'))
              {
                iVar7 = 1;
              }
              else if ((cVar3 == '\x01') &&
                      (*(char *)(uVar5 + uVar6 * 8 + 0x142f + iVar7) == '\x01')) {
                iVar7 = 2;
              }
              else {
                iVar7 = 0;
              }
            }
            bVar14 = iVar7 < 0;
          }
          else {
            bVar14 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar7) !=
                     *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar7);
          }
          if ((bVar14) && (iVar7 = (**(code **)(*piVar4 + 0xf8))(), iVar7 != 0)) {
            *(undefined4 *)(param_1 + 0x231) = 0;
            *(undefined4 *)(param_1 + 599) = 0;
            *(undefined2 *)(param_1 + 0x273) = *(undefined2 *)((int)piVar4 + 0x32);
            *(int *)(param_1 + 0x26f) = piVar4[9];
            return piVar4;
          }
        }
      }
      goto LAB_00586642;
    }
    iStack_34 = iStack_34 + 1;
    iStack_24 = 0;
    if (iStack_34 < 6) goto LAB_005866e6;
    iStack_1c = iStack_1c + 1;
    if (4 < iStack_1c) {
      return (int *)0x0;
    }
  } while( true );
}

