#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetProcess

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0052AB40 -> 00554F20 @ 0052ABA6 */

void __thiscall cLoadingTy::SetProcess(cLoadingTy *this,int param_1,char *text,int param_3)

{
  code *pcVar1;
  cLoadingTy *this_00;
  int errorCode;
  DWORD DVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  sub_00555570(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if (-1 < local_8->field_003C) {
      SetState(local_8,CASE_2,0,(char *)0x0);
    }
    this_00->field_003C = param_1;
    DVar2 = timeGetTime();
    this_00->field_0044 = DVar2;
    this_00->field_0040 = param_3;
    if (param_3 == 0) {
      this_00->field_0040 = 1;
    }
    this_00->field_0050 = 0xffffffff;
    DrawLineCR(this_00,(uint *)text);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x109,0,errorCode,"%s"
                             ,"cLoadingTy::SetProcess");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\grig\\loading.cpp",0x10a);
  return;
}

