#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintMTask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall MTaskTy::PaintMTask(MTaskTy *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    /* ST_CALLSITE[005E0A35]: CALL 0x00403738; direct=00403738 PutDDX */
    PutDDX(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x136,0,errorCode,
                             "%s","MTaskTy::PaintMTask");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\task_obj.cpp",0x136);
  return;
}

