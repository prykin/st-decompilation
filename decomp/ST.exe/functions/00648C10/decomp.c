#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_creat.cpp
   Diagnostic line evidence: 73 | 95 | 97 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00648FE0 -> 00648C10 @ 006492F0 */

void __cdecl StartStrateg(ushort *strategData,uint param_2)

{
  code *pcVar1;
  int errorCode;
  AiPlrClassTy *pAVar2;
  int iVar3;
  InternalExceptionFrame local_50;
  int local_c;
  ushort *local_8;

  local_8 = (ushort *)0x0;
  local_c = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    if ((((PTR_00802a38 == (STPlaySystemC *)0x0) || (strategData == (ushort *)0x0)) || (7 < param_2)
        ) || (7 < (byte)(&DAT_008087e9)[param_2 * 0x51])) {
      RaiseInternalException
                (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_creat.cpp",0x49);
    }
    pAVar2 = thunk_FUN_004357f0((char)param_2);
    if (pAVar2 != (AiPlrClassTy *)0x0) {
      thunk_FUN_00648dd0(param_2);
    }
    local_8 = strategData;
    *(uint *)(strategData + 2) = param_2;
    *(undefined2 *)((int)strategData + 0x67) = *(undefined2 *)((int)&DAT_008087eb + param_2 * 0x51);
    *(undefined2 *)((int)strategData + 0x69) = *(undefined2 *)((int)&DAT_008087ef + param_2 * 0x51);
    *(undefined2 *)((int)strategData + 0x6b) = *(undefined2 *)((int)&DAT_008087f3 + param_2 * 0x51);
    Library::Ourlib::SAPP::FUN_006e6200
              (PTR_00802a38,0x402,(undefined4 *)(param_2 + 0x29),(undefined4 *)0x0,(int *)0x0,
               strategData,0);
    if (local_c != 0) {
      thunk_FUN_0067d160((int *)&local_8);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_creat.cpp",0x5f,0,errorCode,"%s",
                             "StartStrateg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c != 0) {
    thunk_FUN_0067d160((int *)&local_8);
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_creat.cpp",0x61);
  return;
}

