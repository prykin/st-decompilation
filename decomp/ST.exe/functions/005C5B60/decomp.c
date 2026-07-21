#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::CloseButtons */

void __thiscall SettMapTy::CloseButtons(SettMapTy *this)

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
    (*this_00->vtable[2].DoneMMObj)(this_00);
    if (this_00[0x26].field_0x32 != '\0') {
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   0xfffffffe,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
      }
      FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_02EC);
    }
    this_00->field_0x65 = 4;
    thunk_FUN_005b6730(this_00,0xc,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x250,0,errorCode,
                             &DAT_007a4ccc,s_SettMapTy__CloseButtons_007cd1c4);
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x250);
  return;
}

