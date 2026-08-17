#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CloseButtons

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall PrividerTy::CloseButtons(PrividerTy *this,char param_1)

{
  PrividerTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[005BB944]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
    MMObjTy::CloseButtons((MMObjTy *)local_8);
    /* ST_CALLSITE[005BB94F]: CALL 0x004031f7; direct=004031F7 PrividerTy::DeleteCtrls */
    DeleteCtrls(this_00,param_1);
    this_00->field_0065 = CASE_4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x1c7,0,errorCode,
                             "%s","PrividerTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x1c7);
  return;
}

