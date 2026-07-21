#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr */

void __thiscall PopUpTy::OutStr(PopUpTy *this,uint param_1)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int errorCode;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (errorCode == 0) {
    uVar4 = param_1 & 0xff;
    ccFntTy::SetSurf(local_8->field_0094,(int)local_8->field_0090,0,0,uVar4 * 0x13,
                     *(int *)(local_8->field_0090 + 2),0x13);
    puVar5 = pPVar2->field_0098;
    if ((int)uVar4 < (int)puVar5[2]) {
      puVar5 = *(uint **)(puVar5[5] + uVar4 * 4);
    }
    else {
      puVar5 = (uint *)0x0;
    }
    ccFntTy::WrStr(pPVar2->field_0094,puVar5,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x2d,0,errorCode,"%s"
                             ,"PopUpTy::OutStr");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x2d);
  return;
}

