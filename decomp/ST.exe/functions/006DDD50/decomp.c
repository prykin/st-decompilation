#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 005745E0 -> 006DDD50 @ 005746B4; data at 0080760C | 005745E0 -> 006DDD50 @ 005746CF;
   data at 0080760C

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=52;
   incoming_edx_uses=0; incoming_stack_parameter_uses=88; direct_non_thunk_callers=7;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall ST3DSMAPContext::sub_006DDD50(ST3DSMAPContext *param_1)

{
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  char *pcVar7;
  uint uVar8;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar9;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar10;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar18;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar19;
  int iVar20;
  ushort *puVar21;
  int local_120;
  int local_11c;
  float local_ec [2];
  int local_e4;
  undefined1 *local_cc;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0 [4];
  int local_90;
  int local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c [2];
  int local_74;
  undefined1 local_68 [24];
  char *local_50;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *local_44;
  float local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar15;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f4598f33d;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f0ea6b32c;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5f0605bde0;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_5ff32f7558;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *temp_103fe0eba8e3;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar16;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar17;

  puStack_c = &DAT_0079dff8;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffed4;
  if (((param_1->field_0004 == nullptr) ||
      ((param_1->field_0004->field_000C & 0x1100) != 0x100)) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    ExceptionList = &local_14;
    param_1->field_02D8 = 1;
    local_8 = 0;
    Library::MSVCRT::FUN_0072da40();
    local_3c = (undefined4 *)&stack0xfffffed4;
    local_1c = &stack0xfffffed4;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    if (((int)param_1->field_00A8 < 0) || (3 < (int)param_1->field_00A8)) {
      local_90 = param_1->field_013C;
      while (local_90 = local_90 + -1, local_cc = &stack0xfffffed4, local_1c = &stack0xfffffed4,
            0 < local_90) {
        pRVar18 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&param_1->field_0140;
        pRVar10 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)pRVar18;
        local_11c = local_90;
        if (0 < local_90) {
          do {
            pRVar1 = pRVar10->next;
            pRVar11 = pRVar1;
            pRVar19 = pRVar10;
            if (pRVar1->field_0008 <= pRVar10->field_0008) {
              pRVar18->next = pRVar1;
              pRVar10->next = pRVar1->next;
              pRVar1->next = pRVar10;
              pRVar11 = pRVar10;
              pRVar19 = pRVar1;
            }
            local_11c = local_11c + -1;
            pRVar10 = pRVar11;
            pRVar18 = pRVar19;
          } while (local_11c != 0);
        }
      }
    }
    else {
      local_44 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&param_1->field_0140;
      for (pRVar15 = param_1->field_0140;
          ((pRVar15 != nullptr &&
           (pRVar15->field_0008 == 0)) && (pRVar15->field_0024 < 3)); pRVar15 = pRVar15->next) {
        local_44 = pRVar15;
      }
      temp_5f0ea6b32c = local_44->next;
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0;
      STPiece<0,4>(local_68) = temp_5f0ea6b32c;
      local_1c = &stack0xfffffed4;
      local_cc = &stack0xfffffed4;
      for (pRVar16 = temp_5f0ea6b32c; pRVar16 != nullptr;
          pRVar16 = pRVar16->next) {
        sub_006E25D0(param_1,local_7c,&local_88,
                     (double)pRVar16->field_0004 * param_1->field_00C8,
                     (double)pRVar16->field_0006 * param_1->field_00C8,
                     (double)(int)((int)pRVar16->field_0008 - (uint)pRVar16->field_0048) *
                     param_1->field_00D0,1);
        pRVar16->field_0044 = local_74;
      }
      sub_006DD530(param_1,local_ec,&local_40,(float *)(local_68 + 0x10));
      while (temp_5f0ea6b32c != nullptr) {
        temp_103fe0eba8e3 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)local_68;
        for (pRVar17 = temp_5f0ea6b32c;
            pRVar17 != nullptr; pRVar17 = pRVar17->next)
        {
          pRVar9 = temp_5f0ea6b32c;
          do {
            if (pRVar17->field_0044 < pRVar9->field_0044) break;
            pRVar9 = pRVar9->next;
          } while (pRVar9 != nullptr);
          if (pRVar9 == nullptr) break;
          temp_103fe0eba8e3 = pRVar17;
        }
        if (pRVar17 == nullptr) {
          local_44->next = temp_5f0ea6b32c;
        }
        else {
          temp_103fe0eba8e3->next = pRVar17->next;
          pRVar17->next = nullptr;
          local_44->next = pRVar17;
          temp_5f0ea6b32c = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)STPiece<0,4>(local_68);
          local_44 = pRVar17;
        }
      }
    }
    if (param_1->field_0124 == 0) {
      for (temp_5f0605bde0 = param_1->field_0140;
          temp_5f0605bde0 != nullptr;
          temp_5f0605bde0 = temp_5f0605bde0->next) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E1EE0::FUN_006e1ee0
                  ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5f0605bde0,
                   local_3c,(int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)temp_5f0605bde0);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            FUN_007279b0(param_1,(int)temp_5f0605bde0,(uint)(byte)local_cc[iVar20],(int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
      }
    }
    else if (param_1->field_0124 == 1) {
      local_38 = param_1->field_0374;
      local_34 = param_1->field_0378;
      local_30 = param_1->field_0370;
      local_2c = local_30;
      for (temp_5ff32f7558 = param_1->field_0140;
          temp_5ff32f7558 != nullptr;
          temp_5ff32f7558 = temp_5ff32f7558->next) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E1EE0::FUN_006e1ee0
                  ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5ff32f7558,
                   local_3c,(int)local_cc,local_a0);
        FUN_00726ce0(param_1,(int)temp_5ff32f7558);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_007282b0
                      ((AnonReceiver_00727C80 *)param_1,
                       (AnonShape_007282B0_AFD740A9 *)temp_5ff32f7558,(uint)(byte)local_cc[iVar20],
                       (int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
        if (temp_5ff32f7558->field_0008 == 0) {
          local_e4 = 0;
        }
        else {
          local_e4 = ((int)temp_5ff32f7558->field_0008 - (uint)temp_5ff32f7558->field_0048) *
                     param_1->field_0384;
        }
        local_bc = param_1->field_0380;
        local_c4 = temp_5ff32f7558->field_0004 * local_bc;
        local_c0 = temp_5ff32f7558->field_0006 * local_bc;
        local_bc = local_bc * 2;
        local_b8 = local_bc;
        iVar20 = FUN_006b0460(&local_b4,&local_c4,&local_38);
        if (iVar20 != 0) {
          if (local_e4 == 0) {
            FUN_006b0330((int)param_1->field_0014,param_1->field_0028,local_b4 - local_38,
                         local_b0 - local_34,temp_5ff32f7558->field_0040,local_bc,
                         local_b4 - local_c4,local_b0 - local_c0,local_ac,local_a8,'\0');
          }
          else {
            pcVar7 = (char *)((int)param_1->field_0014 +
                             local_b4 + ((local_b0 - local_34) * param_1->field_0028 - local_38));
            pcVar12 = (char *)((((local_b0 - local_c0) * local_bc + temp_5ff32f7558->field_0040) -
                               local_c4) + local_b4);
            while (local_a8 = local_a8 + -1, -1 < local_a8) {
              if (-1 < local_ac + -1) {
                local_120 = local_ac;
                do {
                  if (*pcVar12 != '\0') {
                    *pcVar7 = *pcVar12 + (char)local_e4;
                  }
                  pcVar12 = pcVar12 + 1;
                  pcVar7 = pcVar7 + 1;
                  local_120 = local_120 + -1;
                } while (local_120 != 0);
              }
              pcVar7 = pcVar7 + (param_1->field_0028 - local_ac);
              pcVar12 = pcVar12 + (local_bc - local_ac);
            }
          }
        }
      }
    }
    else {
      for (temp_5f4598f33d = param_1->field_0140;
          temp_5f4598f33d != nullptr;
          temp_5f4598f33d = temp_5f4598f33d->next) {
        if (param_1->field_0124 == 3) {
          FUN_006e2b60(param_1,(AnonShape_006E2B60_E36B924C *)temp_5f4598f33d,(int)local_3c,
                       (int)local_cc,local_a0);
        }
        else {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006E1EE0::FUN_006e1ee0
                    ((AnonReceiver_006E1EE0 *)param_1,(AnonShape_006E1EE0_698AE49A *)temp_5f4598f33d
                     ,local_3c,(int)local_cc,local_a0);
        }
        FUN_00726ce0(param_1,(int)temp_5f4598f33d);
        iVar20 = 0;
        if (0 < local_a0[0]) {
          do {
            SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00727C80::FUN_00727da0
                      ((AnonReceiver_00727C80 *)param_1,
                       (AnonShape_00727DA0_C4265AA0 *)temp_5f4598f33d,(uint)(byte)local_cc[iVar20],
                       (int)local_3c);
            iVar20 = iVar20 + 1;
          } while (iVar20 < local_a0[0]);
        }
      }
    }
    if (param_1->field_0124 == 5) {
      local_50 = (char *)param_1->field_000C;
      puVar21 = param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar20 = 0;
          if (0 < param_1->field_0028) {
            do {
              if (*local_50 == -1) {
                iVar14 = (int)((30000 - (uint)*puVar21) * 0x100) / 30000;
                if (iVar14 < 0) {
                  iVar14 = 0;
                }
                if (0xff < iVar14) {
                  iVar14 = 0xff;
                }
                *local_50 = (char)iVar14;
              }
              local_50 = local_50 + 1;
              puVar21 = puVar21 + 1;
              iVar20 = iVar20 + 1;
            } while (iVar20 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
    else if (param_1->field_0124 == 2) {
      local_88 = 0.0;
      local_84 = 0;
      local_80 = 0;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079dff0,0);
      iVar14 = local_74;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079df68,0);
      iVar2 = local_74;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 * _DAT_0079b128,0);
      iVar3 = local_74;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0 + param_1->field_00D0,0);
      iVar4 = local_74;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,param_1->field_00D0,0);
      iVar5 = local_74;
      sub_006E25D0(param_1,local_7c,&local_88,0.0,0.0,0.0,0);
      iVar20 = (local_74 - iVar5) / 10;
      puVar15 = (undefined1 *)param_1->field_000C;
      puVar21 = param_1->field_0014;
      local_8c = 0;
      if (0 < param_1->field_002C) {
        do {
          iVar13 = 0;
          if (0 < param_1->field_0028) {
            do {
              uVar8 = (uint)*puVar21;
              if ((int)uVar8 < local_74 - iVar20) {
                if (iVar5 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_0439;
                  goto cf_common_join_006DE503;
                }
                if (iVar4 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043A;
                  goto cf_common_join_006DE503;
                }
                if (iVar3 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043B;
                  goto cf_common_join_006DE503;
                }
                if (iVar2 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043C;
                  goto cf_common_join_006DE503;
                }
                if (iVar14 - iVar20 <= (int)uVar8) {
                  uVar6 = param_1->field_043D;
                  goto cf_common_join_006DE503;
                }
              }
              else {
                uVar6 = param_1->field_0438;
cf_common_join_006DE503:
                *puVar15 = uVar6;
              }
              puVar15 = puVar15 + 1;
              puVar21 = puVar21 + 1;
              iVar13 = iVar13 + 1;
            } while (iVar13 < param_1->field_0028);
          }
          local_8c = local_8c + 1;
        } while (local_8c < param_1->field_002C);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

