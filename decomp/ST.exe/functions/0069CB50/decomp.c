
uint __fastcall FUN_0069cb50(int *param_1)

{
  int iVar1;
  dword dVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  DArrayTy *pDVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  AnonShape_0069CB50_B339E56A *pAVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uVar19;
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
  AnonShape_0069CB50_B339E56A *local_30;
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
  iVar13 = 0;
  local_13c = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  thunk_FUN_006a0a70(param_1);
  iVar7 = *(int *)param_1[2] << 1;
  *(int *)((int)param_1 + 0x5833) = iVar7;
  *(int *)((int)param_1 + 0x5837) = ((int *)param_1[2])[1] << 1;
  thunk_FUN_006948e0(param_1,iVar7);
  iVar7 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uVar14 = iVar7 * 4;
  local_d8 = uVar14;
  local_78 = (LPVOID)Library::DKW::LIB::FUN_006aac70(iVar7 * 0x38);
  local_c0 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar14);
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
  puVar3 = thunk_FUN_0069c8b0((int)local_78,*(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
  local_138 = puVar3;
  if (puVar3 == (uint *)0x0) {
    uVar14 = Library::MSVCRT::FUN_0072e6c0();
    thunk_FUN_006a0ae0(param_1,100,100,0,0x3e9,uVar14 % DAT_007d88d4);
  }
  else {
    uVar14 = puVar3[3];
    local_13c = uVar14;
    if (0 < (int)uVar14) {
      local_144 = 0;
      iVar7 = 0;
      local_ac = 0;
      uVar8 = 0;
      if (0 < (int)uVar14) {
        do {
          if (uVar8 < puVar3[3]) {
            piVar4 = (int *)(puVar3[2] * uVar8 + puVar3[7]);
          }
          else {
            piVar4 = (int *)0x0;
          }
          if (((piVar4 != (int *)0x0) && (*piVar4 == 0)) && (0 < piVar4[1])) {
            *(uint *)(local_74 + iVar13 * 4) = uVar8;
            *(int *)(local_70 + iVar13 * 4) = piVar4[1];
            iVar13 = iVar13 + 1;
            iVar7 = local_ac + piVar4[1];
            local_144 = iVar13;
            local_ac = iVar7;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar14);
      }
      if ((0 < iVar13) && (0 < iVar7)) {
        iVar7 = *(int *)((int)param_1 + 0x5833);
        local_140 = iVar7 * 8;
        local_6c = 0;
        local_7c = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
        while ((0 < local_140 && (local_6c < local_7c))) {
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar12 = (int)uVar14 % local_ac;
          iVar5 = 0;
          iVar9 = 0;
          iVar7 = iVar12;
          if (0 < iVar13) {
            do {
              iVar5 = iVar5 + *(int *)(local_70 + iVar9 * 4);
              iVar7 = iVar9;
              if (iVar12 < iVar5) break;
              iVar9 = iVar9 + 1;
              iVar7 = iVar12;
            } while (iVar9 < iVar13);
          }
          if (iVar13 <= iVar9) {
            iVar7 = iVar13 + -1;
          }
          if (*(uint *)(local_74 + iVar7 * 4) < puVar3[3]) {
            pAVar15 = (AnonShape_0069CB50_B339E56A *)
                      (puVar3[2] * *(uint *)(local_74 + iVar7 * 4) + puVar3[7]);
          }
          else {
            pAVar15 = (AnonShape_0069CB50_B339E56A *)0x0;
          }
          local_30 = pAVar15;
          if (pAVar15 == (AnonShape_0069CB50_B339E56A *)0x0) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar2 = pAVar15->field_000C->count;
              uVar14 = Library::MSVCRT::FUN_0072e6c0();
              uVar14 = (int)uVar14 % (int)dVar2;
              pDVar10 = pAVar15->field_000C;
              if (uVar14 < pDVar10->count) {
                piVar4 = (int *)(pDVar10->elementSize * uVar14 + (int)pDVar10->data);
              }
              else {
                piVar4 = (int *)0x0;
              }
              local_dc = *piVar4;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 4) != 0)) {
                iVar7 = local_dc / (*(int *)param_1[2] << 1);
                iVar5 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar13 = 0;
                if (0 < local_40) {
                  do {
                    iVar9 = FUN_006acf90((int)*(short *)(local_16c + iVar13 * 4),
                                         (int)*(short *)(local_16c + iVar13 * 4 + 2),iVar5,iVar7);
                    if ((iVar9 < 2) ||
                       (iVar9 = FUN_006acf90((int)*(short *)(local_16c + iVar13 * 4),
                                             (int)*(short *)(local_16c + iVar13 * 4 + 2),iVar5 + 1,
                                             iVar7 + 1), iVar9 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < local_40);
                }
                iVar9 = local_40;
                iVar13 = local_144;
                pAVar15 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar5;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar7;
                  local_6c = local_6c + 1;
                  uVar14 = Library::MSVCRT::FUN_0072e6c0();
                  thunk_FUN_006a0ae0(param_1,iVar5 * 100,iVar7 * 100,0,0x3ee,uVar14 % DAT_007d9134);
                  *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3ee;
                  thunk_FUN_0069e4d0(param_1,(int)local_78,iVar5 * 100,iVar7 * 100,
                                     *(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
                  local_40 = iVar9 + 1;
                  iVar13 = local_144;
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            puVar3 = local_138;
          }
        }
      }
      iVar13 = 0;
      local_144 = 0;
      iVar7 = 0;
      local_ac = 0;
      uVar14 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar14 < puVar3[3]) {
            piVar4 = (int *)(puVar3[2] * uVar14 + puVar3[7]);
          }
          else {
            piVar4 = (int *)0x0;
          }
          if ((piVar4 != (int *)0x0) && (*piVar4 == 0xff)) {
            *(uint *)(local_74 + iVar13 * 4) = uVar14;
            *(undefined4 *)(local_70 + iVar13 * 4) = *(undefined4 *)(piVar4[3] + 0xc);
            iVar7 = iVar7 + *(int *)(piVar4[3] + 0xc);
            iVar13 = iVar13 + 1;
            puVar3 = local_138;
            local_144 = iVar13;
            local_ac = iVar7;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_13c);
      }
      if ((0 < iVar13) && (0 < iVar7)) {
        local_140 = iVar13 / 2 + 1;
        local_134 = (iVar13 * 3) / 2 + 1;
        local_17c = 0;
        while ((0 < local_140 && (local_17c < local_134))) {
          iVar9 = 0;
          local_b4 = (LPVOID)0x0;
          local_28 = (undefined4 *)0x0;
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar5 = (int)uVar14 % local_ac;
          iVar13 = 0;
          iVar7 = 0;
          local_148 = iVar5;
          if (0 < local_144) {
            do {
              iVar13 = iVar13 + *(int *)(local_70 + iVar7 * 4);
              local_148 = iVar7;
              if (iVar5 < iVar13) break;
              iVar7 = iVar7 + 1;
              local_148 = iVar5;
            } while (iVar7 < local_144);
          }
          if (local_144 <= iVar7) {
            local_148 = local_144 + -1;
          }
          if (*(uint *)(local_74 + local_148 * 4) < local_138[3]) {
            local_30 = (AnonShape_0069CB50_B339E56A *)
                       (local_138[2] * *(uint *)(local_74 + local_148 * 4) + local_138[7]);
          }
          else {
            local_30 = (AnonShape_0069CB50_B339E56A *)0x0;
          }
          local_15c = local_148;
          if (local_30 == (AnonShape_0069CB50_B339E56A *)0x0) {
            local_140 = local_140 + 1;
          }
          else {
            local_164 = 0;
            puVar16 = local_c0;
            for (uVar14 = local_d8 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
            for (uVar14 = local_d8 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)puVar16 = 0;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            local_e4 = 0;
            pDVar10 = local_30->field_000C;
            if (0 < (int)pDVar10->count) {
              bVar18 = pDVar10->count != 0;
              do {
                uVar14 = local_e4;
                if (bVar18) {
                  piVar4 = (int *)(pDVar10->elementSize * local_e4 + (int)pDVar10->data);
                }
                else {
                  piVar4 = (int *)0x0;
                }
                iVar13 = thunk_FUN_00696310(param_1,*piVar4,*(int *)param_1[2] << 1,local_68,
                                            (int *)0x0);
                iVar7 = 0;
                if (0 < iVar13) {
                  do {
                    if ((*(int *)((int)local_78 + local_68[iVar7] * 0xe + 2) == 0) &&
                       (*(char *)(iVar9 + (int)local_c0) == '\0')) {
                      *(short *)(local_16c + iVar9 * 4 + 2) =
                           (short)(local_68[iVar7] / (*(int *)param_1[2] << 1));
                      *(short *)(local_16c + iVar9 * 4) =
                           (short)(local_68[iVar7] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(local_68[iVar7] + (int)local_c0) = 1;
                      iVar9 = iVar9 + 1;
                      local_164 = iVar9;
                    }
                    iVar7 = iVar7 + 1;
                    uVar14 = local_e4;
                  } while (iVar7 < iVar13);
                }
                local_e4 = uVar14 + 1;
                pDVar10 = local_30->field_000C;
                bVar18 = local_e4 < pDVar10->count;
              } while ((int)local_e4 < (int)pDVar10->count);
            }
            local_b4 = (LPVOID)Library::DKW::LIB::FUN_006aac70(iVar9 * 8);
            local_28 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar9 * 4);
            local_44 = 0;
            local_b8 = -1;
            local_24 = -1;
            local_d4 = 0;
            local_178 = 0;
            local_158 = 0;
            local_e4 = 0;
            if (0 < iVar9) {
LAB_0069d203:
              local_dc = local_24;
              if (local_24 < 0) {
                local_dc = (int)*(short *)(local_16c + local_178 * 4) +
                           (int)*(short *)(local_16c + local_178 * 4 + 2) * *(int *)param_1[2] * 2;
              }
              if ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                 (local_154 = 0, uVar14 = local_178, 0 < local_164)) {
                do {
                  uVar14 = uVar14 + 1;
                  if (local_164 <= (int)uVar14) {
                    uVar14 = 0;
                  }
                  local_dc = (int)*(short *)(local_16c + uVar14 * 4) +
                             (int)*(short *)(local_16c + uVar14 * 4 + 2) * *(int *)param_1[2] * 2;
                } while ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                        (local_154 = local_154 + 1, (int)local_154 < local_164));
              }
              iVar13 = local_dc;
              if (*(byte *)(local_dc + (int)local_c0) < 2) {
                iVar7 = thunk_FUN_00696310(param_1,local_dc,*(int *)param_1[2] << 1,local_68,
                                           &local_174);
                uVar14 = 0;
                local_bc = 0;
                local_38 = 0;
                if (local_174 == 8) {
                  bVar18 = false;
                  local_e8 = 0xffffffff;
                  if (0 < iVar7) {
                    do {
                      aiStack_130[uVar14] = 0;
                      aiStack_a8[uVar14] = 0;
                      iVar13 = local_68[uVar14];
                      if (*(int *)((int)local_78 + iVar13 * 0xe + 10) ==
                          *(int *)(local_74 + local_148 * 4)) {
                        aiStack_a8[uVar14] = iVar13 + 1;
                        local_38 = local_38 + 1;
                        if (!bVar18) {
                          bVar18 = true;
                        }
                      }
                      if (*(char *)(iVar13 + (int)local_c0) == '\x01') {
                        aiStack_130[uVar14] = iVar13 + 1;
                        local_bc = local_bc + 1;
                        if ((bVar18) && ((int)local_e8 < 0)) {
                          local_e8 = uVar14 - 1;
                        }
                      }
                      if (((uVar14 == iVar7 - 1U) && (bVar18)) && ((int)local_e8 < 0)) {
                        local_e8 = uVar14;
                      }
                      uVar14 = uVar14 + 1;
                      iVar13 = local_dc;
                    } while ((int)uVar14 < iVar7);
                  }
                  if (local_24 == -1) {
                    local_28[local_44] = local_178 & 0xffff;
                    local_158 = 1;
                  }
                  local_24 = -1;
                  if (-1 < (int)local_e8) {
                    local_b8 = -1;
                    if (local_38 == 1) {
                      iVar7 = aiStack_a8[local_e8];
                      goto LAB_0069d44d;
                    }
                    if (local_38 == 2) {
                      uVar14 = 0;
                      do {
                        uVar8 = uVar14 & 0x80000001;
                        bVar18 = uVar8 == 0;
                        if ((int)uVar8 < 0) {
                          bVar18 = (uVar8 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if ((bVar18) && (aiStack_a8[uVar14] != 0)) goto LAB_0069d43d;
                        uVar14 = uVar14 + 1;
                      } while ((int)uVar14 < 8);
                    }
                    else if (local_38 == 3) {
                      iVar7 = 0;
                      uVar14 = 0;
                      do {
                        if (aiStack_a8[uVar14] != 0) {
                          if (iVar7 == 1) goto LAB_0069d43d;
                          iVar7 = iVar7 + 1;
                        }
                        uVar14 = uVar14 + 1;
                      } while ((int)uVar14 < 8);
                    }
                    goto LAB_0069d454;
                  }
                  goto LAB_0069d4ca;
                }
                local_b8 = -1;
                local_24 = -1;
                if (local_44 == 0) {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar13;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  *local_28 = 0x10000;
                  local_44 = 1;
                  local_158 = 0;
                  uVar14 = 1;
                }
                else {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar13;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  if (local_158 == 1) {
                    local_28[local_44] =
                         (local_178 + 1) * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
                    uVar14 = local_44 + 1;
                    local_158 = 0;
                    local_44 = uVar14;
                  }
                  else {
                    local_28[local_44] = (local_178 + 1) * 0x10000 | local_178 & 0xffff;
                    uVar14 = local_44 + 1;
                    local_44 = uVar14;
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
                  uVar14 = local_e4;
                  iVar7 = 0;
                  uVar8 = (uint)*(ushort *)(local_28 + local_e4);
                  uVar17 = (uint)local_28[local_e4] >> 0x10;
                  iVar13 = uVar17 - uVar8;
                  local_bc = 0;
                  local_c8 = 0;
                  local_34 = 0;
                  local_84 = 0;
                  local_e8 = uVar17;
                  if (iVar13 < 8) {
                    if (2 < iVar13) goto LAB_0069d684;
                    local_c8 = 1;
                  }
                  else {
                    uVar6 = Library::MSVCRT::FUN_0072e6c0();
                    iVar13 = ((int)uVar6 % 3) * 2 + 3;
LAB_0069d684:
                    local_34 = iVar13 / 2;
                    iVar7 = 1;
                    local_84 = 1;
                    local_d4 = 0;
                    local_bc = iVar13;
                  }
                  local_154 = uVar8;
                  if (uVar8 < uVar17) {
                    do {
                      if (iVar7 == 0) {
LAB_0069d7b2:
                        iVar13 = *(int *)((int)local_b4 + local_154 * 8);
                        iVar7 = *(int *)((int)local_b4 + local_154 * 8 + 4);
                        if (-1 < iVar13) {
                          iVar9 = iVar13 * 0xe;
                          iVar5 = *(int *)(iVar9 + 6 + (int)local_78);
                          if ((iVar5 < 0) || (iVar5 != 0x3ed)) {
                            iVar11 = *(int *)param_1[2] << 1;
                            iVar5 = (iVar13 / iVar11) * 100;
                            iVar12 = iVar5 + 0x32;
                            iVar13 = (iVar13 % iVar11) * 100;
                            iVar1 = iVar13 + 0x32;
                            if (iVar7 < 0) {
                              uVar14 = Library::MSVCRT::FUN_0072e6c0();
                              if ((int)uVar14 % 6 == 0) {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                uVar14 = uVar14 % DAT_007d9564;
                                iVar13 = 0x3f0;
                                uVar19 = 0;
                                uVar8 = Library::MSVCRT::FUN_0072e6c0();
                                iVar12 = (int)uVar8 % 0x51 + -0x28 + iVar12;
                                uVar8 = Library::MSVCRT::FUN_0072e6c0();
                                thunk_FUN_006a0ae0(param_1,(int)uVar8 % 0x51 + -0x28 + iVar1,iVar12,
                                                   uVar19,iVar13,uVar14);
                                *(undefined4 *)(iVar9 + 6 + (int)local_78) = 0x3f0;
                              }
                              else {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                if ((int)uVar14 % 9 == 0) {
                                  uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                  uVar14 = uVar14 % DAT_007d977c;
                                  iVar13 = 0x3f1;
                                  uVar19 = 0;
                                  uVar8 = Library::MSVCRT::FUN_0072e6c0();
                                  iVar12 = (int)uVar8 % 0x51 + -0x28 + iVar12;
                                  uVar8 = Library::MSVCRT::FUN_0072e6c0();
                                  thunk_FUN_006a0ae0(param_1,(int)uVar8 % 0x51 + -0x28 + iVar1,
                                                     iVar12,uVar19,iVar13,uVar14);
                                  *(undefined4 *)(iVar9 + 6 + (int)local_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              local_150 = (iVar7 / iVar11) * 100 + 0x32;
                              local_cc = (iVar7 % iVar11) * 100 + 0x32;
                              iVar7 = local_150 - iVar12;
                              if ((iVar7 == 0) && (local_cc == iVar1)) {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                iVar13 = iVar13 + 0x24 + (int)uVar14 % 0x1d;
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                iVar7 = iVar5 + 0x24 + (int)uVar14 % 0x1d;
                              }
                              else {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                iVar13 = (local_cc - iVar1) / 2 + iVar1 + -0xe + (int)uVar14 % 0x1d;
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                iVar7 = iVar7 / 2 + iVar12 + -0xe + (int)uVar14 % 0x1d;
                              }
                              if (local_c8 == 1) {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                uVar14 = (int)uVar14 % 7 + 9;
                              }
                              else if (local_c8 == 2) {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                uVar14 = uVar14 & 0x80000003;
                                if ((int)uVar14 < 0) {
                                  uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (local_c8 == 3) {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                uVar14 = (int)uVar14 % 5 + 4;
                              }
                              else {
                                uVar14 = Library::MSVCRT::FUN_0072e6c0();
                                uVar14 = uVar14 % DAT_007d8f1c;
                              }
                              if (local_84 != 0) {
                                local_d4 = local_d4 + 1;
                              }
                              thunk_FUN_006a0ae0(param_1,iVar13,iVar7,0,0x3ed,uVar14);
                              *(undefined4 *)(iVar9 + 6 + (int)local_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar7 == 2) {
                        if ((int)local_178 <= (int)local_154) {
                          local_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        uVar14 = Library::MSVCRT::FUN_0072e6c0();
                        if ((int)uVar14 % 3 != 0) {
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
                            uVar14 = Library::MSVCRT::FUN_0072e6c0();
                            local_178 = (int)uVar14 % 10 + 5 + local_154;
                            local_84 = 2;
                            uVar14 = Library::MSVCRT::FUN_0072e6c0();
                            local_bc = ((int)uVar14 % 3) * 2 + 3;
                            local_34 = local_bc / 2;
                            local_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      local_154 = local_154 + 1;
                      iVar7 = local_84;
                      uVar14 = local_e4;
                    } while ((int)local_154 < (int)local_e8);
                  }
                  local_e4 = uVar14 + 1;
                } while ((int)local_e4 < (int)local_44);
              }
              if (local_ac < 1) break;
            }
            iVar13 = *(int *)(local_70 + local_15c * 4);
            *(undefined4 *)(local_70 + local_15c * 4) = 0;
            local_17c = local_17c + 1;
            local_140 = local_140 + -1;
            local_ac = local_ac - iVar13;
            FUN_006ab060(&local_b4);
            FUN_006ab060(&local_28);
          }
        }
      }
      iVar13 = 0;
      local_144 = 0;
      iVar7 = 0;
      local_ac = 0;
      uVar14 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar14 < local_138[3]) {
            piVar4 = (int *)(local_138[2] * uVar14 + local_138[7]);
          }
          else {
            piVar4 = (int *)0x0;
          }
          if (((piVar4 != (int *)0x0) && (0 < piVar4[2])) && (*piVar4 != 0xff)) {
            *(uint *)(local_74 + iVar13 * 4) = uVar14;
            *(int *)(local_70 + iVar13 * 4) = piVar4[2];
            iVar13 = iVar13 + 1;
            iVar7 = iVar7 + piVar4[2];
            local_144 = iVar13;
            local_ac = iVar7;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_13c);
      }
      if ((0 < iVar13) && (0 < iVar7)) {
        local_140 = *(int *)((int)param_1 + 0x5833) * 8;
        local_b0 = 0;
        local_170 = (*(int *)((int)param_1 + 0x5833) * 3) / 2;
        puVar3 = local_138;
        while ((0 < local_140 && (local_b0 < local_170))) {
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar12 = (int)uVar14 % iVar7;
          iVar5 = 0;
          iVar9 = 0;
          local_15c = iVar12;
          if (0 < iVar13) {
            do {
              iVar5 = iVar5 + *(int *)(local_70 + iVar9 * 4);
              local_15c = iVar9;
              puVar3 = local_138;
              if (iVar12 < iVar5) break;
              iVar9 = iVar9 + 1;
              local_15c = iVar12;
            } while (iVar9 < iVar13);
          }
          if (iVar13 <= iVar9) {
            local_15c = iVar13 + -1;
          }
          if (*(uint *)(local_74 + local_15c * 4) < puVar3[3]) {
            pAVar15 = (AnonShape_0069CB50_B339E56A *)
                      (puVar3[2] * *(uint *)(local_74 + local_15c * 4) + puVar3[7]);
          }
          else {
            pAVar15 = (AnonShape_0069CB50_B339E56A *)0x0;
          }
          local_30 = pAVar15;
          if (pAVar15 == (AnonShape_0069CB50_B339E56A *)0x0) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar2 = pAVar15->field_000C->count;
              uVar14 = Library::MSVCRT::FUN_0072e6c0();
              uVar14 = (int)uVar14 % (int)dVar2;
              pDVar10 = pAVar15->field_000C;
              if (uVar14 < pDVar10->count) {
                piVar4 = (int *)(pDVar10->elementSize * uVar14 + (int)pDVar10->data);
              }
              else {
                piVar4 = (int *)0x0;
              }
              local_dc = *piVar4;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 0xc) != 0)) {
                iVar13 = local_dc / (*(int *)param_1[2] << 1);
                iVar7 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar5 = 0;
                if (0 < local_40) {
                  do {
                    iVar9 = FUN_006acf90((int)*(short *)(local_16c + iVar5 * 4),
                                         (int)*(short *)(local_16c + iVar5 * 4 + 2),iVar7,iVar13);
                    if ((iVar9 < 2) ||
                       (iVar9 = FUN_006acf90((int)*(short *)(local_16c + iVar5 * 4),
                                             (int)*(short *)(local_16c + iVar5 * 4 + 2),iVar7 + 1,
                                             iVar13 + 1), iVar9 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < local_40);
                }
                pAVar15 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar7;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar13;
                  local_b0 = local_b0 + 1;
                  uVar14 = Library::MSVCRT::FUN_0072e6c0();
                  uVar14 = uVar14 & 0x80000001;
                  bVar18 = uVar14 == 0;
                  if ((int)uVar14 < 0) {
                    bVar18 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar18) {
                    uVar14 = Library::MSVCRT::FUN_0072e6c0();
                    thunk_FUN_006a0ae0(param_1,iVar7 * 100 + 0x32,iVar13 * 100 + 0x32,0,0x3f2,
                                       uVar14 % DAT_007d9994);
                    *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f2;
                  }
                  else {
                    uVar14 = Library::MSVCRT::FUN_0072e6c0();
                    uVar14 = uVar14 & 0x8000000f;
                    bVar18 = uVar14 == 0;
                    if ((int)uVar14 < 0) {
                      bVar18 = (uVar14 - 1 | 0xfffffff0) == 0xffffffff;
                    }
                    if (bVar18) {
                      uVar14 = Library::MSVCRT::FUN_0072e6c0();
                      uVar14 = uVar14 % DAT_007d977c;
                      if (((iVar7 < 1) || (*(int *)param_1[2] * 2 + -2 <= iVar7)) ||
                         ((iVar13 < 1 || (iVar13 <= ((int *)param_1[2])[1] * 2 + -2)))) {
                        iVar5 = 0x3f1;
                        uVar19 = 0;
                        iVar13 = iVar13 * 100;
                        iVar7 = iVar7 * 100;
                      }
                      else {
                        iVar5 = 0x3f1;
                        uVar19 = 0;
                        uVar8 = Library::MSVCRT::FUN_0072e6c0();
                        iVar13 = (int)uVar8 % 0x51 + -0x28 + iVar13 * 100;
                        uVar8 = Library::MSVCRT::FUN_0072e6c0();
                        iVar7 = (int)uVar8 % 0x51 + -0x28 + iVar7 * 100;
                      }
                      thunk_FUN_006a0ae0(param_1,iVar7,iVar13,uVar19,iVar5,uVar14);
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f1;
                    }
                    else {
                      uVar14 = Library::MSVCRT::FUN_0072e6c0();
                      thunk_FUN_006a0ae0(param_1,iVar7 * 100 + 0x32,iVar13 * 100 + 0x32,0,0x3e9,
                                         uVar14 % DAT_007d88d4);
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3e9;
                    }
                  }
                  iVar13 = local_40 + 1;
                  piVar4 = (int *)(local_70 + local_15c * 4);
                  *piVar4 = *piVar4 + -4;
                  local_40 = iVar13;
                  if (*piVar4 < 0) {
                    *(undefined4 *)(local_70 + local_15c * 4) = 0;
                  }
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            iVar13 = local_144;
            iVar7 = local_ac;
            puVar3 = local_138;
          }
        }
      }
    }
  }
  puVar3 = local_138;
  if (local_138 != (uint *)0x0) {
    uVar14 = 0;
    if (0 < (int)local_138[3]) {
      bVar18 = local_138[3] != 0;
      do {
        if (bVar18) {
          iVar13 = puVar3[2] * uVar14 + puVar3[7];
        }
        else {
          iVar13 = 0;
        }
        if ((iVar13 != 0) && (*(byte **)(iVar13 + 0xc) != (byte *)0x0)) {
          FUN_006ae110(*(byte **)(iVar13 + 0xc));
        }
        uVar14 = uVar14 + 1;
        bVar18 = uVar14 < puVar3[3];
      } while ((int)uVar14 < (int)puVar3[3]);
    }
    FUN_006ae110((byte *)puVar3);
  }
  FUN_006ab060(&local_78);
  FUN_006ab060(&local_c0);
  thunk_FUN_006a0c00(param_1);
  ExceptionList = local_14;
  return local_13c;
LAB_0069d43d:
  iVar7 = aiStack_a8[uVar14];
LAB_0069d44d:
  local_b8 = iVar7 + -1;
LAB_0069d454:
  if (local_b8 < 0) {
    local_b8 = aiStack_a8[local_e8] + -1;
  }
  iVar7 = local_e8 + 3;
  if (7 < iVar7) {
    iVar7 = local_e8 - 5;
  }
  iVar5 = thunk_FUN_00696310(param_1,local_68[local_e8],*(int *)param_1[2] << 1,local_10c,(int *)0x0
                            );
  if (iVar5 == 8) {
    iVar5 = 0;
    do {
      if ((*(char *)(local_10c[iVar7] + (int)local_c0) == '\x01') && (local_10c[iVar7] != iVar13)) {
        local_24 = local_10c[iVar7];
        break;
      }
      iVar9 = iVar7 + -1;
      if (iVar9 < 0) {
        iVar9 = iVar7 + 7;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar9;
    } while (iVar5 < 8);
  }
LAB_0069d4ca:
  if (local_24 == -1) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar13;
    *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
    *(char *)(iVar13 + (int)local_c0) = (char)local_44 + '\x02';
    local_178 = local_178 + 1;
    if (local_158 != 0) {
      local_28[local_44] = local_178 * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
      local_158 = 0;
      local_44 = local_44 + 1;
    }
  }
  else if (-1 < local_b8) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar13;
    *(int *)((int)local_b4 + local_178 * 8 + 4) = local_b8;
    uVar14 = local_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar13 + (int)local_c0) = (char)uVar14 + '\x02';
    local_178 = local_178 + 1;
  }
  if ((0xfc < (int)local_44) || (local_e4 = local_e4 + 1, local_164 <= (int)local_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

