#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_plr_d.cpp
   Diagnostic line evidence: 385 | 388 | 390 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056EBE0 -> 0067DFD0 @ 0056ECE7 | 0056EBE0 -> 0067DFD0 @ 0056ECFF | 0056EBE0 ->
   0067DFD0 @ 0056ED16 */

uint * __cdecl CreateOpponentList(cMf32 *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int errorCode;
  uint *puVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 == (cMf32 *)0x0) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_plr_d.cpp",0x181);
    }
    puVar2 = _CreateStgListByRoot(param_1,param_2,PTR_s_OPPONENT_0079d728,param_3);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_plr_d.cpp",0x184,0,errorCode,"%s",
                             "CreateOpponentList");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DArrayDestroy(local_8);
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_plr_d.cpp",0x186);
  return (uint *)0x0;
}

