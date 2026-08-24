#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 449 | 450 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * CreateDefaultBossData(void)

{
  int errorCode;
  int iVar2;
  uint *puVar3;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  AllocationRecord_0065CD10 *local_10;
  AllocationRecord_00648620 *local_c;
  AllocationRecord_00648620 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_10 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (errorCode == 0) {
    local_8 = thunk_FUN_00648400("Default Arbiter",1);
    /* ST_CALLSITE[00649F08]: CALL 0x00401ebf; direct=00401EBF EventDataPack */
    local_10 = EventDataPack(*(AllocationRecord_0065CD10 **)&local_8->field_0x4e,&local_14);
    /* ST_CALLSITE[00649F1D]: CALL 0x00405a24; direct=00405A24 BossDataPack */
    local_c = BossDataPack(local_8,(undefined4 *)local_10,local_14,&local_18);
    thunk_FUN_0065d0f0((int *)&local_10);
    thunk_FUN_006484f0((int *)&local_8);
    g_currentExceptionFrame = local_5c.previous;
    return (undefined4 *)local_c;
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
  return nullptr;
}

