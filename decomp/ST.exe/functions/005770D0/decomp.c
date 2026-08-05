#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tsystem.cpp
   GameSystemC::DoneSystem
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall DoneSystem(GameSystemC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005771CE RET | 00577213 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall GameSystemC::DoneSystem(GameSystemC *this)

{
  ST3DSMAPContext *pSVar2;
  GameSystemC *pGVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  GameSystemC *local_8;

  this->field_0430 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pGVar3 = local_8;
  if (errorCode == 0) {
    if (local_8->field_0431 != nullptr) {
      FUN_00725680((int *)&local_8->field_0431);
    }
    FUN_0070b1d0((int *)&PTR_00806724);
    if (g_interSystem_00802A28 != nullptr) {
      thunk_FUN_005711d0(&DAT_00807620,(int *)&g_interSystem_00802A28);
    }
    if (g_playSystem_00802A38 != nullptr) {
      thunk_FUN_005711d0(&DAT_00807620,(int *)&g_playSystem_00802A38);
    }
    thunk_FUN_0058d720();
    pSVar2 = g_sT3DSMAPContext_00807598;
    DAT_0080674c = 0;
    if (g_sT3DSMAPContext_00807598 != nullptr) {
      ST3DSMAPContext::sub_006DBCF0(g_sT3DSMAPContext_00807598);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar2);
      g_sT3DSMAPContext_00807598 = nullptr;
    }
    thunk_FUN_00578370();
    if (DAT_00806750 != 0) {
      thunk_FUN_0042a780(&DAT_00806750);
    }
    FUN_006e52d0((AnonShape_006E52D0_AF06BCD2 *)pGVar3);
    ShowCursor(1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\tsystem.cpp",0xa7,0,errorCode,"%s",
                             "GameSystemC::DoneSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\tsystem.cpp",0xa7);
  return;
}

