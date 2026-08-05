#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PutToSHlp
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PutToSHlp(HelpPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00513566 RET | 005135AB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall HelpPanelTy::PutToSHlp(HelpPanelTy *this)

{
  dword dVar1;
  HelpPanelTy *pHVar3;
  int iVar4;
  int iVar5;
  uint index;
  InternalExceptionFrame local_58;
  HelpPanelTy_field_01A1State local_14;
  undefined4 local_13;
  undefined4 local_f;
  HelpPanelTy *local_8;

  local_14 = this->field_01A1;
  local_13 = this->field_01A3;
  local_f = this->field_01A7;
  if (this->field_01CB != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_8 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    pHVar3 = local_8;
    if (iVar4 == 0) {
      iVar4 = local_8->field_01CF;
      while (-1 < iVar4) {
        dVar1 = pHVar3->field_01CB->count;
        if ((int)(dVar1 - 1) <= iVar4) break;
        DArrayRemoveAt(pHVar3->field_01CB,dVar1 - 1);
        iVar4 = pHVar3->field_01CF;
      }
      index = pHVar3->field_01CF + 1;
      pHVar3->field_01CF = index;
      Library::DKW::TBL::DArrayPut(pHVar3->field_01CB,index,&local_14);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x27c,0,iVar4,"%s"
                               ,"HelpPanelTy::PutToSHlp");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x27c);
  }
  return;
}

