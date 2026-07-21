#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::DoneMMsg */

void __thiscall MMsgTy::DoneMMsg(MMsgTy *this)

{
  code *pcVar1;
  MMObjTy *pMVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (errorCode == 0) {
    MMObjTy::DoneMMObj(local_8);
    PTR_0081176c->field_02E6 = (MMsgTy *)0x0;
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2[0x20].field_0x97);
    SpriteClassTy::CloseSprite((SpriteClassTy *)&pMVar2[0x21].field_0x45);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x31,0,errorCode,
                             &DAT_007a4ccc,s_MMsgTy__DoneMMsg_007ccc1c);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x31);
  return;
}

