#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::CreateSystemObjects */

undefined4 __thiscall GameSystemC::CreateSystemObjects(GameSystemC *this)

{
  code *pcVar1;
  GameSystemC *pGVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pGVar2 = local_8;
  if (errorCode == 0) {
    (*local_8->vtable->vfunc_0C)(0x100,&DAT_007fb2a4,0,0);
    (*pGVar2->vtable->vfunc_0C)(0x102,&DAT_007fb288,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_tsystem_cpp_007cab5c,0x65,0,errorCode,&DAT_007a4ccc,
                             s_GameSystemC__CreateSystemObjects_007cabcc);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_tsystem_cpp_007cab5c,0x65);
  return 0xfffffffc;
}

