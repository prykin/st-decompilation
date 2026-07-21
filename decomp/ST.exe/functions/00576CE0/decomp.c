#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\tsystem.cpp
   Diagnostic line evidence: 79 | 80 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void DestroyBaseSystem(void)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_00811638 != (HoloTy *)0x0) {
      if (*(int *)((int)&DAT_00811638->field_001F + 1) == 1) {
        FUN_006e4b80(&DAT_00807620,(int)DAT_00811638);
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)DAT_00811638 + 4))();
      Library::MSVCRT::FUN_0072e2b0(DAT_00811638);
      DAT_00811638 = (HoloTy *)0x0;
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x4f,0,errorCode,&DAT_007a4ccc,
                             s_DestroyBaseSystem_007cabb4);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x50);
  return;
}

