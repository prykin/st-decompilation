#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetProcess

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0052AB40 -> 00554F20 @ 0052ABA6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall cLoadingTy::SetProcess(cLoadingTy *this,int param_1,char *text,int param_3)

{
  cLoadingTy *this_00;
  int errorCode;
  DWORD DVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  /* ST_CALLSITE[00554F2A]: CALL 0x0040249b; direct=0040249B cLoadingTy::sub_00555570 */
  sub_00555570(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if (-1 < local_8->field_003C) {
      /* ST_CALLSITE[00554F66]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
      SetState(local_8,CASE_2,0,nullptr);
    }
    this_00->field_003C = param_1;
    /* ST_CALLSITE[00554F71]: CALL dword ptr [0x0085bedc] */
    DVar2 = timeGetTime();
    this_00->field_0044 = DVar2;
    this_00->field_0040 = param_3;
    if (param_3 == 0) {
      this_00->field_0040 = 1;
    }
    this_00->field_0050 = 0xffffffff;
    /* ST_CALLSITE[00554F98]: CALL 0x00401230; direct=00401230 cLoadingTy::DrawLineCR */
    DrawLineCR(this_00,text);
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

