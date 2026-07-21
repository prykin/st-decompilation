#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::CursDrawInit */

void __thiscall
CursorClassTy::CursDrawInit(CursorClassTy *this,int param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  CursorClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xd8,0,errorCode,
                               &DAT_007a4ccc,s_CursorClassTy__CursDrawInit_007c7e68);
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Andrey_to_cursor_cpp_007c7d60,0xd9);
    return;
  }
  if (local_8->field_00A9 != 0) {
    FUN_006b5f80(DAT_008075a8,param_1,param_2,param_3,param_4);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  Library::DKW::DDX::FUN_006b8d50((int *)local_8->field_00AD,param_1,param_2,param_3,param_4);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

