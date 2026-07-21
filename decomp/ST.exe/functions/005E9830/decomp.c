#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CloseButtons */

void __thiscall WaitTy::CloseButtons(WaitTy *this)

{
  code *pcVar1;
  MMObjTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (MMObjTy *)this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    MMObjTy::CloseButtons(local_8);
    if (*(int *)&this_00[0x1d].field_0xad == 0) {
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   0xfffffffe,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
      }
      FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_02EC);
    }
    this_00->field_0x65 = 4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    DeleteCtrls((WaitTy *)this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2b3,0,errorCode,
                             &DAT_007a4ccc,s_WaitTy__CloseButtons_007cde08);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2b3);
  return;
}

