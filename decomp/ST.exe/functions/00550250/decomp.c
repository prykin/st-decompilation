#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SendMail

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   SendMail(STPlaySystemC * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=005502EE RET | 00550334 RET */

void __thiscall STPlaySystemC::SendMail(STPlaySystemC *this)

{
  STPlaySystemC *this_00;
  int iVar2;
  int iVar3;
  void *command;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  uint local_8;

  if ((this->field_003D != nullptr) &&
     (this->field_003D->field_0005 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar2 == 0) {
      local_8 = 0;
      command = &local_c->field_003D->field_0x7;
      if (local_c->field_003D->field_0005 != 0) {
        do {
          iVar2 = *(int *)((int)command + 0x13);
          iVar3 = *(int *)((int)command + 0xf);
          thunk_FUN_005501d0(this_00,command);
          local_8 = local_8 + 1;
          command = (void *)((int)command + iVar2 + iVar3 + 0x1b);
        } while (local_8 < (ushort)this_00->field_003D->field_0005);
      }
      this_00->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x819,0,iVar2,
                               "%s","STPlaySystemC::SendMail");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x81a);
  }
  return;
}

