#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Update(BldLabPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004EFD92 RET | 004EFDD1 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall BldLabPanelTy::Update(BldLabPanelTy *this)

{
  BldLabPanelTy_field_027ADArray **ppBVar1;
  BldLabPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_50;
  dword local_c;
  BldLabPanelTy *local_8;

  if (this->field_027A != nullptr) {
    local_c = this->field_027A->count;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = this;

    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      ppBVar1 = &local_8->field_027A;
      /* ST_CALLSITE[004EFD67]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
      STAllPlayersC::GetPanelInfo
                (g_allPlayers_007FA174,0xc,(RecoveredRecordView_0043BEB0_8330D129 *)ppBVar1);
      thunk_FUN_0053f510(this_00,(*ppBVar1)->count,local_c);
      /* ST_CALLSITE[004EFD7F]: CALL 0x004038eb; direct=004038EB BldLabPanelTy::sub_004EFE20 */
      sub_004EFE20(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x30,0,errorCode,
                               "%s","BldLabPanelTy::Update");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x30);
  }
  return;
}

