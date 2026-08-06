#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 1113 | 1136 | 1137 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumDest(byte *param_1,char param_2,short param_3,short param_4,short param_5,short param_6,
         short param_7,short param_8,undefined *param_9,undefined4 param_10)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if ((param_2 < '\0') || (local_5 = param_2, '\a' < param_2)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x470,0,iVar3,"%s",
                               "_EnumDest");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x471);
    return iVar3;
  }
  if (g_array_007FA164 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x459);
  }
  local_10 = g_array_007FA164->count - 1;
  if ((int)local_10 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (local_10 < g_array_007FA164->count) {
      puVar3 = DArrayAt<undefined4>(g_array_007FA164, local_10);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if (this != nullptr) {
      iVar7 = 1;
      local_14 = 1;
      if ((param_1 != nullptr) && (*param_1 != 0)) {
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar8 = local_28;
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0067868d:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678692;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0067868d;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00678692:
        if (iVar5 != 0) {
          iVar7 = 0;
          local_14 = 0;
        }
      }
      if ((iVar7 != 0) &&
         ((local_5 == -1 || (iVar5 = this->vfunc_6C(), local_5 == iVar5)))) {
        if ((0 < param_6) &&
           (((0 < param_7 && (0 < param_8)) &&
            ((STFishC::sub_004162B0(this,&local_8,&local_a,&local_c), local_8 < param_3 ||
             ((((local_a < param_4 || (local_c < param_5)) ||
               ((int)param_3 + (int)param_6 <= (int)local_8)) ||
              (((int)param_4 + (int)param_7 <= (int)local_a ||
               (iVar7 = local_14, (int)param_5 + (int)param_8 <= (int)local_c)))))))))) {
          iVar7 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        if (((iVar7 != 0) && (param_9 != nullptr)) &&
           (iVar7 = (*(code *)param_9)(0,local_10,this,param_10), iVar7 != 0)) {
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

