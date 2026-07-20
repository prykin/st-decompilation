
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\scoreai.cpp
   Diagnostic line evidence: 2390 | 2408 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void AiCalcDispositionAreas
               (uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               ,int param_8,int param_9,uint param_10)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  bool bVar21;
  InternalExceptionFrame local_1b8;
  int local_170;
  int *local_168;
  int *local_164;
  int local_15c;
  int local_154;
  int local_148;
  int local_144;
  int local_13c [12];
  int local_10c;
  int local_e8;
  int local_e4;
  int local_dc;
  int local_d4;
  int *local_d0;
  int local_cc;
  int local_c4;
  int local_c0;
  int local_b0;
  int local_ac;
  byte *local_a4;
  int local_a0;
  int local_98;
  int local_94;
  short *local_90;
  int local_8c;
  int local_88;
  int *local_84;
  undefined4 *local_80;
  int local_7c;
  int local_78;
  int *local_74;
  int local_70;
  int *local_6c [3];
  undefined4 *local_60 [3];
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  short *local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079afd0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe14;
  local_6c[0] = (int *)0x0;
  local_70 = 0;
  if ((param_4 != 0) && (0 < param_5)) {
    _DAT_00803318 = 0;
    _DAT_0080331c = 3;
    DAT_00803320 = 2;
    DAT_00803324 = 3;
    DAT_00803328 = 5;
    DAT_0080332c = 4;
    DAT_00803330 = 5;
    DAT_00803334 = 2;
    DAT_00803338 = 10;
    DAT_0080333c = 5;
    DAT_00803340 = 1;
    DAT_00803344 = 100;
    _DAT_00803348 = 5;
    _DAT_0080334c = 3;
    _DAT_00803350 = 3;
    DAT_00803358 = 5;
    DAT_0080335c = 0x14;
    _DAT_00803360 = 2;
    _DAT_00803364 = 2;
    DAT_00803368 = 10;
    _DAT_0080336c = 0x14;
    _DAT_00803370 = 10;
    DAT_00803354 = 5;
    DAT_008033b4 = (undefined4 *)0x0;
    local_60[0] = (undefined4 *)0x0;
    DAT_00803300 = (int *)0x0;
    DAT_00803314 = 0;
    DAT_0080337c = 0;
    puVar6 = (undefined4 *)(param_4 + 8);
    iVar15 = param_5;
    ExceptionList = &local_14;
    do {
      puVar6[-1] = 0xffffffff;
      *puVar6 = 0xffffffff;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6 = puVar6 + 6;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    DAT_00803390 = 0x28;
    DAT_008033bc = param_2 + -0x28;
    if (DAT_008033bc < 0) {
      DAT_008033bc = 0;
    }
    DAT_008033c0 = param_3 + -0x28;
    if (DAT_008033c0 < 0) {
      DAT_008033c0 = 0;
    }
    iVar15 = param_2 + 0x28;
    if (SHORT_007fb278 <= iVar15) {
      iVar15 = SHORT_007fb278 + -1;
    }
    iVar16 = param_3 + 0x28;
    if (SHORT_007fb27a <= iVar16) {
      iVar16 = SHORT_007fb27a + -1;
    }
    DAT_008033a4 = (iVar15 - DAT_008033bc) + 1;
    DAT_008033a8 = (iVar16 - DAT_008033c0) + 1;
    DAT_008033ac = DAT_008033a8 * DAT_008033a4;
    DAT_00803304 = param_2 - DAT_008033bc;
    DAT_00803308 = param_3 - DAT_008033c0;
    local_1b8.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_1b8;
    iVar15 = Library::MSVCRT::__setjmp3
                       (local_1b8.jumpBuffer,2,Library::MSVCRT::FUN_0072da21,0xffffffff);
    local_1c = &stack0xfffffe14;
    if (iVar15 == 0) {
      local_1c = &stack0xfffffe14;
      local_60[0] = Library::DKW::LIB::FUN_006aac10(DAT_008033ac * 2);
      DAT_00803380 = Library::DKW::LIB::FUN_006aac10(DAT_008033ac * 2);
      local_8 = iVar15;
      Library::MSVCRT::FUN_0072da40();
      local_a4 = &stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_84 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_008032fc = &stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_008033b0 = (undefined4 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_164 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_80 = (undefined4 *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      DAT_00803300 = (int *)&stack0xfffffe14;
      local_1c = &stack0xfffffe14;
      Library::MSVCRT::FUN_0072da40();
      local_1c = &stack0xfffffe14;
      local_8 = 0xffffffff;
      puVar6 = (undefined4 *)&stack0xfffffe14;
      for (iVar15 = 0x20; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      DAT_008033b8 = DAT_008032fc + 0x40;
      puVar6 = DAT_008033b0;
      for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      DAT_008032f8 = DAT_00803300;
      DAT_008032f4 = DAT_00803300 + 500;
      uVar18 = 0;
      local_78 = 0;
      DAT_00803310 = &stack0xfffffe14;
      puVar5 = &stack0xfffffe14;
      if (0 < param_5) {
        do {
          piVar10 = (int *)(param_4 + local_78 * 0x18);
          iVar15 = *piVar10;
          if (0 < iVar15) {
            iVar16 = 0;
            if (0 < (int)uVar18) {
              do {
                if (**(int **)(&stack0xfffffe14 + iVar16 * 4) < iVar15) break;
                iVar16 = iVar16 + 1;
              } while (iVar16 < (int)uVar18);
            }
            if (iVar16 < (int)uVar18) {
              Library::MSVCRT::FUN_0072da70
                        ((undefined4 *)(&stack0xfffffe18 + iVar16 * 4),
                         (undefined4 *)(&stack0xfffffe14 + iVar16 * 4),
                         (iVar16 * 0x3fffffff + uVar18) * 4);
            }
            *(int **)(&stack0xfffffe14 + iVar16 * 4) = piVar10;
            uVar18 = uVar18 + 1;
          }
          local_78 = local_78 + 1;
          puVar5 = DAT_00803310;
        } while (local_78 < param_5);
      }
      DAT_00803310 = puVar5;
      iVar15 = -1;
      iVar16 = -1;
      local_98 = -1;
      local_48 = (uint)(*(int *)local_80[uVar18 - 1] < 0x15);
      for (iVar19 = uVar18 - 2; -1 < iVar19; iVar19 = iVar19 + -1) {
        iVar17 = *(int *)local_80[iVar19];
        if ((10 < iVar17) &&
           (iVar7 = iVar17 - *(int *)local_80[iVar19 + 1], *(int *)local_80[iVar19 + 1] < iVar7)) {
          if (iVar7 <= iVar15) {
            if ((local_48 == 0) || (iVar17 < 0x15)) goto LAB_0055f7ef;
            local_48 = 0;
          }
          local_98 = iVar19;
          iVar15 = iVar7;
          iVar16 = iVar19;
        }
LAB_0055f7ef:
      }
      if (*(int *)local_80[iVar16 + 1] < 0x32) {
        local_3c = (*(int *)local_80[iVar16 + 1] + 5) / 10;
      }
      else {
        local_3c = 5;
      }
      DAT_008032f0 = *(int *)(&DAT_007a4c24 + local_3c * 8);
      DAT_008032ec = *(int *)(&DAT_007a4c20 + local_3c * 8);
      DAT_0080330c = DAT_008032ec * DAT_008032f0;
      if (-1 < iVar16) {
        if (*(int *)*local_80 < 0x32) {
          local_c4 = (*(int *)*local_80 + 5) / 10;
        }
        else {
          local_c4 = 5;
        }
        DAT_00803374 = *(int *)(&DAT_007a4c24 + local_c4 * 8);
        DAT_00803378 = *(int *)(&DAT_007a4c20 + local_c4 * 8);
        DAT_008032e8 = DAT_00803378 * DAT_00803374;
      }
      local_a0 = DAT_00803304 + -0x14;
      if (DAT_00803304 + -0x14 < 0) {
        local_a0 = 0;
      }
      local_e8 = DAT_00803308 + -0x14;
      if (DAT_00803308 + -0x14 < 0) {
        local_e8 = 0;
      }
      local_cc = DAT_00803304 + 0x14;
      if (DAT_008033a4 <= DAT_00803304 + 0x14) {
        local_cc = DAT_008033a4 + -1;
      }
      local_170 = DAT_00803308 + 0x14;
      if (DAT_008033a8 <= local_170) {
        local_170 = DAT_008033a8 + -1;
      }
      local_b0 = 0;
      iVar15 = DAT_008033a4;
      iVar16 = local_e8;
      if (0 < local_e8) {
        do {
          local_d4 = local_b0 * iVar15 * 2;
          local_30 = local_d4 + (int)DAT_00803380;
          local_d4 = local_d4 + (int)local_60[0];
          local_90 = (short *)(DAT_007fb280 +
                              ((local_b0 + DAT_008033c0) * (int)SHORT_007fb278 + DAT_008033bc) * 2);
          iVar19 = 0;
          if (0 < iVar15) {
            do {
              iVar15 = 0;
              iVar17 = 0;
              psVar9 = local_90;
              do {
                if (*psVar9 == 0) {
                  iVar15 = iVar15 + 1;
                }
                iVar17 = iVar17 + 1;
                psVar9 = psVar9 + SHORT_007fb27e;
              } while (iVar17 < 5);
              *(char *)(local_30 + iVar19 * 2) = (char)iVar15;
              if (iVar15 < 1) {
                *(undefined2 *)(local_d4 + iVar19 * 2) = 0xffff;
              }
              else if (iVar15 < 3) {
                *(short *)(local_d4 + iVar19 * 2) = (3 - (short)iVar15) * 3;
              }
              else {
                *(undefined2 *)(local_d4 + iVar19 * 2) = 0;
              }
              iVar19 = iVar19 + 1;
              local_90 = local_90 + 1;
              iVar15 = DAT_008033a4;
            } while (iVar19 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < local_e8);
      }
      for (; iVar16 <= local_170; iVar16 = iVar16 + 1) {
        local_d4 = iVar16 * iVar15 * 2;
        local_30 = local_d4 + (int)DAT_00803380;
        local_d4 = local_d4 + (int)local_60[0];
        psVar9 = (short *)(DAT_007fb280 +
                          ((iVar16 + DAT_008033c0) * (int)SHORT_007fb278 + DAT_008033bc) * 2);
        iVar19 = 0;
        if (0 < local_a0) {
          do {
            iVar15 = 0;
            iVar17 = 0;
            psVar8 = psVar9;
            do {
              if (*psVar8 == 0) {
                iVar15 = iVar15 + 1;
              }
              iVar17 = iVar17 + 1;
              psVar8 = psVar8 + SHORT_007fb27e;
            } while (iVar17 < 5);
            *(char *)(local_30 + iVar19 * 2) = (char)iVar15;
            if (iVar15 < 1) {
              *(undefined2 *)(local_d4 + iVar19 * 2) = 0xffff;
            }
            else if (iVar15 < 3) {
              *(short *)(local_d4 + iVar19 * 2) = (3 - (short)iVar15) * 3;
            }
            else {
              *(undefined2 *)(local_d4 + iVar19 * 2) = 0;
            }
            iVar19 = iVar19 + 1;
            psVar9 = psVar9 + 1;
            iVar15 = DAT_008033a4;
          } while (iVar19 < local_a0);
        }
        psVar9 = (short *)(DAT_007fb280 +
                          ((int)SHORT_007fb278 * (iVar16 + DAT_008033c0) + local_a0 + DAT_008033bc)
                          * 2);
        local_168 = (int *)(DAT_007fb248 +
                           ((int)SHORT_007fb240 * (iVar16 + DAT_008033c0) + local_a0 + DAT_008033bc)
                           * 8);
        local_94 = local_a0;
        while (local_94 <= local_cc) {
          iVar19 = 0;
          iVar15 = 0;
          local_34 = 0;
          piVar10 = local_168;
          local_24 = psVar9;
          do {
            if (*local_24 == 0) {
              iVar15 = iVar15 + 1;
              if ((piVar10[1] != 0) && (*(int *)(piVar10[1] + 0x20) == 0x1ae)) {
                iVar19 = iVar19 + 3;
              }
            }
            else if (*piVar10 != 0) {
              iVar15 = iVar15 + 1;
              local_dc = iVar15;
              if (param_1 != 0xff) {
                bVar2 = *(byte *)(*piVar10 + 0x24);
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_0055fc5b:
                    iVar17 = 0;
                  }
                  else {
                    uVar13 = (uint)bVar2;
                    uVar11 = param_1 & 0xff;
                    cVar1 = *(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar11);
                    if ((cVar1 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar13) == '\0')) {
                      iVar17 = -2;
                    }
                    else if ((cVar1 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar13) == '\0')) {
                      iVar17 = -1;
                    }
                    else if ((cVar1 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar13) == '\x01')) {
                      iVar17 = 1;
                    }
                    else {
                      if ((cVar1 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar11 * 8 + uVar13) != '\x01'))
                      goto LAB_0055fc5b;
                      iVar17 = 2;
                    }
                  }
                  bVar21 = iVar17 < 0;
                }
                else {
                  bVar21 = (&DAT_008087ea)[(param_1 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar2 * 0x51];
                }
                if (bVar21) goto LAB_0055fc71;
              }
              iVar19 = iVar19 + 1;
            }
LAB_0055fc71:
            local_34 = local_34 + 1;
            local_24 = local_24 + SHORT_007fb27e;
            piVar10 = piVar10 + SHORT_007fb246 * 2;
          } while (local_34 < 5);
          *(byte *)(local_30 + local_94 * 2) = (char)iVar19 << 4 | (byte)iVar15;
          if (iVar15 - iVar19 < 1) {
            *(undefined2 *)(local_d4 + local_94 * 2) = 0xffff;
          }
          else if (iVar15 - iVar19 < 3) {
            *(short *)(local_d4 + local_94 * 2) = (((short)iVar19 - (short)iVar15) + 3) * 3;
          }
          else {
            *(undefined2 *)(local_d4 + local_94 * 2) = 0;
          }
          local_94 = local_94 + 1;
          psVar9 = psVar9 + 1;
          local_168 = local_168 + 2;
          iVar15 = DAT_008033a4;
        }
        local_90 = (short *)(DAT_007fb280 + 2 +
                            ((iVar16 + DAT_008033c0) * (int)SHORT_007fb278 + local_cc + DAT_008033bc
                            ) * 2);
        iVar19 = local_cc + 1;
        if (iVar19 < iVar15) {
          do {
            iVar15 = 0;
            iVar17 = 0;
            psVar9 = local_90;
            do {
              if (*psVar9 == 0) {
                iVar15 = iVar15 + 1;
              }
              iVar17 = iVar17 + 1;
              psVar9 = psVar9 + SHORT_007fb27e;
            } while (iVar17 < 5);
            *(char *)(local_30 + iVar19 * 2) = (char)iVar15;
            if (iVar15 < 1) {
              *(undefined2 *)(local_d4 + iVar19 * 2) = 0xffff;
            }
            else if (iVar15 < 3) {
              *(short *)(local_d4 + iVar19 * 2) = (3 - (short)iVar15) * 3;
            }
            else {
              *(undefined2 *)(local_d4 + iVar19 * 2) = 0;
            }
            iVar19 = iVar19 + 1;
            local_90 = local_90 + 1;
            iVar15 = DAT_008033a4;
          } while (iVar19 < DAT_008033a4);
        }
      }
      local_b0 = local_170 + 1;
      if (local_b0 < DAT_008033a8) {
        do {
          local_d4 = local_b0 * iVar15 * 2;
          local_30 = (int)DAT_00803380 + local_d4;
          local_d4 = local_d4 + (int)local_60[0];
          local_90 = (short *)(DAT_007fb280 +
                              ((local_b0 + DAT_008033c0) * (int)SHORT_007fb278 + DAT_008033bc) * 2);
          iVar16 = 0;
          if (0 < iVar15) {
            do {
              iVar15 = 0;
              iVar19 = 0;
              psVar9 = local_90;
              do {
                if (*psVar9 == 0) {
                  iVar15 = iVar15 + 1;
                }
                iVar19 = iVar19 + 1;
                psVar9 = psVar9 + SHORT_007fb27e;
              } while (iVar19 < 5);
              *(char *)(local_30 + iVar16 * 2) = (char)iVar15;
              if (iVar15 < 1) {
                *(undefined2 *)(local_d4 + iVar16 * 2) = 0xffff;
              }
              else if (iVar15 < 3) {
                *(short *)(local_d4 + iVar16 * 2) = (3 - (short)iVar15) * 3;
              }
              else {
                *(undefined2 *)(local_d4 + iVar16 * 2) = 0;
              }
              iVar16 = iVar16 + 1;
              local_90 = local_90 + 1;
              iVar15 = DAT_008033a4;
            } while (iVar16 < DAT_008033a4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < DAT_008033a8);
      }
      if (((param_8 != 0) && (0 < param_9)) && (local_78 = 0, 0 < param_9)) {
        do {
          piVar10 = (int *)(param_8 + local_78 * 0x18);
          iVar16 = *piVar10;
          if (0 < iVar16) {
            local_88 = piVar10[1] - DAT_008033bc;
            if ((-1 < local_88) && (local_88 < iVar15)) {
              iVar19 = piVar10[2] - DAT_008033c0;
              local_c0 = iVar19;
              if ((-1 < iVar19) && (iVar19 < DAT_008033a8)) {
                iVar15 = piVar10[3];
                if ((iVar15 < 1) || (iVar17 = piVar10[4], iVar17 < 1)) {
                  iVar15 = 0;
                  do {
                    if (iVar16 <= (int)(&DAT_007c9614)[iVar15]) break;
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < 9);
                  iVar15 = *(int *)(local_3c * 8 + 0x7c9640);
                  iVar17 = *(int *)(local_3c * 8 + 0x7c963c);
                }
                local_d0 = FUN_00561240(iVar15,iVar17,piVar10[5]);
                if (1 < *local_d0) {
                  local_144 = (iVar16 << 0x10) / *local_d0;
                  iVar16 = 0;
                  iVar15 = (int)DAT_00803380 + (local_d0[3] + iVar19) * DAT_008033a4 * 2;
                  local_b0 = 0;
                  if (0 < local_d0[4]) {
                    do {
                      iVar19 = local_d0[3] + iVar19 + local_b0;
                      if ((-1 < iVar19) && (iVar19 < DAT_008033a8)) {
                        local_ac = local_d0[local_b0 * 2 + 6] + local_88;
                        for (iVar19 = local_d0[local_b0 * 2 + 5] + local_88; iVar19 <= local_ac;
                            iVar19 = iVar19 + 1) {
                          if (((-1 < iVar19) && (iVar19 < DAT_008033a4)) &&
                             (iVar16 = iVar16 + local_144, 0x10000 < iVar16)) {
                            bVar2 = *(byte *)(iVar15 + iVar19 * 2);
                            if ((int)((uint)(bVar2 >> 4) + (iVar16 >> 0x10)) < 0xf) {
                              *(byte *)(iVar15 + iVar19 * 2) =
                                   (char)((uint)iVar16 >> 0x10) * '\x10' + bVar2;
                            }
                            else {
                              *(byte *)(iVar15 + iVar19 * 2) = (bVar2 & 7) - 0x10;
                            }
                          }
                        }
                      }
                      local_b0 = local_b0 + 1;
                      iVar15 = iVar15 + DAT_008033a4 * 2;
                      iVar19 = local_c0;
                    } while (local_b0 < local_d0[4]);
                  }
                }
                FUN_006ab060(&local_d0);
                iVar15 = DAT_008033a4;
              }
            }
          }
          local_78 = local_78 + 1;
        } while (local_78 < param_9);
      }
      iVar16 = 0;
      DAT_0080338c = 0;
      if ((param_6 != 0) && (0 < param_7)) {
        iVar19 = (*(int *)local_80[uVar18 - 1] * 0x32) / DAT_0080330c;
        local_7c = iVar19;
        local_78 = 0;
        if (0 < param_7) {
          do {
            piVar10 = (int *)(param_6 + local_78 * 0x18);
            iVar17 = piVar10[1] - DAT_008033bc;
            if ((-1 < iVar17) && (iVar17 < iVar15)) {
              iVar7 = piVar10[2] - DAT_008033c0;
              local_b0 = iVar7;
              if ((-1 < iVar7) && (iVar7 < DAT_008033a8)) {
                iVar12 = piVar10[3];
                if (iVar12 == -10) {
                  iVar12 = *(int *)(&DAT_007a4c20 + piVar10[4] * 8);
                  local_4c = *(int *)(&DAT_007a4c24 + piVar10[4] * 8) * iVar12;
LAB_0056016e:
                }
                else if (iVar12 == 1) {
                  iVar12 = *(int *)(&DAT_007a4b60 + piVar10[4] * 4);
                  local_4c = iVar12;
                }
                else {
                  if (iVar12 != 2) {
                    iVar12 = *(int *)(&DAT_007a4bf8 + piVar10[4] * 4) * 2;
                    local_4c = *(int *)(&DAT_007a4bf8 + piVar10[4] * 4) * 6;
                    goto LAB_0056016e;
                  }
                  iVar12 = *(int *)(&DAT_007a4b88 + piVar10[4] * 8);
                  local_4c = iVar12;
                }
                if (iVar19 <= (*piVar10 * 100) / local_4c) {
                  *(int *)(DAT_00803310 + iVar16 * 0x14) = iVar17;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 4) = iVar7;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 8) = 0;
                  *(undefined4 *)(DAT_00803310 + DAT_0080338c * 0x14 + 0xc) = 0;
                  *(int *)(DAT_00803310 + DAT_0080338c * 0x14 + 0x10) = iVar12;
                  iVar16 = DAT_0080338c + 1;
                  iVar15 = DAT_008033a4;
                  DAT_0080338c = iVar16;
                }
              }
            }
            local_78 = local_78 + 1;
          } while (local_78 < param_7);
        }
      }
      DAT_0080339c = 5;
      iVar16 = 0;
      iVar19 = 0;
      local_e4 = 0;
      for (iVar17 = local_e8; iVar17 <= local_170; iVar17 = iVar17 + 1) {
        local_30 = (int)DAT_00803380 + iVar17 * iVar15 * 2;
        for (iVar7 = local_a0; iVar7 <= local_cc; iVar7 = iVar7 + 1) {
          if ((*(byte *)(local_30 + iVar7 * 2) & 0xf0) != 0) {
            iVar16 = iVar16 + 1;
            iVar19 = iVar19 + iVar7;
            local_e4 = local_e4 + iVar17;
          }
        }
      }
      iVar15 = DAT_00803304;
      iVar17 = DAT_00803308;
      if (0 < iVar16) {
        iVar15 = (iVar19 + iVar16 / 2) / iVar16;
        iVar17 = (local_e4 + iVar16 / 2) / iVar16;
        iVar16 = FUN_006acf90(iVar15,iVar17,DAT_00803304,DAT_00803308);
        if (5 < iVar16) {
          iVar15 = ((iVar16 + -5) * DAT_00803304 + iVar15 * 5) / iVar16;
          iVar17 = ((iVar16 + -5) * DAT_00803308 + iVar17 * 5) / iVar16;
        }
      }
      DAT_00803308 = iVar17;
      DAT_00803304 = iVar15;
      piVar10 = local_13c;
      for (iVar15 = 0x14; pbVar4 = local_a4, iVar16 = DAT_0080339c, piVar14 = local_84, iVar15 != 0;
          iVar15 = iVar15 + -1) {
        *piVar10 = 0;
        piVar10 = piVar10 + 1;
      }
      for (; local_84 = piVar14, iVar16 < 0xd; iVar16 = iVar16 + 1) {
        local_28 = FUN_0055ee70(pbVar4,iVar16,1);
        iVar15 = 0;
        if (0 < local_28) {
          do {
            iVar17 = (char)pbVar4[iVar15 * 2] + DAT_00803304;
            iVar19 = (char)pbVar4[iVar15 * 2 + 1] + DAT_00803308;
            if ((((-1 < iVar17) && (iVar17 < DAT_008033a4)) && (-1 < iVar19)) &&
               ((iVar19 < DAT_008033a8 &&
                ((*(byte *)((int)DAT_00803380 + (iVar19 * DAT_008033a4 + iVar17) * 2) & 0xf0) != 0))
               )) {
              local_13c[iVar16] = local_13c[iVar16] + 1;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < local_28);
        }
        local_13c[iVar16] = (local_13c[iVar16] * 100) / local_28;
        piVar14 = local_84;
      }
      iVar15 = -30000;
      iVar16 = 0xb;
      if (DAT_0080339c < 0xc) {
        do {
          iVar19 = ((0xc - iVar16) * local_10c + local_13c[iVar16]) / (0xd - iVar16) - local_10c;
          if (iVar15 <= iVar19) {
            DAT_00803384 = iVar16 + 1;
            iVar15 = iVar19;
          }
          iVar16 = iVar16 + -1;
        } while (DAT_0080339c <= iVar16);
      }
      if (DAT_00803384 < 10) {
        DAT_00803384 = DAT_00803384 + 2;
      }
      *piVar14 = DAT_00803304;
      piVar14[1] = DAT_00803308;
      DAT_008033b4 = FUN_00561670((int)local_60[0],DAT_008033a4,DAT_008033a8,piVar14,1);
      FUN_006ab060(local_60);
      thunk_FUN_0055dee0(pbVar4);
      iVar15 = 0;
      do {
        piVar14 = (int *)&stack0xfffffe14;
        iVar16 = (int)(iVar15 * 0x168 + (iVar15 * 0x168 >> 0x1f & 0xfU)) >> 4;
        piVar10 = FUN_00561240(DAT_008032f0,DAT_008032ec,iVar16);
        *(int **)(DAT_008032fc + iVar15 * 4) = piVar10;
        piVar10 = FUN_00561240(DAT_00803374,DAT_00803378,iVar16);
        *(int **)(DAT_008033b8 + iVar15 * 4) = piVar10;
        piVar10 = FUN_00561240(5,DAT_008032ec,iVar16);
        DAT_008033b0[iVar15] = piVar10;
        iVar15 = iVar15 + 1;
        iVar16 = DAT_0080339c;
        piVar10 = local_164;
      } while (iVar15 < 0x10);
      for (; local_164 = piVar10, local_8c = iVar16, iVar16 < 0x14; iVar16 = iVar16 + 2) {
        local_28 = FUN_0055ee70(pbVar4,iVar16,1);
        iVar19 = DAT_00803384 - DAT_0080339c;
        iVar15 = 0x14 - DAT_00803384;
        if (iVar19 < iVar15) {
          uVar13 = DAT_00803384 - iVar16 >> 0x1f;
          iVar17 = (DAT_00803384 - iVar16 ^ uVar13) - uVar13;
          iVar17 = iVar17 * iVar17;
          iVar15 = iVar15 * iVar15;
        }
        else {
          uVar13 = DAT_00803384 - iVar16 >> 0x1f;
          iVar17 = (DAT_00803384 - iVar16 ^ uVar13) - uVar13;
          iVar17 = iVar17 * iVar17;
          iVar15 = iVar19 * iVar19;
        }
        DAT_00803388 = (iVar15 - iVar17) / 2;
        local_50 = 0;
        if (0 < local_28) {
          do {
            local_94 = (char)local_a4[local_50 * 2] + DAT_00803304;
            if (((-1 < local_94) && (local_94 < DAT_008033a4)) &&
               ((iVar15 = (char)local_a4[local_50 * 2 + 1] + DAT_00803308, -1 < iVar15 &&
                ((iVar15 < DAT_008033a8 &&
                 (0 < *(short *)((int)DAT_008033b4 + (iVar15 * DAT_008033a4 + local_94) * 2))))))) {
              iVar16 = 0;
              local_148 = 0;
              if (0 < DAT_0080338c) {
                do {
                  piVar10 = (int *)(DAT_00803310 + iVar16 * 0x14);
                  iVar19 = piVar10[4];
                  if (piVar10[4] <= DAT_008032ec) {
                    iVar19 = DAT_008032ec;
                  }
                  iVar17 = FUN_006acf90(*piVar10,piVar10[1],local_94,iVar15);
                  if (iVar17 < iVar19 / 2) {
                    local_148 = 1;
                    break;
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < DAT_0080338c);
              }
              if (local_148 == 0) {
                iVar16 = 0x10;
                uVar13 = FUN_006db910(DAT_00803304,DAT_00803308,local_94,iVar15);
                local_74 = (int *)FUN_006db990(uVar13,iVar16);
                iVar16 = (int)local_74 - 3;
                if (iVar16 <= (int)((int)local_74 + 3U)) {
                  do {
                    if (iVar16 < 0) {
                      iVar19 = iVar16 + 0x10;
                    }
                    else {
                      iVar19 = iVar16 + -0x10;
                      if (iVar16 < 0x10) {
                        iVar19 = iVar16;
                      }
                    }
                    iVar19 = FUN_00561dc0(local_94,iVar15,iVar19);
                    FUN_005623c0(local_94,iVar15,iVar19,local_74,DAT_0080330c);
                    if (-1 < local_98) {
                      FUN_005623c0(local_94,iVar15,iVar19,local_74,DAT_008032e8);
                    }
                    iVar16 = iVar16 + 3;
                  } while (iVar16 <= (int)((int)local_74 + 3U));
                }
              }
            }
            local_50 = local_50 + 2;
            iVar16 = local_8c;
          } while (local_50 < local_28);
        }
        piVar10 = local_164;
        pbVar4 = local_a4;
      }
      iVar15 = ((local_98 * 0x19 + 0x19) * 4) / (int)uVar18;
      if (iVar15 < DAT_0080337c) {
        DAT_0080337c = iVar15;
      }
      if (100 - iVar15 < DAT_00803314) {
        DAT_00803314 = 100 - iVar15;
      }
      DAT_00803398 = DAT_0080337c + DAT_00803314;
      if (0 < (int)DAT_00803398) {
        iVar15 = 0x7fffffff;
        iVar16 = 0;
        if (0 < DAT_0080337c) {
          do {
            if (DAT_008032f8[iVar16 * 5 + 3] < iVar15) {
              iVar15 = DAT_008032f8[iVar16 * 5 + 3];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_0080337c);
        }
        iVar16 = 0;
        if (0 < DAT_00803314) {
          do {
            if (DAT_008032f4[iVar16 * 5 + 3] < iVar15) {
              iVar15 = DAT_008032f4[iVar16 * 5 + 3];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_00803314);
        }
        iVar15 = (int)(iVar15 * 0xf + (iVar15 * 0xf >> 0x1f & 0xfU)) >> 4;
        iVar16 = 0;
        if (0 < DAT_0080337c) {
          do {
            DAT_008032f8[iVar16 * 5 + 3] = DAT_008032f8[iVar16 * 5 + 3] - iVar15;
            piVar10[iVar16] = DAT_008032f8[iVar16 * 5 + 3];
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_0080337c);
        }
        iVar16 = 0;
        if (0 < DAT_00803314) {
          do {
            DAT_008032f4[iVar16 * 5 + 3] = DAT_008032f4[iVar16 * 5 + 3] - iVar15;
            piVar10[DAT_0080337c + iVar16] = DAT_008032f4[iVar16 * 5 + 3];
            iVar16 = iVar16 + 1;
          } while (iVar16 < DAT_00803314);
        }
        piVar20 = DAT_00803300 + DAT_0080337c * 5;
        for (uVar13 = DAT_00803314 * 5 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
          *piVar20 = *DAT_008032f4;
          DAT_008032f4 = DAT_008032f4 + 1;
          piVar20 = piVar20 + 1;
        }
        for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(char *)piVar20 = (char)*DAT_008032f4;
          DAT_008032f4 = (int *)((int)DAT_008032f4 + 1);
          piVar20 = (int *)((int)piVar20 + 1);
        }
        DAT_008032f4 = DAT_00803300 + DAT_0080337c * 5;
        local_6c[0] = thunk_FUN_0055f0c0(piVar10,DAT_00803398,uVar18,10,param_10,FUN_00562170,
                                         FUN_00562e10);
        local_40 = local_6c[0];
        if (local_6c[0] == (int *)0x0) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_15c = 0;
          local_78 = 0;
          iVar16 = local_54;
          local_40 = (int *)&stack0xfffffe14;
          local_1c = &stack0xfffffe14;
          piVar10 = DAT_008032f4;
          piVar20 = (int *)&stack0xfffffe14;
          puVar5 = &stack0xfffffe14;
          iVar15 = local_98;
          if (-1 < local_98) {
            do {
              local_38 = -30000;
              local_154 = 0;
              iVar15 = local_15c;
              piVar10 = DAT_008032f8;
              if (0 < DAT_0080337c) {
                do {
                  if (-1 < piVar10[3]) {
                    iVar15 = 30000;
                    iVar16 = 0;
                    if (0 < local_15c) {
                      do {
                        iVar19 = FUN_006acf90(DAT_00803300[local_40[iVar16] * 5],
                                              (DAT_00803300 + local_40[iVar16] * 5)[1],*piVar10,
                                              piVar10[1]);
                        if (iVar19 < iVar15) {
                          iVar15 = iVar19;
                        }
                        iVar16 = iVar16 + 1;
                      } while (iVar16 < local_15c);
                    }
                    if (local_38 < iVar15) {
                      local_54 = local_154;
                      local_38 = iVar15;
                    }
                  }
                  local_154 = local_154 + 1;
                  piVar10 = piVar10 + 5;
                  iVar15 = local_15c;
                  iVar16 = local_54;
                  piVar14 = local_40;
                } while (local_154 < DAT_0080337c);
              }
              if (local_38 < 0) {
                piVar14[iVar15] = -1;
              }
              else {
                DAT_008032f8[iVar16 * 5 + 3] = -1;
                piVar14[iVar15] = iVar16;
              }
              local_15c = iVar15 + 1;
              local_78 = local_78 + 1;
              piVar10 = DAT_008032f4;
              piVar20 = local_40;
              puVar5 = local_1c;
              iVar15 = local_98;
            } while (local_78 <= local_98);
          }
          while (local_1c = puVar5, local_40 = piVar20, local_78 = iVar15 + 1,
                DAT_008032f4 = piVar10, local_78 < (int)uVar18) {
            local_38 = -30000;
            local_154 = 0;
            iVar15 = local_78;
            if (0 < DAT_00803314) {
              do {
                if (-1 < piVar10[3]) {
                  iVar15 = 30000;
                  iVar16 = 0;
                  if (0 < local_15c) {
                    do {
                      iVar19 = FUN_006acf90(DAT_00803300[local_40[iVar16] * 5],
                                            (DAT_00803300 + local_40[iVar16] * 5)[1],*piVar10,
                                            piVar10[1]);
                      if (iVar19 < iVar15) {
                        iVar15 = iVar19;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < local_15c);
                  }
                  if (local_38 < iVar15) {
                    local_54 = local_154;
                    local_38 = iVar15;
                  }
                }
                local_154 = local_154 + 1;
                piVar10 = piVar10 + 5;
                iVar15 = local_78;
              } while (local_154 < DAT_00803314);
            }
            if (local_38 < 0) {
              local_40[local_15c] = -1;
            }
            else {
              DAT_00803300[(DAT_0080337c + local_54) * 5 + 3] = -1;
              local_40[local_15c] = local_54 + DAT_0080337c;
            }
            local_15c = local_15c + 1;
            piVar10 = DAT_008032f4;
            piVar20 = local_40;
            puVar5 = local_1c;
          }
        }
        iVar15 = 0;
        if (0 < (int)uVar18) {
          do {
            iVar16 = local_40[iVar15];
            if (-1 < iVar16) {
              iVar19 = local_80[iVar15];
              *(int *)(iVar19 + 4) = DAT_00803300[iVar16 * 5] + DAT_008033bc;
              *(int *)(iVar19 + 8) = DAT_00803300[iVar16 * 5 + 1] + DAT_008033c0;
              *(undefined4 *)(iVar19 + 0xc) = 0xfffffff6;
              iVar17 = local_c4;
              if (local_98 < iVar15) {
                iVar17 = local_3c;
              }
              *(int *)(iVar19 + 0x10) = iVar17;
              *(int *)(iVar19 + 0x14) = DAT_00803300[iVar16 * 5 + 2];
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)uVar18);
        }
      }
      g_currentExceptionFrame = local_1b8.previous;
      iVar15 = local_70;
    }
    else {
      g_currentExceptionFrame = local_1b8.previous;
      iVar16 = ReportDebugMessage(s_E____titans_scoreai_cpp_007c96b0,0x956,0,iVar15,&DAT_007a4ccc,
                                  s_AiCalcDispositionAreas_007c96cc);
      if (iVar16 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_70 = iVar15;
    iVar15 = local_70;
    FUN_006ab060(local_6c);
    FUN_006ab060(&DAT_008033b4);
    FUN_006ab060(local_60);
    FUN_006ab060(&DAT_00803380);
    iVar16 = 0;
    do {
      FUN_006ab060((LPVOID *)(DAT_008032fc + iVar16));
      iVar16 = iVar16 + 4;
    } while (iVar16 < 0x80);
    iVar16 = 0;
    do {
      FUN_006ab060((LPVOID *)(iVar16 + (int)DAT_008033b0));
      iVar16 = iVar16 + 4;
    } while (iVar16 < 0x40);
    if (iVar15 != 0) {
      RaiseInternalException
                (iVar15,g_overwriteContext_007ED77C,s_E____titans_scoreai_cpp_007c96b0,0x968);
    }
  }
  ExceptionList = local_14;
  return;
}

