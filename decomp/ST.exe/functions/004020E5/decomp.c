
void __fastcall thunk_FUN_00581200(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  void *this;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  bool bVar16;
  int iStack_54;
  int iStack_4c;
  int iStack_44;
  int *piStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  short sStack_8;
  char cStack_5;
  
  iVar9 = *(int *)(param_1 + 0x1f5) - *(int *)(param_1 + 0x1ed) >> 1;
  iStack_1c = 0;
  iVar10 = iVar9 + 3;
  iVar11 = *(int *)(param_1 + 0x1f9) - *(int *)(param_1 + 0x1f1) >> 1;
  iVar14 = iVar11 + 3;
  if (iVar14 < iVar10) {
    iVar14 = iVar10;
  }
  iVar10 = *(int *)(param_1 + 0x1f5) + 3;
  piStack_40 = (int *)(*(int *)(param_1 + 0x1ed) + -3);
  if (DAT_007fb240 <= iVar10) {
    iVar10 = DAT_007fb240 + -1;
  }
  if ((int)piStack_40 < 0) {
    piStack_40 = (int *)0x0;
  }
  iStack_24 = *(int *)(param_1 + 0x1f9) + 3;
  iStack_20 = *(int *)(param_1 + 0x1f1) + -3;
  iVar13 = (int)DAT_007fb242;
  if (iVar13 <= iStack_24) {
    iVar13 = iVar13 + -1;
    iStack_24 = iVar13;
  }
  if (iStack_20 < 0) {
    iStack_20 = 0;
  }
  sVar12 = *(short *)(param_1 + 0x1ed) + (short)iVar9;
  uStack_28 = CONCAT22((short)((uint)iVar13 >> 0x10),sVar12);
  sVar15 = *(short *)(param_1 + 0x1f1) + (short)iVar11;
  uStack_2c = CONCAT22((short)((uint)param_1 >> 0x10),sVar15);
  iStack_10 = (int)sVar15;
  iStack_c = param_1;
  if ((((sVar12 <= iVar10) && (iStack_10 <= iStack_24)) && ((int)piStack_40 <= (int)sVar12)) &&
     (iStack_20 <= iStack_10)) {
    iStack_18 = 0;
    do {
      iVar9 = iStack_18;
      if ((((-1 < sVar12) && (sVar12 < DAT_007fb240)) &&
          ((-1 < (short)iStack_10 &&
           (((short)iStack_10 < DAT_007fb242 && (sVar15 = (short)iStack_18, -1 < sVar15)))))) &&
         ((sVar15 < DAT_007fb244 &&
          ((piVar4 = *(int **)(DAT_007fb248 +
                              ((int)sVar15 * (int)DAT_007fb246 +
                               (int)DAT_007fb240 * (int)(short)iStack_10 + (int)sVar12) * 8),
           piVar4 != (int *)0x0 &&
           (((((piVar4[8] == 1000 || (piVar4[8] == 0x14)) &&
              (iVar13 = (**(code **)(*piVar4 + 0xf0))(), iVar11 = iStack_c, iVar13 != 0)) &&
             ((uint)piVar4[9] < 8)) &&
            ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar4[9] * 0x51] < 8)))))))))) {
        this = *(void **)(iStack_c + 0x10);
        if (*(char *)((int)this + 0x146f) == '\0') {
          iVar9 = thunk_FUN_005822e0(this,*(byte *)(piVar4 + 9),*(byte *)(iStack_c + 0x24));
          bVar16 = iVar9 < 0;
        }
        else {
          cStack_5 = *(char *)((uint)*(byte *)(iStack_c + 0x24) * 0x51 + 0x11ca + (int)this);
          bVar16 = cStack_5 != *(char *)((uint)*(byte *)(piVar4 + 9) * 0x51 + 0x11ca + (int)this);
        }
        iVar9 = iStack_18;
        if ((bVar16) && (iVar13 = (**(code **)(*piVar4 + 0xf8))(), iVar9 = iStack_18, iVar13 != 0))
        {
          *(int **)(*(int *)(iVar11 + 0x20b) + iStack_1c * 4) = piVar4;
          iStack_1c = iStack_1c + 1;
          if (*(int *)(iVar11 + 0x1fd) <= iStack_1c) goto LAB_00581775;
        }
      }
      iStack_18 = iVar9 + 1;
    } while (iStack_18 < 5);
  }
  iStack_18 = 0;
  do {
    iVar9 = (short)uStack_28 + 1;
    iStack_10 = (short)uStack_2c + 1;
    iStack_44 = 1;
    iStack_30 = 0;
    iStack_34 = 3;
    iStack_4c = DAT_007cb2dc;
    iStack_38 = DAT_007cb2e8;
LAB_005814a2:
    iVar9 = iVar9 + iStack_4c;
    iStack_10 = iStack_10 + iStack_38;
    sVar12 = (short)iVar9 - (short)uStack_28;
    iVar11 = (int)sVar12;
    if (sVar12 < 0) {
      iVar11 = -iVar11;
    }
    iStack_14 = iVar9;
    if (iVar11 <= iStack_44) {
      sVar12 = (short)iStack_10 - (short)uStack_2c;
      iVar11 = (int)sVar12;
      if (sVar12 < 0) {
        iVar11 = -iVar11;
      }
      if (iStack_44 < iVar11) goto LAB_005814e2;
      goto LAB_00581545;
    }
LAB_005814e2:
    bVar16 = false;
    iStack_30 = iStack_30 + 1;
    if (iStack_30 < 4) {
      iVar9 = iVar9 - iStack_4c;
      iStack_10 = iStack_10 - iStack_38;
      bVar16 = true;
LAB_00581518:
      iStack_34 = iStack_34 + 1;
      if (3 < iStack_34) {
        iStack_34 = 0;
      }
      iStack_4c = (&DAT_007cb2dc)[iStack_30];
      iStack_38 = (&DAT_007cb2dc)[iStack_34];
      iStack_14 = iVar9;
      if (bVar16) goto LAB_005814a2;
LAB_00581545:
      iVar9 = iStack_14;
      if (((((iVar10 < iStack_14) || (iStack_24 < iStack_10)) || (iStack_14 < (int)piStack_40)) ||
          (((((iStack_10 < iStack_20 || (sVar12 = (short)iStack_14, sVar12 < 0)) ||
             ((DAT_007fb240 <= sVar12 ||
              ((sVar15 = (short)iStack_10, sVar15 < 0 || (DAT_007fb242 <= sVar15)))))) ||
            (sVar8 = (short)iStack_18, sVar8 < 0)) ||
           ((DAT_007fb244 <= sVar8 ||
            (piVar4 = *(int **)(DAT_007fb248 +
                               ((int)sVar8 * (int)DAT_007fb246 + (int)DAT_007fb240 * (int)sVar15 +
                               (int)sVar12) * 8), piVar4 == (int *)0x0)))))) ||
         ((((piVar4[8] != 1000 && (piVar4[8] != 0x14)) ||
           ((iVar11 = (**(code **)(*piVar4 + 0xf0))(), iVar11 == 0 || (7 < (uint)piVar4[9])))) ||
          ((DAT_00802a38 != 0 && (7 < (byte)(&DAT_008087e9)[piVar4[9] * 0x51]))))))
      goto LAB_005814a2;
      bVar1 = *(byte *)(piVar4 + 9);
      bVar2 = *(byte *)(iStack_c + 0x24);
      iVar11 = *(int *)(iStack_c + 0x10);
      if (*(char *)(iVar11 + 0x146f) != '\0') {
        cStack_5 = *(char *)((uint)bVar2 * 0x51 + 0x11ca + iVar11);
        iStack_14 = 0;
        bVar16 = cStack_5 != *(char *)((uint)bVar1 * 0x51 + 0x11ca + iVar11);
        goto LAB_00581728;
      }
      if (bVar1 == bVar2) {
LAB_0058171d:
        iVar11 = 0;
      }
      else {
        uVar6 = (uint)bVar1;
        uVar7 = (uint)bVar2;
        cVar3 = *(char *)(uVar7 + uVar6 * 8 + 0x142f + iVar11);
        if ((cVar3 == '\0') &&
           (iVar9 = iStack_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar11) == '\0')) {
          iVar11 = -2;
        }
        else if ((cVar3 == '\x01') &&
                (iVar9 = iStack_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar11) == '\0')) {
          iVar11 = -1;
        }
        else if ((cVar3 == '\0') &&
                (iVar9 = iStack_14, *(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar11) == '\x01')) {
          iVar11 = 1;
        }
        else {
          if ((cVar3 != '\x01') || (*(char *)(uVar6 + uVar7 * 8 + 0x142f + iVar11) != '\x01'))
          goto LAB_0058171d;
          iVar11 = 2;
        }
      }
      bVar16 = iVar11 < 0;
LAB_00581728:
      if ((bVar16) && (iVar11 = (**(code **)(*piVar4 + 0xf8))(), iVar11 != 0)) {
        iStack_1c = iStack_1c + 1;
        *(int **)(*(int *)(iStack_c + 0x20b) + -4 + iStack_1c * 4) = piVar4;
        if (*(int *)(iStack_c + 0x1fd) <= iStack_1c) goto LAB_00581775;
      }
      goto LAB_005814a2;
    }
    iStack_44 = iStack_44 + 1;
    iStack_30 = 0;
    if (iStack_44 <= iVar14) goto LAB_00581518;
    iStack_18 = iStack_18 + 1;
    if (4 < iStack_18) {
LAB_00581775:
      iVar14 = *(int *)(iStack_c + 0x1fd);
      while (iVar14 = iVar14 + -1, -1 < iVar14) {
        iVar9 = *(int *)(*(int *)(iStack_c + 0x207) + iVar14 * 4);
        if (((iVar9 != 0) && (*(int *)(iVar9 + 0x23d) != 0)) &&
           (((int)*(short *)(iVar9 + 0x47) < (int)piStack_40 ||
            (((iVar10 < *(short *)(iVar9 + 0x47) || (*(short *)(iVar9 + 0x49) < iStack_20)) ||
             (iStack_24 < *(short *)(iVar9 + 0x49))))))) {
          *(undefined4 *)(iVar9 + 0x241) = 0xff;
          *(undefined4 *)(iVar9 + 0x23d) = 0;
        }
      }
      iStack_24 = 0;
      if (0 < iStack_1c) {
        do {
          iVar10 = iStack_24;
          iStack_54 = -1;
          iVar14 = 0x1fffff;
          thunk_FUN_00416270(*(void **)(*(int *)(iStack_c + 0x20b) + iStack_24 * 4),
                             (undefined2 *)&uStack_28,(undefined2 *)&uStack_2c,&sStack_8);
          iVar9 = *(int *)(iStack_c + 0x1fd) + -1;
          if (-1 < iVar9) {
            piStack_40 = (int *)(*(int *)(iStack_c + 0x207) + iVar9 * 4);
            do {
              iVar10 = *piStack_40;
              if ((iVar10 != 0) && (*(int *)(iVar10 + 0x23d) == 0)) {
                sVar12 = *(short *)(iVar10 + 0x41) - (short)uStack_28;
                iVar11 = (int)sVar12;
                if (sVar12 < 0) {
                  iVar11 = -iVar11;
                }
                sVar12 = *(short *)(iVar10 + 0x43) - (short)uStack_2c;
                iVar13 = (int)sVar12;
                if (sVar12 < 0) {
                  iVar13 = -iVar13;
                }
                sVar12 = *(short *)(iVar10 + 0x45) - sStack_8;
                iVar10 = (int)sVar12;
                if (sVar12 < 0) {
                  iVar10 = -iVar10;
                }
                iVar11 = iVar10 + iVar13 + iVar11;
                if (iVar11 < iVar14) {
                  iVar14 = iVar11;
                  iStack_54 = iVar9;
                }
              }
              iVar9 = iVar9 + -1;
              piStack_40 = piStack_40 + -1;
            } while (-1 < iVar9);
            iVar10 = iStack_24;
            if (iStack_54 != -1) {
              iVar14 = *(int *)(*(int *)(iStack_c + 0x207) + iStack_54 * 4);
              iVar9 = *(int *)(*(int *)(iStack_c + 0x20b) + iStack_24 * 4);
              if (*(int *)(iVar14 + 0x235) != 2) {
                uVar5 = *(undefined4 *)(iVar9 + 0x24);
                *(undefined2 *)(iVar14 + 0x245) = *(undefined2 *)(iVar9 + 0x32);
                *(undefined4 *)(iVar14 + 0x241) = uVar5;
                *(undefined4 *)(iVar14 + 0x23d) = 1;
                *(undefined4 *)(iVar14 + 0x252) = 0;
              }
            }
          }
          iStack_24 = iVar10 + 1;
        } while (iStack_24 < iStack_1c);
      }
      return;
    }
  } while( true );
}

