#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  code *pcVar1;
  dword dVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  dVar2 = (*this->vtable->slot_F8)(this);
  if (dVar2 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      thunk_FUN_0041dd00(local_8,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x52d,0,errorCode,
                               &DAT_007a4ccc,s_TLOBaseTy__SetActivity_007ac8d0);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,s_E____titans_Artem_TLO_embryo_cpp_007bf4bc,0x52e);
  }
  return;
}

