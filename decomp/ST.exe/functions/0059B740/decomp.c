#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::CloseButtons */

void __thiscall FSGSTy::CloseButtons(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    DeleteCtrls(this_00);
    this_00->field_0065 = CASE_4;
    this_00->field_1A5F = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x4a9,0,errorCode,
                             "%s","FSGSTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x4a9);
  return;
}

