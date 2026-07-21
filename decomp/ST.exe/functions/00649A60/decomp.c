#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 373 | 376 | 377 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl CreatePlrData(int param_1)

{
  code *pcVar1;
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  local_8 = (undefined4 *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x178,0,errorCode,
                               "%s","CreatePlrData");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x179);
    return (undefined4 *)0x0;
  }
  if ((&DAT_008087e8)[param_1 * 0x51] != '\x01') {
    if ((&DAT_008087e8)[param_1 * 0x51] != '\x02') {
      RaiseInternalException
                (-5,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x175);
      g_currentExceptionFrame = local_4c.previous;
      return local_8;
    }
    puVar2 = CreatePlrDataForBO();
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  puVar2 = CreatePlrDataForWS();
  g_currentExceptionFrame = local_4c.previous;
  return puVar2;
}

