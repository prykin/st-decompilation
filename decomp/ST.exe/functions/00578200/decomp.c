#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   DebugSystemC::CreateSystemObjects */

undefined4 __thiscall DebugSystemC::CreateSystemObjects(DebugSystemC *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  DebugSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    (*local_8->vtable->vfunc_0C)(0x8100,&DAT_007fb228,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0x1df,0,errorCode,"%s",
                             "DebugSystemC::CreateSystemObjects");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tsystem.cpp",0x1e0);
  return 0xffffffff;
}

