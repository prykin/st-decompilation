#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::NoneMAdv */

void __thiscall MAdvTy::NoneMAdv(MAdvTy *this)

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
  iVar3 = ReportDebugMessage(s_E____titans_Start_adv_obj_cpp_007cbc24,0x57,0,errorCode,&DAT_007a4ccc
                             ,s_MAdvTy__NoneMAdv_007cbc8c);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_adv_obj_cpp_007cbc24,0x57);
  return;
}

