#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   BaseSystemC::CreateSystemObjects */

undefined4 __thiscall BaseSystemC::CreateSystemObjects(BaseSystemC *this)

{
  code *pcVar1;
  BaseSystemC *pBVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_50;
  BaseSystemC *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pBVar2 = local_c;
  if (errorCode == 0) {
    (*local_c->vtable->vfunc_0C)(1,&local_8,0,0);
    (*pBVar2->vtable->vfunc_0C)(0x101,&DAT_00802a2c,0,0);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x2c,0,errorCode,&DAT_007a4ccc,
                             s_BaseSystemC__CreateSystemObjects_007cab78);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x2d);
  return 0xffffffff;
}

