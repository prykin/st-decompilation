#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::UpdateObjectives

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall OptPanelTy::UpdateObjectives(OptPanelTy *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[00538112]: CALL 0x0040443a; direct=0040443A OptPanelTy::PrepMissObj */
    PrepMissObj(local_8);
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_CALLSITE[00538123]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      HelpPanelTy::sub_00515180(g_helpPanel_00801690,'\a');
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x800,0,errorCode,
                             "%s","OptPanelTy::UpdateObjectives");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x800);
  return;
}

