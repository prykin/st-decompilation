
int __thiscall
thunk_FUN_006991c0(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,
                  int param_6,int param_7,int param_8)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined4 uStack_134;
  uint uStack_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined1 uStack_126;
  int iStack_124;
  undefined4 *puStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  undefined1 *puStack_110;
  undefined4 *puStack_10c;
  undefined1 *puStack_108;
  int iStack_104;
  int iStack_100;
  uint uStack_fc;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 *puStack_e8;
  undefined4 *puStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  undefined4 *puStack_ac;
  undefined1 *puStack_a8;
  int iStack_a4;
  undefined4 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 *puStack_84;
  int aiStack_80 [9];
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_30;
  int iStack_28;
  undefined1 *puStack_24;
  undefined4 *puStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079d7b8;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xfffffe98;
  iStack_f0 = 0;
  iStack_118 = 0;
  iStack_8c = 0;
  ExceptionList = &pvStack_14;
  iStack_d4 = param_1 * param_2;
  FUN_006ab060((undefined4 *)((int)this + 0x584b));
  puVar8 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(param_1 * param_2);
  *(undefined4 *)((int)this + 0x584b) = puVar8;
  uVar14 = *(uint *)((int)this + 0x582f);
  for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  thunk_FUN_006948e0(this,*(int *)((int)this + 0x5833));
  uStack_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  iVar16 = iStack_d4;
  puStack_b4 = &stack0xfffffe98;
  puStack_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  puStack_9c = &stack0xfffffe98;
  puStack_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  puStack_94 = &stack0xfffffe98;
  puStack_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  uStack_8 = 0xffffffff;
  iStack_dc = 0;
  puStack_3c = &stack0xfffffe98;
  puVar6 = &stack0xfffffe98;
  puStack_1c = &stack0xfffffe98;
  puVar7 = &stack0xfffffe98;
  if (0 < iVar16) {
    do {
      if ((((0 < iStack_dc % param_1) && (0 < iStack_dc / param_1)) &&
          (iStack_dc % param_1 < *(int *)((int)this + 0x5833) + -1)) &&
         (iStack_dc / param_1 < *(int *)((int)this + 0x5837) + -1)) {
        iVar9 = thunk_FUN_00696400(this,iStack_dc,(int)aiStack_80);
        iStack_140 = -1;
        bVar20 = false;
        iVar17 = 0;
        iVar16 = iStack_140;
        if (0 < param_7) {
          do {
            bVar20 = true;
            iVar16 = 0;
            if (0 < iVar9) {
              do {
                if (*(short *)(*(int *)((int)this + 0x584f) +
                              (aiStack_80[iVar16] + *(int *)((int)this + 0x582f) * iVar17) * 2) < 1)
                {
                  bVar20 = false;
                  break;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar9);
            }
            iVar16 = iVar17;
          } while ((!bVar20) && (iVar17 = iVar17 + 1, iVar16 = iStack_140, iVar17 < param_7));
        }
        iStack_140 = iVar16;
        if ((bVar20) && (-1 < iStack_140)) {
          if (iStack_140 == 0) {
            *(undefined1 *)(*(int *)((int)this + 0x584b) + iStack_dc) = 1;
          }
          psVar1 = (short *)(puStack_9c + iStack_f0 * 10);
          *psVar1 = (short)(iStack_dc % param_1);
          psVar1[1] = (short)(iStack_dc / param_2);
          psVar1[2] = (short)iStack_140;
          iVar9 = 0;
          iVar16 = iStack_d4;
          if (0 < (int)param_5) {
            do {
              iVar17 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*(short *)(param_6 + iVar9 * 4)
                                    ,(int)*(short *)(param_6 + 2 + iVar9 * 4));
              if (iVar17 < iVar16) {
                iVar16 = iVar17;
              }
              *(int *)(puStack_94 + iVar9 * 4) = iVar17;
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)param_5);
          }
          iVar17 = 0;
          iVar9 = 0;
          if (0 < (int)param_5) {
            do {
              iVar17 = iVar17 + (*(int *)(puStack_94 + iVar9 * 4) - iVar16);
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)param_5);
          }
          *(int *)(puStack_9c + iStack_f0 * 10 + 6) = iVar17;
          iStack_f0 = iStack_f0 + 1;
        }
      }
      iStack_dc = iStack_dc + 1;
      puVar6 = puStack_3c;
      puVar7 = puStack_1c;
    } while (iStack_dc < iStack_d4);
  }
  puStack_1c = puVar7;
  puStack_3c = puVar6;
  if (iStack_f0 != 0) {
    iStack_dc = 0;
    if (0 < (int)param_5) {
      do {
        iVar9 = (int)*(short *)(param_6 + iStack_dc * 4);
        iStack_30 = iVar9 + -7;
        iVar16 = 0;
        if (iStack_30 < 0) {
          iStack_30 = 0;
        }
        iVar15 = (int)*(short *)(param_6 + 2 + iStack_dc * 4);
        iVar17 = iVar15 + -7;
        if (iVar17 < 0) {
          iVar17 = 0;
        }
        iVar9 = iVar9 + 8;
        if (*(int *)((int)this + 0x5833) < iVar9) {
          iVar9 = *(int *)((int)this + 0x5833);
        }
        iVar15 = iVar15 + 8;
        if (*(int *)((int)this + 0x5837) < iVar15) {
          iVar15 = *(int *)((int)this + 0x5837);
        }
        for (; iVar10 = iStack_30, iVar17 < iVar15; iVar17 = iVar17 + 1) {
          for (; iVar10 < iVar9; iVar10 = iVar10 + 1) {
            if (*(char *)(*(int *)((int)this + 0x5833) * iVar17 + *(int *)((int)this + 0x584b) +
                         iVar10) != '\0') {
              *(short *)(puStack_b4 + iVar16 * 10) = (short)iVar10;
              *(short *)((int)(puStack_b4 + iVar16 * 10) + 2) = (short)iVar17;
              iVar16 = iVar16 + 1;
            }
          }
        }
        if (iVar16 < 2) {
          ExceptionList = pvStack_14;
          return iStack_118;
        }
        iStack_100 = 100;
        iStack_c0 = 0;
        iStack_48 = 0;
        iStack_58 = 0;
        iStack_11c = iVar9;
        iStack_50 = iVar15;
        do {
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar17 = (int)uVar14 % iVar16;
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar15 = (int)uVar14 % iVar16;
          iVar9 = FUN_006acf90((int)*(short *)(puStack_b4 + iVar17 * 10),
                               (int)*(short *)((int)(puStack_b4 + iVar17 * 10) + 2),
                               (int)*(short *)(puStack_b4 + iVar15 * 10),
                               (int)*(short *)((int)(puStack_b4 + iVar15 * 10) + 2));
          puVar6 = puStack_b4;
          if ((iVar17 != iVar15) && (2 < iVar9)) {
            if (0 < iVar9) {
              iStack_58 = iVar15;
              iStack_48 = iVar17;
            }
            iStack_c0 = 1;
          }
          iStack_100 = iStack_100 + -1;
        } while (0 < iStack_100);
        uStack_12c = 0;
        if (iStack_c0 == 0) {
          ExceptionList = pvStack_14;
          return iStack_118;
        }
        uStack_134 = *(uint *)(puStack_b4 + iStack_48 * 10);
        uStack_130 = 0;
        uStack_12a = 0xde;
        uStack_128 = 0;
        uStack_126 = 0;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&uStack_134);
        iStack_8c = iStack_8c + 1;
        uStack_134 = *(uint *)(puVar6 + iStack_58 * 10);
        uStack_130 = uStack_130 & 0xffff0000;
        uStack_12a = 0xdd;
        uStack_128 = 0;
        uStack_126 = 0;
        Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&uStack_134);
        iStack_118 = iStack_118 + 2;
        iStack_f4 = 0;
        iVar16 = 0;
        do {
          iVar9 = iStack_48;
          if ((iStack_f4 != 0) && (iVar9 = iVar16, iStack_f4 == 1)) {
            iVar9 = iStack_58;
          }
          iStack_11c = (int)*(short *)(puStack_b4 + iVar9 * 10);
          iStack_30 = iStack_11c + -7;
          if (iStack_30 < 0) {
            iStack_30 = 0;
          }
          iStack_50 = (int)*(short *)((int)(puStack_b4 + iVar9 * 10) + 2);
          iVar16 = iStack_50 + -7;
          if (iVar16 < 0) {
            iVar16 = 0;
          }
          iStack_11c = iStack_11c + 8;
          if (*(int *)((int)this + 0x5833) < iStack_11c) {
            iStack_11c = *(int *)((int)this + 0x5833);
          }
          iStack_50 = iStack_50 + 8;
          if (*(int *)((int)this + 0x5837) < iStack_50) {
            iStack_50 = *(int *)((int)this + 0x5837);
          }
          for (; iVar17 = iStack_30, iVar16 < iStack_50; iVar16 = iVar16 + 1) {
            for (; iVar17 < iStack_11c; iVar17 = iVar17 + 1) {
              *(undefined1 *)
               (*(int *)((int)this + 0x5833) * iVar16 + *(int *)((int)this + 0x584b) + iVar17) = 0;
              uVar14 = iVar17 - *(short *)(puStack_b4 + iVar9 * 10);
              uVar13 = (int)uVar14 >> 0x1f;
              if (((int)((uVar14 ^ uVar13) - uVar13) < 3) ||
                 (uVar14 = iVar16 - *(short *)((int)(puStack_b4 + iVar9 * 10) + 2),
                 uVar13 = (int)uVar14 >> 0x1f, (int)((uVar14 ^ uVar13) - uVar13) < 3)) {
                *(undefined1 *)
                 (*(int *)((int)this + 0x5833) * iVar16 + *(int *)((int)this + 0x584b) + iVar17) = 0
                ;
              }
            }
          }
          iStack_f4 = iStack_f4 + 1;
          iVar16 = iVar9;
        } while (iStack_f4 < 2);
        iStack_dc = iStack_dc + 1;
      } while (iStack_dc < (int)param_5);
    }
    *(int *)(param_8 + 8) = iStack_118;
    if (0 < param_4) {
      uStack_8 = 1;
      Library::MSVCRT::FUN_0072da40();
      puStack_a8 = &stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_24 = &stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_10c = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_e4 = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_110 = &stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      uStack_8 = 0xffffffff;
      iStack_dc = 0;
      puStack_108 = &stack0xfffffe98;
      puVar6 = &stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      puVar7 = &stack0xfffffe98;
      if (0 < (int)param_5) {
        do {
          iStack_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar16 = iStack_f4;
              iVar9 = FUN_006aced8((int)*(short *)(param_6 + iStack_dc * 4),
                                   (int)*(short *)(param_6 + 2 + iStack_dc * 4),
                                   (int)*(short *)(param_6 + iStack_f4 * 4),
                                   (int)*(short *)(param_6 + 2 + iStack_f4 * 4));
              iVar17 = iStack_dc * param_5;
              *(int *)(puStack_a8 + (iVar17 + iVar16) * 4) = iVar9;
              iStack_a4 = 0;
              iStack_104 = 0;
              if (0 < iVar16) {
                do {
                  iVar15 = iVar16;
                  if (iVar9 < *(int *)(puStack_a8 +
                                      (*(int *)(puStack_24 + (iVar17 + iStack_104) * 4) + iVar17) *
                                      4)) {
                    while (iVar15 = iVar15 + -1, iStack_104 <= iVar15) {
                      *(undefined4 *)(puStack_24 + (iVar17 + iVar15) * 4 + 4) =
                           *(undefined4 *)(puStack_24 + (iVar17 + iVar15) * 4);
                      iVar16 = iStack_f4;
                    }
                    *(int *)(puStack_24 + (iVar17 + iStack_104) * 4) = iVar16;
                    iStack_a4 = 1;
                  }
                  if (iStack_a4 != 0) goto LAB_0069999c;
                  iStack_104 = iStack_104 + 1;
                } while (iStack_104 < iVar16);
              }
              if (iStack_a4 == 0) {
                *(int *)(puStack_24 + (iVar17 + iVar16) * 4) = iVar16;
              }
LAB_0069999c:
              iStack_f4 = iVar16 + 1;
              iStack_38 = iVar9;
            } while (iStack_f4 < (int)param_5);
          }
          iStack_dc = iStack_dc + 1;
          puVar6 = puStack_108;
          puVar7 = puStack_1c;
        } while (iStack_dc < (int)param_5);
      }
      puStack_1c = puVar7;
      puStack_108 = puVar6;
      puVar8 = puStack_10c;
      for (iVar16 = (param_5 & 0x1fffffff) << 1; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar8 = puStack_e4;
      for (iVar16 = (param_5 & 0x1fffffff) << 1; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar8 = 0xffffffff;
        puVar8 = puVar8 + 1;
      }
      for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(undefined1 *)puVar8 = 0xff;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      iStack_114 = 0;
      iStack_dc = 0;
      if (0 < (int)param_5) {
        do {
          iStack_88 = 0;
          iStack_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar16 = *(int *)(puStack_24 + (iStack_dc * param_5 + iStack_f4) * 4);
              iStack_88 = iVar16;
              if (((iVar16 != iStack_dc) && ((int)puStack_10c[iVar16] < 0)) &&
                 (puStack_10c[iVar16 + param_5] != iStack_dc)) {
                puStack_10c[iVar16] = 1;
                puStack_10c[iStack_dc + param_5] = iVar16;
                break;
              }
              iStack_f4 = iStack_f4 + 1;
            } while (iStack_f4 < (int)param_5);
          }
          piVar2 = (int *)(puStack_a8 + (iStack_dc * param_5 + iStack_88) * 4);
          if (((*piVar2 != 0) && (-1 < iStack_88)) && (iStack_88 < (int)param_5)) {
            iVar16 = (int)*(short *)(param_6 + iStack_dc * 4);
            iStack_e0 = ((*(short *)(param_6 + iStack_88 * 4) - iVar16) * 4) / 9 + iVar16;
            psVar1 = (short *)(param_6 + 2 + iStack_88 * 4);
            psVar3 = (short *)(param_6 + 2 + iStack_dc * 4);
            iStack_124 = (((int)*psVar1 - (int)*psVar3) * 4) / 9 + (int)*psVar3;
            iVar16 = FUN_006aced8(iStack_e0,iStack_124,iVar16,(int)*psVar3);
            if (0x1e < iVar16) {
              iStack_e0 = (int)*(short *)(param_6 + iStack_dc * 4);
              iVar16 = *piVar2;
              iStack_e0 = ((*(short *)(param_6 + iStack_88 * 4) - iStack_e0) * 0x1e) / iVar16 +
                          iStack_e0;
              iStack_124 = (((int)*psVar1 - (int)*psVar3) * 0x1e) / iVar16 + (int)*psVar3;
            }
            iVar16 = 0;
            iStack_144 = 0;
            iStack_100 = 3;
            iStack_44 = 5;
            do {
              iStack_f4 = 0;
              if (0 < iStack_f0) {
                do {
                  psVar1 = (short *)(puStack_9c + iStack_f4 * 10);
                  if ((*(int *)(psVar1 + 3) != 0) &&
                     (iVar9 = FUN_006aced8((int)*psVar1,(int)psVar1[1],iStack_e0,iStack_124),
                     iVar9 <= iStack_44)) {
                    iVar9 = iVar16 * 10;
                    *(undefined4 *)(&stack0xfffffe98 + iVar9) = *(undefined4 *)psVar1;
                    *(undefined4 *)(&stack0xfffffe9c + iVar9) = *(undefined4 *)(psVar1 + 2);
                    *(short *)(&stack0xfffffea0 + iVar9) = psVar1[4];
                    *(int *)(puStack_108 + iVar16 * 4) = iStack_f4;
                    iVar16 = iVar16 + 1;
                    iStack_144 = iVar16;
                    if (iVar16 == 0x7b) break;
                  }
                  iStack_f4 = iStack_f4 + 1;
                } while (iStack_f4 < iStack_f0);
              }
              if (iVar16 < 0xb) {
                iStack_100 = iStack_100 + -1;
                iStack_44 = iStack_44 + 2;
              }
              else {
                iStack_100 = 0;
              }
            } while (0 < iStack_100);
            if (0 < iVar16) {
              iStack_100 = 0x46;
              iStack_b0 = 0;
              iStack_48 = 0;
              iStack_58 = 0;
              do {
                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                iStack_4c = (int)uVar14 % iStack_144;
                uVar13 = Library::MSVCRT::FUN_0072e6c0();
                iStack_5c = (int)uVar13 % iStack_144;
                iVar17 = ((int)uVar13 % iStack_144) * 10;
                iVar9 = ((int)uVar14 % iStack_144) * 10;
                iVar16 = FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar9),
                                      (int)*(short *)(&stack0xfffffe9a + iVar9),
                                      (int)*(short *)(&stack0xfffffe98 + iVar17),
                                      (int)*(short *)(&stack0xfffffe9a + iVar17));
                if ((iStack_4c != iStack_5c) && (iVar15 = 2, 1 < iVar16)) {
                  iStack_ec = 2;
                  iStack_f4 = 0;
                  if (0 < iStack_114) {
                    do {
                      iStack_ec = FUN_006acf90((int)*(short *)(puStack_9c +
                                                              puStack_e4[iStack_f4] * 10),
                                               (int)*(short *)((int)(puStack_9c +
                                                                    puStack_e4[iStack_f4] * 10) + 2)
                                               ,(int)*(short *)(&stack0xfffffe98 + iVar9),
                                               (int)*(short *)(puStack_9c + iVar9 + 2));
                      iVar15 = FUN_006acf90((int)*(short *)(puStack_9c + puStack_e4[iStack_f4] * 10)
                                            ,(int)*(short *)((int)(puStack_9c +
                                                                  puStack_e4[iStack_f4] * 10) + 2),
                                            (int)*(short *)(&stack0xfffffe98 + iVar17),
                                            (int)*(short *)(puStack_9c + iVar17 + 2));
                      if (iStack_ec < 2) goto LAB_00699f26;
                    } while ((1 < iVar15) && (iStack_f4 = iStack_f4 + 1, iStack_f4 < iStack_114));
                  }
                  if ((1 < iStack_ec) && (1 < iVar15)) {
                    iStack_ec = (*(int *)(puStack_a8 + (iStack_dc * param_5 + iStack_88) * 4) *
                                iVar15) / 2;
                    psVar1 = (short *)(param_6 + 2 + iStack_88 * 4);
                    psVar3 = (short *)(param_6 + 2 + iStack_dc * 4);
                    iVar15 = FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9),
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar10 = FUN_006aced8((int)*(short *)(param_6 + iStack_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar11 = FUN_006aced8((int)*(short *)(param_6 + iStack_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9));
                    iVar16 = iStack_dc;
                    iVar17 = FUN_006aced8((int)*(short *)(param_6 + iStack_dc * 4),(int)*psVar3,
                                          (int)*(short *)(&stack0xfffffe98 + iVar17),
                                          (int)*(short *)(&stack0xfffffe9a + iVar17));
                    iVar17 = iVar17 + iStack_ec;
                    iVar16 = FUN_006aced8((int)*(short *)(param_6 + iVar16 * 4),(int)*psVar3,
                                          (int)*(short *)(&stack0xfffffe98 + iVar9),
                                          (int)*(short *)(&stack0xfffffe9a + iVar9));
                    iVar16 = iVar16 + iVar17 + iVar15 + iVar10 + iVar11;
                    if (iStack_b0 < iVar16) {
                      iStack_48 = iStack_4c;
                      iStack_58 = iStack_5c;
                      iStack_b0 = iVar16;
                    }
                  }
                }
LAB_00699f26:
                iVar16 = iStack_48;
                iStack_100 = iStack_100 + -1;
              } while (0 < iStack_100);
              if (iStack_48 != iStack_58) {
                uStack_134 = 0;
                uStack_130 = 0;
                uStack_12c = 0;
                uStack_12a = 0;
                uStack_128 = 0;
                uStack_126 = 0;
                iVar9 = iStack_48 * 10;
                uVar4 = *(ushort *)(&stack0xfffffe98 + iVar9);
                uStack_134 = (uint)uVar4;
                uStack_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar9),uVar4);
                uStack_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar9);
                *(undefined1 *)
                 ((int)*(short *)(&stack0xfffffe9a + iVar9) * *(int *)((int)this + 0x5833) +
                  (int)(short)uVar4 + *(int *)((int)this + 0x584b)) = 0;
                uStack_12a = 0xdd;
                uStack_128 = 0;
                uStack_126 = 1;
                Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&uStack_134);
                iVar9 = iStack_58;
                iStack_118 = iStack_118 + 1;
                iVar16 = *(int *)(puStack_108 + iVar16 * 4);
                puStack_e4[iStack_114] = iVar16;
                *(undefined4 *)(puStack_9c + iVar16 * 10 + 6) = 0;
                iStack_114 = iStack_114 + 1;
                if (1 < param_4) {
                  uStack_134 = 0;
                  uStack_130 = 0;
                  uStack_12c = 0;
                  uStack_12a = 0;
                  uStack_128 = 0;
                  uStack_126 = 0;
                  iVar16 = iStack_58 * 10;
                  uVar4 = *(ushort *)(&stack0xfffffe98 + iVar16);
                  uStack_134 = (uint)uVar4;
                  uStack_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar16),uVar4);
                  *(undefined1 *)
                   ((int)*(short *)(&stack0xfffffe9a + iVar16) * *(int *)((int)this + 0x5833) +
                    (int)(short)uVar4 + *(int *)((int)this + 0x584b)) = 0;
                  uStack_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar16);
                  uStack_12a = 0xde;
                  uStack_128 = 0;
                  uStack_126 = 1;
                  Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&uStack_134);
                  iVar16 = *(int *)(puStack_108 + iVar9 * 4);
                  puStack_e4[iStack_114] = iVar16;
                  *(undefined4 *)(puStack_9c + iVar16 * 10 + 6) = 0;
                  iStack_114 = iStack_114 + 1;
                  iStack_118 = iStack_118 + 1;
                  iStack_8c = iStack_8c + 1;
                }
              }
            }
          }
          iStack_dc = iStack_dc + 1;
        } while (iStack_dc < (int)param_5);
      }
    }
    iStack_bc = param_3 - iStack_118;
    if (0 < iStack_bc) {
      uStack_8 = 2;
      Library::MSVCRT::FUN_0072da40();
      puStack_120 = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_a0 = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      puStack_84 = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      uStack_8 = 0xffffffff;
      iVar16 = 0;
      iStack_b8 = 0;
      uVar14 = 0;
      puStack_20 = (undefined4 *)&stack0xfffffe98;
      puVar8 = (undefined4 *)&stack0xfffffe98;
      puStack_1c = &stack0xfffffe98;
      puVar6 = &stack0xfffffe98;
      if (0 < iStack_f0) {
        do {
          iVar9 = thunk_FUN_0069ac20((int)*(short *)(puStack_9c + uVar14 * 10),
                                     (int)*(short *)((int)(puStack_9c + uVar14 * 10) + 2),0xf,
                                     *(int *)(param_8 + 0x1c));
          if (0xf < iVar9) {
            *(uint *)(&stack0xfffffe98 + iVar16 * 4) = iVar9 << 0x10 | uVar14 & 0xffff;
            iVar16 = iVar16 + 1;
            iStack_b8 = iVar16;
          }
          uVar14 = uVar14 + 1;
          puVar8 = puStack_20;
          puVar6 = puStack_1c;
        } while ((int)uVar14 < iStack_f0);
      }
      puStack_1c = puVar6;
      puStack_20 = puVar8;
      if (0 < iVar16) {
        iStack_100 = 0x82;
        uVar14 = 0;
        iStack_b0 = 0;
        iVar16 = iStack_b8;
        puVar8 = puStack_120;
        puVar18 = puStack_a0;
        do {
          for (; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar18 = puVar18 + 1;
          }
          uStack_fc = 0;
          iStack_28 = 0;
          puVar8 = puStack_84;
          for (iVar16 = iStack_bc; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          iStack_dc = 0;
          do {
            uVar13 = Library::MSVCRT::FUN_0072e6c0();
            iVar16 = (int)uVar13 % iStack_b8;
            uVar13 = puStack_a0[iVar16];
            if (uVar13 >> 0x10 != 0) {
              puStack_84[uStack_fc] = iVar16;
              iStack_28 = iStack_28 + (uVar13 >> 0x10);
              uStack_fc = uStack_fc + 1;
              if (iStack_bc <= (int)uStack_fc) break;
              uVar4 = *(ushort *)(puStack_a0 + iVar16);
              if (((int)(uint)uVar4 < iStack_f0) && (iStack_f4 = 0, 0 < iStack_b8)) {
                do {
                  uVar5 = *(ushort *)(puStack_a0 + iStack_f4);
                  if (((int)(uint)uVar5 < iStack_f0) &&
                     (iVar16 = FUN_006acf90((int)*(short *)(puStack_9c + (uint)uVar5 * 10),
                                            (int)*(short *)((int)(puStack_9c + (uint)uVar5 * 10) + 2
                                                           ),
                                            (int)*(short *)(puStack_9c + (uint)uVar4 * 10),
                                            (int)*(short *)((int)(puStack_9c + (uint)uVar4 * 10) + 2
                                                           )), iVar16 < 0xf)) {
                    puStack_a0[iStack_f4] = (uint)uVar5;
                  }
                  iStack_f4 = iStack_f4 + 1;
                } while (iStack_f4 < iStack_b8);
              }
            }
            iStack_dc = iStack_dc + 1;
          } while (iStack_dc < 0x82);
          uVar13 = uStack_fc;
          puVar8 = puStack_84;
          puVar18 = puStack_20;
          if (iStack_b0 < iStack_28) {
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar18 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar18 = puVar18 + 1;
            }
            iStack_b0 = iStack_28;
            uVar14 = uStack_fc;
          }
          iStack_100 = iStack_100 + -1;
          iVar16 = iStack_b8;
          puVar8 = puStack_120;
          puVar18 = puStack_a0;
        } while (0 < iStack_100);
        if (uVar14 != 0) {
          uStack_8 = 3;
          Library::MSVCRT::FUN_0072da40();
          puStack_ac = (undefined4 *)&stack0xfffffe98;
          puStack_1c = &stack0xfffffe98;
          Library::MSVCRT::FUN_0072da40();
          puStack_1c = &stack0xfffffe98;
          Library::MSVCRT::FUN_0072da40();
          uStack_8 = 0xffffffff;
          iStack_dc = 0;
          puStack_e8 = &stack0xfffffe98;
          puStack_1c = &stack0xfffffe98;
          puVar6 = &stack0xfffffe98;
          iVar16 = iStack_dc;
          puVar7 = &stack0xfffffe98;
          if (0 < (int)uVar14) {
            do {
              for (; puStack_1c = puVar7, puStack_e8 = puVar6, iVar16 < (int)uVar14;
                  iVar16 = iVar16 + 1) {
                uVar12 = FUN_006aced8((int)*(short *)(puStack_9c +
                                                     (uint)*(ushort *)
                                                            (puStack_120 + puStack_20[iStack_dc]) *
                                                     10),
                                      (int)*(short *)((int)(puStack_9c +
                                                           (uint)*(ushort *)
                                                                  (puStack_120 +
                                                                  puStack_20[iStack_dc]) * 10) + 2),
                                      (int)*(short *)(puStack_9c +
                                                     (uint)*(ushort *)
                                                            (puStack_120 + puStack_20[iVar16]) * 10)
                                      ,(int)*(short *)((int)(puStack_9c +
                                                            (uint)*(ushort *)
                                                                   (puStack_120 + puStack_20[iVar16]
                                                                   ) * 10) + 2));
                *(undefined4 *)(puStack_e8 + (uVar14 * iStack_dc + iVar16) * 4) = uVar12;
                puVar6 = puStack_e8;
                puVar7 = puStack_1c;
              }
              iStack_dc = iStack_dc + 1;
              puVar6 = puStack_e8;
              iVar16 = iStack_dc;
              puVar7 = puStack_1c;
            } while (iStack_dc < (int)uVar14);
          }
          iStack_90 = (int)uVar14 / 2;
          uVar13 = uVar14 & 0x80000001;
          bVar20 = uVar13 == 0;
          if ((int)uVar13 < 0) {
            bVar20 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
          }
          iStack_13c = iStack_90;
          if (!bVar20) {
            iStack_13c = iStack_90 + 1;
          }
          iStack_100 = 100;
          iStack_b0 = 0;
          uVar13 = uVar14;
          puVar18 = puStack_ac;
          puVar8 = puStack_ac;
          do {
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            iVar16 = 0;
            iStack_38 = 0;
            if (0 < iStack_13c) {
              do {
                uVar13 = Library::MSVCRT::FUN_0072e6c0();
                iVar9 = (int)uVar13 % (int)uVar14;
                if (puVar8[iVar9] == 0) {
                  puVar8[iVar9] = 0xdd;
                }
                else {
                  iVar17 = 0;
                  if (0 < (int)uVar14) {
                    do {
                      iVar15 = iVar9 + iVar17;
                      if ((int)uVar14 <= iVar15) {
                        iVar15 = iVar15 - uVar14;
                      }
                      if (puVar8[iVar15] == 0) {
                        puVar8[iVar15] = 0xdd;
                        break;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < (int)uVar14);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iStack_13c);
            }
            iVar16 = 0;
            if (0 < iStack_90) {
              do {
                uVar13 = Library::MSVCRT::FUN_0072e6c0();
                iVar9 = (int)uVar13 % (int)uVar14;
                if (puVar8[iVar9] == 0) {
                  puVar8[iVar9] = 0xde;
                }
                else {
                  iVar17 = 0;
                  if (0 < (int)uVar14) {
                    do {
                      iVar15 = iVar9 + iVar17;
                      if ((int)uVar14 <= iVar15) {
                        iVar15 = iVar15 - uVar14;
                      }
                      if (puVar8[iVar15] == 0) {
                        puVar8[iVar15] = 0xde;
                        break;
                      }
                      iVar17 = iVar17 + 1;
                    } while (iVar17 < (int)uVar14);
                  }
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iStack_90);
            }
            iVar16 = 0;
            iVar9 = iVar16;
            if (0 < (int)uVar14) {
              do {
                for (; iVar16 < (int)uVar14; iVar16 = iVar16 + 1) {
                  if (puVar8[iVar16] == puVar8[iVar9]) {
                    iStack_38 = iStack_38 + *(int *)(puStack_e8 + (uVar14 * iVar9 + iVar16) * 4);
                    puVar8 = puStack_ac;
                  }
                }
                iVar16 = iVar9 + 1;
                iVar9 = iVar16;
              } while (iVar16 < (int)uVar14);
            }
            puVar18 = puVar8;
            if (iStack_b0 <= iStack_38) {
              iStack_b0 = iStack_38;
              puVar8 = puStack_ac;
              puVar19 = (undefined4 *)&stack0xfffffe98;
              for (uVar13 = uVar14; puVar18 = puStack_ac, uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar19 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar19 = puVar19 + 1;
              }
            }
            iStack_100 = iStack_100 + -1;
            uVar13 = uVar14;
            puVar8 = puVar18;
          } while (-1 < iStack_100);
          iVar16 = 0;
          if (0 < (int)uVar14) {
            do {
              uStack_12a = (undefined2)*(undefined4 *)(&stack0xfffffe98 + iVar16 * 4);
              uStack_128 = (undefined2)
                           ((uint)*(undefined4 *)(&stack0xfffffe98 + iVar16 * 4) >> 0x10);
              uStack_134 = *(uint *)(puStack_9c +
                                    (uint)*(ushort *)(puStack_120 + puStack_20[iVar16]) * 10);
              uStack_130 = CONCAT22(uStack_130._2_2_,
                                    *(undefined2 *)
                                     ((int)(puStack_9c +
                                           (uint)*(ushort *)(puStack_120 + puStack_20[iVar16]) * 10)
                                     + 4));
              uStack_126 = 2;
              Library::DKW::TBL::FUN_006ae1c0(*(uint **)(param_8 + 0x1c),&uStack_134);
              iStack_118 = iStack_118 + 1;
              iVar16 = iVar16 + 1;
            } while (iVar16 < (int)uVar14);
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return iStack_118;
}

