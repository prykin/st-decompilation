#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendDesc */

void __thiscall SettMapMTy::SendDesc(SettMapMTy *this,int param_1)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  AnonShape_00571A30_67EE4B56 local_dc;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    thunk_FUN_00571a30((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,&local_dc,'\0');
    FUN_00715360(g_int_00811764,param_1,'\x1c',(char *)&local_dc,0x94,1,0xffffffff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x4c9,0,errorCode,
                             "%s","SettMapMTy::SendDesc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x4c9);
  return;
}

