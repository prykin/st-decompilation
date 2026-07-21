#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 293 | 294 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl _GetStaffGrpExch(undefined4 param_1)

{
  code *pcVar1;
  int errorCode;
  STGroupBoatC *this;
  uint *puVar2;
  int iVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;
  InternalExceptionFrame local_4c;
  uint *local_8;

  local_8 = (uint *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_ai_ai_mdef_cpp_007d2d58,0x125,0,errorCode,&DAT_007a4ccc
                               ,s__GetStaffGrpExch_007d2da0);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x126);
    return (uint *)0x0;
  }
  if (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0) {
    this = (STGroupBoatC *)0x0;
  }
  else {
    this = thunk_FUN_0042b760((char)param_1,0);
  }
  if (this != (STGroupBoatC *)0x0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    puVar2 = STGroupC::GetGroupContent((STGroupC *)this,unaff_ESI);
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  return local_8;
}

