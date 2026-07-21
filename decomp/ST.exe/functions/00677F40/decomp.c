#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 993 | 1020 | 1021 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumArt(short param_1,byte *param_2,short param_3,short param_4,short param_5,short param_6,
        short param_7,short param_8,undefined *param_9,undefined4 param_10)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x3fc,0,iVar3,"%s",
                               "_EnumArt");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x3fd);
    return iVar3;
  }
  if (PTR_007fa154 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x3e1);
  }
  local_10 = PTR_007fa154->count - 1;
  if ((int)local_10 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (local_10 < PTR_007fa154->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(PTR_007fa154, local_10) (runtime stride) */
      puVar4 = (undefined4 *)(PTR_007fa154->elementSize * local_10 + (int)PTR_007fa154->data);
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (int *)*puVar4;
    if ((this != (int *)0x0) && ((param_1 == 0 || (*(int *)((int)this + 0x342) == (int)param_1)))) {
      iVar3 = 1;
      local_14 = 1;
      if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*this + 0x74))(local_28);
        pbVar7 = local_28;
        pbVar5 = param_2;
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00678031:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00678036;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00678031;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00678036:
        if (iVar6 != 0) {
          iVar3 = 0;
          local_14 = 0;
        }
      }
      if (iVar3 != 0) {
        if ((((0 < param_6) && (0 < param_7)) && (0 < param_8)) &&
           ((((thunk_FUN_004162f0(this,&local_6,&local_8,&local_a), local_6 < param_3 ||
              (local_8 < param_4)) ||
             ((local_a < param_5 ||
              (((int)param_3 + (int)param_6 <= (int)local_6 ||
               ((int)param_4 + (int)param_7 <= (int)local_8)))))) ||
            (iVar3 = local_14, (int)param_5 + (int)param_8 <= (int)local_a)))) {
          iVar3 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar3 != 0) && (param_9 != (undefined *)0x0)) &&
           (iVar3 = (*(code *)param_9)(0,local_10,this,param_10), iVar3 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

