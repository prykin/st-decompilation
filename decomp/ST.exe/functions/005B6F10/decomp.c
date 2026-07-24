#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::DoneMMsg */

void __thiscall MMsgTy::DoneMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMsgTy *pMVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  MMsgTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    g_startSystem_0081176C->field_02E6 = (MMsgTy *)0x0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2->field_0x1cf7);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2->field_1D88);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x31,0,errorCode,
                             "%s","MMsgTy::DoneMMsg");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x31);
  return;
}

