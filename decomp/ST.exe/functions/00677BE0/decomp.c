#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 924 | 954 | 955 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumRCCont(short param_1,short param_2,byte *param_3,short param_4,short param_5,short param_6,
           short param_7,short param_8,short param_9,undefined *param_10,undefined4 param_11)

{
  byte bVar1;
  int *this;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  DArrayTy *pDVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x3ba,0,iVar3,"%s",
                               "_EnumRCCont");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x3bb);
    return iVar3;
  }
  if (PTR_007fa160 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x39c);
  }
  uVar8 = PTR_007fa160->count - 1;
  pDVar7 = PTR_007fa160;
  if ((int)uVar8 < 0) {
    g_currentExceptionFrame = local_70.previous;
    return local_18;
  }
  do {
    if (uVar8 < pDVar7->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar7, uVar8) (runtime stride) */
      puVar4 = (undefined4 *)(pDVar7->elementSize * uVar8 + (int)pDVar7->data);
    }
    else {
      puVar4 = (undefined4 *)0x0;
    }
    this = (int *)*puVar4;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((this != (int *)0x0) &&
        (local_10 = uVar8, local_1c = (**(code **)(*this + 300))(), pDVar7 = PTR_007fa160,
        (short)local_1c == param_1)) &&
       ((param_2 == 0 ||
        (iVar3 = (**(code **)(*this + 0x130))(), pDVar7 = PTR_007fa160, iVar3 == param_2)))) {
      iVar3 = 1;
      local_14 = 1;
      if ((param_3 != (byte *)0x0) && (*param_3 != 0)) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*this + 0x74))(local_2c);
        pbVar9 = local_2c;
        pbVar5 = param_3;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_00677ce9:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00677cee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_00677ce9;
          pbVar5 = pbVar5 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00677cee:
        if (iVar6 != 0) {
          iVar3 = 0;
          local_14 = 0;
        }
      }
      pDVar7 = PTR_007fa160;
      uVar8 = local_10;
      if (iVar3 != 0) {
        if ((((0 < param_7) && (0 < param_8)) && (0 < param_9)) &&
           ((((thunk_FUN_004162f0(this,&local_6,&local_8,&local_a), local_6 < param_4 ||
              (local_8 < param_5)) ||
             ((local_a < param_6 ||
              (((int)param_4 + (int)param_7 <= (int)local_6 ||
               ((int)param_5 + (int)param_8 <= (int)local_8)))))) ||
            (iVar3 = local_14, (int)param_6 + (int)param_9 <= (int)local_a)))) {
          iVar3 = 0;
        }
        pDVar7 = PTR_007fa160;
        uVar8 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar3 != 0) && (param_10 != (undefined *)0x0)) &&
           (iVar3 = (*(code *)param_10)(local_1c,local_10,this,param_11), pDVar7 = PTR_007fa160,
           uVar8 = local_10, iVar3 != 0)) {
          g_currentExceptionFrame = local_70.previous;
          return -1;
        }
      }
    }
    uVar8 = uVar8 - 1;
    if ((int)uVar8 < 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_18;
    }
  } while( true );
}

