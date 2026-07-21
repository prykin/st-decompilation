#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_tact.cpp
   AiTactClassTy::InitDistrObj */

void __thiscall AiTactClassTy::InitDistrObj(AiTactClassTy *this)

{
  code *pcVar1;
  AiTactClassTy *this_00;
  int errorCode;
  DArrayTy *array;
  int iVar2;
  InternalExceptionFrame local_50;
  AiTactClassTy *local_c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    array = (DArrayTy *)_GetStaffGrpExch(local_c->field_0024);
    local_8 = array;
    GiveObjByClaim(this_00,(uint *)array);
    GiveObjByFltType(this_00,(uint *)array);
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_8 != (DArrayTy *)0x0) {
    DArrayDestroy(local_8);
    local_8 = (DArrayTy *)0x0;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\ai\\ai_tact.cpp",0x2a8,0,errorCode,"%s",
                             "AiTactClassTy::InitDistrObj");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\ai\\ai_tact.cpp",0x2a9);
  return;
}

