
void thunk_FUN_0055dee0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  short *psVar9;
  int iVar10;
  short sVar11;
  uint uVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ushort *puVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  undefined1 *puStack_44;
  ushort *puStack_40;
  ushort *puStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  int iStack_2c;
  short *psStack_28;
  int iStack_24;
  int iStack_20;
  ushort *puStack_1c;
  byte *pbStack_18;
  short *psStack_14;
  ushort *puStack_10;
  int iStack_c;
  ushort *puStack_8;
  
  puStack_8 = (ushort *)0x0;
  pbStack_18 = (byte *)0x0;
  iStack_24 = 0;
  iStack_20 = 0;
  psStack_14 = (short *)Library::DKW::LIB::FUN_006aac10(DAT_008033a8 * DAT_008033a4 * 2);
  iVar5 = FUN_0055ee70(param_1,DAT_00803390,1);
  iVar10 = DAT_00803324 * DAT_00803358;
  iVar6 = DAT_008033a4;
  if (0 < iVar5) {
    puStack_44 = (undefined1 *)(iVar5 + 1U >> 1);
    pbVar14 = param_1;
    do {
      puVar16 = (ushort *)(DAT_00803304 + (char)*pbVar14);
      pbVar18 = (byte *)(DAT_00803308 + (char)pbVar14[1]);
      if (((((int)puVar16 < 0) || (iVar6 <= (int)puVar16)) || ((int)pbVar18 < 0)) ||
         ((DAT_008033a8 <= (int)pbVar18 ||
          (*(short *)(DAT_008033b4 + (int)(iVar6 * (int)pbVar18 + (int)puVar16) * 2) < 1)))) {
        iVar17 = (int)puVar16 * 0x10000;
        iVar19 = (int)pbVar18 * 0x10000;
        iVar5 = DAT_00803390;
        do {
          iVar17 = iVar17 - ((int)(char)*pbVar14 << 0x10) / DAT_00803390;
          iVar19 = iVar19 - ((int)(char)pbVar14[1] << 0x10) / DAT_00803390;
          puVar16 = (ushort *)(iVar17 >> 0x10);
          pbVar18 = (byte *)(iVar19 >> 0x10);
          iVar5 = iVar5 + -1;
          if (iVar5 < DAT_0080335c) goto LAB_0055e2e9;
        } while ((((int)puVar16 < 0) || (iVar6 <= (int)puVar16)) ||
                (((int)pbVar18 < 0 ||
                 ((DAT_008033a8 <= (int)pbVar18 ||
                  (*(short *)(DAT_008033b4 + (int)(iVar6 * (int)pbVar18 + (int)puVar16) * 2) < 1))))
                ));
        if (DAT_0080335c <= iVar5) goto LAB_0055e02a;
      }
      else {
LAB_0055e02a:
        cVar3 = FUN_006ad0b0((int)puVar16,(int)pbVar18,DAT_00803304,DAT_00803308);
        puStack_3c = (ushort *)CONCAT31(extraout_var,cVar3);
        param_1 = pbVar18;
        puStack_1c = puVar16;
LAB_0055e048:
        iStack_2c = 30000;
        iStack_c = 1;
        psStack_28 = &DAT_007edcab;
        do {
          puStack_10 = (ushort *)((int)psStack_28[-1] + (int)puStack_1c);
          if ((((-1 < (int)puStack_10) && ((int)puStack_10 < DAT_008033a4)) &&
              (pbVar15 = param_1 + *psStack_28, -1 < (int)pbVar15)) &&
             (((int)pbVar15 < DAT_008033a8 &&
              (iStack_20 = (int)*(short *)(DAT_008033b4 +
                                          (int)(DAT_008033a4 * (int)pbVar15 + (int)puStack_10) * 2),
              0 < iStack_20)))) {
            if (iStack_20 <= iVar10) break;
            iVar6 = iStack_20 + (DAT_00803324 - DAT_00803320);
            if (iVar6 < iStack_2c) {
              iStack_24 = iStack_c;
              iStack_2c = iVar6;
              pbStack_18 = pbVar15;
              puStack_8 = puStack_10;
            }
            else if ((iVar6 == iStack_2c) &&
                    ((uVar7 = ((int)puStack_10 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                              ((int)pbVar15 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                     uVar12 = (int)uVar7 >> 0x1f, iVar5 = (uVar7 ^ uVar12) - uVar12,
                     uVar7 = ((int)puStack_8 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                             ((int)pbStack_18 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                     uVar12 = (int)uVar7 >> 0x1f, iVar6 = (uVar7 ^ uVar12) - uVar12, iVar5 < iVar6
                     || ((iVar5 == iVar6 && ((ushort *)iStack_c == puStack_3c)))))) {
              iStack_24 = iStack_c;
              pbStack_18 = pbVar15;
              puStack_8 = puStack_10;
            }
          }
          psStack_28 = psStack_28 + 5;
          iStack_c = iStack_c + 2;
        } while ((int)psStack_28 < 0x7edcce);
        iVar6 = DAT_008033a4;
        if ((iStack_20 < 1) || (iVar10 < iStack_20)) {
          iStack_c = 0;
          psStack_28 = &DAT_007edca6;
          do {
            puStack_10 = (ushort *)((int)psStack_28[-1] + (int)puStack_1c);
            if ((((-1 < (int)puStack_10) && ((int)puStack_10 < DAT_008033a4)) &&
                (pbVar15 = param_1 + *psStack_28, -1 < (int)pbVar15)) &&
               (((int)pbVar15 < DAT_008033a8 &&
                (iStack_20 = (int)*(short *)(DAT_008033b4 +
                                            (int)(DAT_008033a4 * (int)pbVar15 + (int)puStack_10) * 2
                                            ), 0 < iStack_20)))) {
              if (iStack_20 <= iVar10) break;
              if (iStack_20 < iStack_2c) {
                iStack_24 = iStack_c;
                iStack_2c = iStack_20;
                pbStack_18 = pbVar15;
                puStack_8 = puStack_10;
              }
              else if ((iStack_20 == iStack_2c) &&
                      ((uVar7 = ((int)puStack_10 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                                ((int)pbVar15 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                       uVar12 = (int)uVar7 >> 0x1f, iVar17 = (uVar7 ^ uVar12) - uVar12,
                       uVar7 = ((int)puStack_8 - (int)puVar16) * (DAT_00803308 - (int)pbVar18) -
                               ((int)pbStack_18 - (int)pbVar18) * (DAT_00803304 - (int)puVar16),
                       uVar12 = (int)uVar7 >> 0x1f, iVar5 = (uVar7 ^ uVar12) - uVar12,
                       iVar17 < iVar5 || ((iVar17 == iVar5 && ((ushort *)iStack_c == puStack_3c)))))
                      ) {
                iStack_24 = iStack_c;
                pbStack_18 = pbVar15;
                puStack_8 = puStack_10;
              }
            }
            psStack_28 = psStack_28 + 5;
            iStack_c = iStack_c + 2;
          } while ((int)psStack_28 < 0x7edcce);
          if ((0 < iStack_20) && (iStack_20 <= iVar10)) goto LAB_0055e2e9;
          param_1 = pbStack_18;
          puStack_3c = (ushort *)iStack_24;
          puStack_1c = puStack_8;
          puVar13 = (ushort *)(DAT_008033a4 * (int)pbStack_18 + (int)puStack_8);
          if ((ushort)psStack_14[(int)puVar13] < 0xff) {
            psStack_14[(int)puVar13] = psStack_14[(int)puVar13] + 1;
          }
          goto LAB_0055e048;
        }
      }
LAB_0055e2e9:
      pbVar14 = pbVar14 + 4;
      puStack_44 = (undefined1 *)((int)puStack_44 - 1);
    } while (puStack_44 != (undefined1 *)0x0);
  }
  iVar5 = 0;
  if (0 < DAT_008033a8) {
    do {
      psVar9 = psStack_14 + iVar6 * iVar5;
      iVar10 = 0;
      if (0 < iVar6) {
        puVar8 = (undefined1 *)(iVar6 * iVar5 * 2 + 1 + DAT_00803380);
        do {
          iVar10 = iVar10 + 1;
          *puVar8 = (char)*psVar9;
          puVar8 = puVar8 + 2;
          psVar9 = psVar9 + 1;
          iVar6 = DAT_008033a4;
        } while (iVar10 < DAT_008033a4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_008033a8);
  }
  if ((iVar6 < 5) || (DAT_008033a8 < 5)) {
    iVar5 = 0;
    if (0 < DAT_008033a8) {
      do {
        puVar16 = (ushort *)(psStack_14 + iVar6 * iVar5);
        iVar10 = 0;
        if (0 < iVar6) {
          pbVar14 = (byte *)(iVar6 * iVar5 * 2 + 1 + DAT_00803380);
          do {
            *puVar16 = (ushort)*pbVar14;
            iVar10 = iVar10 + 1;
            pbVar14 = pbVar14 + 2;
            puVar16 = puVar16 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar10 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_008033a8);
      if (0 < DAT_008033a8) {
        iStack_38 = 2;
        do {
          if (0 < iVar6) {
            puStack_44 = (undefined1 *)(DAT_00803380 + (iStack_38 + -2) * iVar6 * 2 + 1);
            iVar6 = 2;
            do {
              iVar5 = iStack_38 + -4;
              puStack_3c = (ushort *)0x0;
              param_1 = (byte *)0x0;
              if (iStack_38 < iVar5) {
LAB_0055eb08:
                uVar4 = 0;
              }
              else {
                puStack_40 = (ushort *)(psStack_14 + iVar5 * DAT_008033a4);
                do {
                  if ((-1 < iVar5) && (iVar5 < DAT_008033a8)) {
                    puVar16 = puStack_40;
                    for (iVar10 = iVar6 + -4; iVar10 <= iVar6; iVar10 = iVar10 + 1) {
                      if ((-1 < iVar10) && (iVar10 < DAT_008033a4)) {
                        param_1 = param_1 + 1;
                        puStack_3c = (ushort *)((int)puStack_3c + (uint)*puVar16);
                      }
                      puVar16 = puVar16 + 1;
                    }
                  }
                  iVar5 = iVar5 + 1;
                  puStack_40 = puStack_40 + DAT_008033a4;
                } while (iVar5 <= iStack_38);
                if ((int)param_1 < 1) goto LAB_0055eb08;
                uVar4 = (undefined1)((int)puStack_3c / (int)param_1);
              }
              *puStack_44 = uVar4;
              puStack_44 = puStack_44 + 2;
              iVar5 = iVar6 + -1;
              iVar6 = iVar6 + 1;
            } while (iVar5 < DAT_008033a4);
          }
          iVar5 = iStack_38 + -1;
          iVar6 = DAT_008033a4;
          iStack_38 = iStack_38 + 1;
        } while (iVar5 < DAT_008033a8);
      }
    }
  }
  else {
    puStack_1c = (ushort *)0x0;
    puStack_8 = (ushort *)psStack_14;
    if (0 < iVar6) {
      pbVar14 = (byte *)(DAT_00803380 + 1);
      do {
        sVar11 = 0;
        iVar5 = 3;
        pbVar18 = pbVar14;
        do {
          bVar1 = *pbVar18;
          pbVar18 = pbVar18 + iVar6 * 2;
          sVar11 = sVar11 + (ushort)bVar1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        puStack_1c = (ushort *)((int)puStack_1c + 1);
        pbVar14 = pbVar14 + 2;
        *puStack_8 = sVar11;
        puStack_8 = puStack_8 + 1;
        iVar6 = DAT_008033a4;
      } while ((int)puStack_1c < DAT_008033a4);
    }
    iVar5 = 1;
    do {
      iVar10 = iVar5;
      iVar5 = 0;
      if (0 < iVar6) {
        pbVar14 = (byte *)(DAT_00803380 + (iVar10 + 2) * iVar6 * 2 + 1);
        psVar9 = psStack_14 + iVar6 * iVar10;
        do {
          bVar1 = *pbVar14;
          pbVar14 = pbVar14 + 2;
          iVar5 = iVar5 + 1;
          *psVar9 = psVar9[-iVar6] + (ushort)bVar1;
          psVar9 = psVar9 + 1;
          iVar6 = DAT_008033a4;
        } while (iVar5 < DAT_008033a4);
      }
      iVar5 = iVar10 + 1;
    } while (iVar5 < 3);
    if (iVar5 < DAT_008033a8 + -2) {
      iVar10 = iVar10 + 3;
      do {
        iVar17 = 0;
        if (0 < iVar6) {
          param_1 = (byte *)(DAT_00803380 + iVar10 * iVar6 * 2 + 1);
          pbVar14 = (byte *)(DAT_00803380 + (iVar10 + -5) * iVar6 * 2 + 1);
          psVar9 = psStack_14 + iVar6 * iVar5;
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 2;
            iVar17 = iVar17 + 1;
            *psVar9 = (psVar9[-iVar6] - (ushort)bVar1) + (ushort)*param_1;
            param_1 = param_1 + 2;
            psVar9 = psVar9 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar17 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar5 < DAT_008033a8 + -2);
    }
    if (iVar5 < DAT_008033a8) {
      param_1 = (byte *)(iVar5 + -3);
      do {
        iVar10 = 0;
        if (0 < iVar6) {
          pbVar14 = (byte *)(DAT_00803380 + (int)param_1 * iVar6 * 2 + 1);
          psVar9 = psStack_14 + iVar6 * iVar5;
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 2;
            iVar10 = iVar10 + 1;
            *psVar9 = psVar9[-iVar6] - (ushort)bVar1;
            psVar9 = psVar9 + 1;
            iVar6 = DAT_008033a4;
          } while (iVar10 < DAT_008033a4);
        }
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
      } while (iVar5 < DAT_008033a8);
    }
    param_1 = (byte *)0x0;
    iStack_30 = 0xf;
    puStack_34 = &DAT_0000000c;
    iStack_38 = 9;
    do {
      iVar10 = 0;
      puStack_8 = (ushort *)(psStack_14 + iVar6 * (int)param_1);
      puStack_10 = (ushort *)(DAT_00803380 + iVar6 * (int)param_1 * 2);
      iVar5 = 3;
      puVar16 = puStack_8;
      do {
        uVar2 = *puVar16;
        puVar16 = puVar16 + 1;
        iVar10 = iVar10 + (uint)uVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if ((*puStack_10 & 7) != 0) {
        *(byte *)((int)puStack_10 + 1) =
             (byte)((int)(iVar10 + (uint)*(byte *)((int)puStack_10 + 1) * 4) / iStack_38);
        iVar6 = DAT_008033a4;
      }
      puStack_40 = (ushort *)puStack_34;
      puStack_3c = puStack_8 + 3;
      pbVar14 = (byte *)((int)puStack_10 + 3);
      puStack_44 = (undefined1 *)0x2;
      iStack_c = 3;
      do {
        iVar10 = iVar10 + (uint)*puStack_3c;
        if ((pbVar14[-1] & 7) != 0) {
          *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (int)puStack_40);
          iVar6 = DAT_008033a4;
        }
        pbVar14 = pbVar14 + 2;
        puStack_40 = (ushort *)((int)puStack_40 + (int)(param_1 + 3));
        puStack_3c = puStack_3c + 1;
        puStack_44 = (undefined1 *)((int)puStack_44 + -1);
      } while (puStack_44 != (undefined1 *)0x0);
      if (3 < iVar6 + -2) {
        puVar16 = puStack_8 + 5;
        pbVar14 = (byte *)((int)puStack_10 + 7);
        do {
          iVar10 = iVar10 + ((uint)*puVar16 - (uint)puVar16[-5]);
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / iStack_30);
            iVar6 = DAT_008033a4;
          }
          iStack_c = iStack_c + 1;
          puVar16 = puVar16 + 1;
          pbVar14 = pbVar14 + 2;
        } while (iStack_c < iVar6 + -2);
      }
      if (iStack_c < iVar6) {
        pbVar14 = (byte *)((int)puStack_10 + iStack_c * 2 + 1);
        puStack_40 = puStack_8 + iStack_c + -3;
        iVar5 = iStack_c;
        do {
          iVar10 = iVar10 - (uint)*puStack_40;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) /
                             (((iVar6 - iVar5) + 2) * (int)(param_1 + 3)));
            iVar6 = DAT_008033a4;
          }
          iVar5 = iVar5 + 1;
          puStack_40 = puStack_40 + 1;
          pbVar14 = pbVar14 + 2;
        } while (iVar5 < iVar6);
      }
      param_1 = param_1 + 1;
      iStack_38 = iStack_38 + 3;
      puStack_34 = puStack_34 + 4;
      iStack_30 = iStack_30 + 5;
    } while (iStack_38 < 0x10);
    if ((int)param_1 < DAT_008033a8 + -2) {
      do {
        iVar10 = 0;
        puStack_8 = (ushort *)(psStack_14 + iVar6 * (int)param_1);
        puStack_10 = (ushort *)(DAT_00803380 + iVar6 * (int)param_1 * 2);
        iVar5 = 3;
        puVar16 = puStack_8;
        do {
          uVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          iVar10 = iVar10 + (uint)uVar2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if ((*puStack_10 & 7) != 0) {
          iVar6 = iVar10 + (uint)*(byte *)((int)puStack_10 + 1) * 4;
          *(char *)((int)puStack_10 + 1) =
               ((char)(iVar6 / 0xf) + (char)(iVar6 >> 0x1f)) -
               (char)((longlong)iVar6 * 0x88888889 >> 0x3f);
          iVar6 = DAT_008033a4;
        }
        puStack_3c = puStack_8 + 3;
        puStack_40 = (ushort *)0x14;
        pbVar14 = (byte *)((int)puStack_10 + 3);
        iStack_c = 3;
        do {
          iVar10 = iVar10 + (uint)*puStack_3c;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (int)puStack_40);
            iVar6 = DAT_008033a4;
          }
          puStack_40 = (ushort *)((int)puStack_40 + 5);
          puStack_3c = puStack_3c + 1;
          pbVar14 = pbVar14 + 2;
        } while ((int)puStack_40 < 0x1a);
        if (3 < iVar6 + -2) {
          pbVar14 = (byte *)((int)puStack_10 + 7);
          puVar16 = puStack_8 + 5;
          do {
            iVar10 = iVar10 + ((uint)*puVar16 - (uint)puVar16[-5]);
            if ((pbVar14[-1] & 7) != 0) {
              iVar6 = iVar10 + (uint)*pbVar14 * 4;
              *pbVar14 = ((char)(iVar6 / 0x19) + (char)(iVar6 >> 0x1f)) -
                         (char)((longlong)iVar6 * 0x51eb851f >> 0x3f);
              iVar6 = DAT_008033a4;
            }
            iStack_c = iStack_c + 1;
            puVar16 = puVar16 + 1;
            pbVar14 = pbVar14 + 2;
          } while (iStack_c < iVar6 + -2);
        }
        if (iStack_c < iVar6) {
          pbVar14 = (byte *)((int)puStack_10 + iStack_c * 2 + 1);
          puStack_40 = puStack_8 + iStack_c + -3;
          iVar5 = iStack_c;
          do {
            iVar10 = iVar10 - (uint)*puStack_40;
            if ((pbVar14[-1] & 7) != 0) {
              *pbVar14 = (byte)((int)(iVar10 + (uint)*pbVar14 * 4) / (((iVar6 - iVar5) + 2) * 5));
              iVar6 = DAT_008033a4;
            }
            iVar5 = iVar5 + 1;
            puStack_40 = puStack_40 + 1;
            pbVar14 = pbVar14 + 2;
          } while (iVar5 < iVar6);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8 + -2);
    }
    if ((int)param_1 < DAT_008033a8) {
      do {
        iVar10 = (DAT_008033a8 - (int)param_1) + 2;
        iVar17 = 0;
        puStack_8 = (ushort *)(psStack_14 + iVar6 * (int)param_1);
        puStack_10 = (ushort *)(iVar6 * (int)param_1 * 2 + DAT_00803380);
        iVar5 = 3;
        puVar16 = puStack_8;
        do {
          uVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          iVar17 = iVar17 + (uint)uVar2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if ((*puStack_10 & 7) != 0) {
          *(byte *)((int)puStack_10 + 1) =
               (byte)((int)(iVar17 + (uint)*(byte *)((int)puStack_10 + 1) * 4) / (iVar10 * 3));
          iVar6 = DAT_008033a4;
        }
        puStack_40 = (ushort *)(iVar10 * 4);
        puStack_3c = puStack_8 + 3;
        pbVar14 = (byte *)((int)puStack_10 + 3);
        puStack_44 = (undefined1 *)0x2;
        iStack_c = 3;
        do {
          iVar17 = iVar17 + (uint)*puStack_3c;
          if ((pbVar14[-1] & 7) != 0) {
            *pbVar14 = (byte)((int)(iVar17 + (uint)*pbVar14 * 4) / (int)puStack_40);
            iVar6 = DAT_008033a4;
          }
          puStack_3c = puStack_3c + 1;
          puStack_40 = (ushort *)((int)puStack_40 + iVar10);
          pbVar14 = pbVar14 + 2;
          puStack_44 = (undefined1 *)((int)puStack_44 + -1);
        } while (puStack_44 != (undefined1 *)0x0);
        if (3 < iVar6 + -2) {
          puStack_40 = (ushort *)((int)puStack_10 + 7);
          puVar16 = puStack_8 + 5;
          do {
            iVar17 = iVar17 + ((uint)*puVar16 - (uint)puVar16[-5]);
            if ((*(byte *)((int)puStack_40 + -1) & 7) != 0) {
              *(byte *)puStack_40 =
                   (byte)((int)(iVar17 + (uint)(byte)*puStack_40 * 4) / (iVar10 * 5));
              iVar6 = DAT_008033a4;
            }
            puStack_40 = (ushort *)((int)puStack_40 + 2);
            iStack_c = iStack_c + 1;
            puVar16 = puVar16 + 1;
          } while (iStack_c < iVar6 + -2);
        }
        if (iStack_c < iVar6) {
          pbVar14 = (byte *)((int)puStack_10 + iStack_c * 2 + 1);
          puStack_40 = puStack_8 + iStack_c + -3;
          do {
            iVar17 = iVar17 - (uint)*puStack_40;
            if ((pbVar14[-1] & 7) != 0) {
              *pbVar14 = (byte)((int)(iVar17 + (uint)*pbVar14 * 4) /
                               (((iVar6 - iStack_c) + 2) * iVar10));
              iVar6 = DAT_008033a4;
            }
            iStack_c = iStack_c + 1;
            puStack_40 = puStack_40 + 1;
            pbVar14 = pbVar14 + 2;
          } while (iStack_c < iVar6);
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < DAT_008033a8);
    }
  }
  FUN_006ab060(&psStack_14);
  return;
}

