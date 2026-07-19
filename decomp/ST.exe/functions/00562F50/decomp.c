
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00562f50(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,uint param_10)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  InternalExceptionFrame local_1b8;
  undefined4 *local_174;
  int local_16c;
  int *local_164;
  int *local_160;
  int local_158;
  int local_150;
  int local_140;
  int local_13c;
  int local_134 [13];
  int local_100;
  int local_e0;
  int local_dc;
  int local_d4;
  int local_cc;
  int *local_c8;
  int local_c4;
  int local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  byte *local_a0;
  int local_9c;
  int local_94;
  short *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c [2];
  int local_64;
  undefined4 *local_60 [3];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079aff0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe18;
  local_6c[0] = (int *)0x0;
  local_70 = 0;
  if ((param_4 != 0) && (0 < param_5)) {
    _DAT_00803318 = 0;
    _DAT_0080331c = 1;
    DAT_00803320 = 2;
    DAT_00803324 = 3;
    DAT_00803328 = 5;
    DAT_0080332c = 2;
    DAT_00803330 = 8;
    DAT_00803334 = 2;
    DAT_00803338 = 10;
    DAT_0080333c = 1;
    DAT_00803340 = 1;
    DAT_00803344 = 100;
    _DAT_00803348 = 5;
    _DAT_0080334c = 3;
    _DAT_00803350 = 3;
    DAT_00803358 = 9;
    DAT_0080335c = 0x16;
    _DAT_00803360 = 3;
    _DAT_00803364 = 3;
    DAT_00803368 = 10;
    _DAT_0080336c = 0x1e;
    _DAT_00803370 = 0xf;
    DAT_00803354 = 5;
    DAT_008033b4 = (undefined4 *)0x0;
    local_60[0] = (undefined4 *)0x0;
    DAT_00803300 = (int *)0x0;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    piVar9 = (int *)(param_4 + 0xc);
    iVar14 = param_5;
    ExceptionList = &local_14;
    do {
      piVar9[-2] = -1;
      piVar9[-1] = -1;
      piVar9[2] = 0;
      if (((piVar9[-3] < 1) && (0 < *piVar9)) && (0 < piVar9[1])) {
        piVar9[-3] = (int)((piVar9[1] + 1U & 0xfffffffe) * (*piVar9 + 1U & 0xfffffffe)) / 2;
      }
      *piVar9 = 0;
      piVar9[1] = 0;
      piVar9 = piVar9 + 6;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    DAT_00803390 = 0x2c;
    DAT_008033bc = param_2 + -0x2c;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x2c;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar14 = param_2 + 0x2c;
    if (DAT_007fb278 <= iVar14) {
      iVar14 = DAT_007fb278 + -1;
    }
    iVar15 = param_3 + 0x2c;
    if (DAT_007fb27a <= iVar15) {
      iVar15 = DAT_007fb27a + -1;
    }
    DAT_008033a4 = (iVar14 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar15 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar14 = Library::MSVCRT::__setjmp3
                       (local_1b8.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
    local_1c = &stack0xfffffe18;
    if (iVar14 == 0) {
      local_1c = &stack0xfffffe18;
      local_60[0] = Library::DKW::LIB::FUN_006aac10(DAT_008033ac * 2);
      DAT_00803380 = Library::DKW::LIB::FUN_006aac10(DAT_008033ac * 2);
      local_8 = iVar14;
      Library::MSVCRT::FUN_0072da40();
      local_a0 = &stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_80 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_008032fc = &stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_008033b0 = (undefined4 *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_160 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_174 = (undefined4 *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      DAT_00803300 = (int *)&stack0xfffffe18;
      local_1c = &stack0xfffffe18;
      Library::MSVCRT::FUN_0072da40();
      local_1c = &stack0xfffffe18;
      local_8 = 0xffffffff;
      puVar16 = (undefined4 *)&stack0xfffffe18;
      for (iVar14 = 0x20; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      DAT_008033b8 = DAT_008032fc + 0x40;
      puVar16 = DAT_008033b0;
      for (iVar14 = 0x10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      DAT_008032f8 = DAT_00803300;
      DAT_008032f4 = DAT_00803300 + 500;
      uVar17 = 0;
      local_78 = 0;
      DAT_00803310 = &stack0xfffffe18;
      puVar5 = &stack0xfffffe18;
      if (0 < param_5) {
        do {
          piVar9 = (int *)(param_4 + local_78 * 0x18);
          iVar14 = *piVar9;
          if (0 < iVar14) {
            iVar15 = 0;
            if (0 < (int)uVar17) {
              do {
                if (**(int **)(&stack0xfffffe18 + iVar15 * 4) < iVar14) break;
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)uVar17);
            }
            if (iVar15 < (int)uVar17) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)(&stack0xfffffe1c + iVar15 * 4),
                         (undefined4 *)(&stack0xfffffe18 + iVar15 * 4),
                         (iVar15 * 0x3fffffff + uVar17) * 4);
            }
            *(int **)(&stack0xfffffe18 + iVar15 * 4) = piVar9;
            uVar17 = uVar17 + 1;
          }
          local_78 = local_78 + 1;
          puVar5 = DAT_00803310;
        } while (local_78 < param_5);
      }
      DAT_00803310 = puVar5;
      iVar14 = -1;
      iVar15 = -1;
      local_8c = -1;
      local_48 = (uint)(*(int *)local_174[uVar17 - 1] < 0x1f);
      for (iVar18 = uVar17 - 2; -1 < iVar18; iVar18 = iVar18 + -1) {
        iVar11 = *(int *)local_174[iVar18];
        if ((0xf < iVar11) &&
           (iVar6 = iVar11 - *(int *)local_174[iVar18 + 1], *(int *)local_174[iVar18 + 1] < iVar6))
        {
          if (iVar6 <= iVar14) {
            if ((local_48 == 0) || (iVar11 < 0x1f)) goto LAB_00563368;
            local_48 = 0;
          }
          local_8c = iVar18;
          iVar14 = iVar6;
          iVar15 = iVar18;
        }
LAB_00563368:
      }
      iVar14 = 0;
      do {
        if (*(int *)local_174[iVar15 + 1] <= (int)(&DAT_007c9614)[iVar14]) break;
        iVar14 = iVar14 + 1;
      } while (iVar14 < 9);
      DAT_008032f0 = *(int *)(iVar14 * 8 + 0x7c9640);
      DAT_008032ec = *(int *)(iVar14 * 8 + 0x7c963c);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar15) {
        iVar14 = 0;
        do {
          if (*(int *)*local_174 <= (int)(&DAT_007c9614)[iVar14]) break;
          iVar14 = iVar14 + 1;
        } while (iVar14 < 9);
        DAT_00803374 = *(int *)(iVar14 * 8 + 0x7c9640);
        DAT_00803378 = *(int *)(iVar14 * 8 + 0x7c963c);
        DAT_008032e8 = DAT_00803378 * DAT_00803374;
      }
      local_9c = DAT_00803304 + -0x14;
      if (DAT_00803304 + -0x14 < 0) {
        local_9c = 0;
      }
      local_e0 = DAT_00803308 + -0x14;
      if (DAT_00803308 + -0x14 < 0) {
        local_e0 = 0;
      }
      local_c4 = DAT_00803304 + 0x14;
      if (DAT_008033a4 <= DAT_00803304 + 0x14) {
        local_c4 = DAT_008033a4 + -1;
      }
      local_16c = DAT_00803308 + 0x14;
      if (DAT_008033a8 <= DAT_00803308 + 0x14) {
        local_16c = DAT_008033a8 + -1;
      }
      local_ac = 0;
      iVar14 = DAT_008033a4;
      iVar15 = local_e0;
      if (0 < local_e0) {
        do {
          local_cc = local_ac * iVar14 * 2;
          local_30 = (int)DAT_00803380 + local_cc;
          local_cc = local_cc + (int)local_60[0];
          local_90 = (short *)(DAT_007fb280 +
                              ((DAT_008033c0 + local_ac) * (int)DAT_007fb278 + DAT_008033bc) * 2);
          iVar18 = 0;
          if (0 < iVar14) {
            do {
              iVar14 = 0;
              iVar11 = 0;
              psVar8 = local_90;
              do {
                if (*psVar8 == 0) {
                  iVar14 = iVar14 + 1;
                }
                iVar11 = iVar11 + 1;
                psVar8 = psVar8 + DAT_007fb27e;
              } while (iVar11 < 5);
              *(char *)(local_30 + iVar18 * 2) = (char)iVar14;
              if (iVar14 < 1) {
                *(undefined2 *)(local_cc + iVar18 * 2) = 0xffff;
              }
              else if (iVar14 < 3) {
                *(short *)(local_cc + iVar18 * 2) = 5 - (short)iVar14;
              }
              else {
                *(undefined2 *)(local_cc + iVar18 * 2) = 0;
              }
              iVar18 = iVar18 + 1;
              local_90 = local_90 + 1;
              iVar14 = DAT_008033a4;
            } while (iVar18 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < local_e0);
      }
      for (; iVar15 <= local_16c; iVar15 = iVar15 + 1) {
        local_cc = iVar15 * iVar14 * 2;
        local_30 = (int)DAT_00803380 + local_cc;
        local_cc = local_cc + (int)local_60[0];
        psVar8 = (short *)(DAT_007fb280 +
                          ((iVar15 + DAT_008033c0) * (int)DAT_007fb278 + DAT_008033bc) * 2);
        iVar18 = 0;
        if (0 < local_9c) {
          do {
            iVar11 = 0;
            iVar14 = 0;
            psVar7 = psVar8;
            do {
              if (*psVar7 == 0) {
                iVar11 = iVar11 + 1;
              }
              iVar14 = iVar14 + 1;
              psVar7 = psVar7 + DAT_007fb27e;
            } while (iVar14 < 5);
            *(char *)(local_30 + iVar18 * 2) = (char)iVar11;
            if (iVar11 < 1) {
              *(undefined2 *)(local_cc + iVar18 * 2) = 0xffff;
            }
            else if (iVar11 < 3) {
              *(short *)(local_cc + iVar18 * 2) = 5 - (short)iVar11;
            }
            else {
              *(undefined2 *)(local_cc + iVar18 * 2) = 0;
            }
            iVar18 = iVar18 + 1;
            psVar8 = psVar8 + 1;
            iVar14 = DAT_008033a4;
          } while (iVar18 < local_9c);
        }
        psVar8 = (short *)(DAT_007fb280 +
                          ((int)DAT_007fb278 * (DAT_008033c0 + iVar15) + local_9c + DAT_008033bc) *
                          2);
        local_164 = (int *)(DAT_007fb248 +
                           ((int)DAT_007fb240 * (DAT_008033c0 + iVar15) + local_9c + DAT_008033bc) *
                           8);
        local_94 = local_9c;
        while (local_94 <= local_c4) {
          local_d4 = 0;
          local_64 = 0;
          local_34 = 0;
          piVar9 = local_164;
          psVar7 = psVar8;
          do {
            if (*psVar7 == 0) {
              local_d4 = local_d4 + 1;
              if ((piVar9[1] != 0) && (*(int *)(piVar9[1] + 0x20) == 0x1ae)) {
                local_64 = local_64 + 3;
LAB_005637b9:
              }
            }
            else if (*piVar9 != 0) {
              if (param_1 != 0xff) {
                bVar2 = *(byte *)(*piVar9 + 0x24);
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_005637a4:
                    iVar14 = 0;
                  }
                  else {
                    uVar12 = (uint)bVar2;
                    uVar10 = param_1 & 0xff;
                    cVar1 = *(char *)((int)&DAT_00808a4f + uVar12 * 8 + uVar10);
                    if ((cVar1 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12) == '\0')) {
                      iVar14 = -2;
                    }
                    else if ((cVar1 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12) == '\0')) {
                      iVar14 = -1;
                    }
                    else if ((cVar1 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12) == '\x01')) {
                      iVar14 = 1;
                    }
                    else {
                      if ((cVar1 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar12) != '\x01'))
                      goto LAB_005637a4;
                      iVar14 = 2;
                    }
                  }
                  bVar20 = iVar14 < 0;
                }
                else {
                  bVar20 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar2 * 0x51];
                }
                if (bVar20) goto LAB_005637bc;
              }
              local_64 = local_64 + 2;
              goto LAB_005637b9;
            }
LAB_005637bc:
            local_34 = local_34 + 1;
            psVar7 = psVar7 + DAT_007fb27e;
            piVar9 = piVar9 + DAT_007fb246 * 2;
          } while (local_34 < 5);
          *(byte *)(local_30 + local_94 * 2) = (char)local_64 << 4 | (byte)local_d4;
          if (local_d4 < 1) {
            *(undefined2 *)(local_cc + local_94 * 2) = 0xffff;
          }
          else if (local_d4 < 3) {
            *(short *)(local_cc + local_94 * 2) = 5 - (short)local_d4;
          }
          else {
            *(undefined2 *)(local_cc + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar8 = psVar8 + 1;
          local_164 = local_164 + 2;
          iVar14 = DAT_008033a4;
        }
        local_90 = (short *)(DAT_007fb280 + 2 +
                            ((iVar15 + DAT_008033c0) * (int)DAT_007fb278 + local_c4 + DAT_008033bc)
                            * 2);
        iVar18 = local_c4 + 1;
        if (iVar18 < iVar14) {
          do {
            iVar14 = 0;
            iVar11 = 0;
            psVar8 = local_90;
            do {
              if (*psVar8 == 0) {
                iVar14 = iVar14 + 1;
              }
              iVar11 = iVar11 + 1;
              psVar8 = psVar8 + DAT_007fb27e;
            } while (iVar11 < 5);
            *(char *)(local_30 + iVar18 * 2) = (char)iVar14;
            if (iVar14 < 1) {
              *(undefined2 *)(local_cc + iVar18 * 2) = 0xffff;
            }
            else if (iVar14 < 3) {
              *(short *)(local_cc + iVar18 * 2) = 5 - (short)iVar14;
            }
            else {
              *(undefined2 *)(local_cc + iVar18 * 2) = 0;
            }
            iVar18 = iVar18 + 1;
            local_90 = local_90 + 1;
            iVar14 = DAT_008033a4;
          } while (iVar18 < DAT_008033a4);
        }
      }
      local_ac = local_16c + 1;
      if (local_ac < DAT_008033a8) {
        do {
          local_cc = local_ac * iVar14 * 2;
          local_30 = (int)DAT_00803380 + local_cc;
          local_cc = local_cc + (int)local_60[0];
          local_90 = (short *)(DAT_007fb280 +
                              ((DAT_008033c0 + local_ac) * (int)DAT_007fb278 + DAT_008033bc) * 2);
          iVar15 = 0;
          if (0 < iVar14) {
            do {
              iVar14 = 0;
              iVar18 = 0;
              psVar8 = local_90;
              do {
                if (*psVar8 == 0) {
                  iVar14 = iVar14 + 1;
                }
                iVar18 = iVar18 + 1;
                psVar8 = psVar8 + DAT_007fb27e;
              } while (iVar18 < 5);
              *(char *)(local_30 + iVar15 * 2) = (char)iVar14;
              if (iVar14 < 1) {
                *(undefined2 *)(local_cc + iVar15 * 2) = 0xffff;
              }
              else if (iVar14 < 3) {
                *(short *)(local_cc + iVar15 * 2) = 5 - (short)iVar14;
              }
              else {
                *(undefined2 *)(local_cc + iVar15 * 2) = 0;
              }
              iVar15 = iVar15 + 1;
              local_90 = local_90 + 1;
              iVar14 = DAT_008033a4;
            } while (iVar15 < DAT_008033a4);
          }
          local_ac = local_ac + 1;
        } while (local_ac < DAT_008033a8);
      }
      if (((param_6 != 0) && (0 < param_7)) && (local_78 = 0, 0 < param_7)) {
        do {
          piVar9 = (int *)(param_6 + local_78 * 0x18);
          iVar15 = *piVar9;
          if (0 < iVar15) {
            iVar18 = piVar9[5];
            local_84 = piVar9[1] - DAT_008033bc;
            if ((-1 < local_84) && (local_84 < iVar14)) {
              iVar11 = piVar9[2] - DAT_008033c0;
              local_b8 = iVar11;
              if ((-1 < iVar11) && (iVar11 < DAT_008033a8)) {
                switch(piVar9[3]) {
                case 0:
                case 3:
                  iVar14 = *(int *)(&DAT_007a4bf8 + piVar9[4] * 4) * 2 + -2;
                  iVar18 = 0;
                  iVar6 = iVar14;
                  break;
                case 1:
                  iVar6 = *(int *)(&DAT_007a4b60 + piVar9[4] * 4);
                  iVar14 = 1;
                  break;
                case 2:
                  iVar6 = *(int *)(&DAT_007a4b88 + piVar9[4] * 8);
                  iVar14 = 1;
                  break;
                case 4:
                case 5:
                  iVar14 = (*(int *)(&DAT_007a4bf8 + piVar9[4] * 4) * 2) / 2;
                  iVar6 = *(int *)(&DAT_007a4bf8 + piVar9[4] * 4) * 2;
                  break;
                default:
                  iVar18 = 0;
                case -10:
                  iVar14 = *(int *)(&DAT_007a4c24 + piVar9[4] * 8);
                  iVar6 = *(int *)(&DAT_007a4c20 + piVar9[4] * 8);
                }
                local_c8 = FUN_00561240(iVar14,iVar6,iVar18);
                if (1 < *local_c8) {
                  local_13c = (iVar15 << 0x10) / *local_c8;
                  iVar15 = 0;
                  iVar14 = (int)DAT_00803380 + (local_c8[3] + iVar11) * DAT_008033a4 * 2;
                  local_ac = 0;
                  if (0 < local_c8[4]) {
                    do {
                      iVar18 = local_c8[3] + iVar11 + local_ac;
                      if ((-1 < iVar18) && (iVar18 < DAT_008033a8)) {
                        local_a8 = local_c8[local_ac * 2 + 6] + local_84;
                        for (iVar18 = local_c8[local_ac * 2 + 5] + local_84; iVar18 <= local_a8;
                            iVar18 = iVar18 + 1) {
                          if (((-1 < iVar18) && (iVar18 < DAT_008033a4)) &&
                             (iVar15 = iVar15 + local_13c, 0x10000 < iVar15)) {
                            bVar2 = *(byte *)(iVar14 + iVar18 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar15 >> 0x10)) < 0xf) {
                              *(byte *)(iVar14 + iVar18 * 2) =
                                   (char)((uint)iVar15 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)(iVar14 + iVar18 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_ac = local_ac + 1;
                      iVar14 = iVar14 + DAT_008033a4 * 2;
                      iVar11 = local_b8;
                    } while (local_ac < local_c8[4]);
                  }
                }
                FUN_006ab060(&local_c8);
                iVar14 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_7);
      }
      iVar15 = 0;
      DAT_0080338c = 0;
      if ((param_8 != 0) && (0 < param_9)) {
        iVar18 = (*(int *)local_174[uVar17 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar18;
        local_78 = 0;
        if (0 < param_9) {
          do {
            piVar9 = (int *)(param_8 + local_78 * 0x18);
            iVar11 = piVar9[1] - DAT_008033bc;
            if ((-1 < iVar11) && (iVar11 < iVar14)) {
              iVar6 = piVar9[2] - DAT_008033c0;
              local_ac = iVar6;
              if ((-1 < iVar6) && (iVar6 < DAT_008033a8)) {
                local_4c = piVar9[3] * piVar9[4];
                if ((0 < local_4c) && (iVar18 <= (*piVar9 * 100) / local_4c)) {
                  *(int *)(DAT_00803310 + iVar15 * 0x14) = iVar11;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 4) = iVar6;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 8) = 0;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 0xc) = 0;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 0x10) = piVar9[4];
                  iVar15 = DAT_0080338c + 1;
                  iVar14 = DAT_008033a4;
                  DAT_0080338c = iVar15;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_9);
        }
      }
      DAT_0080339c = 9;
      iVar15 = 0;
      iVar18 = 0;
      local_dc = 0;
      for (iVar11 = local_e0; iVar11 <= local_16c; iVar11 = iVar11 + 1) {
        local_30 = (int)DAT_00803380 + iVar11 * iVar14 * 2;
        for (iVar6 = local_9c; iVar6 <= local_c4; iVar6 = iVar6 + 1) {
          if ((*(byte *)(local_30 + iVar6 * 2) & 0xf0) != 0) {
            iVar15 = iVar15 + 1;
            iVar18 = iVar18 + iVar6;
            local_dc = local_dc + iVar11;
          }
        }
      }
      iVar14 = DAT_00803304;
      iVar11 = DAT_00803308;
      if (0 < iVar15) {
        iVar14 = (iVar18 + iVar15 / 2) / iVar15;
        iVar11 = (local_dc + iVar15 / 2) / iVar15;
        iVar15 = FUN_006acf90(iVar14,iVar11,DAT_00803304,DAT_00803308);
        if (5 < iVar15) {
          iVar14 = ((iVar15 + -5) * DAT_00803304 + iVar14 * 5) / iVar15;
          iVar11 = ((iVar15 + -5) * DAT_00803308 + iVar11 * 5) / iVar15;
        }
      }
      DAT_00803308 = iVar11;
      DAT_00803304 = iVar14;
      piVar9 = local_134;
      for (iVar14 = 0x16; pbVar4 = local_a0, iVar15 = DAT_0080339c, piVar13 = local_80, iVar14 != 0;
          iVar14 = iVar14 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      for (; local_80 = piVar13, iVar15 < 0xe; iVar15 = iVar15 + 1) {
        local_28 = FUN_0055ee70(pbVar4,iVar15,1);
        iVar14 = 0;
        if (0 < local_28) {
          do {
            iVar11 = (char)pbVar4[iVar14 * 2] + DAT_00803304;
            iVar18 = (char)pbVar4[iVar14 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar11) && (iVar11 < DAT_008033a4)) && (-1 < iVar18)) &&
               ((iVar18 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar18 * DAT_008033a4 + iVar11) * 2) & 0xf0) != 0))
               )) {
              local_134[iVar15] = local_134[iVar15] + 1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < local_28);
        }
        local_134[iVar15] = (local_134[iVar15] * 100) / local_28;
        piVar13 = local_80;
      }
      iVar14 = -30000;
      iVar15 = 0xc;
      if (DAT_0080339c < 0xd) {
        do {
          iVar18 = ((0xd - iVar15) * local_100 + local_134[iVar15]) / (0xe - iVar15) - local_100;
          if (iVar14 <= iVar18) {
            DAT_00803384 = iVar15 + 1;
            iVar14 = iVar18;
          }
          iVar15 = iVar15 + -1;
        } while (DAT_0080339c <= iVar15);
      }
      if (DAT_00803384 < 0xb) {
        DAT_00803384 = DAT_00803384 + 4;
      }
      *piVar13 = DAT_00803304;
      piVar13[1] = DAT_00803308;
      DAT_008033b4 = FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar13,1);
      FUN_006ab060(local_60);
      thunk_FUN_0055dee0(local_a0);
      iVar14 = 0;
      do {
        piVar13 = (int *)&stack0xfffffe18;
        iVar15 = (int)(iVar14 * 0x168 + (iVar14 * 0x168 >> 0x1f & 0xfU)) >> 4;
        piVar9 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar15);
        *(int **)(DAT_008032fc + iVar14 * 4) = piVar9;
        piVar9 = FUN_00561240(DAT_00803374,DAT_00803378,iVar15);
        *(int **)(DAT_008033b8 + iVar14 * 4) = piVar9;
        piVar9 = FUN_00561240(5,DAT_008032ec,iVar15);
        DAT_008033b0[iVar14] = piVar9;
        iVar14 = iVar14 + 1;
        iVar15 = DAT_0080339c;
        piVar9 = local_160;
      } while (iVar14 < 0x10);
      while (local_160 = piVar9, local_88 = iVar15, iVar15 < 0x16) {
        local_28 = FUN_0055ee70(local_a0,iVar15,1);
        iVar14 = DAT_00803384 - DAT_0080339c;
        iVar18 = 0x16 - DAT_00803384;
        if (iVar14 < iVar18) {
          uVar12 = DAT_00803384 - iVar15 >> 0x1f;
          iVar14 = (DAT_00803384 - iVar15 ^ uVar12) - uVar12;
          iVar14 = iVar18 * iVar18 - iVar14 * iVar14;
        }
        else {
          uVar12 = DAT_00803384 - iVar15 >> 0x1f;
          iVar15 = (DAT_00803384 - iVar15 ^ uVar12) - uVar12;
          iVar14 = iVar14 * iVar14 - iVar15 * iVar15;
        }
        DAT_00803388 = iVar14 / 2;
        local_50 = 0;
        if (0 < local_28) {
          do {
            iVar14 = (char)local_a0[local_50 * 2] + DAT_00803304;
            if (((-1 < iVar14) && (iVar14 < DAT_008033a4)) &&
               ((iVar15 = (char)local_a0[local_50 * 2 + 1] + DAT_00803308, -1 < iVar15 &&
                ((iVar15 < DAT_008033a8 &&
                 (0 < *(short *)((int)DAT_008033b4 + (iVar15 * DAT_008033a4 + iVar14) * 2))))))) {
              local_140 = 0;
              local_150 = 0;
              if (0 < DAT_0080338c) {
                do {
                  piVar9 = (int *)(DAT_00803310 + local_150 * 0x14);
                  iVar18 = piVar9[4];
                  if (piVar9[4] <= DAT_008032ec) {
                    iVar18 = DAT_008032ec;
                  }
                  iVar11 = FUN_006acf90(*piVar9,piVar9[1],iVar14,iVar15);
                  if (iVar11 < iVar18 / 2) {
                    local_140 = 1;
                    break;
                  }
                  local_150 = local_150 + 1;
                } while (local_150 < DAT_0080338c);
              }
              if (local_140 == 0) {
                iVar18 = 0x10;
                uVar12 = FUN_006db910(DAT_00803304,DAT_00803308,iVar14,iVar15);
                local_74 = (int *)FUN_006db990(uVar12,iVar18);
                local_b0 = (int)local_74 - 3;
                if (local_b0 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (local_b0 < 0) {
                      iVar18 = local_b0 + 0x10;
                    }
                    else {
                      iVar18 = local_b0;
                      if (0xf < local_b0) {
                        iVar18 = local_b0 + -0x10;
                      }
                    }
                    iVar18 = FUN_00561dc0(iVar14,iVar15,iVar18);
                    FUN_00564f30(iVar14,iVar15,iVar18,local_74,DAT_0080330c,local_88);
                    if (-1 < local_8c) {
                      FUN_00564f30(iVar14,iVar15,iVar18,local_74,DAT_008032e8,local_88);
                    }
                    local_b0 = local_b0 + 3;
                  } while (local_b0 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 3;
          } while (local_50 < local_28);
        }
        piVar9 = local_160;
        iVar15 = local_88 + 3;
      }
      iVar14 = ((local_8c * 0x19 + 0x19) * 4) / (int)uVar17;
      if (iVar14 < DAT_0080337c) {
        DAT_0080337c = iVar14;
      }
      if (100 - iVar14 < DAT_00803314) {
        DAT_00803314 = 100 - iVar14;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar14 = 0x7fffffff;
        iVar15 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (DAT_008032f8[iVar15 * 5 + 3] < iVar14) {
              iVar14 = DAT_008032f8[iVar15 * 5 + 3];
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_0080337c);
        }
        iVar15 = 0;
        if (0 < DAT_00803314) {
          do {
            if (DAT_008032f4[iVar15 * 5 + 3] < iVar14) {
              iVar14 = DAT_008032f4[iVar15 * 5 + 3];
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_00803314);
        }
        iVar14 = (int)(iVar14 * 0xf + (iVar14 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar15 = 0;
        if (0 < DAT_0080337c) {
          do {
            DAT_008032f8[iVar15 * 5 + 3] = DAT_008032f8[iVar15 * 5 + 3] - iVar14;
            piVar9[iVar15] = DAT_008032f8[iVar15 * 5 + 3];
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_0080337c);
        }
        iVar15 = 0;
        if (0 < DAT_00803314) {
          do {
            DAT_008032f4[iVar15 * 5 + 3] = DAT_008032f4[iVar15 * 5 + 3] - iVar14;
            piVar9[DAT_0080337c + iVar15] = DAT_008032f4[iVar15 * 5 + 3];
            iVar15 = iVar15 + 1;
          } while (iVar15 < DAT_00803314);
        }
        piVar19 = DAT_00803300 + DAT_0080337c * 5;
        for (uVar12 = DAT_00803314 * 5 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
          *piVar19 = *DAT_008032f4;
          DAT_008032f4 = DAT_008032f4 + 1;
          piVar19 = piVar19 + 1;
        }
        for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(char *)piVar19 = (char)*DAT_008032f4;
          DAT_008032f4 = (int *)((int)DAT_008032f4 + 1);
          piVar19 = (int *)((int)piVar19 + 1);
        }
        DAT_008032f4 = DAT_00803300 + DAT_0080337c * 5;
        local_6c[0] = thunk_FUN_0055f0c0(piVar9,DAT_00803398,uVar17,10,param_10,FUN_00562170,
                                         FUN_00564dd0);
        local_40 = local_6c[0];
        if (local_6c[0] == (int *)0x0) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_158 = 0;
          local_78 = 0;
          iVar15 = local_54;
          local_40 = (int *)&stack0xfffffe18;
          local_1c = &stack0xfffffe18;
          piVar9 = DAT_008032f4;
          piVar19 = (int *)&stack0xfffffe18;
          puVar5 = &stack0xfffffe18;
          iVar14 = local_8c;
          if (-1 < local_8c) {
            do {
              local_38 = -30000;
              local_150 = 0;
              iVar14 = local_158;
              piVar9 = DAT_008032f8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < piVar9[3]) {
                    iVar14 = 30000;
                    iVar15 = 0;
                    if (0 < local_158) {
                      do {
                        iVar18 = FUN_006acf90(DAT_00803300[local_40[iVar15] * 5],
                                              (DAT_00803300 + local_40[iVar15] * 5)[1],*piVar9,
                                              piVar9[1]);
                        if (iVar18 < iVar14) {
                          iVar14 = iVar18;
                        }
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < local_158);
                    }
                    if (local_38 < iVar14) {
                      local_54 = local_150;
                      local_38 = iVar14;
                    }
                  }
                  local_150 = local_150 + 1;
                  piVar9 = piVar9 + 5;
                  iVar14 = local_158;
                  iVar15 = local_54;
                  piVar13 = local_40;
                } while (local_150 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar13[iVar14] = -1;
              }
              else {
                DAT_008032f8[iVar15 * 5 + 3] = -1;
                piVar13[iVar14] = iVar15;
              }
              local_158 = iVar14 + 1;
              local_78 = local_78 + 1;
              piVar9 = DAT_008032f4;
              piVar19 = local_40;
              puVar5 = local_1c;
              iVar14 = local_8c;
            } while (local_78 <= local_8c);
          }
          while (local_1c = puVar5, local_40 = piVar19, local_78 = iVar14 + 1, DAT_008032f4 = piVar9
                , local_78 < (int)uVar17) {
            local_38 = -30000;
            local_150 = 0;
            iVar14 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < piVar9[3]) {
                  iVar14 = 30000;
                  iVar15 = 0;
                  if (0 < local_158) {
                    do {
                      iVar18 = FUN_006acf90(DAT_00803300[local_40[iVar15] * 5],
                                            (DAT_00803300 + local_40[iVar15] * 5)[1],*piVar9,
                                            piVar9[1]);
                      if (iVar18 < iVar14) {
                        iVar14 = iVar18;
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < local_158);
                  }
                  if (local_38 < iVar14) {
                    local_54 = local_150;
                    local_38 = iVar14;
                  }
                }
                local_150 = local_150 + 1;
                piVar9 = piVar9 + 5;
                iVar14 = local_78;
              } while (local_150 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_158] = -1;
            }
            else {
              DAT_00803300[(DAT_0080337c + local_54) * 5 + 3] = -1;
              local_40[local_158] = local_54 + DAT_0080337c;
            }
            local_158 = local_158 + 1;
            piVar9 = DAT_008032f4;
            piVar19 = local_40;
            puVar5 = local_1c;
          }
        }
        iVar14 = 0;
        if (0 < (int)uVar17) {
          do {
            iVar15 = local_40[iVar14];
            if (-1 < iVar15) {
              iVar18 = local_174[iVar14];
              *(int *)(iVar18 + 4) = DAT_00803300[iVar15 * 5] + DAT_008033bc;
              *(int *)(iVar18 + 8) = DAT_00803300[iVar15 * 5 + 1] + DAT_008033c0;
              if (local_8c < iVar14) {
                *(int *)(iVar18 + 0xc) = DAT_008032f0;
                iVar11 = DAT_008032ec;
              }
              else {
                *(int *)(iVar18 + 0xc) = DAT_00803374;
                iVar11 = DAT_00803378;
              }
              *(int *)(iVar18 + 0x10) = iVar11;
              *(int *)(iVar18 + 0x14) = DAT_00803300[iVar15 * 5 + 2];
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)uVar17);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar14 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = ReportDebugMessage(s_E____titans_scoreai_cpp_007c96b0,0xdc2,0,iVar14,&DAT_007a4ccc,
                                  s_AiAiCalcMinesFields_007c96e8);
      if (iVar15 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_70 = iVar14;
    iVar14 = local_70;
    FUN_006ab060(local_6c);
    FUN_006ab060(&DAT_008033b4);
    FUN_006ab060(local_60);
    FUN_006ab060(&DAT_00803380);
    iVar15 = 0;
    do {
      FUN_006ab060((undefined4 *)(DAT_008032fc + iVar15));
      iVar15 = iVar15 + 4;
    } while (iVar15 < 0x80);
    iVar15 = 0;
    do {
      FUN_006ab060((undefined4 *)(iVar15 + (int)DAT_008033b0));
      iVar15 = iVar15 + 4;
    } while (iVar15 < 0x40);
    if (iVar14 != 0) {
      RaiseInternalException(iVar14,DAT_007ed77c,s_E____titans_scoreai_cpp_007c96b0,0xdd4);
    }
  }
  ExceptionList = local_14;
  return;
}

