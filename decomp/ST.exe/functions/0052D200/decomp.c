#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0052D233 MOV ESI,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall PopUpTy::OutStr(PopUpTy *this,byte param_1)

{
  uint *puVar1;
  uint uVar3;
  PopUpTy *pPVar4;
  int errorCode;
  int iVar5;
  char *resourceString;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar4 = local_8;
  if (errorCode == 0) {
    uVar3 = (uint)param_1;

    ccFntTy::SetSurf(local_8->field_0094,(int)local_8->field_0090,0,0,uVar3 * 0x13,
                     *(int *)(local_8->field_0090 + 2),0x13);
    puVar1 = pPVar4->field_0098;
    if ((int)uVar3 < (int)puVar1[2]) {
      resourceString = *(char **)(puVar1[5] + uVar3 * 4);
    }
    else {
      resourceString = nullptr;
    }

    ccFntTy::WrStr(pPVar4->field_0094,resourceString,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x2d,0,errorCode,"%s"
                             ,"PopUpTy::OutStr");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x2d);
  return;
}

