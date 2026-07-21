#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_embryo.cpp
   TLOBaseTy::SetActivity */

void __thiscall TLOBaseTy::SetActivity(TLOBaseTy *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  TLOBaseTy *local_8;

  local_8 = this;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (*(code *)this->vtable->field_00F8)();
  if (iVar2 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar2 == 0) {
      thunk_FUN_0041dd00(local_8,param_1);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_embryo.cpp",0x52d,0,iVar2,
                               "%s","TLOBaseTy::SetActivity");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Artem\\TLO_embryo.cpp",0x52e);
  }
  return;
}

