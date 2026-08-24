#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\support.cpp
   Diagnostic line evidence: 20 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=31, used=0, unknown=0),
   and decompilation contains no value return */

void __cdecl PutDDX(int param_1,int param_2,char param_3,BITMAPINFO *param_4)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  if ((g_dDXContext_0080759C != nullptr) && (param_4 != nullptr)) {
    local_48.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_48;
    errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
    if (errorCode == 0) {
      if (param_3 == '\x01') {
        FUN_006b4640(g_dDXContext_0080759C,param_1,param_2,param_4,nullptr);
      }
      else if (param_3 == '\x06') {
        Library::DKW::DDX::FUN_006b82e0
                  (g_dDXContext_0080759C,param_1,param_2,(byte *)param_4,0,0,
                   (param_4->bmiHeader).biWidth,(byte *)(param_4->bmiHeader).biHeight);
        g_currentExceptionFrame = local_48.previous;
        return;
      }
      g_currentExceptionFrame = local_48.previous;
      return;
    }
    g_currentExceptionFrame = local_48.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\support.cpp",0x14,0,errorCode,
                               "%s","PutDDX");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\support.cpp",0x14);
  }
  return;
}

