#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Td3dshad.cpp
   Diagnostic line evidence: 1935 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __thiscall
FUN_00427f20(void *this,float param_1,float param_2,float param_3,int param_4,int param_5,
            int *param_6)

{
  double dVar1;
  undefined1 *puVar2;
  int local_EAX_196;
  int iVar3;
  int local_EAX_311;
  int local_EAX_369;
  int local_EAX_444;
  int local_EAX_500;
  int iVar4;
  int iVar5;
  int *piVar3;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_8c;
  int local_6c;
  float local_60;
  float local_5c;
  undefined4 local_58;
  int local_54 [4];
  int local_44;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_00790550;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff3c;
  local_30 = 0;
  DAT_007f4d84 = 0;
  DAT_007f4d78 = 0;
  DAT_007f4d6c = nullptr;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffff3c;
  if (param_4 < 1) goto cf_common_join_004286D0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  ExceptionList = &local_14;
  puVar2 = &stack0xffffff3c;
  if (param_4 < param_5) goto cf_common_join_004286D0;
  iVar7 = param_4 * 2 + 1;
  _DAT_007f4d70 = param_4;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffff3c;
  if (param_4 - param_5 < 100) goto cf_common_join_004286D0;
  local_5c = (float)param_4 * (float)STField<double>(this,0x368);
  local_60 = param_1 - local_5c;
  local_5c = param_2 - local_5c;
  local_58 = 0;
  ExceptionList = &local_14;
  local_EAX_196 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
  iVar5 = 1;
  if (local_EAX_196 != 1) {
    local_60 = (float)iVar7 * (float)STField<double>(this,0x368) + local_60;
    iVar3 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
    iVar5 = 1;
    if (iVar3 != 1) {
      local_5c = (float)iVar7 * (float)STField<double>(this,0x368) + local_5c;
      local_EAX_311 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
      iVar5 = 1;
      if (local_EAX_311 != 1) {
        local_60 = param_1 - (float)param_4 * (float)STField<double>(this,0x368);
        local_EAX_369 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
        iVar5 = 1;
        if (local_EAX_369 != 1) {
          local_5c = (float)param_4 * (float)STField<double>(this,0x368);
          local_60 = param_1 - local_5c;
          local_5c = param_2 - local_5c;
          local_58 = 0x424751eb;
          local_EAX_444 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
          iVar5 = 1;
          if (local_EAX_444 != 1) {
            local_60 = (float)iVar7 * (float)STField<double>(this,0x368) + local_60;
            local_EAX_500 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
            iVar5 = 1;
            if (local_EAX_500 != 1) {
              local_5c = (float)iVar7 * (float)STField<double>(this,0x368) + local_5c;
              iVar4 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
              iVar5 = 1;
              if (iVar4 != 1) {
                local_60 = param_1 - (float)param_4 * (float)STField<double>(this,0x368);
                iVar5 = ST3DSMAPContext::sub_006E25D0(this,local_54,&local_60,0.0,0.0,0.0,1);
              }
            }
          }
        }
      }
    }
  }
  puVar2 = local_1c;
  if (iVar5 == 0) goto cf_common_join_004286D0;
  dVar1 = (double)(param_1 / (float)STField<double>(this,0x368));
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar15 = Library::MSVCRT::__ftol();
  DAT_007f4d7c = (int)lVar15;
  iVar7 = -param_4;
  local_34 = param_4;
  if (STField<int>(this,0x370) <= DAT_007f4d7c + param_4) {
    local_34 = (STField<int>(this,0x370) - DAT_007f4d7c) + -1;
  }
  local_2c = iVar7;
  if (DAT_007f4d7c + iVar7 < 0) {
    local_2c = -DAT_007f4d7c;
  }
  dVar1 = (double)(param_2 / (float)STField<double>(this,0x368));
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar15 = Library::MSVCRT::__ftol();
  DAT_007f4d80 = (int)lVar15;
  iVar10 = param_4;
  if (STField<int>(this,0x370) <= DAT_007f4d80 + param_4) {
    iVar10 = (STField<int>(this,0x370) - DAT_007f4d80) + -1;
  }
  if (DAT_007f4d80 + iVar7 < 0) {
    iVar7 = -DAT_007f4d80;
  }
  puVar2 = local_1c;
  if ((local_34 == local_2c || local_34 - local_2c < 0) || (iVar10 == iVar7 || iVar10 - iVar7 < 0))
  goto cf_common_join_004286D0;
  Library::MSVCRT::FUN_0072e150
            (SUB84((double)(param_3 * _DAT_00790538),0),
             (uint)((ulonglong)(double)(param_3 * _DAT_00790538) >> 0x20));
  iVar6 = (param_4 + 1U) * -0x10;
  local_38 = (int *)(&stack0xffffff3c + iVar6);
  *(undefined4 *)(&stack0xffffff38 + iVar6) = 0x428296;
  piVar3 = local_38;
  local_8 = 0xffffffff;
  iVar8 = param_4 * 0x10;
  g_runtimeRecords_007F4D74 = (RuntimeRecord_007F4D74_0010 *)(&stack0xffffff3c + iVar8);
  piVar12 = local_38;
  for (iVar6 = (param_4 + 1U & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar12 = 0;
    piVar12 = (int *)((int)piVar12 + 1);
  }
  local_1c = &stack0xffffff3c;
  *local_38 = param_4;
  piVar3[1] = param_5;
  iVar13 = param_4 * param_4;
  local_44 = 0;
  local_6c = param_4;
  iVar6 = (1 - param_4) * iVar13 + ((int)(iVar13 + (iVar13 >> 0x1f & 3U)) >> 2);
  local_8c = 0;
  iVar11 = iVar13 * 2 * param_4;
  if (0 < iVar11) {
    piVar3 = local_38 + param_4 * 4;
    do {
      if (0 < iVar6) {
        *piVar3 = local_44;
        local_6c = local_6c + -1;
        piVar3 = piVar3 + -4;
        iVar11 = iVar11 + iVar13 * -2;
        iVar6 = iVar6 - iVar11;
      }
      local_44 = local_44 + 1;
      local_8c = local_8c + iVar13 * 2;
      iVar6 = iVar6 + local_8c + iVar13;
    } while (local_8c < iVar11);
  }
  iVar6 = iVar6 - (local_8c + iVar11) / 2;
  if (-1 < local_6c) {
    piVar3 = local_38 + local_6c * 4;
    local_b0 = local_6c + 1;
    iVar9 = local_44;
    do {
      *piVar3 = iVar9;
      piVar3 = piVar3 + -4;
      if (iVar6 < 0) {
        iVar9 = iVar9 + 1;
        local_8c = local_8c + iVar13 * 2;
        iVar6 = iVar6 + local_8c;
      }
      iVar11 = iVar11 + iVar13 * -2;
      iVar6 = iVar6 + (iVar13 - iVar11);
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  if (0 < param_5) {
    iVar9 = param_5 * param_5;
    iVar6 = iVar9 * 2;
    local_44 = 0;
    local_6c = param_5;
    iVar11 = (1 - param_5) * iVar9 + ((int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2);
    local_8c = 0;
    iVar13 = iVar6 * param_5;
    if (0 < iVar13) {
      local_b4 = local_38 + param_5 * 4 + 1;
      do {
        if (0 < iVar11) {
          *local_b4 = local_44;
          local_6c = local_6c + -1;
          local_b4 = local_b4 + -4;
          iVar13 = iVar13 + iVar9 * -2;
          iVar11 = iVar11 - iVar13;
        }
        local_44 = local_44 + 1;
        local_8c = local_8c + iVar6;
        iVar11 = iVar11 + local_8c + iVar9;
      } while (local_8c < iVar13);
    }
    iVar11 = iVar11 - (local_8c + iVar13) / 2;
    if (-1 < local_6c) {
      piVar3 = local_38 + local_6c * 4 + 1;
      local_b8 = local_6c + 1;
      do {
        *piVar3 = local_44;
        piVar3 = piVar3 + -4;
        if (iVar11 < 0) {
          local_44 = local_44 + 1;
          local_8c = local_8c + iVar6;
          iVar11 = iVar11 + local_8c;
        }
        iVar13 = iVar13 + iVar9 * -2;
        iVar11 = iVar11 + (iVar9 - iVar13);
        local_b8 = local_b8 + -1;
      } while (local_b8 != 0);
    }
  }
  iVar6 = *local_38;
  iVar11 = -iVar6;
  if (-iVar6 < local_2c) {
    iVar11 = local_2c;
  }
  if (local_34 < iVar6) {
    iVar6 = local_34;
  }
  g_runtimeRecords_007F4D74->field_0000 = iVar11;
  (&local_b8)[param_4 * 4] = iVar6;
  if (param_5 < 1) {
    *(int *)(&stack0xffffff40 + iVar8) = (&local_b8)[param_4 * 4];
    *(int *)(&stack0xffffff44 + iVar8) = g_runtimeRecords_007F4D74->field_0000;
  }
  else {
    iVar6 = local_38[1];
    iVar11 = -iVar6;
    if (-local_34 != iVar6 && local_34 <= -iVar6) {
      iVar11 = local_34;
    }
    if (iVar6 < local_2c) {
      iVar6 = local_2c;
    }
    *(int *)(&stack0xffffff40 + iVar8) = iVar11;
    *(int *)(&stack0xffffff44 + iVar8) = iVar6;
  }
  iVar6 = 1;
  if (0 < param_4) {
    iVar8 = 0x10;
    piVar3 = local_38;
    do {
      iVar11 = piVar3[4];
      iVar13 = -iVar11;
      if (-iVar11 < local_2c) {
        iVar13 = local_2c;
      }
      if (local_34 < iVar11) {
        iVar11 = local_34;
      }
      *(int *)((int)g_runtimeRecords_007F4D74 - iVar8) = iVar13;
      *(int *)((int)&g_runtimeRecords_007F4D74->field_0000 + iVar8) = iVar13;
      *(int *)((int)g_runtimeRecords_007F4D74 + (0xc - iVar8)) = iVar11;
      *(int *)((int)&g_runtimeRecords_007F4D74->field_000C + iVar8) = iVar11;
      if (param_5 < iVar6) {
        *(undefined4 *)((int)g_runtimeRecords_007F4D74 + (4 - iVar8)) =
             *(undefined4 *)((int)g_runtimeRecords_007F4D74 + (0xc - iVar8));
        *(undefined4 *)((int)&g_runtimeRecords_007F4D74->field_0004 + iVar8) =
             *(undefined4 *)((int)&g_runtimeRecords_007F4D74->field_000C + iVar8);
        ((undefined4 *)((int)g_runtimeRecords_007F4D74 - iVar8))[2] =
             *(undefined4 *)((int)g_runtimeRecords_007F4D74 - iVar8);
        iVar11 = *(int *)((int)&g_runtimeRecords_007F4D74->field_0000 + iVar8);
      }
      else {
        iVar11 = piVar3[5];
        iVar13 = -iVar11;
        if (-local_34 != iVar11 && local_34 <= -iVar11) {
          iVar13 = local_34;
        }
        if (iVar11 < local_2c) {
          iVar11 = local_2c;
        }
        *(int *)((int)g_runtimeRecords_007F4D74 + (4 - iVar8)) = iVar13;
        *(int *)((int)&g_runtimeRecords_007F4D74->field_0004 + iVar8) = iVar13;
        *(int *)((int)g_runtimeRecords_007F4D74 + (8 - iVar8)) = iVar11;
      }
      *(int *)((int)&g_runtimeRecords_007F4D74->field_0008 + iVar8) = iVar11;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
      piVar3 = piVar3 + 4;
    } while (iVar6 <= param_4);
  }
  if (param_5 < 1) {
    local_30 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00427bb0
                         (this,iVar7,iVar10,0);
joined_r0x004286bb:
    puVar2 = local_1c;
    if (local_30 != 0) goto cf_common_join_004286D0;
  }
  else {
    iVar6 = -1 - param_5;
    if (iVar10 < -1 - param_5) {
      iVar6 = iVar10;
    }
    if ((iVar7 <= iVar6) &&
       (local_30 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00427bb0
                             (this,iVar7,iVar6,0), puVar2 = local_1c, local_30 != 0))
    goto cf_common_join_004286D0;
    iVar6 = -param_5;
    if (-param_5 < iVar7) {
      iVar6 = iVar7;
    }
    iVar8 = param_5;
    if (iVar10 < param_5) {
      iVar8 = iVar10;
    }
    if ((iVar6 <= iVar8) &&
       ((local_30 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::
                    thunk_FUN_00427bb0(this,iVar6,iVar8,-1), puVar2 = local_1c, local_30 != 0 ||
        (local_30 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::
                    thunk_FUN_00427bb0(this,iVar6,iVar8,1), puVar2 = local_1c, local_30 != 0))))
    goto cf_common_join_004286D0;
    iVar6 = param_5 + 1;
    if (param_5 + 1 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar6 <= iVar10) {
      local_30 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::thunk_FUN_00427bb0
                           (this,iVar6,iVar10,0);
      goto joined_r0x004286bb;
    }
  }
  puVar2 = local_1c;
  if (DAT_007f4d78 == 0) {
    FreeAndNull(&DAT_007f4d6c);
    puVar2 = local_1c;
  }
cf_common_join_004286D0:
  local_1c = puVar2;
  iVar7 = 0;
  if (local_30 == 0) {
    if ((param_6[7] != 0) && (param_6[8] != 0)) {
      if (0 < param_6[7]) {
        puVar14 = (undefined4 *)(param_6[8] + 8);
        do {
          FUN_006a5e90((short *)*puVar14);
          puVar14 = puVar14 + 3;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_6[7]);
      }
      FreeAndNull(param_6 + 8);
    }
    *param_6 = DAT_007f4d7c;
    param_6[1] = DAT_007f4d80;
    param_6[2] = 0;
    param_6[3] = 0;
    param_6[4] = 0;
    param_6[5] = 0;
    param_6[6] = 0;
    param_6[7] = DAT_007f4d78;
    param_6[8] = (int)DAT_007f4d6c;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    if (0 < DAT_007f4d78) {
      iVar10 = 0;
      do {
        FUN_006a5e90(*(short **)(iVar10 + 8 + (int)DAT_007f4d6c));
        iVar7 = iVar7 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar7 < DAT_007f4d78);
    }
    FUN_006a5e90(DAT_007f4d6c);
    iVar7 = local_30;
    RaiseInternalException
              (local_30,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\Td3dshad.cpp",0x78f);
  }
  ExceptionList = local_14;
  return iVar7;
}

