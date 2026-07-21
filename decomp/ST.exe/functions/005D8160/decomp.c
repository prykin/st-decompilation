#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintSID */

void __thiscall SIDTy::PaintSID(SIDTy *this)

{
  code *pcVar1;
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  errorCode = Library::MSVCRT::__setjmp3(local_44,0);
  if (errorCode == 0) {
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x6b,0,errorCode,&DAT_007a4ccc
                             ,s_SIDTy__PaintSID_007cd63c);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x6b);
  return;
}

