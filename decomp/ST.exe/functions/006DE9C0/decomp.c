#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006E1460 -> 006DE9C0 @ 006E1A6B; ST3DSMAPContext::sub_006E1460 this; stable alias ESI |
   006E1460 -> 006DE9C0 @ 006E1B3F; ST3DSMAPContext::sub_006E1460 this; stable alias ESI

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=236;
   incoming_edx_uses=0; incoming_stack_parameter_uses=274; direct_non_thunk_callers=2;
   incoming_ecx_receiver_callers=2; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall ST3DSMAPContext::sub_006DE9C0(ST3DSMAPContext *param_1)

{
  float fVar1;
  AnonPointee_ST3DSMAPContext_0280 *pAVar2;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar3;
  byte *pbVar4;
  int iVar6;
  int iVar10;
  int iVar7;
  int local_EAX_2002;
  int iVar8;
  int local_EAX_2343;
  int local_EAX_2489;
  int iVar12;
  int local_EAX_2895;
  int local_EAX_3147;
  int local_EAX_3291;
  int local_EAX_3561;
  int local_EAX_3707;
  int local_EAX_3954;
  int local_EAX_4104;
  int local_EAX_4401;
  int iVar9;
  int local_EAX_4830;
  int local_EAX_4979;
  int local_EAX_5224;
  int local_EAX_5373;
  int local_EAX_5656;
  int local_EAX_5821;
  int local_EAX_6081;
  int local_EAX_6248;
  int local_EAX_6533;
  int local_EAX_6679;
  int iVar5;
  int local_EAX_7142;
  int iVar11;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  longlong lVar19;
  int local_f8;
  int local_c4;
  int local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  float local_94;
  float local_90;
  float local_8c;
  int local_88;
  double local_84;
  int local_70 [4];
  int local_60;
  int local_5c;
  int local_54;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *local_50;
  undefined1 *local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079e008;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffee8;
  local_a0 = 30000;
  local_c4 = -30000;
  local_9c = 30000;
  local_c0 = -30000;
  if (param_1->field_0124 == 1) {
    local_c0 = param_1->field_0380;
    local_a0 = (param_1->field_0030 + param_1->field_0374) / local_c0;
    if (local_a0 < 0) {
      local_a0 = 0;
    }
    local_f8 = (int)*(short *)param_1->field_0280;
    if (local_f8 <= local_a0) {
      local_a0 = local_f8 + -1;
    }
    local_c4 = (param_1->field_0038 + param_1->field_0374) / local_c0;
    if (local_c4 < 0) {
      local_c4 = 0;
    }
    if (local_f8 <= local_c4) {
      local_c4 = local_f8 + -1;
    }
    local_9c = (param_1->field_0034 + param_1->field_0378) / local_c0;
    if (local_9c < 0) {
      local_9c = 0;
    }
    iVar16 = (int)*(short *)&param_1->field_0280->field_0x2;
    if (iVar16 <= local_9c) {
      local_9c = iVar16 + -1;
    }
    local_c0 = (param_1->field_003C + param_1->field_0378) / local_c0;
    if (local_c0 < 0) {
      local_c0 = 0;
    }
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
    if (local_c0 < iVar16) goto LAB_006defd4;
    iVar6 = iVar16 + -1;
    ExceptionList = &local_14;
    local_1c = &stack0xfffffee8;
  }
  else {
    ExceptionList = &local_14;
    sub_006E1C20(param_1,(float)param_1->field_0030,param_1->field_0034,-(float)param_1->field_00D0,
                 &local_20,&local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar16 = (int)*(short *)pAVar2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    iVar16 = 30000;
    if (iVar6 < 30000) {
      iVar16 = iVar6;
      local_a0 = iVar6;
    }
    if (-30000 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar10 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < 30000) {
      local_9c = iVar6;
    }
    if (-30000 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar10 = (int)*(short *)pAVar2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < iVar16) {
      iVar16 = iVar6;
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar10 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar10 = (int)*(short *)pAVar2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < iVar16) {
      iVar16 = iVar6;
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar10 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,
                 -(float)param_1->field_00D0,&local_20,&local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar10 = (int)*(short *)pAVar2;
    if (iVar10 <= iVar6) {
      iVar6 = iVar10 + -1;
    }
    if (iVar6 < iVar16) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar16 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    fVar1 = (float)((float10)param_1->field_00D0 * (float10)_DAT_0079df90);
    sub_006E1C20(param_1,(float)param_1->field_0030,param_1->field_0034,fVar1,&local_20,&local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar16 = (int)*(short *)pAVar2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar16 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)param_1->field_0030,param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar16 = (int)*(short *)pAVar2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar16 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_003C + -1,fVar1,&local_20,
                 &local_28);
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    iVar16 = (int)*(short *)pAVar2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar16 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (local_c0 < iVar6) {
      local_c0 = iVar6;
    }
    sub_006E1C20(param_1,(float)(param_1->field_0038 + -1),param_1->field_0034,fVar1,&local_20,
                 &local_28);
    local_84 = (double)local_28;
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    pAVar2 = param_1->field_0280;
    local_f8 = (int)*(short *)pAVar2;
    if (local_f8 <= iVar6) {
      iVar6 = local_f8 + -1;
    }
    if (iVar6 < local_a0) {
      local_a0 = iVar6;
    }
    if (local_c4 < iVar6) {
      local_c4 = iVar6;
    }
    lVar19 = Library::MSVCRT::__ftol();
    iVar6 = (int)lVar19;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    iVar16 = (int)*(short *)&pAVar2->field_0x2;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16 + -1;
    }
    if (iVar6 < local_9c) {
      local_9c = iVar6;
    }
    if (iVar6 <= local_c0) goto LAB_006defd4;
  }
  local_c0 = iVar6;
LAB_006defd4:
  local_9c = local_9c >> 1;
  iVar6 = local_c4 >> 1;
  if (local_c4 < local_f8 + -2) {
    iVar6 = iVar6 + 1;
  }
  iVar10 = local_c0 >> 1;
  if (local_c0 < iVar16 + -2) {
    iVar10 = iVar10 + 1;
  }
  param_1->field_0140 = nullptr;
  param_1->field_013C = 0;
  local_60 = 5;
  local_a0 = local_a0 >> 1;
  do {
    pAVar2 = param_1->field_0280;
    iVar16 = (int)*(short *)&pAVar2->field_0x2 * (int)*(short *)pAVar2 * local_60;
    local_4c = &pAVar2[1].field_0xc + ((int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2) * 4;
    iVar16 = local_a0;
    for (local_5c = local_9c; local_a0 = iVar16, local_5c <= iVar10; local_5c = local_5c + 1) {
      if (iVar16 <= iVar6) {
        piVar14 = (int *)(local_4c + ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar16) * 4);
        do {
          if ((*piVar14 != 0) && (iVar7 = FUN_006de570(param_1,iVar16,local_5c), iVar7 != 0)) {
            pRVar3 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)*piVar14;
            pRVar3->next = param_1->field_0140;
            param_1->field_0140 = pRVar3;
            param_1->field_013C = param_1->field_013C + 1;
          }
          iVar16 = iVar16 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar16 <= iVar6);
      }
      iVar16 = local_a0;
    }
    local_60 = local_60 + -1;
    local_5c = local_9c;
  } while (0 < local_60);
  for (; iVar17 = local_9c, local_5c <= iVar10; local_5c = local_5c + 1) {
    local_a0 = iVar16;
    if (iVar16 <= iVar6) {
      iVar17 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar16) * 4;
      do {
        iVar11 = *(int *)(&param_1->field_0280[1].field_0xc + iVar17);
        if (((iVar11 != 0) && (*(int *)(iVar11 + 0x24) < 3)) &&
           (local_EAX_2002 = FUN_006de570(param_1,iVar16,local_5c), local_EAX_2002 != 0)) {
          pRVar3 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)
                    (&param_1->field_0280[1].field_0xc + iVar17);
          pRVar3->next = param_1->field_0140;
          param_1->field_0140 = pRVar3;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 4;
      } while (iVar16 <= iVar6);
    }
    iVar16 = local_a0;
  }
  while (local_5c = iVar17, local_a0 = iVar16, local_5c <= iVar10) {
    if (iVar16 <= iVar6) {
      iVar17 = ((*(short *)param_1->field_0280 * local_5c) / 2 + iVar16) * 4;
      do {
        iVar11 = *(int *)(&param_1->field_0280[1].field_0xc + iVar17);
        if (((iVar11 != 0) && (2 < *(int *)(iVar11 + 0x24))) &&
           (iVar8 = FUN_006de570(param_1,iVar16,local_5c), iVar8 != 0)) {
          pRVar3 = *(RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 **)
                    (&param_1->field_0280[1].field_0xc + iVar17);
          pRVar3->next = param_1->field_0140;
          param_1->field_0140 = pRVar3;
          param_1->field_013C = param_1->field_013C + 1;
        }
        iVar16 = iVar16 + 1;
        iVar17 = iVar17 + 4;
      } while (iVar16 <= iVar6);
    }
    iVar16 = local_a0;
    iVar17 = local_5c + 1;
  }
  local_50 = param_1->field_0140;
  iVar17 = param_1->field_013C;
  if ((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) {
    if (local_9c == 0) {
      for (; iVar16 <= iVar6; iVar16 = iVar16 + 1) {
        local_EAX_2343 = FUN_006de570(param_1,iVar16,-1);
        if (local_EAX_2343 != 0) {
          local_8 = 0;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_2489 = FUN_006de570(param_1,iVar16,-2);
        if (local_EAX_2489 != 0) {
          local_8 = 1;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      if (local_a0 == 0) {
        iVar12 = FUN_006de570(param_1,-1,-1);
        if (iVar12 != 0) {
          local_8 = 2;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_2895 = FUN_006de570(param_1,-1,-2);
        if (local_EAX_2895 != 0) {
          local_8 = 3;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_3147 = FUN_006de570(param_1,-2,-1);
        if (local_EAX_3147 != 0) {
          local_8 = 4;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_3291 = FUN_006de570(param_1,-2,-2);
        if (local_EAX_3291 != 0) {
          local_8 = 5;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar16 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar16 + -1 <= iVar6) {
        local_EAX_3561 = FUN_006de570(param_1,iVar16,-1);
        if (local_EAX_3561 != 0) {
          local_8 = 6;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_3707 = FUN_006de570(param_1,iVar16,-2);
        if (local_EAX_3707 != 0) {
          local_8 = 7;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_3954 = FUN_006de570(param_1,iVar16 + 1,-1);
        if (local_EAX_3954 != 0) {
          local_8 = 8;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_4104 = FUN_006de570(param_1,iVar16 + 1,-2);
        if (local_EAX_4104 != 0) {
          local_8 = 9;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar11 = (int)*(short *)&param_1->field_0280->field_0x2 / 2;
    iVar16 = local_a0;
    if (iVar11 + -1 <= iVar10) {
      for (; local_54 = iVar16, iVar16 <= iVar6; iVar16 = iVar16 + 1) {
        local_EAX_4401 = FUN_006de570(param_1,iVar16,iVar11);
        if (local_EAX_4401 != 0) {
          local_8 = 10;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar16 = local_54;
        }
        iVar9 = FUN_006de570(param_1,iVar16,iVar11 + 1);
        if (iVar9 != 0) {
          local_8 = 0xb;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
          iVar16 = local_54;
        }
      }
      if (local_a0 == 0) {
        local_EAX_4830 = FUN_006de570(param_1,-1,iVar11);
        if (local_EAX_4830 != 0) {
          local_8 = 0xc;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_4979 = FUN_006de570(param_1,-1,iVar11 + 1);
        if (local_EAX_4979 != 0) {
          local_8 = 0xd;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_5224 = FUN_006de570(param_1,-2,iVar11);
        if (local_EAX_5224 != 0) {
          local_8 = 0xe;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_5373 = FUN_006de570(param_1,-2,iVar11 + 1);
        if (local_EAX_5373 != 0) {
          local_8 = 0xf;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
      iVar16 = (int)*(short *)param_1->field_0280 / 2;
      if (iVar16 + -1 <= iVar6) {
        local_EAX_5656 = FUN_006de570(param_1,iVar16,iVar11);
        if (local_EAX_5656 != 0) {
          local_8 = 0x10;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_5821 = FUN_006de570(param_1,iVar16,iVar11 + 1);
        if (local_EAX_5821 != 0) {
          local_8 = 0x11;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_6081 = FUN_006de570(param_1,iVar16 + 1,iVar11);
        if (local_EAX_6081 != 0) {
          local_8 = 0x12;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_6248 = FUN_006de570(param_1,iVar16 + 1,iVar11 + 1);
        if (local_EAX_6248 != 0) {
          local_8 = 0x13;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar16 = local_9c;
    if (local_a0 == 0) {
      for (; iVar16 <= iVar10; iVar16 = iVar16 + 1) {
        local_EAX_6533 = FUN_006de570(param_1,-1,iVar16);
        if (local_EAX_6533 != 0) {
          local_8 = 0x14;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_6679 = FUN_006de570(param_1,-2,iVar16);
        if (local_EAX_6679 != 0) {
          local_8 = 0x15;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar11 = 0x14; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
    iVar11 = (int)*(short *)param_1->field_0280 / 2;
    iVar16 = local_9c;
    if (iVar11 + -1 <= iVar6) {
      for (; iVar16 <= iVar10; iVar16 = iVar16 + 1) {
        iVar5 = FUN_006de570(param_1,iVar11,iVar16);
        if (iVar5 != 0) {
          local_8 = 0x16;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
        local_EAX_7142 = FUN_006de570(param_1,iVar11 + 1,iVar16);
        if (local_EAX_7142 != 0) {
          local_8 = 0x17;
          Library::MSVCRT::FUN_0072da40();
          local_8 = 0xffffffff;
          puVar18 = (undefined4 *)&stack0xfffffee8;
          local_1c = &stack0xfffffee8;
          for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar18 = 0;
            puVar18 = puVar18 + 1;
          }
          param_1->field_0140 = (RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *)&stack0xfffffee8;
          param_1->field_013C = param_1->field_013C + 1;
        }
      }
    }
  }
  sub_006DDD50(param_1);
  param_1->field_0140 = local_50;
  param_1->field_013C = iVar17;
  local_38 = param_1->field_0030;
  local_34 = param_1->field_0034;
  local_30 = param_1->field_0038 - local_38;
  local_2c = param_1->field_003C - local_34;
  local_24 = 0;
  if (0 < param_1->field_028C) {
    pfVar15 = (float *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)pfVar15[7];
      if (pbVar4 != nullptr) {
        local_94 = *pfVar15;
        local_90 = pfVar15[1];
        local_8c = pfVar15[2];
        sub_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
        if (param_1->field_02F0 == 100) {
          local_54 = (local_48 >> 0x10) - (int)*(short *)(pfVar15 + 5);
          local_5c = (local_44 >> 0x10) - (int)STField<short>(pfVar15,0x16);
          local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
          local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
          local_ac = (int)*(short *)(pbVar4 + 0x12);
          local_a8 = (int)*(short *)(pbVar4 + 0x14);
        }
        else {
          local_ac = *(int *)(pbVar4 + 4);
          local_88 = *(int *)(pbVar4 + 8);
          local_a4 = (local_ac * param_1->field_02F0) / 100;
          iVar6 = (local_88 * param_1->field_02F4) / 100;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar16 = (int)((ulonglong)
                         ((longlong)((int)*(short *)(pfVar15 + 5) * param_1->field_02F0) *
                         -0x51eb851f) >> 0x20);
          local_54 = (local_48 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
          iVar16 = (int)((ulonglong)
                         ((longlong)((int)STField<short>(pfVar15,0x16) * param_1->field_02F4) *
                         -0x51eb851f) >> 0x20);
          local_5c = (local_44 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
          local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
          local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
          local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
          local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
        }
        iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
        if (iVar6 != 0) {
          SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00702510::FUN_00708d10
                    ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4
                     ,local_54,local_5c,local_40,(int)pfVar15[4],1);
        }
      }
      local_24 = local_24 + 1;
      pfVar15 = pfVar15 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar18 = (undefined4 *)param_1->field_0294; puVar18 != nullptr;
      puVar18 = (undefined4 *)*puVar18) {
    pbVar4 = (byte *)puVar18[9];
    if (pbVar4 != nullptr) {
      local_94 = (float)puVar18[2];
      local_90 = (float)puVar18[3];
      local_8c = (float)puVar18[4];
      sub_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar18 + 7);
        local_5c = (local_44 >> 0x10) - (int)STField<short>(puVar18,0x1e);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar6 = (local_88 * param_1->field_02F4) / 100;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar16 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(puVar18 + 7) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        iVar16 = (int)((ulonglong)
                       ((longlong)((int)STField<short>(puVar18,0x1e) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
      }
      iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
      if (iVar6 != 0) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00702510::FUN_00708d10
                  ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                   local_54,local_5c,puVar18[6] + local_40,0,1);
      }
    }
  }
  local_24 = 0;
  if (0 < param_1->field_028C) {
    pfVar15 = (float *)(param_1->field_0290 + 8);
    do {
      pbVar4 = (byte *)pfVar15[6];
      local_94 = *pfVar15;
      local_90 = pfVar15[1];
      local_8c = pfVar15[2];
      sub_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
      if (param_1->field_02F0 == 100) {
        local_54 = (local_48 >> 0x10) - (int)*(short *)(pfVar15 + 5);
        local_5c = (local_44 >> 0x10) - (int)STField<short>(pfVar15,0x16);
        local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
        local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
        local_ac = (int)*(short *)(pbVar4 + 0x12);
        local_a8 = (int)*(short *)(pbVar4 + 0x14);
      }
      else {
        local_ac = *(int *)(pbVar4 + 4);
        local_88 = *(int *)(pbVar4 + 8);
        local_a4 = (local_ac * param_1->field_02F0) / 100;
        iVar6 = (local_88 * param_1->field_02F4) / 100;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar16 = (int)((ulonglong)
                       ((longlong)((int)*(short *)(pfVar15 + 5) * param_1->field_02F0) * -0x51eb851f
                       ) >> 0x20);
        local_54 = (local_48 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        iVar16 = (int)((ulonglong)
                       ((longlong)((int)STField<short>(pfVar15,0x16) * param_1->field_02F4) *
                       -0x51eb851f) >> 0x20);
        local_5c = (local_44 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
        local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
        local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
        local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
        local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
      }
      iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
      if (iVar6 != 0) {
        SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00702510::FUN_00708d10
                  ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                   local_54,local_5c,local_40,(int)pfVar15[4],0);
      }
      local_24 = local_24 + 1;
      pfVar15 = pfVar15 + 0xb;
    } while (local_24 < param_1->field_028C);
  }
  for (puVar18 = (undefined4 *)param_1->field_0294; puVar18 != nullptr;
      puVar18 = (undefined4 *)*puVar18) {
    pbVar4 = (byte *)puVar18[8];
    local_94 = (float)puVar18[2];
    local_90 = (float)puVar18[3];
    local_8c = (float)puVar18[4];
    sub_006E25D0(param_1,&local_48,&local_94,0.0,0.0,0.0,0);
    if (param_1->field_02F0 == 100) {
      local_54 = (local_48 >> 0x10) - (int)*(short *)(puVar18 + 7);
      local_5c = (local_44 >> 0x10) - (int)STField<short>(puVar18,0x1e);
      local_b4 = *(short *)(pbVar4 + 0xe) + local_54;
      local_b0 = *(short *)(pbVar4 + 0x10) + local_5c;
      local_ac = (int)*(short *)(pbVar4 + 0x12);
      local_a8 = (int)*(short *)(pbVar4 + 0x14);
    }
    else {
      local_ac = *(int *)(pbVar4 + 4);
      local_88 = *(int *)(pbVar4 + 8);
      local_a4 = (local_ac * param_1->field_02F0) / 100;
      iVar6 = (local_88 * param_1->field_02F4) / 100;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar16 = (int)((ulonglong)
                     ((longlong)((int)*(short *)(puVar18 + 7) * param_1->field_02F0) * -0x51eb851f)
                    >> 0x20);
      local_54 = (local_48 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
      iVar16 = (int)((ulonglong)
                     ((longlong)((int)STField<short>(puVar18,0x1e) * param_1->field_02F4) *
                     -0x51eb851f) >> 0x20);
      local_5c = (local_44 >> 0x10) + ((iVar16 >> 5) - (iVar16 >> 0x1f));
      local_b4 = (local_ac / 2 + *(short *)(pbVar4 + 0xe) * local_a4) / local_ac + local_54;
      local_b0 = (local_88 / 2 + *(short *)(pbVar4 + 0x10) * iVar6) / local_88 + local_5c;
      local_ac = (*(short *)(pbVar4 + 0x12) * local_a4) / local_ac;
      local_a8 = (*(short *)(pbVar4 + 0x14) * iVar6) / local_88;
    }
    iVar6 = FUN_006b0460(local_70,&local_b4,&local_38);
    if (iVar6 != 0) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00702510::FUN_00708d10
                ((AnonReceiver_00702510 *)param_1,param_1->field_000C,param_1->field_0028,pbVar4,
                 local_54,local_5c,puVar18[6] + local_40,0,0);
    }
  }
  if (((((param_1->field_0124 != 10) && (param_1->field_0124 != 1)) && (param_1->field_0298 != 0))
      && ((param_1->field_0004 != nullptr &&
          ((param_1->field_0004->field_000C & 0x1100) != 0x100)))) &&
     ((param_1->field_02DC == 0 || (param_1->field_02D8 != 0)))) {
    iVar6 = param_1->field_0030;
    iVar16 = param_1->field_0038;
    iVar17 = param_1->field_0028 * param_1->field_0034 + param_1->field_000C + iVar6;
    iVar10 = param_1->field_003C - param_1->field_0034;
    while (iVar10 != 0) {
      for (iVar11 = 0; iVar11 < iVar16 - iVar6; iVar11 = iVar11 + 1) {
        *(undefined1 *)(iVar11 + iVar17) =
             *(undefined1 *)(param_1->field_0298 + (uint)*(byte *)(iVar11 + iVar17));
      }
      iVar17 = iVar17 + param_1->field_0028;
      iVar10 = iVar10 + -1;
    }
  }
  param_1->field_0134 = 0;
  ExceptionList = local_14;
  return;
}

