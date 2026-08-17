#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
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
  short *psVar2;
  int *piVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
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
  int iVar10;
  uint uVar11;
  uint uVar15;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  bool bVar29;
  int aiStackY_1150 [17];
  undefined1 auStackY_110c [496];
  undefined4 uStackY_f1c;
  undefined4 uStackY_f18;
  uint uStackY_f14;
  short asStackY_f10 [612];
  int aiStackY_a48 [5];
  undefined4 auStackY_a34 [561];
  undefined4 uStackY_170;
  int local_144;
  int local_140;
  int local_13c;
  uint local_134;
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
  uStackY_170 = 0x699224;
  ExceptionList = &local_14;
  local_d4 = param_1 * param_2;
  FreeAndNull(&this->field_584B);
  uStackY_170 = 0x69922a;
  pbVar8 = Library::DKW::LIB::MemAlloc(param_1 * param_2);
  this->field_584B = pbVar8;
  uVar15 = this->field_582F;
  memset(pbVar8, 0, uVar15); /* compiler bulk-zero initialization */
  uStackY_170 = 0x699252;
  /* ST_CALLSITE[0069924D]: CALL 0x0040564b; direct=0040564B CGenerate::sub_006948E0 */
  sub_006948E0(this,this->field_5833);
  uVar15 = local_d4;
  local_b4 = (undefined1 *)auStackY_a34;
  iVar24 = local_d4 * 10;
  aiStackY_a48[4] = 0x699285;
  iVar7 = -(iVar24 + 3U & 0xfffffffc);
  local_9c = (undefined1 *)((int)auStackY_a34 + iVar7);
  *(undefined4 *)((int)auStackY_a34 + iVar7 + -4) = 0x6992a4;
  iVar20 = param_5 * -4;
  local_94 = (undefined1 *)((int)auStackY_a34 + iVar20 + iVar7);
  *(undefined4 *)((int)auStackY_a34 + iVar20 + iVar7 + -4) = 0x6992bb;
  iVar24 = -(iVar24 + 3U & 0xfffffffc);
  local_1c = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
  local_3c = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
  local_8 = 0xffffffff;
  local_dc = 0;
  if (0 < (int)uVar15) {
    do {
      iVar21 = local_dc;
      if ((((0 < local_dc % param_1) && (0 < local_dc / param_1)) &&
          (local_dc % param_1 < this->field_5833 + -1)) &&
         (local_dc / param_1 < this->field_5837 + -1)) {
        *(int **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = local_80;
        *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = iVar21;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x699323;
        /* ST_CALLSITE[0069931E]: CALL 0x0040208b; direct=0040208B CGenerate::sub_00696400 */
        local_EAX_350 =
             sub_00696400(this,*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                          *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_140 = -1;
        bVar29 = false;
        iVar25 = 0;
        iVar21 = local_140;
        if (0 < param_7) {
          do {
            bVar29 = true;
            iVar21 = 0;
            if (0 < local_EAX_350) {
              do {
                if ((short)this->field_584F[local_80[iVar21] + this->field_582F * iVar25] < 1) {
                  bVar29 = false;
                  break;
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < local_EAX_350);
            }
            iVar21 = iVar25;
          } while ((!bVar29) && (iVar25 = iVar25 + 1, iVar21 = local_140, iVar25 < param_7));
        }
        local_140 = iVar21;
        if ((bVar29) && (-1 < local_140)) {
          if (local_140 == 0) {
            this->field_584B[local_dc] = 1;
          }
          psVar1 = (short *)(local_9c + local_f0 * 10);
          *psVar1 = (short)(local_dc % param_1);
          psVar1[1] = (short)(local_dc / param_2);
          psVar1[2] = (short)local_140;
          iVar21 = 0;
          uVar15 = local_d4;
          if (0 < (int)param_5) {
            do {
              *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) =
                   (int)*(short *)(param_6 + 2 + iVar21 * 4);
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) =
                   (int)*(short *)(param_6 + iVar21 * 4);
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = (int)psVar1[1];
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4) = (int)*psVar1;
              *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7) = 0x699421;
              uVar12 = FUN_006acf90(*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4),
                                    *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8),
                                    *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                                    *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
              if (uVar12 < (int)uVar15) {
                uVar15 = uVar12;
              }
              *(int *)(local_94 + iVar21 * 4) = uVar12;
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_5);
          }
          iVar25 = 0;
          iVar21 = 0;
          if (0 < (int)param_5) {
            do {
              iVar25 = iVar25 + (*(int *)(local_94 + iVar21 * 4) - uVar15);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_5);
          }
          *(int *)(local_9c + local_f0 * 10 + 6) = iVar25;
          local_f0 = local_f0 + 1;
        }
      }
      local_dc = local_dc + 1;
    } while (local_dc < (int)local_d4);
  }
  if (local_f0 != 0) {
    local_dc = 0;
    if (0 < (int)param_5) {
      do {
        iVar25 = (int)*(short *)(param_6 + local_dc * 4);
        local_30 = iVar25 + -7;
        iVar21 = 0;
        if (local_30 < 0) {
          local_30 = 0;
        }
        iVar19 = (int)*(short *)(param_6 + 2 + local_dc * 4);
        iVar22 = iVar19 + -7;
        if (iVar22 < 0) {
          iVar22 = 0;
        }
        iVar25 = iVar25 + 8;
        if (this->field_5833 < iVar25) {
          iVar25 = this->field_5833;
        }
        iVar19 = iVar19 + 8;
        if (this->field_5837 < iVar19) {
          iVar19 = this->field_5837;
        }
        for (; iVar10 = local_30, iVar22 < iVar19; iVar22 = iVar22 + 1) {
          for (; iVar10 < iVar25; iVar10 = iVar10 + 1) {
            if (this->field_584B[iVar10 + this->field_5833 * iVar22] != 0) {
              *(short *)(local_b4 + iVar21 * 10) = (short)iVar10;
              *(short *)((int)(local_b4 + iVar21 * 10) + 2) = (short)iVar22;
              iVar21 = iVar21 + 1;
            }
          }
        }
        if (iVar21 < 2) {
          ExceptionList = local_14;
          return local_118;
        }
        local_100 = 100;
        local_c0 = 0;
        local_48 = 0;
        local_58 = 0;
        local_11c = iVar25;
        local_50 = iVar19;
        do {
          *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x69957b;
          uVar14 = Library::MSVCRT::FUN_0072e6c0();
          iVar25 = (int)uVar14 % iVar21;
          *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x699585;
          local_EAX_960 = Library::MSVCRT::FUN_0072e6c0();
          iVar22 = (int)local_EAX_960 % iVar21;
          psVar1 = (short *)(local_b4 + iVar22 * 10);
          psVar2 = (short *)(local_b4 + iVar25 * 10);
          *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = (int)psVar1[1];
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = (int)*psVar1;
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = (int)psVar2[1];
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4) = (int)*psVar2;
          *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7) = 0x6995b3;
          iVar9 = FUN_006acf90(*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4),
                               *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8),
                               *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                               *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
          puVar23 = local_b4;
          if ((iVar25 != iVar22) && (2 < iVar9)) {
            if (0 < iVar9) {
              local_48 = iVar25;
              local_58 = iVar22;
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
        *(uint **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = &local_134;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = param_8->field_001C;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x699662;
        Library::DKW::TBL::DArrayAppend
                  (*(DArrayTy **)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                   *(void **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_8c = local_8c + 1;
        local_134 = *(uint *)(puVar23 + local_58 * 10);
        local_130 = local_130 & 0xffff0000;
        uStack_12a = 0xdd;
        local_128 = 0;
        local_126 = 0;
        *(uint **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = &local_134;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = param_8->field_001C;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x6996ad;
        Library::DKW::TBL::DArrayAppend
                  (*(DArrayTy **)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                   *(void **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_118 = local_118 + 2;
        local_f4 = 0;
        iVar21 = 0;
        do {
          iVar25 = local_48;
          if ((local_f4 != 0) && (iVar25 = iVar21, local_f4 == 1)) {
            iVar25 = local_58;
          }
          local_11c = (int)*(short *)(local_b4 + iVar25 * 10);
          local_30 = local_11c + -7;
          if (local_30 < 0) {
            local_30 = 0;
          }
          local_50 = (int)*(short *)((int)(local_b4 + iVar25 * 10) + 2);
          iVar21 = local_50 + -7;
          if (iVar21 < 0) {
            iVar21 = 0;
          }
          local_11c = local_11c + 8;
          iVar22 = this->field_5833;
          if (iVar22 < local_11c) {
            local_11c = iVar22;
          }
          local_50 = local_50 + 8;
          iVar22 = this->field_5837;
          if (iVar22 < local_50) {
            local_50 = iVar22;
          }
          for (; iVar22 = local_30, iVar21 < local_50; iVar21 = iVar21 + 1) {
            for (; iVar22 < local_11c; iVar22 = iVar22 + 1) {
              this->field_584B[iVar22 + this->field_5833 * iVar21] = 0;
              uVar15 = iVar22 - *(short *)(local_b4 + iVar25 * 10);
              uVar11 = (int)uVar15 >> 0x1f;
              if (((int)((uVar15 ^ uVar11) - uVar11) < 3) ||
                 (uVar15 = iVar21 - *(short *)((int)(local_b4 + iVar25 * 10) + 2),
                 uVar11 = (int)uVar15 >> 0x1f, (int)((uVar15 ^ uVar11) - uVar11) < 3)) {
                this->field_584B[iVar22 + this->field_5833 * iVar21] = 0;
              }
            }
          }
          local_f4 = local_f4 + 1;
          iVar21 = iVar25;
        } while (local_f4 < 2);
        local_dc = local_dc + 1;
      } while (local_dc < (int)param_5);
    }
    param_8->field_0008 = local_118;
    puVar23 = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
    if (0 < param_4) {
      iVar21 = param_5 * param_5;
      *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x699821;
      local_a8 = (undefined1 *)((int)auStackY_a34 + iVar21 * -4 + iVar24 + iVar20 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -4 + iVar24 + iVar20 + iVar7 + -4) = 0x699838;
      local_24 = (undefined1 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + iVar20 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + iVar20 + iVar7 + -4) = 0x699853;
      local_10c = (undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0xc + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0xc + iVar7 + -4) =
           0x69986a;
      local_e4 = (undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + -4) =
           0x69987f;
      local_110 = (undefined1 *)((int)&uStackY_f18 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
      *(undefined4 *)((int)&uStackY_f1c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7) = 0x699894
      ;
      local_1c = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      local_108 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      local_8 = 0xffffffff;
      local_dc = 0;
      if (0 < (int)param_5) {
        do {
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar20 = local_f4;
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                   (int)*(short *)(param_6 + 2 + local_f4 * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                   (int)*(short *)(param_6 + local_f4 * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                   (int)*(short *)(param_6 + 2 + local_dc * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                   (int)*(short *)(param_6 + local_dc * 4);
              *(undefined4 *)
               ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                   0x6998ec;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_EAX_1831 =
                   FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
              local_38 = local_EAX_1831;
              iVar25 = local_dc * param_5;
              *(int *)(local_a8 + (iVar25 + iVar20) * 4) = local_EAX_1831;
              local_a4 = 0;
              local_104 = 0;
              if (0 < iVar20) {
                do {
                  iVar22 = iVar20;
                  if (local_EAX_1831 <
                      *(int *)(local_a8 +
                              (*(int *)(local_24 + (iVar25 + local_104) * 4) + iVar25) * 4)) {
                    while (iVar22 = iVar22 + -1, local_104 <= iVar22) {
                      *(undefined4 *)(local_24 + (iVar25 + iVar22) * 4 + 4) =
                           *(undefined4 *)(local_24 + (iVar25 + iVar22) * 4);
                      iVar20 = local_f4;
                    }
                    *(int *)(local_24 + (iVar25 + local_104) * 4) = iVar20;
                    local_a4 = 1;
                  }
                  if (local_a4 != 0) goto LAB_0069999c;
                  local_104 = local_104 + 1;
                } while (local_104 < iVar20);
              }
              if (local_a4 == 0) {
                *(int *)(local_24 + (iVar25 + iVar20) * 4) = iVar20;
              }
LAB_0069999c:
              local_f4 = iVar20 + 1;
            } while (iVar20 + 1 < (int)param_5);
          }
          local_dc = local_dc + 1;
        } while (local_dc < (int)param_5);
      }
      puVar26 = local_10c;
      for (iVar20 = (param_5 & 0x1fffffff) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar26 = 0xffffffff;
        puVar26 = puVar26 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(undefined1 *)puVar26 = 0xff;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      puVar26 = local_e4;
      for (iVar20 = (param_5 & 0x1fffffff) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar26 = 0xffffffff;
        puVar26 = puVar26 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(undefined1 *)puVar26 = 0xff;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      local_114 = 0;
      local_dc = 0;
      puVar23 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      if (0 < (int)param_5) {
        do {
          local_88 = 0;
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar20 = *(int *)(local_24 + (local_dc * param_5 + local_f4) * 4);
              local_88 = iVar20;
              if (((iVar20 != local_dc) && ((int)local_10c[iVar20] < 0)) &&
                 (local_10c[iVar20 + param_5] != local_dc)) {
                local_10c[iVar20] = 1;
                local_10c[local_dc + param_5] = iVar20;
                break;
              }
              local_f4 = local_f4 + 1;
            } while (local_f4 < (int)param_5);
          }
          piVar3 = (int *)(local_a8 + (local_dc * param_5 + local_88) * 4);
          if (((*piVar3 != 0) && (-1 < local_88)) && (local_88 < (int)param_5)) {
            iVar25 = (int)*(short *)(param_6 + local_dc * 4);
            local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar25) * 4) / 9 + iVar25;
            psVar1 = (short *)(param_6 + 2 + local_88 * 4);
            psVar2 = (short *)(param_6 + 2 + local_dc * 4);
            iVar20 = (((int)*psVar1 - (int)*psVar2) * 4) / 9 + (int)*psVar2;
            local_124 = iVar20;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                 (int)*psVar2;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                 iVar25;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                 iVar20;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                 local_e0;
            *(undefined4 *)
             ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) = 0x699b46
            ;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar16 = FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
            if (0x1e < iVar16) {
              iVar25 = (int)*(short *)(param_6 + local_dc * 4);
              iVar20 = *piVar3;
              local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar25) * 0x1e) / iVar20 + iVar25;
              local_124 = (((int)*psVar1 - (int)*psVar2) * 0x1e) / iVar20 + (int)*psVar2;
            }
            iVar20 = 0;
            local_144 = 0;
            local_100 = 3;
            local_44 = 5;
            do {
              local_f4 = 0;
              if (0 < local_f0) {
                do {
                  psVar1 = (short *)(local_9c + local_f4 * 10);
                  if (*(int *)(psVar1 + 3) != 0) {
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = local_124;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) = local_e0;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) = (int)psVar1[1];
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) = (int)*psVar1;
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699c0c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_2631 =
                         FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    if (local_EAX_2631 <= local_44) {
                      puVar26 = (undefined4 *)
                                ((int)&uStackY_f18 +
                                iVar20 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *puVar26 = *(undefined4 *)psVar1;
                      puVar26[1] = *(undefined4 *)(psVar1 + 2);
                      *(short *)(puVar26 + 2) = psVar1[4];
                      *(int *)(local_108 + iVar20 * 4) = local_f4;
                      iVar20 = iVar20 + 1;
                      local_144 = iVar20;
                      if (iVar20 == 0x7b) break;
                    }
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_f0);
              }
              if (iVar20 < 0xb) {
                local_100 = local_100 + -1;
                local_44 = local_44 + 2;
              }
              else {
                local_100 = 0;
              }
            } while (0 < local_100);
            if (0 < iVar20) {
              local_100 = 0x46;
              local_b0 = 0;
              local_48 = 0;
              local_58 = 0;
              do {
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                     0x699cae;
                local_EAX_2793 = Library::MSVCRT::FUN_0072e6c0();
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                     0x699cc1;
                local_4c = (int)local_EAX_2793 % local_144;
                uVar13 = Library::MSVCRT::FUN_0072e6c0();
                local_5c = (int)uVar13 % local_144;
                iVar25 = ((int)uVar13 % local_144) * 10;
                iVar20 = ((int)local_EAX_2793 % local_144) * 10;
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                     0x699cf2;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_EAX_2861 =
                     FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                if ((local_4c != local_5c) && (iVar15 = 2, 1 < local_EAX_2861)) {
                  local_ec = 2;
                  local_f4 = 0;
                  if (0 < local_114) {
                    do {
                      iVar22 = local_e4[local_f4];
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                           (int)*(short *)(local_9c + iVar20 + 2);
                      *(int *)((int)aiStackY_1150 +
                              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                           (int)*(short *)((int)&uStackY_f18 +
                                          iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                           (int)*(short *)((int)(local_9c + iVar22 * 10) + 2);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                           (int)*(short *)(local_9c + iVar22 * 10);
                      *(undefined4 *)
                       ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30)
                           = 0x699d60;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      local_ec = FUN_006acf90(*(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x34),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x38),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x3c),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x40));
                      iVar22 = local_e4[local_f4];
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                           (int)*(short *)(local_9c + iVar25 + 2);
                      *(int *)((int)aiStackY_1150 +
                              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                           (int)*(short *)((int)&uStackY_f18 +
                                          iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                           (int)*(short *)((int)(local_9c + iVar22 * 10) + 2);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                           (int)*(short *)(local_9c + iVar22 * 10);
                      *(undefined4 *)
                       ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30)
                           = 0x699d9a;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      iVar15 = FUN_006acf90(*(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x34),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x38),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x3c),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x40));
                      if (local_ec < 2) goto LAB_00699f26;
                    } while ((1 < iVar15) && (local_f4 = local_f4 + 1, local_f4 < local_114));
                  }
                  if ((1 < local_ec) && (1 < iVar15)) {
                    local_ec = (*(int *)(local_a8 + (local_dc * param_5 + local_88) * 4) * iVar15) /
                               2;
                    psVar1 = (short *)(param_6 + 2 + local_88 * 4);
                    psVar2 = (short *)(param_6 + 2 + local_dc * 4);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699e42;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_3197 =
                         FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x2c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x28) = (int)*psVar1;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x24) =
                         (int)*(short *)(param_6 + local_88 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x20) =
                         0x699e6c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar18 = FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x24),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x28),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x2c),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x30));
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x20) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x1c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x18) = (int)*psVar1;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x14) =
                         (int)*(short *)(param_6 + local_88 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x10) =
                         0x699e9c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar12 = FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x14),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x18),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x1c),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x20));
                    iVar22 = local_dc;
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x10) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0xc) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 8
                            ) = (int)*psVar2;
                    *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 4
                            ) = (int)*(short *)(param_6 + local_dc * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7) =
                         0x699ec6;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar17 = FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 4
                                                  ),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 8
                                                  ),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0xc),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x10));
                    iVar25 = iVar17 + local_ec;
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) = (int)*psVar2;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                         (int)*(short *)(param_6 + iVar22 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699eff;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_3386 =
                         FUN_006aced8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    iVar20 = local_EAX_3386 + iVar25 + local_EAX_3197 + iVar18 + iVar12;
                    if (local_b0 < iVar20) {
                      local_48 = local_4c;
                      local_58 = local_5c;
                      local_b0 = iVar20;
                    }
                  }
                }
LAB_00699f26:
                iVar20 = local_48;
                local_100 = local_100 + -1;
              } while (0 < local_100);
              if (local_48 != local_58) {
                local_134 = 0;
                local_130 = 0;
                local_12c = 0;
                uStack_12a = 0;
                local_128 = 0;
                local_126 = 0;
                puVar4 = (uint *)((int)&uStackY_f18 +
                                 local_48 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                local_134 = (uint)(ushort)*puVar4;
                local_134 = *puVar4;
                local_130 = (uint)(ushort)puVar4[1];
                this->field_584B
                [(int)(short)STField<ushort>(puVar4,2) * this->field_5833 +
                 (int)(short)(ushort)*puVar4] = 0;
                uStack_12a = 0xdd;
                local_128 = 0;
                local_126 = 1;
                *(uint **)((int)aiStackY_1150 +
                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = &local_134;
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                     param_8->field_001C;
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                     0x699fd4;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                Library::DKW::TBL::DArrayAppend
                          (*(DArrayTy **)
                            ((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                           *(void **)((int)aiStackY_1150 +
                                     iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                iVar25 = local_58;
                local_118 = local_118 + 1;
                iVar20 = *(int *)(local_108 + iVar20 * 4);
                local_e4[local_114] = iVar20;
                *(undefined4 *)(local_9c + iVar20 * 10 + 6) = 0;
                local_114 = local_114 + 1;
                if (1 < param_4) {
                  local_134 = 0;
                  local_130 = 0;
                  local_12c = 0;
                  uStack_12a = 0;
                  local_128 = 0;
                  local_126 = 0;
                  puVar4 = (uint *)((int)&uStackY_f18 +
                                   local_58 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                  local_134 = (uint)(ushort)*puVar4;
                  local_134 = *puVar4;
                  this->field_584B
                  [(int)(short)STField<ushort>(puVar4,2) * this->field_5833 +
                   (int)(short)(ushort)*puVar4] = 0;
                  local_130 = (uint)(ushort)puVar4[1];
                  uStack_12a = 0xde;
                  local_128 = 0;
                  local_126 = 1;
                  *(uint **)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = &local_134;
                  *(undefined4 *)
                   ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                       param_8->field_001C;
                  *(undefined4 *)
                   ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                       0x69a0a7;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  Library::DKW::TBL::DArrayAppend
                            (*(DArrayTy **)
                              ((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                             *(void **)((int)aiStackY_1150 +
                                       iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                  local_118 = local_118 + 1;
                  local_8c = local_8c + 1;
                  iVar20 = *(int *)(local_108 + iVar25 * 4);
                  local_e4[local_114] = iVar20;
                  *(undefined4 *)(local_9c + iVar20 * 10 + 6) = 0;
                  local_114 = local_114 + 1;
                }
              }
            }
          }
          local_dc = local_dc + 1;
          puVar23 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
        } while (local_dc < (int)param_5);
      }
    }
    iVar7 = local_f0;
    local_bc = param_3 - local_118;
    if (0 < param_3 - local_118) {
      *(undefined4 *)(puVar23 + -4) = 0x69a130;
      iVar20 = iVar7 * -4;
      local_120 = (undefined4 *)(puVar23 + iVar20);
      *(undefined4 *)(puVar23 + iVar20 + -4) = 0x69a149;
      iVar21 = local_bc;
      local_a0 = (undefined4 *)(puVar23 + iVar7 * -8);
      *(undefined4 *)(puVar23 + iVar7 * -8 + -4) = 0x69a16d;
      iVar24 = iVar21 * -8;
      local_84 = (undefined4 *)(puVar23 + iVar21 * -4 + iVar7 * -8);
      *(undefined4 *)(puVar23 + iVar21 * -4 + iVar7 * -8 + -4) = 0x69a181;
      local_1c = puVar23 + iVar21 * -8 + iVar7 * -8;
      local_20 = (undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8);
      local_8 = 0xffffffff;
      iVar25 = 0;
      local_b8 = 0;
      uVar15 = 0;
      if (0 < local_f0) {
        do {
          psVar1 = (short *)(local_9c + uVar15 * 10);
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = param_8->field_001C;
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8) = 0xf;
          *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc) = (int)psVar1[1];
          *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10) = (int)*psVar1;
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x14) = 0x69a1cd;
          local_EAX_4104 =
               thunk_FUN_0069ac20(*(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10),
                                  *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc),
                                  *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8),
                                  *(DArrayTy **)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4));
          if (0xf < local_EAX_4104) {
            *(uint *)(puVar23 + iVar25 * 4 + iVar20) = local_EAX_4104 << 0x10 | uVar15 & 0xffff;
            iVar25 = iVar25 + 1;
            local_b8 = iVar25;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < local_f0);
      }
      if (0 < iVar25) {
        local_100 = 0x82;
        uVar15 = 0;
        local_b0 = 0;
        iVar20 = local_b8;
        puVar26 = local_120;
        puVar27 = local_a0;
        do {
          for (; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar27 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar27 = puVar27 + 1;
          }
          local_fc = 0;
          local_28 = 0;
          puVar26 = local_84;
          for (iVar20 = local_bc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar26 = 0;
            puVar26 = puVar26 + 1;
          }
          local_dc = 0;
          do {
            *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a243;
            local_EAX_4222 = Library::MSVCRT::FUN_0072e6c0();
            iVar20 = (int)local_EAX_4222 % local_b8;
            uVar11 = local_a0[iVar20];
            if (uVar11 >> 0x10 != 0) {
              local_84[local_fc] = iVar20;
              local_28 = local_28 + (uVar11 >> 0x10);
              local_fc = local_fc + 1;
              if (local_bc <= (int)local_fc) break;
              uVar5 = *(ushort *)(local_a0 + iVar20);
              if (((int)(uint)uVar5 < local_f0) && (local_f4 = 0, 0 < local_b8)) {
                do {
                  uVar6 = *(ushort *)(local_a0 + local_f4);
                  if ((int)(uint)uVar6 < local_f0) {
                    psVar1 = (short *)(local_9c + (uint)uVar5 * 10);
                    psVar2 = (short *)(local_9c + (uint)uVar6 * 10);
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = (int)psVar1[1];
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8) = (int)*psVar1;
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc) = (int)psVar2[1];
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10) = (int)*psVar2;
                    *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x14) = 0x69a2f5;
                    local_EAX_4400 =
                         FUN_006acf90(*(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4));
                    if (local_EAX_4400 < 0xf) {
                      local_a0[local_f4] = (uint)uVar6;
                    }
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_b8);
              }
            }
            local_dc = local_dc + 1;
          } while (local_dc < 0x82);
          uVar11 = local_fc;
          puVar26 = local_84;
          puVar27 = local_20;
          if (local_b0 < local_28) {
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar27 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar27 = puVar27 + 1;
            }
            local_b0 = local_28;
            uVar15 = local_fc;
          }
          local_100 = local_100 + -1;
          iVar20 = local_b8;
          puVar26 = local_120;
          puVar27 = local_a0;
        } while (0 < local_100);
        if (uVar15 != 0) {
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a396;
          local_ac = (undefined4 *)(puVar23 + uVar15 * -4 + iVar21 * -8 + iVar7 * -8);
          *(undefined4 *)(puVar23 + uVar15 * -4 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a3ad;
          *(undefined4 *)(puVar23 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a3ca;
          iVar20 = uVar15 * uVar15 * -4;
          local_1c = puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8;
          local_e8 = puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8;
          local_8 = 0xffffffff;
          local_dc = 0;
          iVar25 = local_dc;
          if (0 < (int)uVar15) {
            do {
              for (; iVar25 < (int)uVar15; iVar25 = iVar25 + 1) {
                psVar1 = (short *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar25]) * 10);
                psVar2 = (short *)(local_9c + (uint)*(ushort *)(local_120 + local_20[local_dc]) * 10
                                  );
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) = (int)psVar1[1]
                ;
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8) = (int)*psVar1;
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc) =
                     (int)psVar2[1];
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x10) =
                     (int)*psVar2;
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x14) =
                     0x69a432;
                local_EAX_4717 =
                     FUN_006aced8(*(int *)(puVar23 +
                                          iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x10),
                                  *(int *)(puVar23 +
                                          iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc),
                                  *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8
                                          ),
                                  *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4
                                          ));
                *(int *)(local_e8 + (uVar15 * local_dc + iVar25) * 4) = local_EAX_4717;
              }
              local_dc = local_dc + 1;
              iVar25 = local_dc;
            } while (local_dc < (int)uVar15);
          }
          local_13c = (int)uVar15 / 2;
          local_90 = local_13c;
          uVar11 = uVar15 & 0x80000001;
          bVar29 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar29 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar29) {
            local_13c = local_13c + 1;
          }
          local_100 = 100;
          local_b0 = 0;
          uVar11 = uVar15;
          puVar27 = local_ac;
          puVar26 = local_ac;
          do {
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar27 = 0;
              puVar27 = puVar27 + 1;
            }
            iVar25 = 0;
            local_38 = 0;
            if (0 < local_13c) {
              do {
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) =
                     0x69a4ba;
                local_EAX_4853 = Library::MSVCRT::FUN_0072e6c0();
                iVar22 = (int)local_EAX_4853 % (int)uVar15;
                if (puVar26[iVar22] == 0) {
                  puVar26[iVar22] = 0xdd;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar15) {
                    do {
                      iVar10 = iVar22 + iVar19;
                      if ((int)uVar15 <= iVar10) {
                        iVar10 = iVar10 - uVar15;
                      }
                      if (puVar26[iVar10] == 0) {
                        puVar26[iVar10] = 0xdd;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar15);
                  }
                }
                iVar25 = iVar25 + 1;
              } while (iVar25 < local_13c);
            }
            iVar25 = 0;
            if (0 < local_90) {
              do {
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) =
                     0x69a51c;
                local_EAX_4951 = Library::MSVCRT::FUN_0072e6c0();
                iVar22 = (int)local_EAX_4951 % (int)uVar15;
                if (puVar26[iVar22] == 0) {
                  puVar26[iVar22] = 0xde;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar15) {
                    do {
                      iVar10 = iVar22 + iVar19;
                      if ((int)uVar15 <= iVar10) {
                        iVar10 = iVar10 - uVar15;
                      }
                      if (puVar26[iVar10] == 0) {
                        puVar26[iVar10] = 0xde;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar15);
                  }
                }
                iVar25 = iVar25 + 1;
              } while (iVar25 < local_90);
            }
            iVar25 = 0;
            iVar22 = iVar25;
            if (0 < (int)uVar15) {
              do {
                for (; iVar25 < (int)uVar15; iVar25 = iVar25 + 1) {
                  if (puVar26[iVar25] == puVar26[iVar22]) {
                    local_38 = local_38 + *(int *)(local_e8 + (uVar15 * iVar22 + iVar25) * 4);
                    puVar26 = local_ac;
                  }
                }
                iVar25 = iVar22 + 1;
                iVar22 = iVar25;
              } while (iVar25 < (int)uVar15);
            }
            puVar27 = puVar26;
            if (local_b0 <= local_38) {
              local_b0 = local_38;
              puVar26 = local_ac;
              puVar28 = (undefined4 *)(puVar23 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8);
              for (uVar11 = uVar15; puVar27 = local_ac, uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar28 = *puVar26;
                puVar26 = puVar26 + 1;
                puVar28 = puVar28 + 1;
              }
            }
            local_100 = local_100 + -1;
            uVar11 = uVar15;
            puVar26 = puVar27;
          } while (-1 < local_100);
          iVar25 = 0;
          if (0 < (int)uVar15) {
            do {
              uStack_12a = (undefined2)
                           *(undefined4 *)
                            (puVar23 + iVar25 * 4 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8);
              local_128 = (undefined2)
                          ((uint)*(undefined4 *)
                                  (puVar23 + iVar25 * 4 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8) >>
                          0x10);
              local_134 = *(uint *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar25]) * 10);
              local_130 = STReplaceLowWord((uint32_t)(local_130), (uint16_t)((short)*(uint *)((int)(local_9c + (uint)*(ushort *) (local_120 + local_20[iVar25]) * 10) + 4)));
              local_126 = 2;
              *(uint **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) = &local_134;
              *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8) =
                   param_8->field_001C;
              *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc) =
                   0x69a631;
              Library::DKW::TBL::DArrayAppend
                        (*(DArrayTy **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8),
                         *(void **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4));
              local_118 = local_118 + 1;
              iVar25 = iVar25 + 1;
            } while (iVar25 < (int)uVar15);
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_118;
}

