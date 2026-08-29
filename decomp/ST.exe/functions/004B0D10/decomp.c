#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_ai.cpp
   Diagnostic line evidence: 787 | 788 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 00660F70 -> 004B0D10 @ 0066126D; MOVSX at 00661231 establishes signed source width 2 |
   00662240 -> 004B0D10 @ 00662583; MOVSX at 00662549 establishes signed source width 2 | 00662240
   -> 004B0D10 @ 006628EC; MOVSX at 006628B3 establishes signed source width 2 */

undefined4 __cdecl
FUN_004b0d10(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,int param_8,RecoveredRecord_004B0D10_23CAA7D2 *param_9)

{
  icall_004A0EE0_STGroupBoatC__vfunc_4_for_STGroupBoatC *piVar1;
  int iVar3;
  int iVar5;
  uint uVar6;
  int iVar4;
  InternalExceptionFrame local_50;
  uint local_c;
  int local_8;

  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;

  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_ai.cpp",0x313,0,iVar3,"%s",
                               "TLOAiChkOrFindBuildingPlace error !");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Artem\\TLO_ai.cpp",0x314);
      return 0;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((-1 < *param_3) && (local_8 = *param_4, -1 < local_8)) && (-1 < *param_5)) {
    if (param_9 == nullptr) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_9->field_0018;
    }

    iVar5 = thunk_FUN_004ae0b0((short)*param_3,local_8,*param_5,param_2,param_1,nullptr,
                               nullptr,nullptr,iVar5,nullptr);
    if (iVar5 != 0) {
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  piVar1 = (&STGroupBoatCVTable.vfunc_4)[param_2];
  if (piVar1 == nullptr) {

    uVar6 = thunk_FUN_004af080(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (RecoveredRecord_004AF080_5D31BF96 *)param_9);
    g_currentExceptionFrame = local_50.previous;
    return uVar6;
  }
  if (piVar1 == (icall_004A0EE0_STGroupBoatC__vfunc_4_for_STGroupBoatC *)0x1) {

    uVar6 = thunk_FUN_004affa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    g_currentExceptionFrame = local_50.previous;
    return uVar6;
  }
  if (piVar1 != (icall_004A0EE0_STGroupBoatC__vfunc_4_for_STGroupBoatC *)0x2) {
    g_currentExceptionFrame = local_50.previous;
    return local_c;
  }

  uVar6 = thunk_FUN_004b0250(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  g_currentExceptionFrame = local_50.previous;
  return uVar6;
}

