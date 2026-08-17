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
  if (g_array_007FA154 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x3e1);
  }
  local_10 = g_array_007FA154->count - 1;
  if ((int)local_10 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (local_10 < g_array_007FA154->count) {
      puVar3 = DArrayAt<undefined4>(g_array_007FA154, local_10);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if ((this != nullptr) &&
       ((param_1 == 0 || (*(int *)&this[1].field_0xd7 == (int)param_1)))) {
      iVar7 = 1;
      local_14 = 1;
      if ((param_2 != nullptr) && (*param_2 != 0)) {
        /* ST_CALLSITE[00678004]: CALL dword ptr [EDX + 0x74] */
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar8 = local_28;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_00678031:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00678036;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00678031;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00678036:
        if (iVar5 != 0) {
          iVar7 = 0;
          local_14 = 0;
        }
      }
      if (iVar7 != 0) {
        if ((((0 < param_6) && (0 < param_7)) && (0 < param_8)) &&
           /* ST_CALLSITE[0067806C]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
           ((((STFishC::sub_004162F0(this,&local_6,&local_8,&local_a), local_6 < param_3 ||
              (local_8 < param_4)) ||
             ((local_a < param_5 ||
              (((int)param_3 + (int)param_6 <= (int)local_6 ||
               ((int)param_4 + (int)param_7 <= (int)local_8)))))) ||
            (iVar7 = local_14, (int)param_5 + (int)param_8 <= (int)local_a)))) {
          iVar7 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((iVar7 != 0) && (param_9 != nullptr)) &&
           /* ST_CALLSITE[006780E0]: CALL EAX */
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

