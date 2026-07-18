
int __fastcall thunk_FUN_0060c320(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  short sVar20;
  bool bVar21;
  undefined2 auStack_80 [2];
  int iStack_7c;
  int iStack_74;
  int iStack_6c;
  undefined1 *puStack_68;
  int iStack_64;
  int iStack_5c;
  int iStack_58;
  undefined2 auStack_54 [4];
  undefined4 uStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_2c;
  undefined2 auStack_28 [4];
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_0079cd68;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff60;
  iVar17 = 0;
  iStack_74 = 0;
  iStack_2c = 0;
  iVar15 = *(int *)((int)param_1 + 0x1e9);
  sVar20 = (short)(iVar15 >> 0x1f);
  if (iVar15 < 0) {
    iStack_5c = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                       (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_5c = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                            (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
  }
  iVar15 = *(int *)((int)param_1 + 0x1ed);
  sVar20 = (short)(iVar15 >> 0x1f);
  if (iVar15 < 0) {
    iStack_6c = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                       (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iStack_6c = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                            (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
  }
  iVar15 = *(int *)((int)param_1 + 0x24c);
  iVar18 = iStack_6c - iVar15;
  if (iVar18 < 0) {
    iVar17 = -iVar18;
    iVar18 = 0;
  }
  iStack_20 = iStack_5c - iVar15;
  if (iStack_20 < 0) {
    iStack_44 = -iStack_20;
    iStack_20 = 0;
  }
  else {
    iStack_44 = 0;
  }
  iStack_6c = iVar15 + 1 + iStack_6c;
  if (DAT_007fb242 < iStack_6c) {
    iStack_6c = (int)DAT_007fb242;
  }
  iStack_5c = iVar15 + 1 + iStack_5c;
  if (DAT_007fb240 < iStack_5c) {
    iStack_5c = (int)DAT_007fb240;
  }
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  FUN_0072da40();
  uStack_8 = 0xffffffff;
  puStack_68 = &stack0xffffff60;
  puVar10 = &stack0xffffff60;
  iStack_64 = iVar17;
  iStack_40 = iVar18;
  puStack_1c = &stack0xffffff60;
  puVar11 = &stack0xffffff60;
  if (iVar18 < iStack_6c) {
    do {
      iStack_7c = iStack_20;
      iStack_58 = iStack_44;
      iVar15 = iStack_20;
      iStack_40 = iVar18;
      if (iStack_20 < iStack_5c) {
        do {
          iStack_3c = 0;
          iStack_7c = iVar15;
          do {
            iVar17 = iStack_3c;
            if ((&DAT_007abc64)[iStack_64 + iStack_58 * 0xf] != '\0') {
              sVar20 = (short)iVar15;
              if (((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) ||
                   (sVar14 = (short)iVar18, sVar14 < 0)) ||
                  ((DAT_007fb242 <= sVar14 || (sVar16 = (short)iStack_3c, sVar16 < 0)))) ||
                 (DAT_007fb244 <= sVar16)) {
                piVar19 = (int *)0x0;
              }
              else {
                piVar19 = *(int **)(DAT_007fb248 +
                                   ((int)DAT_007fb246 * (int)sVar16 +
                                    (int)DAT_007fb240 * (int)sVar14 + (int)sVar20) * 8);
              }
              if (((piVar19 != (int *)0x0) &&
                  (iVar12 = (**(code **)(*piVar19 + 0xf0))(), iVar18 = iStack_40, iVar12 != 0)) &&
                 (((uint)piVar19[9] < 8 &&
                  ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar19[9] * 0x51] < 8)))))) {
                bVar3 = *(byte *)(piVar19 + 9);
                bVar4 = *(byte *)((int)param_1 + 0x1d9);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == bVar4) {
LAB_0060c5f5:
                    iVar12 = 0;
                  }
                  else {
                    uVar8 = (uint)bVar3;
                    uVar9 = (uint)bVar4;
                    cVar5 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9);
                    if ((cVar5 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                      iVar12 = -2;
                    }
                    else if ((cVar5 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                      iVar12 = -1;
                    }
                    else if ((cVar5 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\x01')) {
                      iVar12 = 1;
                    }
                    else {
                      if ((cVar5 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) != '\x01'))
                      goto LAB_0060c5f5;
                      iVar12 = 2;
                    }
                  }
                  bVar21 = iVar12 < 0;
                }
                else {
                  bVar21 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar3 * 0x51];
                }
                if ((bVar21) &&
                   (iVar13 = (**(code **)(*piVar19 + 0xf8))(), iVar12 = iStack_74,
                   iVar18 = iStack_40, iVar13 != 0)) {
                  puVar1 = (undefined4 *)(puStack_68 + iStack_74 * 0xc);
                  *puVar1 = piVar19;
                  iVar13 = (**(code **)(*piVar19 + 0x78))();
                  iVar13 = iVar13 + 1;
                  iVar18 = iStack_40;
                  iVar17 = iStack_3c;
                  iVar15 = iStack_7c;
                  if (0 < iVar13) {
                    puVar1[1] = iVar13;
                    iVar15 = *(int *)((int)param_1 + 0x1ed);
                    sVar20 = (short)(iVar15 >> 0x1f);
                    if (iVar15 < 0) {
                      iVar15 = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                                      (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar15 = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                                           (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
                    }
                    iVar17 = *(int *)((int)param_1 + 0x1e9);
                    sVar20 = (short)(iVar17 >> 0x1f);
                    if (iVar17 < 0) {
                      iVar17 = (short)(((short)(iVar17 / 0xc9) + sVar20) -
                                      (short)((longlong)iVar17 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar17 = (int)(short)(((short)(iVar17 / 0xc9) + sVar20) -
                                           (short)((longlong)iVar17 * 0x28c1979 >> 0x3f));
                    }
                    iVar15 = FUN_006acf90(iStack_7c,iStack_40,iVar17,iVar15);
                    puVar1[2] = iVar15;
                    iStack_2c = iStack_2c + iVar13;
                    iStack_74 = iVar12 + 1;
                    iVar18 = iStack_40;
                    iVar17 = iStack_3c;
                    iVar15 = iStack_7c;
                  }
                }
              }
            }
            iStack_3c = iVar17 + 1;
          } while (iStack_3c < 5);
          iVar15 = iVar15 + 1;
          iStack_58 = iStack_58 + 1;
          iStack_7c = iVar15;
        } while (iVar15 < iStack_5c);
      }
      iVar18 = iVar18 + 1;
      iStack_64 = iStack_64 + 1;
      puVar10 = puStack_68;
      iStack_40 = iVar18;
      puVar11 = puStack_1c;
    } while (iVar18 < iStack_6c);
  }
  puStack_1c = puVar11;
  puStack_68 = puVar10;
  if (iStack_2c != 0) {
    iVar15 = 0;
    if (0 < iStack_74) {
      do {
        iStack_64 = 0;
        if (0 < iVar15) {
          do {
            puVar1 = (undefined4 *)(puStack_68 + iVar15 * 0xc);
            puVar2 = (undefined4 *)(puStack_68 + iStack_64 * 0xc);
            iVar17 = puVar2[2];
            if (iVar17 < (int)puVar1[2]) {
              uVar6 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar17;
              puVar1[1] = uVar6;
              *puVar1 = uVar7;
              uStack_4c = uVar6;
            }
            iStack_64 = iStack_64 + 1;
          } while (iStack_64 < iVar15);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < iStack_74);
    }
    iStack_58 = 0;
    if (0 < iStack_74) {
      do {
        iVar15 = *(int *)((int)(puStack_68 + iStack_58 * 0xc) + 4);
        iVar17 = *(int *)((int)param_1 + 0x209);
        bVar21 = iVar17 <= iVar15;
        if (bVar21) {
          iVar15 = iVar15 - iVar17;
        }
        puVar1 = *(undefined4 **)(puStack_68 + iStack_58 * 0xc);
        thunk_FUN_00416270(puVar1,auStack_54,auStack_80,auStack_28);
        thunk_FUN_0061f5c0(*(undefined4 *)((int)param_1 + 0x1d9),
                           (short)*(undefined4 *)((int)param_1 + 0x1e9) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1ed) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1f1) + 0xb4,auStack_54[0],
                           auStack_80[0],auStack_28[0]);
        if (bVar21) {
          thunk_FUN_0060bd30(param_1,puVar1,iVar15);
          *(undefined4 *)((int)param_1 + 0x209) = 0;
        }
        else {
          thunk_FUN_0060bd30(param_1,puVar1,iVar15 * 5);
          *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 0x209) - iVar15;
        }
      } while ((*(int *)((int)param_1 + 0x209) != 0) &&
              (iStack_58 = iStack_58 + 1, iStack_58 < iStack_74));
    }
    thunk_FUN_0060bcb0(param_1,*(int *)((int)param_1 + 0x209));
  }
  ExceptionList = pvStack_14;
  return iStack_74;
}

