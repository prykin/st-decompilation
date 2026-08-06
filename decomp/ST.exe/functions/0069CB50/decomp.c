#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=234; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __fastcall CGenerate::sub_0069CB50(int *param_1)

{
  int iVar1;
  dword dVar2;
  DArrayTy *pDVar3;
  int *piVar4;
  uint local_EAX_492;
  int iVar5;
  uint local_EAX_596;
  int iVar10;
  int local_EAX_783;
  uint local_EAX_878;
  uint local_EAX_1239;
  uint uVar6;
  uint local_EAX_2979;
  uint local_EAX_3093;
  uint local_EAX_3129;
  uint local_EAX_3355;
  uint local_EAX_3372;
  uint local_EAX_3391;
  uint local_EAX_3425;
  uint local_EAX_3468;
  uint local_EAX_3483;
  uint local_EAX_3501;
  uint local_EAX_3523;
  uint local_EAX_3595;
  uint local_EAX_3612;
  uint local_EAX_3633;
  uint local_EAX_3651;
  uint local_EAX_3699;
  uint local_EAX_3716;
  uint uVar9;
  uint local_EAX_3755;
  uint local_EAX_4140;
  uint local_EAX_4255;
  int local_EAX_4407;
  int local_EAX_4442;
  uint local_EAX_4534;
  uint local_EAX_4557;
  uint local_EAX_4580;
  uint local_EAX_4639;
  uint local_EAX_4663;
  uint local_EAX_4755;
  uint local_EAX_4843;
  uint uVar14;
  void *pvVar7;
  int iVar8;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  AnonShape_0069CB50_B339E56A *pAVar16;
  byte *puVar17;
  uint uVar18;
  bool bVar19;
  undefined4 uVar20;
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
  DArrayTy *local_138;
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
  void *local_b4;
  int local_b0;
  int local_ac;
  int aiStack_a8 [9];
  int local_84;
  int local_7c;
  void *local_78;
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
  iVar14 = 0;
  local_13c = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  thunk_FUN_006a0a70(param_1);
  iVar8 = *(int *)param_1[2] << 1;
  STField<int>(param_1,0x5833) = iVar8;
  STField<int>(param_1,0x5837) = ((int *)param_1[2])[1] << 1;
  sub_006948E0((CGenerate *)param_1,iVar8);
  iVar8 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uVar15 = iVar8 * 4;
  local_d8 = uVar15;
  local_78 = Library::DKW::LIB::MemAlloc(iVar8 * 0x38);
  local_c0 = Library::DKW::LIB::MemAlloc(uVar15);
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
  pDVar3 = (DArrayTy *)
           thunk_FUN_0069c8b0((int)local_78,*(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
  local_138 = pDVar3;
  if (pDVar3 == nullptr) {
    uVar14 = Library::MSVCRT::FUN_0072e6c0();
    thunk_FUN_006a0ae0(param_1,100,100,0,0x3e9,uVar14 % DAT_007d88d4);
  }
  else {
    uVar15 = pDVar3->count;
    local_13c = uVar15;
    if (0 < (int)uVar15) {
      local_144 = 0;
      iVar8 = 0;
      local_ac = 0;
      uVar10 = 0;
      if (0 < (int)uVar15) {
        do {
          if (uVar10 < pDVar3->count) {
            piVar4 = DArrayAt<int>(pDVar3, uVar10);
          }
          else {
            piVar4 = nullptr;
          }
          if (((piVar4 != nullptr) && (*piVar4 == 0)) && (0 < piVar4[1])) {
            *(uint *)(local_74 + iVar14 * 4) = uVar10;
            *(int *)(local_70 + iVar14 * 4) = piVar4[1];
            iVar14 = iVar14 + 1;
            iVar8 = local_ac + piVar4[1];
            local_144 = iVar14;
            local_ac = iVar8;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar15);
      }
      if ((0 < iVar14) && (0 < iVar8)) {
        iVar8 = STField<int>(param_1,0x5833);
        local_140 = iVar8 * 8;
        local_6c = 0;
        local_7c = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
        while ((0 < local_140 && (local_6c < local_7c))) {
          local_EAX_492 = Library::MSVCRT::FUN_0072e6c0();
          iVar13 = (int)local_EAX_492 % local_ac;
          iVar5 = 0;
          iVar11 = 0;
          iVar8 = iVar13;
          if (0 < iVar14) {
            do {
              iVar5 = iVar5 + *(int *)(local_70 + iVar11 * 4);
              iVar8 = iVar11;
              if (iVar13 < iVar5) break;
              iVar11 = iVar11 + 1;
              iVar8 = iVar13;
            } while (iVar11 < iVar14);
          }
          if (iVar14 <= iVar11) {
            iVar8 = iVar14 + -1;
          }
          if (*(uint *)(local_74 + iVar8 * 4) < pDVar3->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar16 = (AnonShape_0069CB50_B339E56A *)
                      (pDVar3->elementSize * *(uint *)(local_74 + iVar8 * 4) + (int)pDVar3->data);
          }
          else {
            pAVar16 = nullptr;
          }
          local_30 = pAVar16;
          if (pAVar16 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar2 = pAVar16->field_000C->count;
              local_EAX_596 = Library::MSVCRT::FUN_0072e6c0();
              uVar15 = (int)local_EAX_596 % (int)dVar2;
              pDVar3 = pAVar16->field_000C;
              if (uVar15 < pDVar3->count) {
                piVar4 = DArrayAt<int>(pDVar3, uVar15);
              }
              else {
                piVar4 = nullptr;
              }
              local_dc = *piVar4;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 4) != 0)) {
                iVar8 = local_dc / (*(int *)param_1[2] << 1);
                iVar5 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar14 = 0;
                if (0 < local_40) {
                  do {
                    iVar10 = FUN_006acf90((int)*(short *)(local_16c + iVar14 * 4),
                                          (int)*(short *)(local_16c + iVar14 * 4 + 2),iVar5,iVar8);
                    if ((iVar10 < 2) ||
                       (local_EAX_783 =
                             FUN_006acf90((int)*(short *)(local_16c + iVar14 * 4),
                                          (int)*(short *)(local_16c + iVar14 * 4 + 2),iVar5 + 1,
                                          iVar8 + 1), local_EAX_783 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar14 = iVar14 + 1;
                  } while (iVar14 < local_40);
                }
                iVar11 = local_40;
                iVar14 = local_144;
                pAVar16 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar5;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar8;
                  local_6c = local_6c + 1;
                  local_EAX_878 = Library::MSVCRT::FUN_0072e6c0();
                  thunk_FUN_006a0ae0(param_1,iVar5 * 100,iVar8 * 100,0,0x3ee,
                                     local_EAX_878 % DAT_007d9134);
                  *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3ee;
                  thunk_FUN_0069e4d0(param_1,(int)local_78,iVar5 * 100,iVar8 * 100,
                                     *(int *)param_1[2] << 1,((int *)param_1[2])[1] << 1);
                  local_40 = iVar11 + 1;
                  iVar14 = local_144;
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            pDVar3 = local_138;
          }
        }
      }
      iVar14 = 0;
      local_144 = 0;
      iVar8 = 0;
      local_ac = 0;
      uVar15 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar15 < pDVar3->count) {
            piVar4 = DArrayAt<int>(pDVar3, uVar15);
          }
          else {
            piVar4 = nullptr;
          }
          if ((piVar4 != nullptr) && (*piVar4 == 0xff)) {
            *(uint *)(local_74 + iVar14 * 4) = uVar15;
            *(undefined4 *)(local_70 + iVar14 * 4) = *(undefined4 *)(piVar4[3] + 0xc);
            iVar8 = iVar8 + *(int *)(piVar4[3] + 0xc);
            iVar14 = iVar14 + 1;
            pDVar3 = local_138;
            local_144 = iVar14;
            local_ac = iVar8;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_13c);
      }
      if ((0 < iVar14) && (0 < iVar8)) {
        local_140 = iVar14 / 2 + 1;
        local_134 = (iVar14 * 3) / 2 + 1;
        local_17c = 0;
        while ((0 < local_140 && (local_17c < local_134))) {
          iVar11 = 0;
          local_b4 = nullptr;
          local_28 = nullptr;
          local_EAX_1239 = Library::MSVCRT::FUN_0072e6c0();
          iVar5 = (int)local_EAX_1239 % local_ac;
          iVar14 = 0;
          iVar8 = 0;
          local_148 = iVar5;
          if (0 < local_144) {
            do {
              iVar14 = iVar14 + *(int *)(local_70 + iVar8 * 4);
              local_148 = iVar8;
              if (iVar5 < iVar14) break;
              iVar8 = iVar8 + 1;
              local_148 = iVar5;
            } while (iVar8 < local_144);
          }
          if (local_144 <= iVar8) {
            local_148 = local_144 + -1;
          }
          if (*(uint *)(local_74 + local_148 * 4) < local_138->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            local_30 = (AnonShape_0069CB50_B339E56A *)
                       (local_138->elementSize * *(uint *)(local_74 + local_148 * 4) +
                       (int)local_138->data);
          }
          else {
            local_30 = nullptr;
          }
          local_15c = local_148;
          if (local_30 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_164 = 0;
            puVar17 = (byte *)(local_c0);
            memset(puVar17, 0, local_d8); /* compiler bulk-zero initialization */
            local_e4 = 0;
            pDVar3 = local_30->field_000C;
            if (0 < (int)pDVar3->count) {
              bVar19 = pDVar3->count != 0;
              do {
                uVar15 = local_e4;
                if (bVar19) {
                  piVar4 = DArrayAt<int>(pDVar3, local_e4);
                }
                else {
                  piVar4 = nullptr;
                }
                iVar14 = thunk_FUN_00696310(param_1,*piVar4,*(int *)param_1[2] << 1,local_68,
                                            nullptr);
                iVar8 = 0;
                if (0 < iVar14) {
                  do {
                    if ((*(int *)((int)local_78 + local_68[iVar8] * 0xe + 2) == 0) &&
                       (*(char *)(iVar11 + (int)local_c0) == '\0')) {
                      *(short *)(local_16c + iVar11 * 4 + 2) =
                           (short)(local_68[iVar8] / (*(int *)param_1[2] << 1));
                      *(short *)(local_16c + iVar11 * 4) =
                           (short)(local_68[iVar8] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(local_68[iVar8] + (int)local_c0) = 1;
                      iVar11 = iVar11 + 1;
                      local_164 = iVar11;
                    }
                    iVar8 = iVar8 + 1;
                    uVar15 = local_e4;
                  } while (iVar8 < iVar14);
                }
                local_e4 = uVar15 + 1;
                pDVar3 = local_30->field_000C;
                bVar19 = local_e4 < pDVar3->count;
              } while ((int)local_e4 < (int)pDVar3->count);
            }
            local_b4 = Library::DKW::LIB::MemAlloc(iVar11 * 8);
            local_28 = Library::DKW::LIB::MemAlloc(iVar11 * 4);
            local_44 = 0;
            local_b8 = -1;
            local_24 = -1;
            local_d4 = 0;
            local_178 = 0;
            local_158 = 0;
            local_e4 = 0;
            if (0 < iVar11) {
LAB_0069d203:
              local_dc = local_24;
              if (local_24 < 0) {
                local_dc = (int)*(short *)(local_16c + local_178 * 4) +
                           (int)*(short *)(local_16c + local_178 * 4 + 2) * *(int *)param_1[2] * 2;
              }
              if ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                 (local_154 = 0, uVar15 = local_178, 0 < local_164)) {
                do {
                  uVar15 = uVar15 + 1;
                  if (local_164 <= (int)uVar15) {
                    uVar15 = 0;
                  }
                  local_dc = (int)*(short *)(local_16c + uVar15 * 4) +
                             (int)*(short *)(local_16c + uVar15 * 4 + 2) * *(int *)param_1[2] * 2;
                } while ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                        (local_154 = local_154 + 1, (int)local_154 < local_164));
              }
              iVar14 = local_dc;
              if (*(byte *)(local_dc + (int)local_c0) < 2) {
                iVar8 = thunk_FUN_00696310(param_1,local_dc,*(int *)param_1[2] << 1,local_68,
                                           &local_174);
                uVar15 = 0;
                local_bc = 0;
                local_38 = 0;
                if (local_174 == 8) {
                  bVar19 = false;
                  local_e8 = 0xffffffff;
                  if (0 < iVar8) {
                    do {
                      aiStack_130[uVar15] = 0;
                      aiStack_a8[uVar15] = 0;
                      iVar14 = local_68[uVar15];
                      if (*(int *)((int)local_78 + iVar14 * 0xe + 10) ==
                          *(int *)(local_74 + local_148 * 4)) {
                        aiStack_a8[uVar15] = iVar14 + 1;
                        local_38 = local_38 + 1;
                        if (!bVar19) {
                          bVar19 = true;
                        }
                      }
                      if (*(char *)(iVar14 + (int)local_c0) == '\x01') {
                        aiStack_130[uVar15] = iVar14 + 1;
                        local_bc = local_bc + 1;
                        if ((bVar19) && ((int)local_e8 < 0)) {
                          local_e8 = uVar15 - 1;
                        }
                      }
                      if (((uVar15 == iVar8 - 1U) && (bVar19)) && ((int)local_e8 < 0)) {
                        local_e8 = uVar15;
                      }
                      uVar15 = uVar15 + 1;
                      iVar14 = local_dc;
                    } while ((int)uVar15 < iVar8);
                  }
                  if (local_24 == -1) {
                    local_28[local_44] = local_178 & 0xffff;
                    local_158 = 1;
                  }
                  local_24 = -1;
                  if (-1 < (int)local_e8) {
                    local_b8 = -1;
                    if (local_38 == 1) {
                      iVar8 = aiStack_a8[local_e8];
                      goto LAB_0069d44d;
                    }
                    if (local_38 == 2) {
                      uVar15 = 0;
                      do {
                        uVar10 = uVar15 & 0x80000001;
                        bVar19 = uVar10 == 0;
                        if ((int)uVar10 < 0) {
                          bVar19 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if ((bVar19) && (aiStack_a8[uVar15] != 0)) goto LAB_0069d43d;
                        uVar15 = uVar15 + 1;
                      } while ((int)uVar15 < 8);
                    }
                    else if (local_38 == 3) {
                      iVar8 = 0;
                      uVar15 = 0;
                      do {
                        if (aiStack_a8[uVar15] != 0) {
                          if (iVar8 == 1) goto LAB_0069d43d;
                          iVar8 = iVar8 + 1;
                        }
                        uVar15 = uVar15 + 1;
                      } while ((int)uVar15 < 8);
                    }
                    goto LAB_0069d454;
                  }
                  goto LAB_0069d4ca;
                }
                local_b8 = -1;
                local_24 = -1;
                if (local_44 == 0) {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar14;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  *local_28 = 0x10000;
                  local_44 = 1;
                  local_158 = 0;
                  uVar15 = 1;
                }
                else {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar14;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  if (local_158 == 1) {
                    local_28[local_44] =
                         (local_178 + 1) * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
                    uVar15 = local_44 + 1;
                    local_158 = 0;
                    local_44 = uVar15;
                  }
                  else {
                    local_28[local_44] = (local_178 + 1) * 0x10000 | local_178 & 0xffff;
                    uVar15 = local_44 + 1;
                    local_44 = uVar15;
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
                  uVar15 = local_e4;
                  iVar8 = 0;
                  uVar10 = (uint)*(ushort *)(local_28 + local_e4);
                  uVar18 = (uint)local_28[local_e4] >> 0x10;
                  iVar14 = uVar18 - uVar10;
                  local_bc = 0;
                  local_c8 = 0;
                  local_34 = 0;
                  local_84 = 0;
                  local_e8 = uVar18;
                  if (iVar14 < 8) {
                    if (2 < iVar14) goto LAB_0069d684;
                    local_c8 = 1;
                  }
                  else {
                    uVar6 = Library::MSVCRT::FUN_0072e6c0();
                    iVar14 = ((int)uVar6 % 3) * 2 + 3;
LAB_0069d684:
                    local_34 = iVar14 / 2;
                    iVar8 = 1;
                    local_84 = 1;
                    local_d4 = 0;
                    local_bc = iVar14;
                  }
                  local_154 = uVar10;
                  if (uVar10 < uVar18) {
                    do {
                      if (iVar8 == 0) {
LAB_0069d7b2:
                        iVar14 = *(int *)((int)local_b4 + local_154 * 8);
                        iVar8 = *(int *)((int)local_b4 + local_154 * 8 + 4);
                        if (-1 < iVar14) {
                          iVar11 = iVar14 * 0xe;
                          iVar5 = *(int *)(iVar11 + 6 + (int)local_78);
                          if ((iVar5 < 0) || (iVar5 != 0x3ed)) {
                            iVar12 = *(int *)param_1[2] << 1;
                            iVar5 = (iVar14 / iVar12) * 100;
                            iVar13 = iVar5 + 0x32;
                            iVar14 = (iVar14 % iVar12) * 100;
                            iVar1 = iVar14 + 0x32;
                            if (iVar8 < 0) {
                              local_EAX_3595 = Library::MSVCRT::FUN_0072e6c0();
                              if ((int)local_EAX_3595 % 6 == 0) {
                                local_EAX_3612 = Library::MSVCRT::FUN_0072e6c0();
                                uVar15 = local_EAX_3612 % DAT_007d9564;
                                iVar14 = 0x3f0;
                                uVar20 = 0;
                                local_EAX_3633 = Library::MSVCRT::FUN_0072e6c0();
                                iVar13 = (int)local_EAX_3633 % 0x51 + -0x28 + iVar13;
                                local_EAX_3651 = Library::MSVCRT::FUN_0072e6c0();
                                thunk_FUN_006a0ae0(param_1,(int)local_EAX_3651 % 0x51 + -0x28 +
                                                           iVar1,iVar13,uVar20,iVar14,uVar15);
                                *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f0;
                              }
                              else {
                                local_EAX_3699 = Library::MSVCRT::FUN_0072e6c0();
                                if ((int)local_EAX_3699 % 9 == 0) {
                                  local_EAX_3716 = Library::MSVCRT::FUN_0072e6c0();
                                  uVar15 = local_EAX_3716 % DAT_007d977c;
                                  iVar14 = 0x3f1;
                                  uVar20 = 0;
                                  uVar9 = Library::MSVCRT::FUN_0072e6c0();
                                  iVar13 = (int)uVar9 % 0x51 + -0x28 + iVar13;
                                  local_EAX_3755 = Library::MSVCRT::FUN_0072e6c0();
                                  thunk_FUN_006a0ae0(param_1,(int)local_EAX_3755 % 0x51 + -0x28 +
                                                             iVar1,iVar13,uVar20,iVar14,uVar15);
                                  *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              local_150 = (iVar8 / iVar12) * 100 + 0x32;
                              local_cc = (iVar8 % iVar12) * 100 + 0x32;
                              iVar8 = local_150 - iVar13;
                              if ((iVar8 == 0) && (local_cc == iVar1)) {
                                local_EAX_3355 = Library::MSVCRT::FUN_0072e6c0();
                                iVar14 = iVar14 + 0x24 + (int)local_EAX_3355 % 0x1d;
                                local_EAX_3372 = Library::MSVCRT::FUN_0072e6c0();
                                iVar8 = iVar5 + 0x24 + (int)local_EAX_3372 % 0x1d;
                              }
                              else {
                                local_EAX_3391 = Library::MSVCRT::FUN_0072e6c0();
                                iVar14 = (local_cc - iVar1) / 2 + iVar1 + -0xe +
                                         (int)local_EAX_3391 % 0x1d;
                                local_EAX_3425 = Library::MSVCRT::FUN_0072e6c0();
                                iVar8 = iVar8 / 2 + iVar13 + -0xe + (int)local_EAX_3425 % 0x1d;
                              }
                              if (local_c8 == 1) {
                                local_EAX_3523 = Library::MSVCRT::FUN_0072e6c0();
                                uVar15 = (int)local_EAX_3523 % 7 + 9;
                              }
                              else if (local_c8 == 2) {
                                local_EAX_3501 = Library::MSVCRT::FUN_0072e6c0();
                                uVar15 = local_EAX_3501 & 0x80000003;
                                if ((int)uVar15 < 0) {
                                  uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (local_c8 == 3) {
                                local_EAX_3483 = Library::MSVCRT::FUN_0072e6c0();
                                uVar15 = (int)local_EAX_3483 % 5 + 4;
                              }
                              else {
                                local_EAX_3468 = Library::MSVCRT::FUN_0072e6c0();
                                uVar15 = local_EAX_3468 % DAT_007d8f1c;
                              }
                              if (local_84 != 0) {
                                local_d4 = local_d4 + 1;
                              }
                              thunk_FUN_006a0ae0(param_1,iVar14,iVar8,0,0x3ed,uVar15);
                              *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar8 == 2) {
                        if ((int)local_178 <= (int)local_154) {
                          local_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        local_EAX_2979 = Library::MSVCRT::FUN_0072e6c0();
                        if ((int)local_EAX_2979 % 3 != 0) {
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
                            local_EAX_3093 = Library::MSVCRT::FUN_0072e6c0();
                            local_178 = (int)local_EAX_3093 % 10 + 5 + local_154;
                            local_84 = 2;
                            local_EAX_3129 = Library::MSVCRT::FUN_0072e6c0();
                            local_bc = ((int)local_EAX_3129 % 3) * 2 + 3;
                            local_34 = local_bc / 2;
                            local_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      local_154 = local_154 + 1;
                      iVar8 = local_84;
                      uVar15 = local_e4;
                    } while ((int)local_154 < (int)local_e8);
                  }
                  local_e4 = uVar15 + 1;
                } while ((int)local_e4 < (int)local_44);
              }
              if (local_ac < 1) break;
            }
            iVar14 = *(int *)(local_70 + local_15c * 4);
            *(undefined4 *)(local_70 + local_15c * 4) = 0;
            local_17c = local_17c + 1;
            local_140 = local_140 + -1;
            local_ac = local_ac - iVar14;
            FreeAndNull(&local_b4);
            FreeAndNull(&local_28);
          }
        }
      }
      iVar14 = 0;
      local_144 = 0;
      iVar8 = 0;
      local_ac = 0;
      uVar15 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar15 < local_138->count) {
            piVar4 = DArrayAt<int>(local_138, uVar15);
          }
          else {
            piVar4 = nullptr;
          }
          if (((piVar4 != nullptr) && (0 < piVar4[2])) && (*piVar4 != 0xff)) {
            *(uint *)(local_74 + iVar14 * 4) = uVar15;
            *(int *)(local_70 + iVar14 * 4) = piVar4[2];
            iVar14 = iVar14 + 1;
            iVar8 = iVar8 + piVar4[2];
            local_144 = iVar14;
            local_ac = iVar8;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)local_13c);
      }
      if ((0 < iVar14) && (0 < iVar8)) {
        local_140 = STField<int>(param_1,0x5833) * 8;
        local_b0 = 0;
        local_170 = (STField<int>(param_1,0x5833) * 3) / 2;
        pDVar3 = local_138;
        while ((0 < local_140 && (local_b0 < local_170))) {
          local_EAX_4140 = Library::MSVCRT::FUN_0072e6c0();
          iVar13 = (int)local_EAX_4140 % iVar8;
          iVar5 = 0;
          iVar11 = 0;
          local_15c = iVar13;
          if (0 < iVar14) {
            do {
              iVar5 = iVar5 + *(int *)(local_70 + iVar11 * 4);
              local_15c = iVar11;
              pDVar3 = local_138;
              if (iVar13 < iVar5) break;
              iVar11 = iVar11 + 1;
              local_15c = iVar13;
            } while (iVar11 < iVar14);
          }
          if (iVar14 <= iVar11) {
            local_15c = iVar14 + -1;
          }
          if (*(uint *)(local_74 + local_15c * 4) < pDVar3->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar16 = (AnonShape_0069CB50_B339E56A *)
                      (pDVar3->elementSize * *(uint *)(local_74 + local_15c * 4) + (int)pDVar3->data
                      );
          }
          else {
            pAVar16 = nullptr;
          }
          local_30 = pAVar16;
          if (pAVar16 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar2 = pAVar16->field_000C->count;
              local_EAX_4255 = Library::MSVCRT::FUN_0072e6c0();
              uVar15 = (int)local_EAX_4255 % (int)dVar2;
              pDVar3 = pAVar16->field_000C;
              if (uVar15 < pDVar3->count) {
                piVar4 = DArrayAt<int>(pDVar3, uVar15);
              }
              else {
                piVar4 = nullptr;
              }
              local_dc = *piVar4;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 0xc) != 0)) {
                iVar14 = local_dc / (*(int *)param_1[2] << 1);
                iVar8 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar5 = 0;
                if (0 < local_40) {
                  do {
                    local_EAX_4407 =
                         FUN_006acf90((int)*(short *)(local_16c + iVar5 * 4),
                                      (int)*(short *)(local_16c + iVar5 * 4 + 2),iVar8,iVar14);
                    if ((local_EAX_4407 < 2) ||
                       (local_EAX_4442 =
                             FUN_006acf90((int)*(short *)(local_16c + iVar5 * 4),
                                          (int)*(short *)(local_16c + iVar5 * 4 + 2),iVar8 + 1,
                                          iVar14 + 1), local_EAX_4442 < 2)) {
                      local_c4 = 0;
                      break;
                    }
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < local_40);
                }
                pAVar16 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar8;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar14;
                  local_b0 = local_b0 + 1;
                  local_EAX_4534 = Library::MSVCRT::FUN_0072e6c0();
                  uVar15 = local_EAX_4534 & 0x80000001;
                  bVar19 = uVar15 == 0;
                  if ((int)uVar15 < 0) {
                    bVar19 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar19) {
                    local_EAX_4843 = Library::MSVCRT::FUN_0072e6c0();
                    thunk_FUN_006a0ae0(param_1,iVar8 * 100 + 0x32,iVar14 * 100 + 0x32,0,0x3f2,
                                       local_EAX_4843 % DAT_007d9994);
                    *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f2;
                  }
                  else {
                    local_EAX_4557 = Library::MSVCRT::FUN_0072e6c0();
                    uVar15 = local_EAX_4557 & 0x8000000f;
                    bVar19 = uVar15 == 0;
                    if ((int)uVar15 < 0) {
                      bVar19 = (uVar15 - 1 | 0xfffffff0) == 0xffffffff;
                    }
                    if (bVar19) {
                      local_EAX_4580 = Library::MSVCRT::FUN_0072e6c0();
                      uVar15 = local_EAX_4580 % DAT_007d977c;
                      if (((iVar8 < 1) || (*(int *)param_1[2] * 2 + -2 <= iVar8)) ||
                         ((iVar14 < 1 || (iVar14 <= ((int *)param_1[2])[1] * 2 + -2)))) {
                        iVar5 = 0x3f1;
                        uVar20 = 0;
                        iVar14 = iVar14 * 100;
                        iVar8 = iVar8 * 100;
                      }
                      else {
                        iVar5 = 0x3f1;
                        uVar20 = 0;
                        local_EAX_4639 = Library::MSVCRT::FUN_0072e6c0();
                        iVar14 = (int)local_EAX_4639 % 0x51 + -0x28 + iVar14 * 100;
                        local_EAX_4663 = Library::MSVCRT::FUN_0072e6c0();
                        iVar8 = (int)local_EAX_4663 % 0x51 + -0x28 + iVar8 * 100;
                      }
                      thunk_FUN_006a0ae0(param_1,iVar8,iVar14,uVar20,iVar5,uVar15);
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f1;
                    }
                    else {
                      local_EAX_4755 = Library::MSVCRT::FUN_0072e6c0();
                      thunk_FUN_006a0ae0(param_1,iVar8 * 100 + 0x32,iVar14 * 100 + 0x32,0,0x3e9,
                                         local_EAX_4755 % DAT_007d88d4);
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3e9;
                    }
                  }
                  iVar14 = local_40 + 1;
                  piVar4 = (int *)(local_70 + local_15c * 4);
                  *piVar4 = *piVar4 + -4;
                  local_40 = iVar14;
                  if (*piVar4 < 0) {
                    *(undefined4 *)(local_70 + local_15c * 4) = 0;
                  }
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            iVar14 = local_144;
            iVar8 = local_ac;
            pDVar3 = local_138;
          }
        }
      }
    }
  }
  pDVar3 = local_138;
  if (local_138 != nullptr) {
    uVar15 = 0;
    if (0 < (int)local_138->count) {
      bVar19 = local_138->count != 0;
      do {
        if (bVar19) {
          pvVar7 = DArrayAt<void>(pDVar3, uVar15);
        }
        else {
          pvVar7 = nullptr;
        }
        if ((pvVar7 != nullptr) && (STField<DArrayTy *>(pvVar7,0xc) != nullptr)) {
          DArrayDestroy(STField<DArrayTy *>(pvVar7,0xc));
        }
        uVar15 = uVar15 + 1;
        bVar19 = uVar15 < pDVar3->count;
      } while ((int)uVar15 < (int)pDVar3->count);
    }
    DArrayDestroy(pDVar3);
  }
  FreeAndNull(&local_78);
  FreeAndNull(&local_c0);
  thunk_FUN_006a0c00(param_1);
  ExceptionList = local_14;
  return local_13c;
LAB_0069d43d:
  iVar8 = aiStack_a8[uVar15];
LAB_0069d44d:
  local_b8 = iVar8 + -1;
LAB_0069d454:
  if (local_b8 < 0) {
    local_b8 = aiStack_a8[local_e8] + -1;
  }
  iVar8 = local_e8 + 3;
  if (7 < iVar8) {
    iVar8 = local_e8 - 5;
  }
  iVar5 = thunk_FUN_00696310(param_1,local_68[local_e8],*(int *)param_1[2] << 1,local_10c,nullptr
                            );
  if (iVar5 == 8) {
    iVar5 = 0;
    do {
      if ((*(char *)(local_10c[iVar8] + (int)local_c0) == '\x01') && (local_10c[iVar8] != iVar14)) {
        local_24 = local_10c[iVar8];
        break;
      }
      iVar11 = iVar8 + -1;
      if (iVar11 < 0) {
        iVar11 = iVar8 + 7;
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar11;
    } while (iVar5 < 8);
  }
LAB_0069d4ca:
  if (local_24 == -1) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar14;
    *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
    *(char *)(iVar14 + (int)local_c0) = (char)local_44 + '\x02';
    local_178 = local_178 + 1;
    if (local_158 != 0) {
      local_28[local_44] = local_178 * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
      local_158 = 0;
      local_44 = local_44 + 1;
    }
  }
  else if (-1 < local_b8) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar14;
    *(int *)((int)local_b4 + local_178 * 8 + 4) = local_b8;
    uVar15 = local_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar14 + (int)local_c0) = (char)uVar15 + '\x02';
    local_178 = local_178 + 1;
  }
  if ((0xfc < (int)local_44) || (local_e4 = local_e4 + 1, local_164 <= (int)local_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

