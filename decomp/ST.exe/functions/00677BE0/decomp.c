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
  STGameObjC *this;
  int iVar3;
  STGameObjC **ppSVar3;
  int iVar4;
  byte *pbVar5;
  int iVar7;
  int iVar6;
  DArrayOf_STGameObjCPtr *pDVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_70;
  byte local_2c [16];
  uint local_1c;
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
  if (g_array_007FA160 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x39c);
  }
  uVar9 = g_array_007FA160->count - 1;
  pDVar8 = g_array_007FA160;
  if ((int)uVar9 < 0) {
    g_currentExceptionFrame = local_70.previous;
    return local_18;
  }
  do {
    if (uVar9 < pDVar8->count) {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar9) (runtime stride) */
      ppSVar3 = (STGameObjC **)(pDVar8->elementSize * uVar9 + (int)pDVar8->data);
    }
    else {
      ppSVar3 = nullptr;
    }
    this = *ppSVar3;
    if (((this != nullptr) &&
        (local_10 = uVar9,
        /* ST_CALLSITE[00677C6F]: CALL dword ptr [EDX + 0x12c]; [STIndirectCallsiteApplier] exact slot 0x12C; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STFishC */
        local_1c = (*((STFishCVTable *)this->vtable)[1].vfunc_08)((STFishC *)this),
        pDVar8 = g_array_007FA160, (short)local_1c == param_1)) &&
       ((param_2 == 0 ||
        /* ST_CALLSITE[00677C8F]: CALL dword ptr [EAX + 0x130]; [STIndirectCallsiteApplier] exact slot 0x130; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STFishC */
        (iVar4 = (*((STFishCVTable *)this->vtable)[1].vfunc_0C)((STFishC *)this),
        pDVar8 = g_array_007FA160, iVar4 == param_2)))) {
      iVar4 = 1;
      local_14 = 1;
      if ((param_3 != nullptr) && (*param_3 != 0)) {
        /* ST_CALLSITE[00677CBC]: CALL dword ptr [EDX + 0x74]; [STIndirectCallsiteApplier] exact slot 0x74; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4 */
        (*((STFishCVTable *)this->vtable)->vfunc_74)((short)local_2c);
        pbVar10 = local_2c;
        pbVar5 = param_3;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_00677ce9:
            iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00677cee;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_00677ce9;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_00677cee:
        if (iVar7 != 0) {
          iVar4 = 0;
          local_14 = 0;
        }
      }
      pDVar8 = g_array_007FA160;
      uVar9 = local_10;
      if (iVar4 != 0) {
        if ((((0 < param_7) && (0 < param_8)) && (0 < param_9)) &&
           /* ST_CALLSITE[00677D24]: CALL 0x00405f0b; direct=00405F0B STFishC::sub_004162F0 */
           ((((STFishC::sub_004162F0((STFishC *)this,&local_6,&local_8,&local_a), local_6 < param_4
              || (local_8 < param_5)) ||
             ((local_a < param_6 ||
              (((int)param_4 + (int)param_7 <= (int)local_6 ||
               ((int)param_5 + (int)param_8 <= (int)local_8)))))) ||
            (iVar4 = local_14, (int)param_6 + (int)param_9 <= (int)local_a)))) {
          iVar4 = 0;
        }
        pDVar8 = g_array_007FA160;
        uVar9 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((iVar4 != 0) && (param_10 != nullptr)) &&
           /* ST_CALLSITE[00677D9A]: CALL EAX */
           (iVar4 = (*(code *)param_10)(local_1c,local_10,this,param_11), pDVar8 = g_array_007FA160,
           uVar9 = local_10, iVar4 != 0)) {
          g_currentExceptionFrame = local_70.previous;
          return -1;
        }
      }
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_70.previous;
      return local_18;
    }
  } while( true );
}

