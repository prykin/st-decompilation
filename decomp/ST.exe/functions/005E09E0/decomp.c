#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintMTask */

void __thiscall MTaskTy::PaintMTask(MTaskTy *this)

{
  code *pcVar1;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x136,0,errorCode,
                             &DAT_007a4ccc,s_MTaskTy__PaintMTask_007cda88);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_task_obj_cpp_007cd994,0x136);
  return;
}

