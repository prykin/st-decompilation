#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=234; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __fastcall CGenerate::sub_0069CB50(int *param_1)

{
  int iVar1;
  uint uVar2;
  dword dVar3;
  byte *puVar4;
  uint *puVar5_mg0;
  int *piVar5;
  uint local_EAX_492;
  int iVar6;
  uint local_EAX_596;
  int iVar10;
  int local_EAX_783;
  uint local_EAX_878;
  uint local_EAX_1239;
  byte *puVar7;
  uint uVar8;
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
  int iVar9;
  uint uVar10;
  int iVar11;
  DArrayTy *pDVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  AnonShape_0069CB50_B339E56A *pAVar20;
  uint uVar21;
  bool bVar22;
  int aiStackY_1b0 [4];
  undefined4 uStackY_1a0;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  byte *local_16c;
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
  void *local_b4;
  int local_b0;
  int local_ac;
  int aiStack_a8 [9];
  int local_84;
  int local_7c;
  void *local_78;
  byte *local_74;
  byte *local_70;
  int local_6c;
  int local_68 [9];
  uint local_44;
  int local_40;
  int local_38;
  int local_34;
  AnonShape_0069CB50_B339E56A *local_30;
  undefined4 *local_28;
  int local_24;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d818;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe68;
  iVar17 = 0;
  local_13c = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  thunk_FUN_006a0a70(param_1);
  iVar9 = *(int *)param_1[2] << 1;
  STField<int>(param_1,0x5833) = iVar9;
  STField<int>(param_1,0x5837) = ((int *)param_1[2])[1] << 1;
  uStackY_1a0 = 0x69cbb3;
  /* ST_CALLSITE[0069CBAE]: CALL 0x0040564b; direct=0040564B CGenerate::sub_006948E0 */
  sub_006948E0((CGenerate *)param_1,iVar9);
  iVar19 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uStackY_1a0 = 0x69cbd6;
  local_d8 = iVar19 * 4;
  local_78 = Library::DKW::LIB::MemAlloc(iVar19 * 0x38);
  uStackY_1a0 = 0x69cbdf;
  local_c0 = Library::DKW::LIB::MemAlloc(iVar19 * 4);
  iVar9 = iVar19 * -0x10;
  local_16c = &stack0xfffffe68 + iVar9;
  *(undefined4 *)(&stack0xfffffe64 + iVar9) = 0x69cc0e;
  local_74 = &stack0xfffffe68 + iVar19 * -0x20;
  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x20) = 0x69cc22;
  local_1c = &stack0xfffffe68 + iVar19 * -0x30;
  local_70 = &stack0xfffffe68 + iVar19 * -0x30;
  local_8 = 0xffffffff;
  piVar5 = (int *)param_1[2];
  *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = piVar5[1] << 1;
  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
  aiStackY_1b0[iVar19 * -0xc + 3] = (int)local_78;
  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69cc4a;
  thunk_FUN_0069c360(param_1,aiStackY_1b0[iVar19 * -0xc + 3],(int *)aiStackY_1b0[iVar19 * -0xc + 4],
                     *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
  piVar5 = (int *)param_1[2];
  *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = piVar5[1] << 1;
  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
  aiStackY_1b0[iVar19 * -0xc + 3] = (int)local_78;
  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69cc63;
  puVar5_mg0 = thunk_FUN_0069c8b0(aiStackY_1b0[iVar19 * -0xc + 3],aiStackY_1b0[iVar19 * -0xc + 4],
                                  *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
  local_138 = puVar5_mg0;
  if (puVar5_mg0 == nullptr) {
    *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69ded7;
    uVar14 = Library::MSVCRT::FUN_0072e6c0();
    *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = uVar14 % DAT_007d88d4;
    aiStackY_1b0[iVar19 * -0xc + 4] = 0x3e9;
    aiStackY_1b0[iVar19 * -0xc + 3] = 0;
    aiStackY_1b0[iVar19 * -0xc + 2] = 100;
    aiStackY_1b0[iVar19 * -0xc + 1] = 100;
    aiStackY_1b0[iVar19 * -0xc] = 0x69def1;
    thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],aiStackY_1b0[iVar19 * -0xc + 2],
                       aiStackY_1b0[iVar19 * -0xc + 3],aiStackY_1b0[iVar19 * -0xc + 4],
                       *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
  }
  else {
    uVar16 = puVar5_mg0[3];
    local_13c = uVar16;
    if (0 < (int)uVar16) {
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar10 = 0;
      if (0 < (int)uVar16) {
        do {
          if (uVar10 < puVar5_mg0[3]) {
            piVar5 = (int *)(puVar5_mg0[2] * uVar10 + puVar5_mg0[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if (((piVar5 != nullptr) && (*piVar5 == 0)) && (0 < piVar5[1])) {
            *(uint *)(local_74 + iVar17 * 4) = uVar10;
            *(int *)(local_70 + iVar17 * 4) = piVar5[1];
            iVar17 = iVar17 + 1;
            iVar14 = local_ac + piVar5[1];
            local_144 = iVar17;
            local_ac = iVar14;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar16);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        iVar14 = STField<int>(param_1,0x5833);
        local_140 = iVar14 * 8;
        local_6c = 0;
        local_7c = STSignedDiv4(iVar14);
        while ((0 < local_140 && (local_6c < local_7c))) {
          *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69cd41;
          local_EAX_492 = Library::MSVCRT::FUN_0072e6c0();
          iVar15 = (int)local_EAX_492 % local_ac;
          iVar6 = 0;
          iVar11 = 0;
          iVar14 = iVar15;
          if (0 < iVar17) {
            do {
              iVar6 = iVar6 + *(int *)(local_70 + iVar11 * 4);
              iVar14 = iVar11;
              if (iVar15 < iVar6) break;
              iVar11 = iVar11 + 1;
              iVar14 = iVar15;
            } while (iVar11 < iVar17);
          }
          if (iVar17 <= iVar11) {
            iVar14 = iVar17 + -1;
          }
          if (*(uint *)(local_74 + iVar14 * 4) < puVar5_mg0[3]) {
            pAVar20 = (AnonShape_0069CB50_B339E56A *)
                      (puVar5_mg0[2] * *(uint *)(local_74 + iVar14 * 4) + puVar5_mg0[7]);
          }
          else {
            pAVar20 = nullptr;
          }
          local_30 = pAVar20;
          if (pAVar20 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar3 = pAVar20->field_000C->count;
              *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69cda9;
              local_EAX_596 = Library::MSVCRT::FUN_0072e6c0();
              uVar16 = (int)local_EAX_596 % (int)dVar3;
              pDVar12 = pAVar20->field_000C;
              if (uVar16 < pDVar12->count) {
                piVar5 = DArrayAt<int>(pDVar12, uVar16);
              }
              else {
                piVar5 = nullptr;
              }
              local_dc = *piVar5;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 4) != 0)) {
                iVar14 = local_dc / (*(int *)param_1[2] << 1);
                iVar6 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar17 = 0;
                if (0 < local_40) {
                  do {
                    *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = iVar14;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar6;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar17 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar17 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69ce41;
                    iVar10 = FUN_006acf90(aiStackY_1b0[iVar19 * -0xc + 2],
                                          aiStackY_1b0[iVar19 * -0xc + 3],
                                          aiStackY_1b0[iVar19 * -0xc + 4],
                                          *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
                    if (iVar10 < 2) {
LAB_0069ce71:
                      local_c4 = 0;
                      break;
                    }
                    *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = iVar14 + 1;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar6 + 1;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar17 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar17 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69ce64;
                    local_EAX_783 =
                         FUN_006acf90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
                    if (local_EAX_783 < 2) goto LAB_0069ce71;
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < local_40);
                }
                iVar11 = local_40;
                iVar17 = local_144;
                pAVar20 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar6;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar14;
                  local_6c = local_6c + 1;
                  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69cec3;
                  local_EAX_878 = Library::MSVCRT::FUN_0072e6c0();
                  *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = local_EAX_878 % DAT_007d9134;
                  aiStackY_1b0[iVar19 * -0xc + 4] = 0x3ee;
                  aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                  aiStackY_1b0[iVar19 * -0xc + 2] = iVar14 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 1] = iVar6 * 100;
                  aiStackY_1b0[iVar19 * -0xc] = 0x69cefa;
                  thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                     aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                                     ,aiStackY_1b0[iVar19 * -0xc + 4],
                                     *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                  *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3ee;
                  piVar5 = (int *)param_1[2];
                  *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = piVar5[1] << 1;
                  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
                  aiStackY_1b0[iVar19 * -0xc + 3] = iVar14 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 2] = iVar6 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 1] = (int)local_78;
                  aiStackY_1b0[iVar19 * -0xc] = 0x69cf35;
                  thunk_FUN_0069e4d0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                     aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                                     ,aiStackY_1b0[iVar19 * -0xc + 4],
                                     *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
                  local_40 = iVar11 + 1;
                  iVar17 = local_144;
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            puVar5_mg0 = local_138;
          }
        }
      }
      iVar17 = 0;
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar16 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar16 < puVar5_mg0[3]) {
            piVar5 = (int *)(puVar5_mg0[2] * uVar16 + puVar5_mg0[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if ((piVar5 != nullptr) && (*piVar5 == 0xff)) {
            *(uint *)(local_74 + iVar17 * 4) = uVar16;
            *(undefined4 *)(local_70 + iVar17 * 4) = *(undefined4 *)(piVar5[3] + 0xc);
            iVar14 = iVar14 + *(int *)(piVar5[3] + 0xc);
            iVar17 = iVar17 + 1;
            puVar5_mg0 = local_138;
            local_144 = iVar17;
            local_ac = iVar14;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_13c);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        local_140 = iVar17 / 2 + 1;
        local_134 = (iVar17 * 3) / 2 + 1;
        local_17c = 0;
        while ((0 < local_140 && (local_17c < local_134))) {
          iVar6 = 0;
          local_b4 = nullptr;
          local_28 = nullptr;
          *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d02c;
          local_EAX_1239 = Library::MSVCRT::FUN_0072e6c0();
          local_148 = (int)local_EAX_1239 % local_ac;
          iVar17 = 0;
          iVar14 = 0;
          if (0 < local_144) {
            do {
              iVar17 = iVar17 + *(int *)(local_70 + iVar14 * 4);
              if ((int)local_EAX_1239 % local_ac < iVar17) {
                local_148 = iVar14;
                break;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < local_144);
          }
          if (local_144 <= iVar14) {
            local_148 = local_144 + -1;
          }
          local_15c = local_148;
          if (*(uint *)(local_74 + local_148 * 4) < local_138[3]) {
            local_30 = (AnonShape_0069CB50_B339E56A *)
                       (local_138[2] * *(uint *)(local_74 + local_148 * 4) + local_138[7]);
          }
          else {
            local_30 = nullptr;
          }
          if (local_30 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_164 = 0;
            puVar7 = (byte *)(local_c0);
            memset(puVar7, 0, local_d8); /* compiler bulk-zero initialization */
            local_e4 = 0;
            pDVar12 = local_30->field_000C;
            if (0 < (int)pDVar12->count) {
              bVar22 = pDVar12->count != 0;
              do {
                uVar16 = local_e4;
                if (bVar22) {
                  puVar7 = DArrayAt<byte>(pDVar12, local_e4);
                }
                else {
                  puVar7 = nullptr;
                }
                uVar2 = *puVar7;
                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0;
                aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_68;
                aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
                aiStackY_1b0[iVar19 * -0xc + 2] = uVar2;
                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d10d;
                iVar17 = thunk_FUN_00696310(param_1,aiStackY_1b0[iVar19 * -0xc + 2],
                                            aiStackY_1b0[iVar19 * -0xc + 3],
                                            (int *)aiStackY_1b0[iVar19 * -0xc + 4],
                                            *(int **)(&stack0xfffffe64 + iVar19 * -0x30));
                iVar14 = 0;
                if (0 < iVar17) {
                  do {
                    if ((*(int *)((int)local_78 + local_68[iVar14] * 0xe + 2) == 0) &&
                       (*(char *)(iVar6 + (int)local_c0) == '\0')) {
                      *(short *)(local_16c + iVar6 * 4 + 2) =
                           (short)(local_68[iVar14] / (*(int *)param_1[2] << 1));
                      *(short *)(local_16c + iVar6 * 4) =
                           (short)(local_68[iVar14] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(local_68[iVar14] + (int)local_c0) = 1;
                      iVar6 = iVar6 + 1;
                      local_164 = iVar6;
                    }
                    iVar14 = iVar14 + 1;
                    uVar16 = local_e4;
                  } while (iVar14 < iVar17);
                }
                local_e4 = uVar16 + 1;
                pDVar12 = local_30->field_000C;
                bVar22 = local_e4 < pDVar12->count;
              } while ((int)local_e4 < (int)pDVar12->count);
            }
            *(int *)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = iVar6 * 8;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69d1b2;
            local_b4 = Library::DKW::LIB::MemAlloc
                                 (*(uint *)(&stack0xfffffe64 +
                                           iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
            *(int *)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = iVar6 * 4;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69d1c5;
            local_28 = Library::DKW::LIB::MemAlloc
                                 (*(uint *)(&stack0xfffffe64 +
                                           iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
            local_44 = 0;
            local_b8 = -1;
            local_24 = -1;
            local_d4 = 0;
            local_178 = 0;
            local_158 = 0;
            local_e4 = 0;
            if (0 < iVar6) {
LAB_0069d203:
              if (local_24 < 0) {
                local_dc = (int)*(short *)(local_16c + local_178 * 4) +
                           (int)*(short *)(local_16c + local_178 * 4 + 2) * *(int *)param_1[2] * 2;
              }
              else {
                local_dc = local_24;
              }
              if ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                 (local_154 = 0, uVar16 = local_178, 0 < local_164)) {
                do {
                  uVar16 = uVar16 + 1;
                  if (local_164 <= (int)uVar16) {
                    uVar16 = 0;
                  }
                  local_dc = (int)*(short *)(local_16c + uVar16 * 4) +
                             (int)*(short *)(local_16c + uVar16 * 4 + 2) * *(int *)param_1[2] * 2;
                } while ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                        (local_154 = local_154 + 1, (int)local_154 < local_164));
              }
              iVar17 = local_dc;
              if (*(byte *)(local_dc + (int)local_c0) < 2) {
                *(int **)(&stack0xfffffe64 + iVar19 * -0x30) = &local_174;
                aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_68;
                aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
                aiStackY_1b0[iVar19 * -0xc + 2] = iVar17;
                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d2d2;
                iVar14 = thunk_FUN_00696310(param_1,aiStackY_1b0[iVar19 * -0xc + 2],
                                            aiStackY_1b0[iVar19 * -0xc + 3],
                                            (int *)aiStackY_1b0[iVar19 * -0xc + 4],
                                            *(int **)(&stack0xfffffe64 + iVar19 * -0x30));
                uVar16 = 0;
                local_bc = 0;
                local_38 = 0;
                if (local_174 == 8) {
                  bVar22 = false;
                  local_e8 = 0xffffffff;
                  if (0 < iVar14) {
                    do {
                      aiStack_130[uVar16] = 0;
                      aiStack_a8[uVar16] = 0;
                      iVar17 = local_68[uVar16];
                      if (*(int *)((int)local_78 + iVar17 * 0xe + 10) ==
                          *(int *)(local_74 + local_148 * 4)) {
                        aiStack_a8[uVar16] = iVar17 + 1;
                        local_38 = local_38 + 1;
                        if (!bVar22) {
                          bVar22 = true;
                        }
                      }
                      if (*(char *)(iVar17 + (int)local_c0) == '\x01') {
                        aiStack_130[uVar16] = iVar17 + 1;
                        local_bc = local_bc + 1;
                        if ((bVar22) && ((int)local_e8 < 0)) {
                          local_e8 = uVar16 - 1;
                        }
                      }
                      if (((uVar16 == iVar14 - 1U) && (bVar22)) && ((int)local_e8 < 0)) {
                        local_e8 = uVar16;
                      }
                      uVar16 = uVar16 + 1;
                      iVar17 = local_dc;
                    } while ((int)uVar16 < iVar14);
                  }
                  uVar16 = local_e8;
                  if (local_24 == -1) {
                    local_28[local_44] = local_178 & 0xffff;
                    local_158 = 1;
                  }
                  local_24 = -1;
                  if (-1 < (int)local_e8) {
                    local_b8 = -1;
                    if (local_38 == 1) {
                      iVar14 = aiStack_a8[local_e8];
                      goto LAB_0069d44d;
                    }
                    if (local_38 == 2) {
                      uVar10 = 0;
                      do {
                        uVar21 = uVar10 & 0x80000001;
                        bVar22 = uVar21 == 0;
                        if ((int)uVar21 < 0) {
                          bVar22 = (uVar21 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if ((bVar22) && (aiStack_a8[uVar10] != 0)) goto LAB_0069d43d;
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < 8);
                    }
                    else if (local_38 == 3) {
                      iVar14 = 0;
                      uVar10 = 0;
                      do {
                        if (aiStack_a8[uVar10] != 0) {
                          if (iVar14 == 1) goto LAB_0069d43d;
                          iVar14 = iVar14 + 1;
                        }
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < 8);
                    }
                    goto LAB_0069d454;
                  }
                  goto LAB_0069d4ca;
                }
                local_b8 = -1;
                local_24 = -1;
                if (local_44 == 0) {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar17;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  *local_28 = 0x10000;
                  local_44 = 1;
                  local_158 = 0;
                  uVar16 = 1;
                }
                else {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar17;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  if (local_158 == 1) {
                    local_28[local_44] =
                         (local_178 + 1) * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
                    uVar16 = local_44 + 1;
                    local_44 = uVar16;
                    local_158 = 0;
                  }
                  else {
                    local_28[local_44] = (local_178 + 1) * 0x10000 | local_178 & 0xffff;
                    uVar16 = local_44 + 1;
                    local_44 = uVar16;
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
                  uVar16 = local_e4;
                  iVar14 = 0;
                  uVar10 = (uint)*(ushort *)(local_28 + local_e4);
                  uVar21 = (uint)local_28[local_e4] >> 0x10;
                  local_e8 = uVar21;
                  iVar17 = uVar21 - uVar10;
                  local_bc = 0;
                  local_c8 = 0;
                  local_34 = 0;
                  local_84 = 0;
                  if (iVar17 < 8) {
                    if (2 < iVar17) goto LAB_0069d684;
                    local_c8 = 1;
                  }
                  else {
                    *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d678;
                    uVar8 = Library::MSVCRT::FUN_0072e6c0();
                    iVar17 = ((int)uVar8 % 3) * 2 + 3;
LAB_0069d684:
                    local_bc = iVar17;
                    local_34 = iVar17 / 2;
                    iVar14 = 1;
                    local_84 = 1;
                    local_d4 = 0;
                  }
                  local_154 = uVar10;
                  if (uVar10 < uVar21) {
                    do {
                      if (iVar14 == 0) {
LAB_0069d7b2:
                        iVar17 = *(int *)((int)local_b4 + local_154 * 8);
                        iVar14 = *(int *)((int)local_b4 + local_154 * 8 + 4);
                        if (-1 < iVar17) {
                          iVar11 = iVar17 * 0xe;
                          iVar6 = *(int *)(iVar11 + 6 + (int)local_78);
                          if ((iVar6 < 0) || (iVar6 != 0x3ed)) {
                            iVar13 = *(int *)param_1[2] << 1;
                            iVar6 = (iVar17 / iVar13) * 100;
                            iVar15 = iVar6 + 0x32;
                            iVar17 = (iVar17 % iVar13) * 100;
                            iVar1 = iVar17 + 0x32;
                            if (iVar14 < 0) {
                              *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d960;
                              local_EAX_3595 = Library::MSVCRT::FUN_0072e6c0();
                              if ((int)local_EAX_3595 % 6 == 0) {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d971;
                                local_EAX_3612 = Library::MSVCRT::FUN_0072e6c0();
                                *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) =
                                     local_EAX_3612 % DAT_007d9564;
                                aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f0;
                                aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                                aiStackY_1b0[iVar19 * -0xc + 2] = 0x69d986;
                                local_EAX_3633 = Library::MSVCRT::FUN_0072e6c0();
                                aiStackY_1b0[iVar19 * -0xc + 2] =
                                     (int)local_EAX_3633 % 0x51 + -0x28 + iVar15;
                                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d998;
                                local_EAX_3651 = Library::MSVCRT::FUN_0072e6c0();
                                aiStackY_1b0[iVar19 * -0xc + 1] =
                                     (int)local_EAX_3651 % 0x51 + -0x28 + iVar1;
                                aiStackY_1b0[iVar19 * -0xc] = 0x69d9b0;
                                thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                   aiStackY_1b0[iVar19 * -0xc + 2],
                                                   aiStackY_1b0[iVar19 * -0xc + 3],
                                                   aiStackY_1b0[iVar19 * -0xc + 4],
                                                   *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                                *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f0;
                              }
                              else {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d9c8;
                                local_EAX_3699 = Library::MSVCRT::FUN_0072e6c0();
                                if ((int)local_EAX_3699 % 9 == 0) {
                                  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d9d9;
                                  local_EAX_3716 = Library::MSVCRT::FUN_0072e6c0();
                                  *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) =
                                       local_EAX_3716 % DAT_007d977c;
                                  aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                                  aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                                  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69d9ee;
                                  uVar9 = Library::MSVCRT::FUN_0072e6c0();
                                  aiStackY_1b0[iVar19 * -0xc + 2] =
                                       (int)uVar9 % 0x51 + -0x28 + iVar15;
                                  aiStackY_1b0[iVar19 * -0xc + 1] = 0x69da00;
                                  local_EAX_3755 = Library::MSVCRT::FUN_0072e6c0();
                                  aiStackY_1b0[iVar19 * -0xc + 1] =
                                       (int)local_EAX_3755 % 0x51 + -0x28 + iVar1;
                                  aiStackY_1b0[iVar19 * -0xc] = 0x69da18;
                                  thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                     aiStackY_1b0[iVar19 * -0xc + 2],
                                                     aiStackY_1b0[iVar19 * -0xc + 3],
                                                     aiStackY_1b0[iVar19 * -0xc + 4],
                                                     *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                                  *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              local_150 = (iVar14 / iVar13) * 100 + 0x32;
                              local_cc = (iVar14 % iVar13) * 100 + 0x32;
                              iVar14 = local_150 - iVar15;
                              if ((iVar14 == 0) && (local_cc == iVar1)) {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d870;
                                local_EAX_3355 = Library::MSVCRT::FUN_0072e6c0();
                                iVar17 = iVar17 + 0x24 + (int)local_EAX_3355 % 0x1d;
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d881;
                                local_EAX_3372 = Library::MSVCRT::FUN_0072e6c0();
                                iVar14 = iVar6 + 0x24 + (int)local_EAX_3372 % 0x1d;
                              }
                              else {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d894;
                                local_EAX_3391 = Library::MSVCRT::FUN_0072e6c0();
                                iVar17 = (local_cc - iVar1) / 2 + iVar1 + -0xe +
                                         (int)local_EAX_3391 % 0x1d;
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d8b6;
                                local_EAX_3425 = Library::MSVCRT::FUN_0072e6c0();
                                iVar14 = iVar14 / 2 + iVar15 + -0xe + (int)local_EAX_3425 % 0x1d;
                              }
                              if (local_c8 == 1) {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d918;
                                local_EAX_3523 = Library::MSVCRT::FUN_0072e6c0();
                                uVar16 = (int)local_EAX_3523 % 7 + 9;
                              }
                              else if (local_c8 == 2) {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d902;
                                local_EAX_3501 = Library::MSVCRT::FUN_0072e6c0();
                                uVar16 = local_EAX_3501 & 0x80000003;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (local_c8 == 3) {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d8f0;
                                local_EAX_3483 = Library::MSVCRT::FUN_0072e6c0();
                                uVar16 = (int)local_EAX_3483 % 5 + 4;
                              }
                              else {
                                *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d8e1;
                                local_EAX_3468 = Library::MSVCRT::FUN_0072e6c0();
                                uVar16 = local_EAX_3468 % DAT_007d8f1c;
                              }
                              if (local_84 != 0) {
                                local_d4 = local_d4 + 1;
                              }
                              *(uint *)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198)
                                   = uVar16;
                              aiStackY_1b0[iVar19 * -0xc + 4] = 0x3ed;
                              aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                              aiStackY_1b0[iVar19 * -0xc + 2] = iVar14;
                              aiStackY_1b0[iVar19 * -0xc + 1] = iVar17;
                              aiStackY_1b0[iVar19 * -0xc] = 0x69d945;
                              thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                 aiStackY_1b0[iVar19 * -0xc + 2],
                                                 aiStackY_1b0[iVar19 * -0xc + 3],
                                                 aiStackY_1b0[iVar19 * -0xc + 4],
                                                 *(uint *)(&stack0xfffffe64 +
                                                          iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
                              *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar14 == 2) {
                        if ((int)local_178 <= (int)local_154) {
                          local_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d6f8;
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
                            *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d76a;
                            local_EAX_3093 = Library::MSVCRT::FUN_0072e6c0();
                            local_178 = (int)local_EAX_3093 % 10 + 5 + local_154;
                            local_84 = 2;
                            *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69d78e;
                            local_EAX_3129 = Library::MSVCRT::FUN_0072e6c0();
                            local_bc = ((int)local_EAX_3129 % 3) * 2 + 3;
                            local_34 = local_bc / 2;
                            local_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      local_154 = local_154 + 1;
                      iVar14 = local_84;
                      uVar16 = local_e4;
                    } while ((int)local_154 < (int)local_e8);
                  }
                  local_e4 = uVar16 + 1;
                } while ((int)(uVar16 + 1) < (int)local_44);
              }
              if (local_ac < 1) break;
            }
            local_ac = local_ac - *(int *)(local_70 + local_15c * 4);
            *(undefined4 *)(local_70 + local_15c * 4) = 0;
            local_17c = local_17c + 1;
            local_140 = local_140 + -1;
            *(void ***)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_b4;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69da93;
            FreeAndNull(*(void **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
            *(undefined4 ***)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) =
                 &local_28;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69da9c;
            FreeAndNull(*(void **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
          }
        }
      }
      iVar17 = 0;
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar16 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar16 < local_138[3]) {
            piVar5 = (int *)(local_138[2] * uVar16 + local_138[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if (((piVar5 != nullptr) && (0 < piVar5[2])) && (*piVar5 != 0xff)) {
            *(uint *)(local_74 + iVar17 * 4) = uVar16;
            *(int *)(local_70 + iVar17 * 4) = piVar5[2];
            iVar17 = iVar17 + 1;
            local_144 = iVar17;
            iVar14 = iVar14 + piVar5[2];
            local_ac = iVar14;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_13c);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        local_140 = STField<int>(param_1,0x5833) * 8;
        local_b0 = 0;
        local_170 = (STField<int>(param_1,0x5833) * 3) / 2;
        puVar18 = local_138;
        while ((0 < local_140 && (local_b0 < local_170))) {
          *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69db81;
          local_EAX_4140 = Library::MSVCRT::FUN_0072e6c0();
          iVar15 = (int)local_EAX_4140 % iVar14;
          iVar6 = 0;
          iVar11 = 0;
          local_15c = iVar15;
          if (0 < iVar17) {
            do {
              iVar6 = iVar6 + *(int *)(local_70 + iVar11 * 4);
              local_15c = iVar11;
              puVar18 = local_138;
              if (iVar15 < iVar6) break;
              iVar11 = iVar11 + 1;
              local_15c = iVar15;
            } while (iVar11 < iVar17);
          }
          if (iVar17 <= iVar11) {
            local_15c = iVar17 + -1;
          }
          if (*(uint *)(local_74 + local_15c * 4) < puVar18[3]) {
            pAVar20 = (AnonShape_0069CB50_B339E56A *)
                      (puVar18[2] * *(uint *)(local_74 + local_15c * 4) + puVar18[7]);
          }
          else {
            pAVar20 = nullptr;
          }
          local_30 = pAVar20;
          if (pAVar20 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar3 = pAVar20->field_000C->count;
              *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69dbf4;
              local_EAX_4255 = Library::MSVCRT::FUN_0072e6c0();
              uVar16 = (int)local_EAX_4255 % (int)dVar3;
              pDVar12 = pAVar20->field_000C;
              if (uVar16 < pDVar12->count) {
                piVar5 = DArrayAt<int>(pDVar12, uVar16);
              }
              else {
                piVar5 = nullptr;
              }
              local_dc = *piVar5;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 0xc) != 0)) {
                iVar17 = local_dc / (*(int *)param_1[2] << 1);
                iVar14 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar6 = 0;
                if (0 < local_40) {
                  do {
                    *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = iVar17;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar14;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar6 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar6 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dc8c;
                    local_EAX_4407 =
                         FUN_006acf90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
                    if (local_EAX_4407 < 2) {
LAB_0069dcbc:
                      local_c4 = 0;
                      break;
                    }
                    *(int *)(&stack0xfffffe64 + iVar19 * -0x30) = iVar17 + 1;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar14 + 1;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar6 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar6 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dcaf;
                    local_EAX_4442 =
                         FUN_006acf90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)(&stack0xfffffe64 + iVar19 * -0x30));
                    if (local_EAX_4442 < 2) goto LAB_0069dcbc;
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < local_40);
                }
                pAVar20 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar14;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar17;
                  local_b0 = local_b0 + 1;
                  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69dd0b;
                  local_EAX_4534 = Library::MSVCRT::FUN_0072e6c0();
                  uVar16 = local_EAX_4534 & 0x80000001;
                  bVar22 = uVar16 == 0;
                  if ((int)uVar16 < 0) {
                    bVar22 = (uVar16 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar22) {
                    *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69de40;
                    local_EAX_4843 = Library::MSVCRT::FUN_0072e6c0();
                    *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = local_EAX_4843 % DAT_007d9994;
                    aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f2;
                    aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                    aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100 + 0x32;
                    aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100 + 0x32;
                    aiStackY_1b0[iVar19 * -0xc] = 0x69de77;
                    thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                       aiStackY_1b0[iVar19 * -0xc + 2],
                                       aiStackY_1b0[iVar19 * -0xc + 3],
                                       aiStackY_1b0[iVar19 * -0xc + 4],
                                       *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                    *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f2;
                  }
                  else {
                    *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69dd22;
                    local_EAX_4557 = Library::MSVCRT::FUN_0072e6c0();
                    uVar16 = local_EAX_4557 & 0x8000000f;
                    bVar22 = uVar16 == 0;
                    if ((int)uVar16 < 0) {
                      bVar22 = (uVar16 - 1 | 0xfffffff0) == 0xffffffff;
                    }
                    if (bVar22) {
                      *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69dd39;
                      local_EAX_4580 = Library::MSVCRT::FUN_0072e6c0();
                      if (((iVar14 < 1) || (*(int *)param_1[2] * 2 + -2 <= iVar14)) ||
                         ((iVar17 < 1 || (iVar17 <= ((int *)param_1[2])[1] * 2 + -2)))) {
                        *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = local_EAX_4580 % DAT_007d977c
                        ;
                        aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                        aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                        aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100;
                        aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100;
                      }
                      else {
                        *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = local_EAX_4580 % DAT_007d977c
                        ;
                        aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                        aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                        aiStackY_1b0[iVar19 * -0xc + 2] = 0x69dd74;
                        local_EAX_4639 = Library::MSVCRT::FUN_0072e6c0();
                        aiStackY_1b0[iVar19 * -0xc + 2] =
                             (int)local_EAX_4639 % 0x51 + -0x28 + iVar17 * 100;
                        aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dd8c;
                        local_EAX_4663 = Library::MSVCRT::FUN_0072e6c0();
                        aiStackY_1b0[iVar19 * -0xc + 1] =
                             (int)local_EAX_4663 % 0x51 + -0x28 + iVar14 * 100;
                      }
                      aiStackY_1b0[iVar19 * -0xc] = 0x69ddc4;
                      thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                         aiStackY_1b0[iVar19 * -0xc + 2],
                                         aiStackY_1b0[iVar19 * -0xc + 3],
                                         aiStackY_1b0[iVar19 * -0xc + 4],
                                         *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f1;
                    }
                    else {
                      *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69dde8;
                      local_EAX_4755 = Library::MSVCRT::FUN_0072e6c0();
                      *(uint *)(&stack0xfffffe64 + iVar19 * -0x30) = local_EAX_4755 % DAT_007d88d4;
                      aiStackY_1b0[iVar19 * -0xc + 4] = 0x3e9;
                      aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                      aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100 + 0x32;
                      aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100 + 0x32;
                      aiStackY_1b0[iVar19 * -0xc] = 0x69de1f;
                      thunk_FUN_006a0ae0(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                         aiStackY_1b0[iVar19 * -0xc + 2],
                                         aiStackY_1b0[iVar19 * -0xc + 3],
                                         aiStackY_1b0[iVar19 * -0xc + 4],
                                         *(uint *)(&stack0xfffffe64 + iVar19 * -0x30));
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3e9;
                    }
                  }
                  local_40 = local_40 + 1;
                  piVar5 = (int *)(local_70 + local_15c * 4);
                  *piVar5 = *piVar5 + -4;
                  if (*piVar5 < 0) {
                    *(undefined4 *)(local_70 + local_15c * 4) = 0;
                  }
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            iVar17 = local_144;
            iVar14 = local_ac;
            puVar18 = local_138;
          }
        }
      }
    }
  }
  puVar18 = local_138;
  if (local_138 != nullptr) {
    uVar16 = 0;
    if (0 < (int)local_138[3]) {
      bVar22 = local_138[3] != 0;
      do {
        if (bVar22) {
          iVar17 = puVar18[2] * uVar16 + puVar18[7];
        }
        else {
          iVar17 = 0;
        }
        if ((iVar17 != 0) && (STField<int>(iVar17,0xC) != 0)) {
          *(int *)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) =
               STField<int>(iVar17,0xC);
          aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df26;
          DArrayDestroy(*(DArrayTy **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
        }
        uVar16 = uVar16 + 1;
        bVar22 = uVar16 < puVar18[3];
      } while ((int)uVar16 < (int)puVar18[3]);
    }
    *(uint **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = puVar18;
    aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df34;
    DArrayDestroy(*(DArrayTy **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  }
  *(void ***)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_78;
  aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df3d;
  FreeAndNull(*(void **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  *(undefined4 ***)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_c0;
  aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df49;
  FreeAndNull(*(void **)(&stack0xfffffe64 + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0x69df54;
  thunk_FUN_006a0c00(param_1);
  ExceptionList = local_14;
  return local_13c;
LAB_0069d43d:
  iVar14 = aiStack_a8[uVar10];
LAB_0069d44d:
  local_b8 = iVar14 + -1;
LAB_0069d454:
  if (local_b8 < 0) {
    local_b8 = aiStack_a8[local_e8] + -1;
  }
  iVar14 = local_e8 + 3;
  if (7 < iVar14) {
    iVar14 = local_e8 - 5;
  }
  *(undefined4 *)(&stack0xfffffe64 + iVar19 * -0x30) = 0;
  aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_10c;
  aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
  aiStackY_1b0[iVar19 * -0xc + 2] = local_68[uVar16];
  aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d494;
  iVar6 = thunk_FUN_00696310(param_1,aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                             ,(int *)aiStackY_1b0[iVar19 * -0xc + 4],
                             *(int **)(&stack0xfffffe64 + iVar19 * -0x30));
  if (iVar6 == 8) {
    iVar6 = 0;
    do {
      if ((*(char *)(local_10c[iVar14] + (int)local_c0) == '\x01') && (local_10c[iVar14] != iVar17))
      {
        local_24 = local_10c[iVar14];
        break;
      }
      iVar11 = iVar14 + -1;
      if (iVar11 < 0) {
        iVar11 = iVar14 + 7;
      }
      iVar6 = iVar6 + 1;
      iVar14 = iVar11;
    } while (iVar6 < 8);
  }
LAB_0069d4ca:
  if (local_24 == -1) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar17;
    *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
    *(char *)(iVar17 + (int)local_c0) = (char)local_44 + '\x02';
    local_178 = local_178 + 1;
    if (local_158 != 0) {
      local_28[local_44] = local_178 * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
      local_158 = 0;
      local_44 = local_44 + 1;
    }
  }
  else if (-1 < local_b8) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar17;
    *(int *)((int)local_b4 + local_178 * 8 + 4) = local_b8;
    uVar16 = local_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar17 + (int)local_c0) = (char)uVar16 + '\x02';
    local_178 = local_178 + 1;
  }
  if ((0xfc < (int)local_44) || (local_e4 = local_e4 + 1, local_164 <= (int)local_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

