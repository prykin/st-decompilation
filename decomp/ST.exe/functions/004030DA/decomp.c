
uint __fastcall thunk_FUN_0069cb50(int *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  int iStack_17c;
  uint uStack_178;
  int iStack_174;
  int iStack_170;
  undefined1 *puStack_16c;
  int iStack_164;
  int iStack_15c;
  int iStack_158;
  uint uStack_154;
  int iStack_150;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  uint uStack_13c;
  uint *puStack_138;
  int iStack_134;
  int aiStack_130 [9];
  int aiStack_10c [9];
  uint uStack_e8;
  uint uStack_e4;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 *puStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [9];
  int iStack_84;
  int iStack_7c;
  int iStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  int iStack_6c;
  int aiStack_68 [9];
  uint uStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_28;
  int iStack_24;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_0079d818;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xfffffe68;
  iVar11 = 0;
  uStack_13c = 0;
  iStack_40 = 0;
  ExceptionList = &pvStack_14;
  thunk_FUN_006a0a70(param_1);
  iVar6 = *(int *)param_1[2] << 1;
  *(int *)((int)param_1 + 0x5833) = iVar6;
  *(int *)((int)param_1 + 0x5837) = ((int *)param_1[2])[1] << 1;
  thunk_FUN_006948e0(param_1,iVar6);
  iVar6 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uVar12 = iVar6 * 4;
  uStack_d8 = uVar12;
  iStack_78 = Library::DKW::LIB::FUN_006aac70(iVar6 * 0x38);
  puStack_c0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar12);
  uStack_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  puStack_16c = &stack0xfffffe68;
  puStack_1c = &stack0xfffffe68;
  Library::MSVCRT::FUN_0072da40();
  puStack_74 = &stack0xfffffe68;
  puStack_1c = &stack0xfffffe68;
  Library::MSVCRT::FUN_0072da40();
  uStack_8 = 0xffffffff;
  puStack_70 = &stack0xfffffe68;
  puStack_1c = &stack0xfffffe68;
  thunk_FUN_0069c360(param_1,iStack_78,(int *)(*(int *)param_1[2] << 1),((int *)param_1[2])[1] << 1)
  ;
  puVar2 = thunk_FUN_0069c8b0(iStack_78,*(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
  puStack_138 = puVar2;
  if (puVar2 == (uint *)0x0) {
    uVar12 = Library::MSVCRT::FUN_0072e6c0();
    thunk_FUN_006a0ae0(param_1,100,100,0,0x3e9,uVar12 % DAT_007d88d4);
  }
  else {
    uVar12 = puVar2[3];
    uStack_13c = uVar12;
    if (0 < (int)uVar12) {
      iStack_144 = 0;
      iVar6 = 0;
      iStack_ac = 0;
      uVar7 = 0;
      if (0 < (int)uVar12) {
        do {
          if (uVar7 < puVar2[3]) {
            piVar3 = (int *)(puVar2[2] * uVar7 + puVar2[7]);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if (((piVar3 != (int *)0x0) && (*piVar3 == 0)) && (0 < piVar3[1])) {
            *(uint *)(puStack_74 + iVar11 * 4) = uVar7;
            *(int *)(puStack_70 + iVar11 * 4) = piVar3[1];
            iVar11 = iVar11 + 1;
            iVar6 = iStack_ac + piVar3[1];
            iStack_144 = iVar11;
            iStack_ac = iVar6;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar12);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        iVar6 = *(int *)((int)param_1 + 0x5833);
        iStack_140 = iVar6 * 8;
        iStack_6c = 0;
        iStack_7c = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
        while ((0 < iStack_140 && (iStack_6c < iStack_7c))) {
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar10 = (int)uVar12 % iStack_ac;
          iVar4 = 0;
          iVar8 = 0;
          iVar6 = iVar10;
          if (0 < iVar11) {
            do {
              iVar4 = iVar4 + *(int *)(puStack_70 + iVar8 * 4);
              iVar6 = iVar8;
              if (iVar10 < iVar4) break;
              iVar8 = iVar8 + 1;
              iVar6 = iVar10;
            } while (iVar8 < iVar11);
          }
          if (iVar11 <= iVar8) {
            iVar6 = iVar11 + -1;
          }
          if (*(uint *)(puStack_74 + iVar6 * 4) < puVar2[3]) {
            iVar6 = puVar2[2] * *(uint *)(puStack_74 + iVar6 * 4) + puVar2[7];
          }
          else {
            iVar6 = 0;
          }
          iStack_30 = iVar6;
          if (iVar6 == 0) {
            iStack_140 = iStack_140 + 1;
          }
          else {
            uStack_e4 = 0;
            do {
              iVar4 = *(int *)(*(int *)(iVar6 + 0xc) + 0xc);
              uVar12 = Library::MSVCRT::FUN_0072e6c0();
              uVar12 = (int)uVar12 % iVar4;
              iVar4 = *(int *)(iVar6 + 0xc);
              if (uVar12 < *(uint *)(iVar4 + 0xc)) {
                piVar3 = (int *)(*(int *)(iVar4 + 8) * uVar12 + *(int *)(iVar4 + 0x1c));
              }
              else {
                piVar3 = (int *)0x0;
              }
              iStack_dc = *piVar3;
              if (((-1 < iStack_dc) &&
                  (iVar4 = iStack_78 + iStack_dc * 0xe, *(int *)(iVar4 + 6) < 0)) &&
                 ((*(byte *)(iVar4 + 1) & 4) != 0)) {
                iVar4 = iStack_dc / (*(int *)param_1[2] << 1);
                iVar8 = iStack_dc % (*(int *)param_1[2] << 1);
                iStack_c4 = 1;
                iVar11 = 0;
                if (0 < iStack_40) {
                  do {
                    iVar6 = FUN_006acf90((int)*(short *)(puStack_16c + iVar11 * 4),
                                         (int)*(short *)(puStack_16c + iVar11 * 4 + 2),iVar8,iVar4);
                    if ((iVar6 < 2) ||
                       (iVar6 = FUN_006acf90((int)*(short *)(puStack_16c + iVar11 * 4),
                                             (int)*(short *)(puStack_16c + iVar11 * 4 + 2),iVar8 + 1
                                             ,iVar4 + 1), iVar6 < 2)) {
                      iStack_c4 = 0;
                      break;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < iStack_40);
                }
                iVar10 = iStack_40;
                iVar11 = iStack_144;
                iVar6 = iStack_30;
                if (iStack_c4 != 0) {
                  *(short *)(puStack_16c + iStack_40 * 4) = (short)iVar8;
                  *(short *)(puStack_16c + iStack_40 * 4 + 2) = (short)iVar4;
                  iStack_6c = iStack_6c + 1;
                  uVar12 = Library::MSVCRT::FUN_0072e6c0();
                  thunk_FUN_006a0ae0(param_1,iVar8 * 100,iVar4 * 100,0,0x3ee,uVar12 % DAT_007d9134);
                  *(undefined4 *)(iStack_78 + 6 + iStack_dc * 0xe) = 0x3ee;
                  thunk_FUN_0069e4d0(param_1,iStack_78,iVar8 * 100,iVar4 * 100,
                                     *(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
                  iStack_40 = iVar10 + 1;
                  iVar11 = iStack_144;
                  break;
                }
              }
              uStack_e4 = uStack_e4 + 1;
            } while ((int)uStack_e4 < 10);
            iStack_140 = iStack_140 + -1;
            puVar2 = puStack_138;
          }
        }
      }
      iVar11 = 0;
      iStack_144 = 0;
      iVar6 = 0;
      iStack_ac = 0;
      uVar12 = 0;
      if (0 < (int)uStack_13c) {
        do {
          if (uVar12 < puVar2[3]) {
            piVar3 = (int *)(puVar2[2] * uVar12 + puVar2[7]);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((piVar3 != (int *)0x0) && (*piVar3 == 0xff)) {
            *(uint *)(puStack_74 + iVar11 * 4) = uVar12;
            *(undefined4 *)(puStack_70 + iVar11 * 4) = *(undefined4 *)(piVar3[3] + 0xc);
            iVar6 = iVar6 + *(int *)(piVar3[3] + 0xc);
            iVar11 = iVar11 + 1;
            puVar2 = puStack_138;
            iStack_144 = iVar11;
            iStack_ac = iVar6;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_13c);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        iStack_140 = iVar11 / 2 + 1;
        iStack_134 = (iVar11 * 3) / 2 + 1;
        iStack_17c = 0;
        while ((0 < iStack_140 && (iStack_17c < iStack_134))) {
          iVar8 = 0;
          iStack_b4 = 0;
          puStack_28 = (undefined4 *)0x0;
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar4 = (int)uVar12 % iStack_ac;
          iVar11 = 0;
          iVar6 = 0;
          iStack_148 = iVar4;
          if (0 < iStack_144) {
            do {
              iVar11 = iVar11 + *(int *)(puStack_70 + iVar6 * 4);
              iStack_148 = iVar6;
              if (iVar4 < iVar11) break;
              iVar6 = iVar6 + 1;
              iStack_148 = iVar4;
            } while (iVar6 < iStack_144);
          }
          if (iStack_144 <= iVar6) {
            iStack_148 = iStack_144 + -1;
          }
          if (*(uint *)(puStack_74 + iStack_148 * 4) < puStack_138[3]) {
            iStack_30 = puStack_138[2] * *(uint *)(puStack_74 + iStack_148 * 4) + puStack_138[7];
          }
          else {
            iStack_30 = 0;
          }
          iStack_15c = iStack_148;
          if (iStack_30 == 0) {
            iStack_140 = iStack_140 + 1;
          }
          else {
            iStack_164 = 0;
            puVar13 = puStack_c0;
            for (uVar12 = uStack_d8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            for (uVar12 = uStack_d8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar13 = 0;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            uStack_e4 = 0;
            iVar11 = *(int *)(iStack_30 + 0xc);
            if (0 < *(int *)(iVar11 + 0xc)) {
              bVar15 = *(int *)(iVar11 + 0xc) != 0;
              do {
                uVar12 = uStack_e4;
                if (bVar15) {
                  piVar3 = (int *)(*(int *)(iVar11 + 8) * uStack_e4 + *(int *)(iVar11 + 0x1c));
                }
                else {
                  piVar3 = (int *)0x0;
                }
                iVar11 = thunk_FUN_00696310(param_1,*piVar3,*(int *)param_1[2] << 1,aiStack_68,
                                            (int *)0x0);
                iVar6 = 0;
                if (0 < iVar11) {
                  do {
                    if ((*(int *)(iStack_78 + 2 + aiStack_68[iVar6] * 0xe) == 0) &&
                       (*(char *)(iVar8 + (int)puStack_c0) == '\0')) {
                      *(short *)(puStack_16c + iVar8 * 4 + 2) =
                           (short)(aiStack_68[iVar6] / (*(int *)param_1[2] << 1));
                      *(short *)(puStack_16c + iVar8 * 4) =
                           (short)(aiStack_68[iVar6] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(aiStack_68[iVar6] + (int)puStack_c0) = 1;
                      iVar8 = iVar8 + 1;
                      iStack_164 = iVar8;
                    }
                    iVar6 = iVar6 + 1;
                    uVar12 = uStack_e4;
                  } while (iVar6 < iVar11);
                }
                uStack_e4 = uVar12 + 1;
                iVar11 = *(int *)(iStack_30 + 0xc);
                bVar15 = uStack_e4 < *(uint *)(iVar11 + 0xc);
              } while ((int)uStack_e4 < (int)*(uint *)(iVar11 + 0xc));
            }
            iStack_b4 = Library::DKW::LIB::FUN_006aac70(iVar8 * 8);
            puStack_28 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar8 * 4);
            uStack_44 = 0;
            iStack_b8 = -1;
            iStack_24 = -1;
            iStack_d4 = 0;
            uStack_178 = 0;
            iStack_158 = 0;
            uStack_e4 = 0;
            if (0 < iVar8) {
LAB_0069d203:
              iStack_dc = iStack_24;
              if (iStack_24 < 0) {
                iStack_dc = (int)*(short *)(puStack_16c + uStack_178 * 4) +
                            (int)*(short *)(puStack_16c + uStack_178 * 4 + 2) * *(int *)param_1[2] *
                            2;
              }
              if ((1 < *(byte *)(iStack_dc + (int)puStack_c0)) &&
                 (uStack_154 = 0, uVar12 = uStack_178, 0 < iStack_164)) {
                do {
                  uVar12 = uVar12 + 1;
                  if (iStack_164 <= (int)uVar12) {
                    uVar12 = 0;
                  }
                  iStack_dc = (int)*(short *)(puStack_16c + uVar12 * 4) +
                              (int)*(short *)(puStack_16c + uVar12 * 4 + 2) * *(int *)param_1[2] * 2
                  ;
                } while ((1 < *(byte *)(iStack_dc + (int)puStack_c0)) &&
                        (uStack_154 = uStack_154 + 1, (int)uStack_154 < iStack_164));
              }
              iVar11 = iStack_dc;
              if (*(byte *)(iStack_dc + (int)puStack_c0) < 2) {
                iVar6 = thunk_FUN_00696310(param_1,iStack_dc,*(int *)param_1[2] << 1,aiStack_68,
                                           &iStack_174);
                uVar12 = 0;
                iStack_bc = 0;
                iStack_38 = 0;
                if (iStack_174 == 8) {
                  bVar15 = false;
                  uStack_e8 = 0xffffffff;
                  if (0 < iVar6) {
                    do {
                      aiStack_130[uVar12] = 0;
                      aiStack_a8[uVar12] = 0;
                      iVar11 = aiStack_68[uVar12];
                      if (*(int *)(iStack_78 + 10 + iVar11 * 0xe) ==
                          *(int *)(puStack_74 + iStack_148 * 4)) {
                        aiStack_a8[uVar12] = iVar11 + 1;
                        iStack_38 = iStack_38 + 1;
                        if (!bVar15) {
                          bVar15 = true;
                        }
                      }
                      if (*(char *)(iVar11 + (int)puStack_c0) == '\x01') {
                        aiStack_130[uVar12] = iVar11 + 1;
                        iStack_bc = iStack_bc + 1;
                        if ((bVar15) && ((int)uStack_e8 < 0)) {
                          uStack_e8 = uVar12 - 1;
                        }
                      }
                      if (((uVar12 == iVar6 - 1U) && (bVar15)) && ((int)uStack_e8 < 0)) {
                        uStack_e8 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                      iVar11 = iStack_dc;
                    } while ((int)uVar12 < iVar6);
                  }
                  if (iStack_24 == -1) {
                    puStack_28[uStack_44] = uStack_178 & 0xffff;
                    iStack_158 = 1;
                  }
                  iStack_24 = -1;
                  if (-1 < (int)uStack_e8) {
                    iStack_b8 = -1;
                    if (iStack_38 == 1) {
                      iVar6 = aiStack_a8[uStack_e8];
                      goto LAB_0069d44d;
                    }
                    if (iStack_38 == 2) {
                      uVar12 = 0;
                      do {
                        uVar7 = uVar12 & 0x80000001;
                        bVar15 = uVar7 == 0;
                        if ((int)uVar7 < 0) {
                          bVar15 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if ((bVar15) && (aiStack_a8[uVar12] != 0)) goto LAB_0069d43d;
                        uVar12 = uVar12 + 1;
                      } while ((int)uVar12 < 8);
                    }
                    else if (iStack_38 == 3) {
                      iVar6 = 0;
                      uVar12 = 0;
                      do {
                        if (aiStack_a8[uVar12] != 0) {
                          if (iVar6 == 1) goto LAB_0069d43d;
                          iVar6 = iVar6 + 1;
                        }
                        uVar12 = uVar12 + 1;
                      } while ((int)uVar12 < 8);
                    }
                    goto LAB_0069d454;
                  }
                  goto LAB_0069d4ca;
                }
                iStack_b8 = -1;
                iStack_24 = -1;
                if (uStack_44 == 0) {
                  *(int *)(iStack_b4 + uStack_178 * 8) = iVar11;
                  *(undefined4 *)(iStack_b4 + 4 + uStack_178 * 8) = 0xffffffff;
                  *puStack_28 = 0x10000;
                  uStack_44 = 1;
                  iStack_158 = 0;
                  uVar12 = 1;
                }
                else {
                  *(int *)(iStack_b4 + uStack_178 * 8) = iVar11;
                  *(undefined4 *)(iStack_b4 + 4 + uStack_178 * 8) = 0xffffffff;
                  if (iStack_158 == 1) {
                    puStack_28[uStack_44] =
                         (uStack_178 + 1) * 0x10000 | (uint)*(ushort *)(puStack_28 + uStack_44);
                    uVar12 = uStack_44 + 1;
                    iStack_158 = 0;
                    uStack_44 = uVar12;
                  }
                  else {
                    puStack_28[uStack_44] = (uStack_178 + 1) * 0x10000 | uStack_178 & 0xffff;
                    uVar12 = uStack_44 + 1;
                    uStack_44 = uVar12;
                  }
                }
                goto LAB_0069d5f2;
              }
            }
LAB_0069d626:
            if (uStack_44 != 0) {
              uStack_e4 = 0;
              if (0 < (int)uStack_44) {
                do {
                  uVar12 = uStack_e4;
                  iVar6 = 0;
                  uVar7 = (uint)*(ushort *)(puStack_28 + uStack_e4);
                  uVar14 = (uint)puStack_28[uStack_e4] >> 0x10;
                  iVar11 = uVar14 - uVar7;
                  iStack_bc = 0;
                  iStack_c8 = 0;
                  iStack_34 = 0;
                  iStack_84 = 0;
                  uStack_e8 = uVar14;
                  if (iVar11 < 8) {
                    if (2 < iVar11) goto LAB_0069d684;
                    iStack_c8 = 1;
                  }
                  else {
                    uVar5 = Library::MSVCRT::FUN_0072e6c0();
                    iVar11 = ((int)uVar5 % 3) * 2 + 3;
LAB_0069d684:
                    iStack_34 = iVar11 / 2;
                    iVar6 = 1;
                    iStack_84 = 1;
                    iStack_d4 = 0;
                    iStack_bc = iVar11;
                  }
                  uStack_154 = uVar7;
                  if (uVar7 < uVar14) {
                    do {
                      if (iVar6 == 0) {
LAB_0069d7b2:
                        iVar11 = *(int *)(iStack_b4 + uStack_154 * 8);
                        iVar6 = *(int *)(iStack_b4 + 4 + uStack_154 * 8);
                        if (-1 < iVar11) {
                          iVar8 = iVar11 * 0xe;
                          iVar4 = *(int *)(iVar8 + 6 + iStack_78);
                          if ((iVar4 < 0) || (iVar4 != 0x3ed)) {
                            iVar9 = *(int *)param_1[2] << 1;
                            iVar4 = (iVar11 / iVar9) * 100;
                            iVar10 = iVar4 + 0x32;
                            iVar11 = (iVar11 % iVar9) * 100;
                            iVar1 = iVar11 + 0x32;
                            if (iVar6 < 0) {
                              uVar12 = Library::MSVCRT::FUN_0072e6c0();
                              if ((int)uVar12 % 6 == 0) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = uVar12 % DAT_007d9564;
                                iVar11 = 0x3f0;
                                uVar16 = 0;
                                uVar7 = Library::MSVCRT::FUN_0072e6c0();
                                iVar10 = (int)uVar7 % 0x51 + -0x28 + iVar10;
                                uVar7 = Library::MSVCRT::FUN_0072e6c0();
                                thunk_FUN_006a0ae0(param_1,(int)uVar7 % 0x51 + -0x28 + iVar1,iVar10,
                                                   uVar16,iVar11,uVar12);
                                *(undefined4 *)(iVar8 + 6 + iStack_78) = 0x3f0;
                              }
                              else {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                if ((int)uVar12 % 9 == 0) {
                                  uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                  uVar12 = uVar12 % DAT_007d977c;
                                  iVar11 = 0x3f1;
                                  uVar16 = 0;
                                  uVar7 = Library::MSVCRT::FUN_0072e6c0();
                                  iVar10 = (int)uVar7 % 0x51 + -0x28 + iVar10;
                                  uVar7 = Library::MSVCRT::FUN_0072e6c0();
                                  thunk_FUN_006a0ae0(param_1,(int)uVar7 % 0x51 + -0x28 + iVar1,
                                                     iVar10,uVar16,iVar11,uVar12);
                                  *(undefined4 *)(iVar8 + 6 + iStack_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              iStack_150 = (iVar6 / iVar9) * 100 + 0x32;
                              iStack_cc = (iVar6 % iVar9) * 100 + 0x32;
                              iVar6 = iStack_150 - iVar10;
                              if ((iVar6 == 0) && (iStack_cc == iVar1)) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar11 = iVar11 + 0x24 + (int)uVar12 % 0x1d;
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar6 = iVar4 + 0x24 + (int)uVar12 % 0x1d;
                              }
                              else {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar11 = (iStack_cc - iVar1) / 2 + iVar1 + -0xe + (int)uVar12 % 0x1d
                                ;
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar6 = iVar6 / 2 + iVar10 + -0xe + (int)uVar12 % 0x1d;
                              }
                              if (iStack_c8 == 1) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = (int)uVar12 % 7 + 9;
                              }
                              else if (iStack_c8 == 2) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = uVar12 & 0x80000003;
                                if ((int)uVar12 < 0) {
                                  uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (iStack_c8 == 3) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = (int)uVar12 % 5 + 4;
                              }
                              else {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = uVar12 % DAT_007d8f1c;
                              }
                              if (iStack_84 != 0) {
                                iStack_d4 = iStack_d4 + 1;
                              }
                              thunk_FUN_006a0ae0(param_1,iVar11,iVar6,0,0x3ed,uVar12);
                              *(undefined4 *)(iVar8 + 6 + iStack_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar6 == 2) {
                        if ((int)uStack_178 <= (int)uStack_154) {
                          iStack_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        uVar12 = Library::MSVCRT::FUN_0072e6c0();
                        if ((int)uVar12 % 3 != 0) {
                          if (iStack_d4 < iStack_34) {
                            iStack_c8 = ((iStack_34 / 2 <= iStack_d4) - 1 & 0xfffffffe) + 3;
                          }
                          else if (iStack_d4 == iStack_34) {
                            iStack_c8 = 2;
                          }
                          else {
                            iStack_c8 = ((iStack_d4 < iStack_34 / 2 + iStack_34) - 1 & 0xfffffffe) +
                                        3;
                          }
                          if (iStack_bc <= iStack_d4) {
                            uVar12 = Library::MSVCRT::FUN_0072e6c0();
                            uStack_178 = (int)uVar12 % 10 + 5 + uStack_154;
                            iStack_84 = 2;
                            uVar12 = Library::MSVCRT::FUN_0072e6c0();
                            iStack_bc = ((int)uVar12 % 3) * 2 + 3;
                            iStack_34 = iStack_bc / 2;
                            iStack_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      uStack_154 = uStack_154 + 1;
                      iVar6 = iStack_84;
                      uVar12 = uStack_e4;
                    } while ((int)uStack_154 < (int)uStack_e8);
                  }
                  uStack_e4 = uVar12 + 1;
                } while ((int)uStack_e4 < (int)uStack_44);
              }
              if (iStack_ac < 1) break;
            }
            iVar11 = *(int *)(puStack_70 + iStack_15c * 4);
            *(undefined4 *)(puStack_70 + iStack_15c * 4) = 0;
            iStack_17c = iStack_17c + 1;
            iStack_140 = iStack_140 + -1;
            iStack_ac = iStack_ac - iVar11;
            FUN_006ab060(&iStack_b4);
            FUN_006ab060(&puStack_28);
          }
        }
      }
      iVar11 = 0;
      iStack_144 = 0;
      iVar6 = 0;
      iStack_ac = 0;
      uVar12 = 0;
      if (0 < (int)uStack_13c) {
        do {
          if (uVar12 < puStack_138[3]) {
            piVar3 = (int *)(puStack_138[2] * uVar12 + puStack_138[7]);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if (((piVar3 != (int *)0x0) && (0 < piVar3[2])) && (*piVar3 != 0xff)) {
            *(uint *)(puStack_74 + iVar11 * 4) = uVar12;
            *(int *)(puStack_70 + iVar11 * 4) = piVar3[2];
            iVar11 = iVar11 + 1;
            iVar6 = iVar6 + piVar3[2];
            iStack_144 = iVar11;
            iStack_ac = iVar6;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uStack_13c);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        iStack_140 = *(int *)((int)param_1 + 0x5833) * 8;
        iStack_b0 = 0;
        iStack_170 = (*(int *)((int)param_1 + 0x5833) * 3) / 2;
        puVar2 = puStack_138;
        while ((0 < iStack_140 && (iStack_b0 < iStack_170))) {
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar10 = (int)uVar12 % iVar6;
          iVar4 = 0;
          iVar8 = 0;
          iStack_15c = iVar10;
          if (0 < iVar11) {
            do {
              iVar4 = iVar4 + *(int *)(puStack_70 + iVar8 * 4);
              iStack_15c = iVar8;
              puVar2 = puStack_138;
              if (iVar10 < iVar4) break;
              iVar8 = iVar8 + 1;
              iStack_15c = iVar10;
            } while (iVar8 < iVar11);
          }
          if (iVar11 <= iVar8) {
            iStack_15c = iVar11 + -1;
          }
          if (*(uint *)(puStack_74 + iStack_15c * 4) < puVar2[3]) {
            iVar4 = puVar2[2] * *(uint *)(puStack_74 + iStack_15c * 4) + puVar2[7];
          }
          else {
            iVar4 = 0;
          }
          iStack_30 = iVar4;
          if (iVar4 == 0) {
            iStack_140 = iStack_140 + 1;
          }
          else {
            uStack_e4 = 0;
            do {
              iVar11 = *(int *)(*(int *)(iVar4 + 0xc) + 0xc);
              uVar12 = Library::MSVCRT::FUN_0072e6c0();
              uVar12 = (int)uVar12 % iVar11;
              iVar11 = *(int *)(iVar4 + 0xc);
              if (uVar12 < *(uint *)(iVar11 + 0xc)) {
                piVar3 = (int *)(*(int *)(iVar11 + 8) * uVar12 + *(int *)(iVar11 + 0x1c));
              }
              else {
                piVar3 = (int *)0x0;
              }
              iStack_dc = *piVar3;
              if (((-1 < iStack_dc) &&
                  (iVar11 = iStack_78 + iStack_dc * 0xe, *(int *)(iVar11 + 6) < 0)) &&
                 ((*(byte *)(iVar11 + 1) & 0xc) != 0)) {
                iVar11 = iStack_dc / (*(int *)param_1[2] << 1);
                iVar6 = iStack_dc % (*(int *)param_1[2] << 1);
                iStack_c4 = 1;
                iVar4 = 0;
                if (0 < iStack_40) {
                  do {
                    iVar8 = FUN_006acf90((int)*(short *)(puStack_16c + iVar4 * 4),
                                         (int)*(short *)(puStack_16c + iVar4 * 4 + 2),iVar6,iVar11);
                    if ((iVar8 < 2) ||
                       (iVar8 = FUN_006acf90((int)*(short *)(puStack_16c + iVar4 * 4),
                                             (int)*(short *)(puStack_16c + iVar4 * 4 + 2),iVar6 + 1,
                                             iVar11 + 1), iVar8 < 2)) {
                      iStack_c4 = 0;
                      break;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < iStack_40);
                }
                iVar4 = iStack_30;
                if (iStack_c4 != 0) {
                  *(short *)(puStack_16c + iStack_40 * 4) = (short)iVar6;
                  *(short *)(puStack_16c + iStack_40 * 4 + 2) = (short)iVar11;
                  iStack_b0 = iStack_b0 + 1;
                  uVar12 = Library::MSVCRT::FUN_0072e6c0();
                  uVar12 = uVar12 & 0x80000001;
                  bVar15 = uVar12 == 0;
                  if ((int)uVar12 < 0) {
                    bVar15 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar15) {
                    uVar12 = Library::MSVCRT::FUN_0072e6c0();
                    thunk_FUN_006a0ae0(param_1,iVar6 * 100 + 0x32,iVar11 * 100 + 0x32,0,0x3f2,
                                       uVar12 % DAT_007d9994);
                    *(undefined4 *)(iStack_78 + 6 + iStack_dc * 0xe) = 0x3f2;
                  }
                  else {
                    uVar12 = Library::MSVCRT::FUN_0072e6c0();
                    uVar12 = uVar12 & 0x8000000f;
                    bVar15 = uVar12 == 0;
                    if ((int)uVar12 < 0) {
                      bVar15 = (uVar12 - 1 | 0xfffffff0) == 0xffffffff;
                    }
                    if (bVar15) {
                      uVar12 = Library::MSVCRT::FUN_0072e6c0();
                      uVar12 = uVar12 % DAT_007d977c;
                      if (((iVar6 < 1) || (*(int *)param_1[2] * 2 + -2 <= iVar6)) ||
                         ((iVar11 < 1 || (iVar11 <= ((int *)param_1[2])[1] * 2 + -2)))) {
                        iVar4 = 0x3f1;
                        uVar16 = 0;
                        iVar11 = iVar11 * 100;
                        iVar6 = iVar6 * 100;
                      }
                      else {
                        iVar4 = 0x3f1;
                        uVar16 = 0;
                        uVar7 = Library::MSVCRT::FUN_0072e6c0();
                        iVar11 = (int)uVar7 % 0x51 + -0x28 + iVar11 * 100;
                        uVar7 = Library::MSVCRT::FUN_0072e6c0();
                        iVar6 = (int)uVar7 % 0x51 + -0x28 + iVar6 * 100;
                      }
                      thunk_FUN_006a0ae0(param_1,iVar6,iVar11,uVar16,iVar4,uVar12);
                      *(undefined4 *)(iStack_78 + 6 + iStack_dc * 0xe) = 0x3f1;
                    }
                    else {
                      uVar12 = Library::MSVCRT::FUN_0072e6c0();
                      thunk_FUN_006a0ae0(param_1,iVar6 * 100 + 0x32,iVar11 * 100 + 0x32,0,0x3e9,
                                         uVar12 % DAT_007d88d4);
                      *(undefined4 *)(iStack_78 + 6 + iStack_dc * 0xe) = 0x3e9;
                    }
                  }
                  iVar11 = iStack_40 + 1;
                  piVar3 = (int *)(puStack_70 + iStack_15c * 4);
                  *piVar3 = *piVar3 + -4;
                  iStack_40 = iVar11;
                  if (*piVar3 < 0) {
                    *(undefined4 *)(puStack_70 + iStack_15c * 4) = 0;
                  }
                  break;
                }
              }
              uStack_e4 = uStack_e4 + 1;
            } while ((int)uStack_e4 < 10);
            iStack_140 = iStack_140 + -1;
            iVar11 = iStack_144;
            iVar6 = iStack_ac;
            puVar2 = puStack_138;
          }
        }
      }
    }
  }
  puVar2 = puStack_138;
  if (puStack_138 != (uint *)0x0) {
    uVar12 = 0;
    if (0 < (int)puStack_138[3]) {
      bVar15 = puStack_138[3] != 0;
      do {
        if (bVar15) {
          iVar11 = puVar2[2] * uVar12 + puVar2[7];
        }
        else {
          iVar11 = 0;
        }
        if ((iVar11 != 0) && (*(byte **)(iVar11 + 0xc) != (byte *)0x0)) {
          FUN_006ae110(*(byte **)(iVar11 + 0xc));
        }
        uVar12 = uVar12 + 1;
        bVar15 = uVar12 < puVar2[3];
      } while ((int)uVar12 < (int)puVar2[3]);
    }
    FUN_006ae110((byte *)puVar2);
  }
  FUN_006ab060(&iStack_78);
  FUN_006ab060(&puStack_c0);
  thunk_FUN_006a0c00(param_1);
  ExceptionList = pvStack_14;
  return uStack_13c;
LAB_0069d43d:
  iVar6 = aiStack_a8[uVar12];
LAB_0069d44d:
  iStack_b8 = iVar6 + -1;
LAB_0069d454:
  if (iStack_b8 < 0) {
    iStack_b8 = aiStack_a8[uStack_e8] + -1;
  }
  iVar6 = uStack_e8 + 3;
  if (7 < iVar6) {
    iVar6 = uStack_e8 - 5;
  }
  iVar4 = thunk_FUN_00696310(param_1,aiStack_68[uStack_e8],*(int *)param_1[2] << 1,aiStack_10c,
                             (int *)0x0);
  if (iVar4 == 8) {
    iVar4 = 0;
    do {
      if ((*(char *)(aiStack_10c[iVar6] + (int)puStack_c0) == '\x01') &&
         (aiStack_10c[iVar6] != iVar11)) {
        iStack_24 = aiStack_10c[iVar6];
        break;
      }
      iVar8 = iVar6 + -1;
      if (iVar8 < 0) {
        iVar8 = iVar6 + 7;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar8;
    } while (iVar4 < 8);
  }
LAB_0069d4ca:
  if (iStack_24 == -1) {
    *(int *)(iStack_b4 + uStack_178 * 8) = iVar11;
    *(undefined4 *)(iStack_b4 + 4 + uStack_178 * 8) = 0xffffffff;
    *(char *)(iVar11 + (int)puStack_c0) = (char)uStack_44 + '\x02';
    uStack_178 = uStack_178 + 1;
    if (iStack_158 != 0) {
      puStack_28[uStack_44] = uStack_178 * 0x10000 | (uint)*(ushort *)(puStack_28 + uStack_44);
      iStack_158 = 0;
      uStack_44 = uStack_44 + 1;
    }
  }
  else if (-1 < iStack_b8) {
    *(int *)(iStack_b4 + uStack_178 * 8) = iVar11;
    *(int *)(iStack_b4 + 4 + uStack_178 * 8) = iStack_b8;
    uVar12 = uStack_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar11 + (int)puStack_c0) = (char)uVar12 + '\x02';
    uStack_178 = uStack_178 + 1;
  }
  if ((0xfc < (int)uStack_44) || (uStack_e4 = uStack_e4 + 1, iStack_164 <= (int)uStack_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

