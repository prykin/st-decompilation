#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 449 | 450 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * CreateDefaultBossData(void)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 *puVar3;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = thunk_FUN_00648400("Default Arbiter",1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_10 = EventDataPack(*(AnonShape_0065CD10_BA40DE58 **)((int)local_8 + 0x4e),&local_14);
    local_c = BossDataPack(local_8,local_10,local_14,&local_18);
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_006484f0((int *)&local_8);
    g_currentExceptionFrame = local_5c.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_5c.previous;
  thunk_FUN_0065d0f0((int *)&local_10);
  thunk_FUN_006484f0((int *)&local_8);
  thunk_FUN_006484f0((int *)&local_c);
  iVar2 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x1c1,0,errorCode,"%s",
                             "CreateDefaultBossData");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x1c2);
  return (undefined4 *)0x0;
}

