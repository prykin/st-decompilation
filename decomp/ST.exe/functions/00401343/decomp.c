
int thunk_FUN_0040fc40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iStack_12c;
  int iStack_114;
  int *piStack_108;
  int iStack_104;
  uint uStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_ac;
  uint uStack_9c;
  uint uStack_94;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  uint uStack_78;
  int iStack_74;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int aiStack_44 [8];
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790060;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xfffffec8;
  iStack_50 = 0;
  if (param_6 == 0) {
    if (200 < DAT_007f4d20) {
      return -4;
    }
    if (param_1 < 0) {
      return -4;
    }
    if (DAT_007f4d2c <= param_1) {
      return -4;
    }
    if (param_2 < 0) {
      return -4;
    }
    if (DAT_007f4d30 <= param_2) {
      return -4;
    }
    if (param_3 < 0) {
      return -4;
    }
    if (DAT_007f4d34 <= param_3) {
      return -4;
    }
    DAT_007f4d14 = 0;
    aiStack_44[6] = DAT_007f4d20;
  }
  else {
    aiStack_44[6] = param_6;
  }
  aiStack_44[0] = 0;
  aiStack_44[1] = 0;
  aiStack_44[2] = 0;
  aiStack_44[3] = 0;
  aiStack_44[4] = 0;
  iStack_48 = DAT_007f4d30 * DAT_007f4d2c;
  aiStack_44[5] = (int)(0 < DAT_007f4d24);
  puStack_24 = (undefined4 *)0x0;
  if (0 < param_4) {
    param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
    param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
  }
  uVar15 = *(uint *)(&DAT_007a4b88 + param_5 * 8);
  iStack_20 = *(int *)(&DAT_007a4b8c + param_5 * 8);
  if ((int)(iStack_20 * uVar15) < DAT_007f4d20) {
    iStack_20 = 5;
  }
  iVar11 = iStack_20 * uVar15;
  iVar3 = iStack_20 / 2;
  if (4 < iVar3 + param_3) {
    param_3 = 4 - iVar3;
  }
  if (param_3 - iVar3 < 0) {
    param_3 = iVar3;
  }
  iVar3 = param_3 - iVar3;
  param_1 = param_1 * 4 + 2;
  param_2 = param_2 * 4 + 2;
  iStack_5c = (int)(uVar15 + ((int)uVar15 >> 0x1f & 7U)) >> 3;
  if (iStack_5c == 0) {
    iStack_5c = 1;
  }
  uVar9 = DAT_007f4d28 * 4;
  uVar16 = DAT_007f4d38 * 4;
  iVar8 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
  iVar4 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  if (iVar4 < iVar8) {
    ExceptionList = &pvStack_14;
    iStack_ac = FUN_006db610(uVar9,iVar8);
    iStack_ac = iStack_ac << 2;
    iStack_8c = (((int)uVar16 < 1) - 1 & 0x80000) - 0x40000;
  }
  else {
    ExceptionList = &pvStack_14;
    puStack_1c = &stack0xfffffec8;
    iStack_8c = FUN_006db610(uVar16,iVar4);
    iStack_8c = iStack_8c << 2;
    iStack_ac = (((int)uVar9 < 1) - 1 & 0x80000) - 0x40000;
  }
  iVar12 = -((int)uVar15 / 2) * iStack_ac;
  iVar8 = -((int)uVar15 / 2) * iStack_8c;
  iVar4 = DAT_007f4d2c;
  do {
    iStack_84 = 0;
    if ((aiStack_44[6] < iVar11) && (aiStack_44[5] != 0)) {
      if (puStack_24 == (undefined4 *)0x0) {
        uStack_8 = 0;
        FUN_0072da40();
        puStack_1c = &stack0xfffffec8;
        puStack_24 = (undefined4 *)&stack0xfffffec8;
        uStack_8 = 0xffffffff;
      }
      puVar17 = puStack_24;
      for (uVar9 = uVar15 * 5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar9 = uVar15 * 5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      uStack_78 = 0;
      iVar4 = DAT_007f4d2c;
      if (0 < iStack_20) {
        do {
          iStack_74 = uStack_78 * uVar15;
          iVar18 = 0;
          if (0 < (int)uVar15) {
            iVar10 = iVar8 + 0x8000;
            iVar5 = iVar12 + 0x8000;
            do {
              iStack_68 = (iVar5 >> 0x10) + param_1 >> 2;
              iStack_6c = (iVar10 >> 0x10) + param_2 >> 2;
              if ((((-1 < iStack_68) && (iStack_68 < iVar4)) && (-1 < iStack_6c)) &&
                 ((iStack_6c < DAT_007f4d30 &&
                  (uVar9 = iVar4 * iStack_6c + iStack_68 + (uStack_78 + iVar3) * iStack_48 ^ 7,
                  iVar4 = DAT_007f4d2c,
                  (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)))) {
                iStack_84 = iStack_84 + 1;
                aiStack_44[uStack_78 + iVar3] = aiStack_44[uStack_78 + iVar3] + 1;
                *(undefined1 *)(iVar18 + iStack_74 + (int)puStack_24) = 1;
                iVar4 = DAT_007f4d2c;
              }
              iVar5 = iVar5 + iStack_ac;
              iVar10 = iVar10 + iStack_8c;
              iVar18 = iVar18 + 1;
            } while (iVar18 < (int)uVar15);
          }
          uStack_78 = uStack_78 + 1;
        } while ((int)uStack_78 < iStack_20);
      }
    }
    iStack_104 = aiStack_44[6];
    if (iStack_84 < iVar11) {
      if (iStack_84 + aiStack_44[6] < iVar11) {
        if (iStack_84 < 1) {
          if ((int)uVar15 / 2 < aiStack_44[6]) {
            if ((int)uVar15 < aiStack_44[6]) {
              uStack_78 = 0;
              if (0 < iStack_20) {
                do {
                  iStack_4c = ((int)(iStack_20 - uStack_78) / 2 + aiStack_44[6]) /
                              (int)(iStack_20 - uStack_78);
                  iVar18 = iVar8 - iStack_8c;
                  iVar10 = iVar12 - iStack_ac;
                  if ((uStack_78 & 1) == 0) {
                    iVar10 = (iVar12 - iStack_ac) -
                             ((int)(iStack_ac + (iStack_ac >> 0x1f & 3U)) >> 2);
                    iVar18 = (iVar8 - iStack_8c) -
                             ((int)(iStack_8c + (iStack_8c >> 0x1f & 3U)) >> 2);
                  }
                  iStack_64 = (int)((uVar15 + 1) * iStack_ac) / (iStack_4c + 1);
                  iStack_58 = (int)((uVar15 + 1) * iStack_8c) / (iStack_4c + 1);
                  iStack_12c = iStack_4c;
                  if (0 < iStack_4c) {
                    do {
                      iVar10 = iVar10 + iStack_64;
                      iVar18 = iVar18 + iStack_58;
                      iStack_68 = (iVar10 + 0x8000 >> 0x10) + param_1 >> 2;
                      iStack_6c = (iVar18 + 0x8000 >> 0x10) + param_2 >> 2;
                      *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = iStack_68;
                      *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = iStack_6c;
                      *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = uStack_78 + iVar3;
                      DAT_007f4d14 = DAT_007f4d14 + 1;
                      if (((-1 < iStack_68) && (iStack_68 < DAT_007f4d2c)) &&
                         ((-1 < iStack_6c && (iStack_6c < DAT_007f4d30)))) {
                        uVar9 = DAT_007f4d2c * iStack_6c +
                                iStack_68 + (uStack_78 + iVar3) * iStack_48 ^ 7;
                        pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                        *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                      }
                      iStack_12c = iStack_12c + -1;
                      iVar4 = DAT_007f4d2c;
                    } while (iStack_12c != 0);
                  }
                  aiStack_44[6] = aiStack_44[6] - iStack_4c;
                  uStack_78 = uStack_78 + 1;
                } while ((int)uStack_78 < iStack_20);
              }
            }
            else {
              iVar18 = iVar12 - iStack_ac;
              iStack_60 = iVar8 - iStack_8c;
              iStack_ac = (int)((uVar15 + 1) * iStack_ac) / (aiStack_44[6] + 1);
              iStack_8c = (int)((uVar15 + 1) * iStack_8c) / (aiStack_44[6] + 1);
              uStack_94 = 0;
              if (0 < aiStack_44[6]) {
                iVar10 = iStack_60 + 0x8000;
                iVar18 = iVar18 + 0x8000;
                do {
                  uStack_78 = *(uint *)(&DAT_007a4bd8 + (uStack_94 & 7) * 4);
                  iVar18 = iVar18 + iStack_ac;
                  iVar10 = iVar10 + iStack_8c;
                  iStack_68 = (iVar18 >> 0x10) + param_1 >> 2;
                  iStack_6c = (iVar10 >> 0x10) + param_2 >> 2;
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = iStack_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = iStack_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3 + uStack_78;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  if ((((-1 < iStack_68) && (iStack_68 < DAT_007f4d2c)) && (-1 < iStack_6c)) &&
                     (iStack_6c < DAT_007f4d30)) {
                    uVar9 = DAT_007f4d2c * iStack_6c + iStack_68 + (uStack_78 + param_3) * iStack_48
                            ^ 7;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                  uStack_94 = uStack_94 + 1;
                  iVar4 = DAT_007f4d2c;
                } while ((int)uStack_94 < aiStack_44[6]);
              }
            }
          }
          else {
            iVar18 = iVar12 - iStack_ac;
            iStack_60 = iVar8 - iStack_8c;
            iStack_ac = (int)((uVar15 + 1) * iStack_ac) / (aiStack_44[6] + 1);
            iStack_8c = (int)((uVar15 + 1) * iStack_8c) / (aiStack_44[6] + 1);
            if (0 < aiStack_44[6]) {
              iVar10 = iStack_60 + 0x8000;
              iVar18 = iVar18 + 0x8000;
              iStack_114 = aiStack_44[6];
              do {
                iVar18 = iVar18 + iStack_ac;
                iVar10 = iVar10 + iStack_8c;
                iStack_68 = (iVar18 >> 0x10) + param_1 >> 2;
                iStack_6c = (iVar10 >> 0x10) + param_2 >> 2;
                *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = iStack_68;
                *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = iStack_6c;
                *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3;
                DAT_007f4d14 = DAT_007f4d14 + 1;
                if (((-1 < iStack_68) && (iStack_68 < DAT_007f4d2c)) &&
                   ((-1 < iStack_6c && (iStack_6c < DAT_007f4d30)))) {
                  uVar9 = iStack_48 * param_3 + iStack_68 + DAT_007f4d2c * iStack_6c ^ 7;
                  pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                  *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                }
                iStack_114 = iStack_114 + -1;
                iVar4 = DAT_007f4d2c;
              } while (iStack_114 != 0);
            }
          }
        }
        else {
          uStack_78 = 0;
          if (0 < iStack_20) {
            do {
              if (aiStack_44[uStack_78 + iVar3] < (int)uVar15) {
                FUN_0040f4d0((undefined4 *)(uStack_78 * uVar15 + (int)puStack_24),uVar15,iStack_5c,0
                            );
                iVar4 = DAT_007f4d2c;
              }
              uStack_78 = uStack_78 + 1;
            } while ((int)uStack_78 < iStack_20);
          }
          if (0 < iStack_104) {
            do {
              iStack_88 = 30000;
              uVar9 = 0;
              uStack_78 = 0;
              if (0 < iStack_20) {
                piStack_108 = aiStack_44 + iVar3;
                iVar4 = 30000;
                uVar16 = uStack_9c;
                do {
                  iVar18 = *piStack_108;
                  iVar10 = iVar18;
                  uStack_9c = uVar9;
                  iVar5 = iVar18;
                  if (((iVar4 <= iVar18) &&
                      (iVar10 = iVar4, uStack_9c = uVar16, iVar5 = iStack_88, iVar4 == iVar18)) &&
                     (uVar6 = iStack_20 / 2 - uVar9, uVar13 = (int)uVar6 >> 0x1f,
                     uVar7 = iStack_20 / 2 - uVar16, uVar14 = (int)uVar7 >> 0x1f, iVar10 = iVar18,
                     uStack_9c = uVar9, iVar5 = iVar18,
                     (int)((uVar7 ^ uVar14) - uVar14) <= (int)((uVar6 ^ uVar13) - uVar13))) {
                    iVar10 = iStack_88;
                    uStack_9c = uVar16;
                    iVar5 = iStack_88;
                  }
                  iStack_88 = iVar5;
                  uVar9 = uVar9 + 1;
                  piStack_108 = piStack_108 + 1;
                  iVar4 = iVar10;
                  uVar16 = uStack_9c;
                  uStack_78 = uVar9;
                } while ((int)uVar9 < iStack_20);
              }
              iVar4 = uStack_9c + iVar3;
              aiStack_44[iVar4] = aiStack_44[iVar4] + 1;
              iVar18 = FUN_0040f840((byte *)(uStack_9c * uVar15 + (int)puStack_24),uVar15,iStack_5c,
                                    0);
              iStack_68 = (iVar18 * iStack_ac + 0x8000 + iVar12 >> 0x10) + param_1 >> 2;
              iStack_6c = (iVar18 * iStack_8c + 0x8000 + iVar8 >> 0x10) + param_2 >> 2;
              *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = iStack_68;
              *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = iStack_6c;
              *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = iVar4;
              DAT_007f4d14 = DAT_007f4d14 + 1;
              if ((((-1 < iStack_68) && (iStack_68 < DAT_007f4d2c)) && (-1 < iStack_6c)) &&
                 (iStack_6c < DAT_007f4d30)) {
                uVar9 = DAT_007f4d2c * iStack_6c + iStack_68 + iVar4 * iStack_48 ^ 7;
                pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
              }
              iStack_104 = iStack_104 + -1;
              iVar4 = DAT_007f4d2c;
            } while (iStack_104 != 0);
          }
        }
        aiStack_44[6] = 0;
      }
      else {
        uStack_78 = 0;
        if (0 < iStack_20) {
          do {
            if (0 < (int)uVar15) {
              iStack_f8 = iVar8 + 0x8000;
              iStack_fc = iVar12 + 0x8000;
              uStack_100 = uVar15;
              do {
                iStack_68 = (iStack_fc >> 0x10) + param_1 >> 2;
                iStack_6c = (iStack_f8 >> 0x10) + param_2 >> 2;
                if (((iStack_68 < 0) || (iVar4 <= iStack_68)) ||
                   ((iStack_6c < 0 || (DAT_007f4d30 <= iStack_6c)))) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((!bVar2) ||
                   (uVar9 = iVar4 * iStack_6c + iStack_68 + (uStack_78 + iVar3) * iStack_48 ^ 7,
                   (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)) {
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = iStack_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = iStack_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = uStack_78 + iVar3;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  aiStack_44[6] = aiStack_44[6] + -1;
                  if (bVar2) {
                    uVar9 = DAT_007f4d2c * iStack_6c + iStack_68 + (uStack_78 + iVar3) * iStack_48 ^
                            7;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                }
                iStack_fc = iStack_fc + iStack_ac;
                iStack_f8 = iStack_f8 + iStack_8c;
                uStack_100 = uStack_100 - 1;
                iVar4 = DAT_007f4d2c;
              } while (uStack_100 != 0);
            }
            uStack_78 = uStack_78 + 1;
          } while ((int)uStack_78 < iStack_20);
        }
      }
    }
    iVar18 = 0;
    if (aiStack_44[6] < 1) {
      iVar3 = iStack_50;
      if (param_6 != 0) goto LAB_0041098f;
      aiStack_44[7] = 0;
      iVar3 = DAT_007f4d3c;
      if (0 < DAT_007f4d14) goto LAB_00410872;
      goto LAB_00410987;
    }
    param_1 = param_1 - (DAT_007f4d38 * 4 >> 0x10);
    param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
    aiStack_44[5] = 1;
  } while (((-1 < param_1) && (param_1 < iVar4)) &&
          ((-1 < param_2 &&
           (((param_2 < DAT_007f4d30 && (-1 < param_3)) && (param_3 < DAT_007f4d34))))));
LAB_004109fd:
  iVar3 = -4;
  goto LAB_0041098f;
LAB_00410872:
  do {
    iStack_68 = *(int *)(iVar18 + iVar3);
    iStack_6c = *(int *)(iVar18 + 4 + iVar3);
    uStack_78 = *(uint *)(iVar18 + 8 + iVar3);
    if ((((iStack_68 < 0) || (iVar4 <= iStack_68)) || (iStack_6c < 0)) ||
       ((DAT_007f4d30 <= iStack_6c ||
        (*(short *)(DAT_007f4cf0 + (uStack_78 * iStack_48 + iStack_68 + iVar4 * iStack_6c) * 2) != 0
        )))) {
      iVar3 = FUN_0040f270(&iStack_68,&iStack_6c,(int *)&uStack_78,DAT_007f4d0c >> 2,
                           DAT_007f4d10 >> 2,DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,
                           param_3 >> 2);
      if (iVar3 != 0) goto LAB_004109fd;
      uVar15 = uStack_78 * iStack_48 + iStack_68 + DAT_007f4d2c * iStack_6c ^ 7;
      pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar15 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar15 & 7);
      *(int *)(iVar18 + DAT_007f4d3c) = iStack_68;
      *(int *)(iVar18 + 4 + DAT_007f4d3c) = iStack_6c;
      *(uint *)(iVar18 + 8 + DAT_007f4d3c) = uStack_78;
      iVar3 = DAT_007f4d3c;
      iVar4 = DAT_007f4d2c;
    }
    aiStack_44[7] = aiStack_44[7] + 1;
    iVar18 = iVar18 + 0x14;
  } while (aiStack_44[7] < DAT_007f4d14);
LAB_00410987:
  FUN_0040eb90();
  iVar3 = iStack_50;
LAB_0041098f:
  if (iVar3 == 0) {
    ExceptionList = pvStack_14;
    return 0;
  }
  if (iVar3 == -4) {
    ExceptionList = pvStack_14;
    return -4;
  }
  RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xa4b);
  ExceptionList = pvStack_14;
  return iVar3;
}

