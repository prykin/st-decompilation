#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=360; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
CGenerate::sub_006991C0
          (CGenerate *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
          int param_7,AnonShape_006991C0_D95B9E4A *param_8)

{
  short *psVar1;
  int *piVar2;
  short *psVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  int local_EAX_350;
  int uVar12;
  uint uVar14;
  uint local_EAX_960;
  int iVar9;
  int local_EAX_1831;
  int iVar16;
  int local_EAX_2631;
  uint local_EAX_2793;
  uint uVar13;
  int local_EAX_2861;
  int iVar15;
  int local_EAX_3197;
  int iVar18;
  int iVar12;
  int iVar17;
  int local_EAX_3386;
  int local_EAX_4104;
  uint local_EAX_4222;
  int local_EAX_4400;
  int local_EAX_4717;
  uint local_EAX_4853;
  uint local_EAX_4951;
  uint uVar10;
  uint uVar11;
  int iVar13;
  int iVar14;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  bool bVar24;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_134;
  uint local_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined2 local_128;
  undefined1 local_126;
  int local_124;
  undefined4 *local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 *local_110;
  undefined4 *local_10c;
  undefined1 *local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  int local_dc;
  uint local_d4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 *local_b4;
  int local_b0;
  undefined4 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80 [9];
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_3c;
  int local_38;
  int local_30;
  int local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d7b8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe98;
  local_f0 = 0;
  local_118 = 0;
  local_8c = 0;
  ExceptionList = &local_14;
  local_d4 = param_1 * param_2;
  FreeAndNull(&this->field_584B);
  pbVar9 = Library::DKW::LIB::MemAlloc(param_1 * param_2);
  this->field_584B = pbVar9;
  uVar11 = this->field_582F;
  memset(pbVar9, 0, uVar11); /* compiler bulk-zero initialization */
  sub_006948E0(this,this->field_5833);
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  uVar11 = local_d4;
  local_b4 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  local_9c = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  local_94 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_dc = 0;
  local_3c = &stack0xfffffe98;
  puVar7 = &stack0xfffffe98;
  local_1c = &stack0xfffffe98;
  puVar8 = &stack0xfffffe98;
  if (0 < (int)uVar11) {
    do {
      if ((((0 < local_dc % param_1) && (0 < local_dc / param_1)) &&
          (local_dc % param_1 < this->field_5833 + -1)) &&
         (local_dc / param_1 < this->field_5837 + -1)) {
        local_EAX_350 = sub_00696400(this,local_dc,(int)local_80);
        local_140 = -1;
        bVar24 = false;
        iVar20 = 0;
        iVar14 = local_140;
        if (0 < param_7) {
          do {
            bVar24 = true;
            iVar14 = 0;
            if (0 < local_EAX_350) {
              do {
                if ((short)this->field_584F[local_80[iVar14] + this->field_582F * iVar20] < 1) {
                  bVar24 = false;
                  break;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_EAX_350);
            }
            iVar14 = iVar20;
          } while ((!bVar24) && (iVar20 = iVar20 + 1, iVar14 = local_140, iVar20 < param_7));
        }
        local_140 = iVar14;
        if ((bVar24) && (-1 < local_140)) {
          if (local_140 == 0) {
            this->field_584B[local_dc] = 1;
          }
          psVar1 = (short *)(local_9c + local_f0 * 10);
          *psVar1 = (short)(local_dc % param_1);
          psVar1[1] = (short)(local_dc / param_2);
          psVar1[2] = (short)local_140;
          iVar14 = 0;
          uVar11 = local_d4;
          if (0 < (int)param_5) {
            do {
              uVar12 = FUN_006acf90((int)*psVar1,(int)psVar1[1],
                                    (int)*(short *)(param_6 + iVar14 * 4),
                                    (int)*(short *)(param_6 + 2 + iVar14 * 4));
              if (uVar12 < (int)uVar11) {
                uVar11 = uVar12;
              }
              *(int *)(local_94 + iVar14 * 4) = uVar12;
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)param_5);
          }
          iVar20 = 0;
          iVar14 = 0;
          if (0 < (int)param_5) {
            do {
              iVar20 = iVar20 + (*(int *)(local_94 + iVar14 * 4) - uVar11);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)param_5);
          }
          *(int *)(local_9c + local_f0 * 10 + 6) = iVar20;
          local_f0 = local_f0 + 1;
        }
      }
      local_dc = local_dc + 1;
      puVar7 = local_3c;
      puVar8 = local_1c;
    } while (local_dc < (int)local_d4);
  }
  local_1c = puVar8;
  local_3c = puVar7;
  if (local_f0 != 0) {
    local_dc = 0;
    if (0 < (int)param_5) {
      do {
        iVar20 = (int)*(short *)(param_6 + local_dc * 4);
        local_30 = iVar20 + -7;
        iVar14 = 0;
        if (local_30 < 0) {
          local_30 = 0;
        }
        iVar13 = (int)*(short *)(param_6 + 2 + local_dc * 4);
        iVar19 = iVar13 + -7;
        if (iVar19 < 0) {
          iVar19 = 0;
        }
        iVar20 = iVar20 + 8;
        if (this->field_5833 < iVar20) {
          iVar20 = this->field_5833;
        }
        iVar13 = iVar13 + 8;
        if (this->field_5837 < iVar13) {
          iVar13 = this->field_5837;
        }
        for (; iVar6 = local_30, iVar19 < iVar13; iVar19 = iVar19 + 1) {
          for (; iVar6 < iVar20; iVar6 = iVar6 + 1) {
            if (this->field_584B[iVar6 + this->field_5833 * iVar19] != 0) {
              *(short *)(local_b4 + iVar14 * 10) = (short)iVar6;
              *(short *)((int)(local_b4 + iVar14 * 10) + 2) = (short)iVar19;
              iVar14 = iVar14 + 1;
            }
          }
        }
        if (iVar14 < 2) {
          ExceptionList = local_14;
          return local_118;
        }
        local_100 = 100;
        local_c0 = 0;
        local_48 = 0;
        local_58 = 0;
        local_11c = iVar20;
        local_50 = iVar13;
        do {
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar20 = (int)uVar14 % iVar14;
          local_EAX_960 = Library::MSVCRT::FUN_0072e6c0();
          iVar19 = (int)local_EAX_960 % iVar14;
          iVar9 = FUN_006acf90((int)*(short *)(local_b4 + iVar20 * 10),
                               (int)*(short *)((int)(local_b4 + iVar20 * 10) + 2),
                               (int)*(short *)(local_b4 + iVar19 * 10),
                               (int)*(short *)((int)(local_b4 + iVar19 * 10) + 2));
          puVar7 = local_b4;
          if ((iVar20 != iVar19) && (2 < iVar9)) {
            if (0 < iVar9) {
              local_58 = iVar19;
              local_48 = iVar20;
            }
            local_c0 = 1;
          }
          local_100 = local_100 + -1;
        } while (0 < local_100);
        local_12c = 0;
        if (local_c0 == 0) {
          ExceptionList = local_14;
          return local_118;
        }
        local_134 = *(uint *)(local_b4 + local_48 * 10);
        local_130 = 0;
        uStack_12a = 0xde;
        local_128 = 0;
        local_126 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)param_8->field_001C,&local_134);
        local_8c = local_8c + 1;
        local_134 = *(uint *)(puVar7 + local_58 * 10);
        local_130 = local_130 & 0xffff0000;
        uStack_12a = 0xdd;
        local_128 = 0;
        local_126 = 0;
        Library::DKW::TBL::DArrayAppend((DArrayTy *)param_8->field_001C,&local_134);
        local_118 = local_118 + 2;
        local_f4 = 0;
        iVar14 = 0;
        do {
          iVar20 = local_48;
          if ((local_f4 != 0) && (iVar20 = iVar14, local_f4 == 1)) {
            iVar20 = local_58;
          }
          local_11c = (int)*(short *)(local_b4 + iVar20 * 10);
          local_30 = local_11c + -7;
          if (local_30 < 0) {
            local_30 = 0;
          }
          local_50 = (int)*(short *)((int)(local_b4 + iVar20 * 10) + 2);
          iVar14 = local_50 + -7;
          if (iVar14 < 0) {
            iVar14 = 0;
          }
          local_11c = local_11c + 8;
          if (this->field_5833 < local_11c) {
            local_11c = this->field_5833;
          }
          local_50 = local_50 + 8;
          if (this->field_5837 < local_50) {
            local_50 = this->field_5837;
          }
          for (; iVar19 = local_30, iVar14 < local_50; iVar14 = iVar14 + 1) {
            for (; iVar19 < local_11c; iVar19 = iVar19 + 1) {
              this->field_584B[iVar19 + this->field_5833 * iVar14] = 0;
              uVar11 = iVar19 - *(short *)(local_b4 + iVar20 * 10);
              uVar10 = (int)uVar11 >> 0x1f;
              if (((int)((uVar11 ^ uVar10) - uVar10) < 3) ||
                 (uVar11 = iVar14 - *(short *)((int)(local_b4 + iVar20 * 10) + 2),
                 uVar10 = (int)uVar11 >> 0x1f, (int)((uVar11 ^ uVar10) - uVar10) < 3)) {
                this->field_584B[iVar19 + this->field_5833 * iVar14] = 0;
              }
            }
          }
          local_f4 = local_f4 + 1;
          iVar14 = iVar20;
        } while (local_f4 < 2);
        local_dc = local_dc + 1;
      } while (local_dc < (int)param_5);
    }
    param_8->field_0008 = local_118;
    if (0 < param_4) {
      local_8 = 1;
      Library::MSVCRT::FUN_0072da40();
      local_a8 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_24 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_10c = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_e4 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_110 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      local_dc = 0;
      local_108 = &stack0xfffffe98;
      puVar7 = &stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      puVar8 = &stack0xfffffe98;
      if (0 < (int)param_5) {
        do {
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar14 = local_f4;
              local_EAX_1831 =
                   FUN_006aced8((int)*(short *)(param_6 + local_dc * 4),
                                (int)*(short *)(param_6 + 2 + local_dc * 4),
                                (int)*(short *)(param_6 + local_f4 * 4),
                                (int)*(short *)(param_6 + 2 + local_f4 * 4));
              iVar20 = local_dc * param_5;
              *(int *)(local_a8 + (iVar20 + iVar14) * 4) = local_EAX_1831;
              local_a4 = 0;
              local_104 = 0;
              if (0 < iVar14) {
                do {
                  iVar19 = iVar14;
                  if (local_EAX_1831 <
                      *(int *)(local_a8 +
                              (*(int *)(local_24 + (iVar20 + local_104) * 4) + iVar20) * 4)) {
                    while (iVar19 = iVar19 + -1, local_104 <= iVar19) {
                      *(undefined4 *)(local_24 + (iVar20 + iVar19) * 4 + 4) =
                           *(undefined4 *)(local_24 + (iVar20 + iVar19) * 4);
                      iVar14 = local_f4;
                    }
                    *(int *)(local_24 + (iVar20 + local_104) * 4) = iVar14;
                    local_a4 = 1;
                  }
                  if (local_a4 != 0) goto LAB_0069999c;
                  local_104 = local_104 + 1;
                } while (local_104 < iVar14);
              }
              if (local_a4 == 0) {
                *(int *)(local_24 + (iVar20 + iVar14) * 4) = iVar14;
              }
LAB_0069999c:
              local_f4 = iVar14 + 1;
              local_38 = local_EAX_1831;
            } while (local_f4 < (int)param_5);
          }
          local_dc = local_dc + 1;
          puVar7 = local_108;
          puVar8 = local_1c;
        } while (local_dc < (int)param_5);
      }
      local_1c = puVar8;
      local_108 = puVar7;
      puVar21 = local_10c;
      for (iVar14 = (param_5 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar21 = 0xffffffff;
        puVar21 = puVar21 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar21 = 0xff;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
      }
      puVar21 = local_e4;
      for (iVar14 = (param_5 & 0x1fffffff) << 1; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar21 = 0xffffffff;
        puVar21 = puVar21 + 1;
      }
      for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined1 *)puVar21 = 0xff;
        puVar21 = (undefined4 *)((int)puVar21 + 1);
      }
      local_114 = 0;
      local_dc = 0;
      if (0 < (int)param_5) {
        do {
          local_88 = 0;
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar14 = *(int *)(local_24 + (local_dc * param_5 + local_f4) * 4);
              local_88 = iVar14;
              if (((iVar14 != local_dc) && ((int)local_10c[iVar14] < 0)) &&
                 (local_10c[iVar14 + param_5] != local_dc)) {
                local_10c[iVar14] = 1;
                local_10c[local_dc + param_5] = iVar14;
                break;
              }
              local_f4 = local_f4 + 1;
            } while (local_f4 < (int)param_5);
          }
          piVar2 = (int *)(local_a8 + (local_dc * param_5 + local_88) * 4);
          if (((*piVar2 != 0) && (-1 < local_88)) && (local_88 < (int)param_5)) {
            iVar14 = (int)*(short *)(param_6 + local_dc * 4);
            local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar14) * 4) / 9 + iVar14;
            psVar1 = (short *)(param_6 + 2 + local_88 * 4);
            psVar3 = (short *)(param_6 + 2 + local_dc * 4);
            local_124 = (((int)*psVar1 - (int)*psVar3) * 4) / 9 + (int)*psVar3;
            iVar16 = FUN_006aced8(local_e0,local_124,iVar14,(int)*psVar3);
            if (0x1e < iVar16) {
              local_e0 = (int)*(short *)(param_6 + local_dc * 4);
              iVar14 = *piVar2;
              local_e0 = ((*(short *)(param_6 + local_88 * 4) - local_e0) * 0x1e) / iVar14 +
                         local_e0;
              local_124 = (((int)*psVar1 - (int)*psVar3) * 0x1e) / iVar14 + (int)*psVar3;
            }
            iVar14 = 0;
            local_144 = 0;
            local_100 = 3;
            local_44 = 5;
            do {
              local_f4 = 0;
              if (0 < local_f0) {
                do {
                  psVar1 = (short *)(local_9c + local_f4 * 10);
                  if ((*(int *)(psVar1 + 3) != 0) &&
                     (local_EAX_2631 = FUN_006aced8((int)*psVar1,(int)psVar1[1],local_e0,local_124),
                     local_EAX_2631 <= local_44)) {
                    iVar20 = iVar14 * 10;
                    *(undefined4 *)(&stack0xfffffe98 + iVar20) = *(undefined4 *)psVar1;
                    *(undefined4 *)(&stack0xfffffe9c + iVar20) = *(undefined4 *)(psVar1 + 2);
                    *(short *)(&stack0xfffffea0 + iVar20) = psVar1[4];
                    *(int *)(local_108 + iVar14 * 4) = local_f4;
                    iVar14 = iVar14 + 1;
                    local_144 = iVar14;
                    if (iVar14 == 0x7b) break;
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_f0);
              }
              if (iVar14 < 0xb) {
                local_100 = local_100 + -1;
                local_44 = local_44 + 2;
              }
              else {
                local_100 = 0;
              }
            } while (0 < local_100);
            if (0 < iVar14) {
              local_100 = 0x46;
              local_b0 = 0;
              local_48 = 0;
              local_58 = 0;
              do {
                local_EAX_2793 = Library::MSVCRT::FUN_0072e6c0();
                local_4c = (int)local_EAX_2793 % local_144;
                uVar13 = Library::MSVCRT::FUN_0072e6c0();
                local_5c = (int)uVar13 % local_144;
                iVar20 = ((int)uVar13 % local_144) * 10;
                iVar14 = ((int)local_EAX_2793 % local_144) * 10;
                local_EAX_2861 =
                     FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar14),
                                  (int)*(short *)(&stack0xfffffe9a + iVar14),
                                  (int)*(short *)(&stack0xfffffe98 + iVar20),
                                  (int)*(short *)(&stack0xfffffe9a + iVar20));
                if ((local_4c != local_5c) && (iVar15 = 2, 1 < local_EAX_2861)) {
                  local_ec = 2;
                  local_f4 = 0;
                  if (0 < local_114) {
                    do {
                      local_ec = FUN_006acf90((int)*(short *)(local_9c + local_e4[local_f4] * 10),
                                              (int)*(short *)((int)(local_9c +
                                                                   local_e4[local_f4] * 10) + 2),
                                              (int)*(short *)(&stack0xfffffe98 + iVar14),
                                              (int)*(short *)(local_9c + iVar14 + 2));
                      iVar15 = FUN_006acf90((int)*(short *)(local_9c + local_e4[local_f4] * 10),
                                            (int)*(short *)((int)(local_9c + local_e4[local_f4] * 10
                                                                 ) + 2),
                                            (int)*(short *)(&stack0xfffffe98 + iVar20),
                                            (int)*(short *)(local_9c + iVar20 + 2));
                      if (local_ec < 2) goto LAB_00699f26;
                    } while ((1 < iVar15) && (local_f4 = local_f4 + 1, local_f4 < local_114));
                  }
                  if ((1 < local_ec) && (1 < iVar15)) {
                    local_ec = (*(int *)(local_a8 + (local_dc * param_5 + local_88) * 4) * iVar15) /
                               2;
                    psVar1 = (short *)(param_6 + 2 + local_88 * 4);
                    psVar3 = (short *)(param_6 + 2 + local_dc * 4);
                    local_EAX_3197 =
                         FUN_006aced8((int)*(short *)(&stack0xfffffe98 + iVar14),
                                      (int)*(short *)(&stack0xfffffe9a + iVar14),
                                      (int)*(short *)(&stack0xfffffe98 + iVar20),
                                      (int)*(short *)(&stack0xfffffe9a + iVar20));
                    iVar18 = FUN_006aced8((int)*(short *)(param_6 + local_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar20),
                                          (int)*(short *)(&stack0xfffffe9a + iVar20));
                    iVar12 = FUN_006aced8((int)*(short *)(param_6 + local_88 * 4),(int)*psVar1,
                                          (int)*(short *)(&stack0xfffffe98 + iVar14),
                                          (int)*(short *)(&stack0xfffffe9a + iVar14));
                    iVar19 = local_dc;
                    iVar17 = FUN_006aced8((int)*(short *)(param_6 + local_dc * 4),(int)*psVar3,
                                          (int)*(short *)(&stack0xfffffe98 + iVar20),
                                          (int)*(short *)(&stack0xfffffe9a + iVar20));
                    iVar20 = iVar17 + local_ec;
                    local_EAX_3386 =
                         FUN_006aced8((int)*(short *)(param_6 + iVar19 * 4),(int)*psVar3,
                                      (int)*(short *)(&stack0xfffffe98 + iVar14),
                                      (int)*(short *)(&stack0xfffffe9a + iVar14));
                    iVar14 = local_EAX_3386 + iVar20 + local_EAX_3197 + iVar18 + iVar12;
                    if (local_b0 < iVar14) {
                      local_48 = local_4c;
                      local_58 = local_5c;
                      local_b0 = iVar14;
                    }
                  }
                }
LAB_00699f26:
                iVar14 = local_48;
                local_100 = local_100 + -1;
              } while (0 < local_100);
              if (local_48 != local_58) {
                local_134 = 0;
                local_130 = 0;
                local_12c = 0;
                uStack_12a = 0;
                local_128 = 0;
                local_126 = 0;
                iVar20 = local_48 * 10;
                uVar4 = *(ushort *)(&stack0xfffffe98 + iVar20);
                local_134 = (uint)uVar4;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar20),uVar4);
                local_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar20);
                this->field_584B
                [(int)*(short *)(&stack0xfffffe9a + iVar20) * this->field_5833 + (int)(short)uVar4]
                     = 0;
                uStack_12a = 0xdd;
                local_128 = 0;
                local_126 = 1;
                Library::DKW::TBL::DArrayAppend((DArrayTy *)param_8->field_001C,&local_134);
                iVar20 = local_58;
                local_118 = local_118 + 1;
                iVar14 = *(int *)(local_108 + iVar14 * 4);
                local_e4[local_114] = iVar14;
                *(undefined4 *)(local_9c + iVar14 * 10 + 6) = 0;
                local_114 = local_114 + 1;
                if (1 < param_4) {
                  local_134 = 0;
                  local_130 = 0;
                  local_12c = 0;
                  uStack_12a = 0;
                  local_128 = 0;
                  local_126 = 0;
                  iVar14 = local_58 * 10;
                  uVar4 = *(ushort *)(&stack0xfffffe98 + iVar14);
                  local_134 = (uint)uVar4;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_134 = CONCAT22(*(short *)(&stack0xfffffe9a + iVar14),uVar4);
                  this->field_584B
                  [(int)*(short *)(&stack0xfffffe9a + iVar14) * this->field_5833 + (int)(short)uVar4
                  ] = 0;
                  local_130 = (uint)*(ushort *)(&stack0xfffffe9c + iVar14);
                  uStack_12a = 0xde;
                  local_128 = 0;
                  local_126 = 1;
                  Library::DKW::TBL::DArrayAppend((DArrayTy *)param_8->field_001C,&local_134);
                  iVar14 = *(int *)(local_108 + iVar20 * 4);
                  local_e4[local_114] = iVar14;
                  *(undefined4 *)(local_9c + iVar14 * 10 + 6) = 0;
                  local_114 = local_114 + 1;
                  local_118 = local_118 + 1;
                  local_8c = local_8c + 1;
                }
              }
            }
          }
          local_dc = local_dc + 1;
        } while (local_dc < (int)param_5);
      }
    }
    local_bc = param_3 - local_118;
    if (0 < local_bc) {
      local_8 = 2;
      Library::MSVCRT::FUN_0072da40();
      local_120 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_a0 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_84 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      iVar14 = 0;
      local_b8 = 0;
      uVar11 = 0;
      local_20 = (undefined4 *)&stack0xfffffe98;
      puVar21 = (undefined4 *)&stack0xfffffe98;
      local_1c = &stack0xfffffe98;
      puVar7 = &stack0xfffffe98;
      if (0 < local_f0) {
        do {
          local_EAX_4104 =
               thunk_FUN_0069ac20((int)*(short *)(local_9c + uVar11 * 10),
                                  (int)*(short *)((int)(local_9c + uVar11 * 10) + 2),0xf,
                                  (DArrayTy *)param_8->field_001C);
          if (0xf < local_EAX_4104) {
            *(uint *)(&stack0xfffffe98 + iVar14 * 4) = local_EAX_4104 << 0x10 | uVar11 & 0xffff;
            iVar14 = iVar14 + 1;
            local_b8 = iVar14;
          }
          uVar11 = uVar11 + 1;
          puVar21 = local_20;
          puVar7 = local_1c;
        } while ((int)uVar11 < local_f0);
      }
      local_1c = puVar7;
      local_20 = puVar21;
      if (0 < iVar14) {
        local_100 = 0x82;
        uVar11 = 0;
        local_b0 = 0;
        iVar14 = local_b8;
        puVar21 = local_120;
        puVar22 = local_a0;
        do {
          for (; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar22 = *puVar21;
            puVar21 = puVar21 + 1;
            puVar22 = puVar22 + 1;
          }
          local_fc = 0;
          local_28 = 0;
          puVar21 = local_84;
          for (iVar14 = local_bc; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar21 = 0;
            puVar21 = puVar21 + 1;
          }
          local_dc = 0;
          do {
            local_EAX_4222 = Library::MSVCRT::FUN_0072e6c0();
            iVar14 = (int)local_EAX_4222 % local_b8;
            uVar10 = local_a0[iVar14];
            if (uVar10 >> 0x10 != 0) {
              local_84[local_fc] = iVar14;
              local_28 = local_28 + (uVar10 >> 0x10);
              local_fc = local_fc + 1;
              if (local_bc <= (int)local_fc) break;
              uVar4 = *(ushort *)(local_a0 + iVar14);
              if (((int)(uint)uVar4 < local_f0) && (local_f4 = 0, 0 < local_b8)) {
                do {
                  uVar5 = *(ushort *)(local_a0 + local_f4);
                  if (((int)(uint)uVar5 < local_f0) &&
                     (local_EAX_4400 =
                           FUN_006acf90((int)*(short *)(local_9c + (uint)uVar5 * 10),
                                        (int)*(short *)((int)(local_9c + (uint)uVar5 * 10) + 2),
                                        (int)*(short *)(local_9c + (uint)uVar4 * 10),
                                        (int)*(short *)((int)(local_9c + (uint)uVar4 * 10) + 2)),
                     local_EAX_4400 < 0xf)) {
                    local_a0[local_f4] = (uint)uVar5;
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_b8);
              }
            }
            local_dc = local_dc + 1;
          } while (local_dc < 0x82);
          uVar10 = local_fc;
          puVar21 = local_84;
          puVar22 = local_20;
          if (local_b0 < local_28) {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar22 = *puVar21;
              puVar21 = puVar21 + 1;
              puVar22 = puVar22 + 1;
            }
            local_b0 = local_28;
            uVar11 = local_fc;
          }
          local_100 = local_100 + -1;
          iVar14 = local_b8;
          puVar21 = local_120;
          puVar22 = local_a0;
        } while (0 < local_100);
        if (uVar11 != 0) {
          local_8 = 3;
          Library::MSVCRT::FUN_0072da40();
          local_ac = (undefined4 *)&stack0xfffffe98;
          local_1c = &stack0xfffffe98;
          Library::MSVCRT::FUN_0072da40();
          local_1c = &stack0xfffffe98;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          local_dc = 0;
          local_e8 = &stack0xfffffe98;
          local_1c = &stack0xfffffe98;
          puVar7 = &stack0xfffffe98;
          iVar14 = local_dc;
          puVar8 = &stack0xfffffe98;
          if (0 < (int)uVar11) {
            do {
              for (; local_1c = puVar8, local_e8 = puVar7, iVar14 < (int)uVar11; iVar14 = iVar14 + 1
                  ) {
                local_EAX_4717 =
                     FUN_006aced8((int)*(short *)(local_9c +
                                                 (uint)*(ushort *)(local_120 + local_20[local_dc]) *
                                                 10),
                                  (int)*(short *)((int)(local_9c +
                                                       (uint)*(ushort *)
                                                              (local_120 + local_20[local_dc]) * 10)
                                                 + 2),
                                  (int)*(short *)(local_9c +
                                                 (uint)*(ushort *)(local_120 + local_20[iVar14]) *
                                                 10),
                                  (int)*(short *)((int)(local_9c +
                                                       (uint)*(ushort *)
                                                              (local_120 + local_20[iVar14]) * 10) +
                                                 2));
                *(int *)(local_e8 + (uVar11 * local_dc + iVar14) * 4) = local_EAX_4717;
                puVar7 = local_e8;
                puVar8 = local_1c;
              }
              local_dc = local_dc + 1;
              puVar7 = local_e8;
              iVar14 = local_dc;
              puVar8 = local_1c;
            } while (local_dc < (int)uVar11);
          }
          local_90 = (int)uVar11 / 2;
          uVar10 = uVar11 & 0x80000001;
          bVar24 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar24 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          local_13c = local_90;
          if (!bVar24) {
            local_13c = local_90 + 1;
          }
          local_100 = 100;
          local_b0 = 0;
          uVar10 = uVar11;
          puVar22 = local_ac;
          puVar21 = local_ac;
          do {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar22 = 0;
              puVar22 = puVar22 + 1;
            }
            iVar14 = 0;
            local_38 = 0;
            if (0 < local_13c) {
              do {
                local_EAX_4853 = Library::MSVCRT::FUN_0072e6c0();
                iVar20 = (int)local_EAX_4853 % (int)uVar11;
                if (puVar21[iVar20] == 0) {
                  puVar21[iVar20] = 0xdd;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar11) {
                    do {
                      iVar13 = iVar20 + iVar19;
                      if ((int)uVar11 <= iVar13) {
                        iVar13 = iVar13 - uVar11;
                      }
                      if (puVar21[iVar13] == 0) {
                        puVar21[iVar13] = 0xdd;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar11);
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_13c);
            }
            iVar14 = 0;
            if (0 < local_90) {
              do {
                local_EAX_4951 = Library::MSVCRT::FUN_0072e6c0();
                iVar20 = (int)local_EAX_4951 % (int)uVar11;
                if (puVar21[iVar20] == 0) {
                  puVar21[iVar20] = 0xde;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar11) {
                    do {
                      iVar13 = iVar20 + iVar19;
                      if ((int)uVar11 <= iVar13) {
                        iVar13 = iVar13 - uVar11;
                      }
                      if (puVar21[iVar13] == 0) {
                        puVar21[iVar13] = 0xde;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar11);
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_90);
            }
            iVar14 = 0;
            iVar20 = iVar14;
            if (0 < (int)uVar11) {
              do {
                for (; iVar14 < (int)uVar11; iVar14 = iVar14 + 1) {
                  if (puVar21[iVar14] == puVar21[iVar20]) {
                    local_38 = local_38 + *(int *)(local_e8 + (uVar11 * iVar20 + iVar14) * 4);
                    puVar21 = local_ac;
                  }
                }
                iVar14 = iVar20 + 1;
                iVar20 = iVar14;
              } while (iVar14 < (int)uVar11);
            }
            puVar22 = puVar21;
            if (local_b0 <= local_38) {
              local_b0 = local_38;
              puVar21 = local_ac;
              puVar23 = (undefined4 *)&stack0xfffffe98;
              for (uVar10 = uVar11; puVar22 = local_ac, uVar10 != 0; uVar10 = uVar10 - 1) {
                *puVar23 = *puVar21;
                puVar21 = puVar21 + 1;
                puVar23 = puVar23 + 1;
              }
            }
            local_100 = local_100 + -1;
            uVar10 = uVar11;
            puVar21 = puVar22;
          } while (-1 < local_100);
          iVar14 = 0;
          if (0 < (int)uVar11) {
            do {
              uStack_12a = (undefined2)*(undefined4 *)(&stack0xfffffe98 + iVar14 * 4);
              local_128 = (undefined2)((uint)*(undefined4 *)(&stack0xfffffe98 + iVar14 * 4) >> 0x10);
              local_134 = *(uint *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar14]) * 10);
              local_130 = STReplaceLowWord((uint32_t)(local_130), (uint16_t)(*(undefined2 *) ((int)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar14]) * 10) + 4)));
              local_126 = 2;
              Library::DKW::TBL::DArrayAppend((DArrayTy *)param_8->field_001C,&local_134);
              local_118 = local_118 + 1;
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)uVar11);
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_118;
}

