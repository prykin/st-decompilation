#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::TTaskItemClose */

void __thiscall MTaskTy::TTaskItemClose(MTaskTy *this,AnonShape_005E10A0_819783CC *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  AnonShape_005E10A0_819783CC *value;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_1 != (AnonShape_005E10A0_819783CC *)0x0) {
      if (-1 < (int)*(uint *)param_1) {
        FUN_006b3bb0((int *)PTR_008075a8,*(uint *)param_1);
      }
      *(undefined4 *)param_1 = 0xffffffff;
      iVar2 = 3;
      value = param_1;
      do {
        value = (AnonShape_005E10A0_819783CC *)&value->field_0x4;
        if (*(int *)value != 0) {
          FreeAndNull((void **)value);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if ((int *)param_1->field_0031 != (int *)0x0) {
        FUN_00714060((int *)param_1->field_0031);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1->field_0031);
        param_1->field_0031 = 0;
      }
      if (param_1->field_003A != 0) {
        FreeAndNull((void **)&param_1->field_003A);
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

