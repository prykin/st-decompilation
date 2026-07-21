#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 79 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl
DibPut(AnonShape_006B5B10_E0D06CF1 *param_1,int param_2,int param_3,char param_4,byte *param_5)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((param_1 != (AnonShape_006B5B10_E0D06CF1 *)0x0) && (param_5 != (byte *)0x0)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_4 == '\x01') {
        Library::DKW::WGR::FUN_006b55f0
                  (param_1,0,param_2,param_3,param_5,0,0,0,*(int *)(param_5 + 4),
                   *(int *)(param_5 + 8));
      }
      else if (param_4 == '\x06') {
        FUN_006b84d0(param_1,0,param_2,param_3,param_5);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_support_cpp_007c7b2c,0x4f,0,errorCode,
                               &DAT_007a4ccc,s_DibPut_007c7b7c);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_support_cpp_007c7b2c,0x4f);
  }
  return;
}

