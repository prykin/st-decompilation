#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::TTaskItemClose

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall MTaskTy::TTaskItemClose(MTaskTy *this,AnonShape_005E10A0_819783CC *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  AnonShape_005E10A0_819783CC *slotStorage;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_1 != nullptr) {
      if (-1 < (int)*(uint *)param_1) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,*(uint *)param_1);
      }
      *(undefined4 *)param_1 = 0xffffffff;
      iVar4 = 3;
      slotStorage = param_1;
      do {
        slotStorage = (AnonShape_005E10A0_819783CC *)&slotStorage->field_0x4;
        if (*(int *)slotStorage != 0) {
          FreeAndNull(slotStorage);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if ((int *)param_1->field_0031 != nullptr) {
        FUN_00714060((int *)param_1->field_0031);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_0031);
        param_1->field_0031 = 0;
      }
      if (param_1->field_003A != 0) {
        FreeAndNull(&param_1->field_003A);
      }
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0x1ab,0,iVar2,"%s",
                             "MTaskTy::TTaskItemClose");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\task_obj.cpp",0x1ab);
  return;
}

