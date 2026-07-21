#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::CreateDate */

int __thiscall TraksClassTy::CreateDate(TraksClassTy *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int iVar3;
  int iVar4;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  iVar3 = Library::MSVCRT::__setjmp3(local_44,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  iVar4 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x37,0,iVar3,&DAT_007a4ccc,
                             s_TraksClassTy__CreateDate_error_007c9124);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_grig_traks_cpp_007c9104,0x38);
  return iVar3;
}

