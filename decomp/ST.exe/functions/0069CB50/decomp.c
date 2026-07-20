
uint __fastcall FUN_0069cb50(int *param_1)

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
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  undefined1 *local_16c;
  int local_164;
  int local_15c;
  int local_158;
  uint local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  uint local_13c;
  uint *local_138;
  int local_134;
  int aiStack_130 [9];
  int local_10c [9];
  uint local_e8;
  uint local_e4;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 *local_c0;
  int local_bc;
  int local_b8;
  LPVOID local_b4;
  int local_b0;
  int local_ac;
  int aiStack_a8 [9];
  int local_84;
  int local_7c;
  LPVOID local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  int local_6c;
  int local_68 [9];
  uint local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d818;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe68;
  iVar11 = 0;
  local_13c = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  thunk_FUN_006a0a70(param_1);
  iVar6 = *(int *)param_1[2] << 1;
  *(int *)((int)param_1 + 0x5833) = iVar6;
  *(int *)((int)param_1 + 0x5837) = ((int *)param_1[2])[1] << 1;
  thunk_FUN_006948e0(param_1,iVar6);
  iVar6 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uVar12 = iVar6 * 4;
  local_d8 = uVar12;
  local_78 = (LPVOID)Library::DKW::LIB::FUN_006aac70(iVar6 * 0x38);
  local_c0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar12);
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_16c = &stack0xfffffe68;
  local_1c = &stack0xfffffe68;
  Library::MSVCRT::FUN_0072da40();
  local_74 = &stack0xfffffe68;
  local_1c = &stack0xfffffe68;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_70 = &stack0xfffffe68;
  local_1c = &stack0xfffffe68;
  thunk_FUN_0069c360(param_1,(int)local_78,(int *)(*(int *)param_1[2] << 1),
                     ((int *)param_1[2])[1] << 1);
  puVar2 = thunk_FUN_0069c8b0((int)local_78,*(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
  local_138 = puVar2;
  if (puVar2 == (uint *)0x0) {
    uVar12 = Library::MSVCRT::FUN_0072e6c0();
    thunk_FUN_006a0ae0(param_1,100,100,0,0x3e9,uVar12 % DAT_007d88d4);
  }
  else {
    uVar12 = puVar2[3];
    local_13c = uVar12;
    if (0 < (int)uVar12) {
      local_144 = 0;
      iVar6 = 0;
      local_ac = 0;
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
            *(uint *)(local_74 + iVar11 * 4) = uVar7;
            *(int *)(local_70 + iVar11 * 4) = piVar3[1];
            iVar11 = iVar11 + 1;
            iVar6 = local_ac + piVar3[1];
            local_144 = iVar11;
            local_ac = iVar6;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar12);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        iVar6 = *(int *)((int)param_1 + 0x5833);
        local_140 = iVar6 * 8;
        local_6c = 0;
        local_7c = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
        while ((0 < local_140 && (local_6c < local_7c))) {
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar10 = (int)uVar12 % local_ac;
          iVar4 = 0;
          iVar8 = 0;
          iVar6 = iVar10;
          if (0 < iVar11) {
            do {
              iVar4 = iVar4 + *(int *)(local_70 + iVar8 * 4);
              iVar6 = iVar8;
              if (iVar10 < iVar4) break;
              iVar8 = iVar8 + 1;
              iVar6 = iVar10;
            } while (iVar8 < iVar11);
          }
          if (iVar11 <= iVar8) {
            iVar6 = iVar11 + -1;
          }
          if (*(uint *)(local_74 + iVar6 * 4) < puVar2[3]) {
            iVar6 = puVar2[2] * *(uint *)(local_74 + iVar6 * 4) + puVar2[7];
          }
          else {
            iVar6 = 0;
          }
          local_30 = iVar6;
          if (iVar6 == 0) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
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
              local_dc = *piVar3;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 4) != 0)) {
                iVar4 = local_dc / (*(int *)param_1[2] << 1);
                iVar8 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar11 = 0;
                if (0 < local_40) {
                  do {
                    iVar6 = FUN_006acf90((int)*(short *)(local_16c + iVar11 * 4),
                                         (int)*(short *)(local_16c + iVar11 * 4 + 2),iVar8,iVar4);
                    if ((iVar6 < 2) ||
                       (iVar6 = FUN_006acf90((int)*(short *)(local_16c + iVar11 * 4),
                                             (int)*(short *)(local_16c + iVar11 * 4 + 2),iVar8 + 1,
                                             iVar4 + 1), iVar6 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < local_40);
                }
                iVar10 = local_40;
                iVar11 = local_144;
                iVar6 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar8;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar4;
                  local_6c = local_6c + 1;
                  uVar12 = Library::MSVCRT::FUN_0072e6c0();
                  thunk_FUN_006a0ae0(param_1,iVar8 * 100,iVar4 * 100,0,0x3ee,uVar12 % DAT_007d9134);
                  *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3ee;
                  thunk_FUN_0069e4d0(param_1,(int)local_78,iVar8 * 100,iVar4 * 100,
                                     *(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
                  local_40 = iVar10 + 1;
                  iVar11 = local_144;
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            puVar2 = local_138;
          }
        }
      }
      iVar11 = 0;
      local_144 = 0;
      iVar6 = 0;
      local_ac = 0;
      uVar12 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar12 < puVar2[3]) {
            piVar3 = (int *)(puVar2[2] * uVar12 + puVar2[7]);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((piVar3 != (int *)0x0) && (*piVar3 == 0xff)) {
            *(uint *)(local_74 + iVar11 * 4) = uVar12;
            *(undefined4 *)(local_70 + iVar11 * 4) = *(undefined4 *)(piVar3[3] + 0xc);
            iVar6 = iVar6 + *(int *)(piVar3[3] + 0xc);
            iVar11 = iVar11 + 1;
            puVar2 = local_138;
            local_144 = iVar11;
            local_ac = iVar6;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_13c);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        local_140 = iVar11 / 2 + 1;
        local_134 = (iVar11 * 3) / 2 + 1;
        local_17c = 0;
        while ((0 < local_140 && (local_17c < local_134))) {
          iVar8 = 0;
          local_b4 = (LPVOID)0x0;
          local_28 = (undefined4 *)0x0;
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar4 = (int)uVar12 % local_ac;
          iVar11 = 0;
          iVar6 = 0;
          local_148 = iVar4;
          if (0 < local_144) {
            do {
              iVar11 = iVar11 + *(int *)(local_70 + iVar6 * 4);
              local_148 = iVar6;
              if (iVar4 < iVar11) break;
              iVar6 = iVar6 + 1;
              local_148 = iVar4;
            } while (iVar6 < local_144);
          }
          if (local_144 <= iVar6) {
            local_148 = local_144 + -1;
          }
          if (*(uint *)(local_74 + local_148 * 4) < local_138[3]) {
            local_30 = local_138[2] * *(uint *)(local_74 + local_148 * 4) + local_138[7];
          }
          else {
            local_30 = 0;
          }
          local_15c = local_148;
          if (local_30 == 0) {
            local_140 = local_140 + 1;
          }
          else {
            local_164 = 0;
            puVar13 = local_c0;
            for (uVar12 = local_d8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
            for (uVar12 = local_d8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar13 = 0;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            local_e4 = 0;
            iVar11 = *(int *)(local_30 + 0xc);
            if (0 < *(int *)(iVar11 + 0xc)) {
              bVar15 = *(int *)(iVar11 + 0xc) != 0;
              do {
                uVar12 = local_e4;
                if (bVar15) {
                  piVar3 = (int *)(*(int *)(iVar11 + 8) * local_e4 + *(int *)(iVar11 + 0x1c));
                }
                else {
                  piVar3 = (int *)0x0;
                }
                iVar11 = thunk_FUN_00696310(param_1,*piVar3,*(int *)param_1[2] << 1,local_68,
                                            (int *)0x0);
                iVar6 = 0;
                if (0 < iVar11) {
                  do {
                    if ((*(int *)((int)local_78 + local_68[iVar6] * 0xe + 2) == 0) &&
                       (*(char *)(iVar8 + (int)local_c0) == '\0')) {
                      *(short *)(local_16c + iVar8 * 4 + 2) =
                           (short)(local_68[iVar6] / (*(int *)param_1[2] << 1));
                      *(short *)(local_16c + iVar8 * 4) =
                           (short)(local_68[iVar6] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(local_68[iVar6] + (int)local_c0) = 1;
                      iVar8 = iVar8 + 1;
                      local_164 = iVar8;
                    }
                    iVar6 = iVar6 + 1;
                    uVar12 = local_e4;
                  } while (iVar6 < iVar11);
                }
                local_e4 = uVar12 + 1;
                iVar11 = *(int *)(local_30 + 0xc);
                bVar15 = local_e4 < *(uint *)(iVar11 + 0xc);
              } while ((int)local_e4 < (int)*(uint *)(iVar11 + 0xc));
            }
            local_b4 = (LPVOID)Library::DKW::LIB::FUN_006aac70(iVar8 * 8);
            local_28 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar8 * 4);
            local_44 = 0;
            local_b8 = -1;
            local_24 = -1;
            local_d4 = 0;
            local_178 = 0;
            local_158 = 0;
            local_e4 = 0;
            if (0 < iVar8) {
LAB_0069d203:
              local_dc = local_24;
              if (local_24 < 0) {
                local_dc = (int)*(short *)(local_16c + local_178 * 4) +
                           (int)*(short *)(local_16c + local_178 * 4 + 2) * *(int *)param_1[2] * 2;
              }
              if ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                 (local_154 = 0, uVar12 = local_178, 0 < local_164)) {
                do {
                  uVar12 = uVar12 + 1;
                  if (local_164 <= (int)uVar12) {
                    uVar12 = 0;
                  }
                  local_dc = (int)*(short *)(local_16c + uVar12 * 4) +
                             (int)*(short *)(local_16c + uVar12 * 4 + 2) * *(int *)param_1[2] * 2;
                } while ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                        (local_154 = local_154 + 1, (int)local_154 < local_164));
              }
              iVar11 = local_dc;
              if (*(byte *)(local_dc + (int)local_c0) < 2) {
                iVar6 = thunk_FUN_00696310(param_1,local_dc,*(int *)param_1[2] << 1,local_68,
                                           &local_174);
                uVar12 = 0;
                local_bc = 0;
                local_38 = 0;
                if (local_174 == 8) {
                  bVar15 = false;
                  local_e8 = 0xffffffff;
                  if (0 < iVar6) {
                    do {
                      aiStack_130[uVar12] = 0;
                      aiStack_a8[uVar12] = 0;
                      iVar11 = local_68[uVar12];
                      if (*(int *)((int)local_78 + iVar11 * 0xe + 10) ==
                          *(int *)(local_74 + local_148 * 4)) {
                        aiStack_a8[uVar12] = iVar11 + 1;
                        local_38 = local_38 + 1;
                        if (!bVar15) {
                          bVar15 = true;
                        }
                      }
                      if (*(char *)(iVar11 + (int)local_c0) == '\x01') {
                        aiStack_130[uVar12] = iVar11 + 1;
                        local_bc = local_bc + 1;
                        if ((bVar15) && ((int)local_e8 < 0)) {
                          local_e8 = uVar12 - 1;
                        }
                      }
                      if (((uVar12 == iVar6 - 1U) && (bVar15)) && ((int)local_e8 < 0)) {
                        local_e8 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                      iVar11 = local_dc;
                    } while ((int)uVar12 < iVar6);
                  }
                  if (local_24 == -1) {
                    local_28[local_44] = local_178 & 0xffff;
                    local_158 = 1;
                  }
                  local_24 = -1;
                  if (-1 < (int)local_e8) {
                    local_b8 = -1;
                    if (local_38 == 1) {
                      iVar6 = aiStack_a8[local_e8];
                      goto LAB_0069d44d;
                    }
                    if (local_38 == 2) {
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
                    else if (local_38 == 3) {
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
                local_b8 = -1;
                local_24 = -1;
                if (local_44 == 0) {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar11;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  *local_28 = 0x10000;
                  local_44 = 1;
                  local_158 = 0;
                  uVar12 = 1;
                }
                else {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar11;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  if (local_158 == 1) {
                    local_28[local_44] =
                         (local_178 + 1) * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
                    uVar12 = local_44 + 1;
                    local_158 = 0;
                    local_44 = uVar12;
                  }
                  else {
                    local_28[local_44] = (local_178 + 1) * 0x10000 | local_178 & 0xffff;
                    uVar12 = local_44 + 1;
                    local_44 = uVar12;
                  }
                }
                goto LAB_0069d5f2;
              }
            }
LAB_0069d626:
            if (local_44 != 0) {
              local_e4 = 0;
              if (0 < (int)local_44) {
                do {
                  uVar12 = local_e4;
                  iVar6 = 0;
                  uVar7 = (uint)*(ushort *)(local_28 + local_e4);
                  uVar14 = (uint)local_28[local_e4] >> 0x10;
                  iVar11 = uVar14 - uVar7;
                  local_bc = 0;
                  local_c8 = 0;
                  local_34 = 0;
                  local_84 = 0;
                  local_e8 = uVar14;
                  if (iVar11 < 8) {
                    if (2 < iVar11) goto LAB_0069d684;
                    local_c8 = 1;
                  }
                  else {
                    uVar5 = Library::MSVCRT::FUN_0072e6c0();
                    iVar11 = ((int)uVar5 % 3) * 2 + 3;
LAB_0069d684:
                    local_34 = iVar11 / 2;
                    iVar6 = 1;
                    local_84 = 1;
                    local_d4 = 0;
                    local_bc = iVar11;
                  }
                  local_154 = uVar7;
                  if (uVar7 < uVar14) {
                    do {
                      if (iVar6 == 0) {
LAB_0069d7b2:
                        iVar11 = *(int *)((int)local_b4 + local_154 * 8);
                        iVar6 = *(int *)((int)local_b4 + local_154 * 8 + 4);
                        if (-1 < iVar11) {
                          iVar8 = iVar11 * 0xe;
                          iVar4 = *(int *)(iVar8 + 6 + (int)local_78);
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
                                *(undefined4 *)(iVar8 + 6 + (int)local_78) = 0x3f0;
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
                                  *(undefined4 *)(iVar8 + 6 + (int)local_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              local_150 = (iVar6 / iVar9) * 100 + 0x32;
                              local_cc = (iVar6 % iVar9) * 100 + 0x32;
                              iVar6 = local_150 - iVar10;
                              if ((iVar6 == 0) && (local_cc == iVar1)) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar11 = iVar11 + 0x24 + (int)uVar12 % 0x1d;
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar6 = iVar4 + 0x24 + (int)uVar12 % 0x1d;
                              }
                              else {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar11 = (local_cc - iVar1) / 2 + iVar1 + -0xe + (int)uVar12 % 0x1d;
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                iVar6 = iVar6 / 2 + iVar10 + -0xe + (int)uVar12 % 0x1d;
                              }
                              if (local_c8 == 1) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = (int)uVar12 % 7 + 9;
                              }
                              else if (local_c8 == 2) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = uVar12 & 0x80000003;
                                if ((int)uVar12 < 0) {
                                  uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (local_c8 == 3) {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = (int)uVar12 % 5 + 4;
                              }
                              else {
                                uVar12 = Library::MSVCRT::FUN_0072e6c0();
                                uVar12 = uVar12 % DAT_007d8f1c;
                              }
                              if (local_84 != 0) {
                                local_d4 = local_d4 + 1;
                              }
                              thunk_FUN_006a0ae0(param_1,iVar11,iVar6,0,0x3ed,uVar12);
                              *(undefined4 *)(iVar8 + 6 + (int)local_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar6 == 2) {
                        if ((int)local_178 <= (int)local_154) {
                          local_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        uVar12 = Library::MSVCRT::FUN_0072e6c0();
                        if ((int)uVar12 % 3 != 0) {
                          if (local_d4 < local_34) {
                            local_c8 = ((local_34 / 2 <= local_d4) - 1 & 0xfffffffe) + 3;
                          }
                          else if (local_d4 == local_34) {
                            local_c8 = 2;
                          }
                          else {
                            local_c8 = ((local_d4 < local_34 / 2 + local_34) - 1 & 0xfffffffe) + 3;
                          }
                          if (local_bc <= local_d4) {
                            uVar12 = Library::MSVCRT::FUN_0072e6c0();
                            local_178 = (int)uVar12 % 10 + 5 + local_154;
                            local_84 = 2;
                            uVar12 = Library::MSVCRT::FUN_0072e6c0();
                            local_bc = ((int)uVar12 % 3) * 2 + 3;
                            local_34 = local_bc / 2;
                            local_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      local_154 = local_154 + 1;
                      iVar6 = local_84;
                      uVar12 = local_e4;
                    } while ((int)local_154 < (int)local_e8);
                  }
                  local_e4 = uVar12 + 1;
                } while ((int)local_e4 < (int)local_44);
              }
              if (local_ac < 1) break;
            }
            iVar11 = *(int *)(local_70 + local_15c * 4);
            *(undefined4 *)(local_70 + local_15c * 4) = 0;
            local_17c = local_17c + 1;
            local_140 = local_140 + -1;
            local_ac = local_ac - iVar11;
            FUN_006ab060(&local_b4);
            FUN_006ab060(&local_28);
          }
        }
      }
      iVar11 = 0;
      local_144 = 0;
      iVar6 = 0;
      local_ac = 0;
      uVar12 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar12 < local_138[3]) {
            piVar3 = (int *)(local_138[2] * uVar12 + local_138[7]);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if (((piVar3 != (int *)0x0) && (0 < piVar3[2])) && (*piVar3 != 0xff)) {
            *(uint *)(local_74 + iVar11 * 4) = uVar12;
            *(int *)(local_70 + iVar11 * 4) = piVar3[2];
            iVar11 = iVar11 + 1;
            iVar6 = iVar6 + piVar3[2];
            local_144 = iVar11;
            local_ac = iVar6;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_13c);
      }
      if ((0 < iVar11) && (0 < iVar6)) {
        local_140 = *(int *)((int)param_1 + 0x5833) * 8;
        local_b0 = 0;
        local_170 = (*(int *)((int)param_1 + 0x5833) * 3) / 2;
        puVar2 = local_138;
        while ((0 < local_140 && (local_b0 < local_170))) {
          uVar12 = Library::MSVCRT::FUN_0072e6c0();
          iVar10 = (int)uVar12 % iVar6;
          iVar4 = 0;
          iVar8 = 0;
          local_15c = iVar10;
          if (0 < iVar11) {
            do {
              iVar4 = iVar4 + *(int *)(local_70 + iVar8 * 4);
              local_15c = iVar8;
              puVar2 = local_138;
              if (iVar10 < iVar4) break;
              iVar8 = iVar8 + 1;
              local_15c = iVar10;
            } while (iVar8 < iVar11);
          }
          if (iVar11 <= iVar8) {
            local_15c = iVar11 + -1;
          }
          if (*(uint *)(local_74 + local_15c * 4) < puVar2[3]) {
            iVar4 = puVar2[2] * *(uint *)(local_74 + local_15c * 4) + puVar2[7];
          }
          else {
            iVar4 = 0;
          }
          local_30 = iVar4;
          if (iVar4 == 0) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
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
              local_dc = *piVar3;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 0xc) != 0)) {
                iVar11 = local_dc / (*(int *)param_1[2] << 1);
                iVar6 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar4 = 0;
                if (0 < local_40) {
                  do {
                    iVar8 = FUN_006acf90((int)*(short *)(local_16c + iVar4 * 4),
                                         (int)*(short *)(local_16c + iVar4 * 4 + 2),iVar6,iVar11);
                    if ((iVar8 < 2) ||
                       (iVar8 = FUN_006acf90((int)*(short *)(local_16c + iVar4 * 4),
                                             (int)*(short *)(local_16c + iVar4 * 4 + 2),iVar6 + 1,
                                             iVar11 + 1), iVar8 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < local_40);
                }
                iVar4 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar6;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar11;
                  local_b0 = local_b0 + 1;
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
                    *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f2;
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
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f1;
                    }
                    else {
                      uVar12 = Library::MSVCRT::FUN_0072e6c0();
                      thunk_FUN_006a0ae0(param_1,iVar6 * 100 + 0x32,iVar11 * 100 + 0x32,0,0x3e9,
                                         uVar12 % DAT_007d88d4);
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3e9;
                    }
                  }
                  iVar11 = local_40 + 1;
                  piVar3 = (int *)(local_70 + local_15c * 4);
                  *piVar3 = *piVar3 + -4;
                  local_40 = iVar11;
                  if (*piVar3 < 0) {
                    *(undefined4 *)(local_70 + local_15c * 4) = 0;
                  }
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            iVar11 = local_144;
            iVar6 = local_ac;
            puVar2 = local_138;
          }
        }
      }
    }
  }
  puVar2 = local_138;
  if (local_138 != (uint *)0x0) {
    uVar12 = 0;
    if (0 < (int)local_138[3]) {
      bVar15 = local_138[3] != 0;
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
  FUN_006ab060(&local_78);
  FUN_006ab060(&local_c0);
  thunk_FUN_006a0c00(param_1);
  ExceptionList = local_14;
  return local_13c;
LAB_0069d43d:
  iVar6 = aiStack_a8[uVar12];
LAB_0069d44d:
  local_b8 = iVar6 + -1;
LAB_0069d454:
  if (local_b8 < 0) {
    local_b8 = aiStack_a8[local_e8] + -1;
  }
  iVar6 = local_e8 + 3;
  if (7 < iVar6) {
    iVar6 = local_e8 - 5;
  }
  iVar4 = thunk_FUN_00696310(param_1,local_68[local_e8],*(int *)param_1[2] << 1,local_10c,(int *)0x0
                            );
  if (iVar4 == 8) {
    iVar4 = 0;
    do {
      if ((*(char *)(local_10c[iVar6] + (int)local_c0) == '\x01') && (local_10c[iVar6] != iVar11)) {
        local_24 = local_10c[iVar6];
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
  if (local_24 == -1) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar11;
    *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
    *(char *)(iVar11 + (int)local_c0) = (char)local_44 + '\x02';
    local_178 = local_178 + 1;
    if (local_158 != 0) {
      local_28[local_44] = local_178 * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
      local_158 = 0;
      local_44 = local_44 + 1;
    }
  }
  else if (-1 < local_b8) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar11;
    *(int *)((int)local_b4 + local_178 * 8 + 4) = local_b8;
    uVar12 = local_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar11 + (int)local_c0) = (char)uVar12 + '\x02';
    local_178 = local_178 + 1;
  }
  if ((0xfc < (int)local_44) || (local_e4 = local_e4 + 1, local_164 <= (int)local_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

