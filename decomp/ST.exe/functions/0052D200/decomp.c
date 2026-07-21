#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr */

void __thiscall PopUpTy::OutStr(PopUpTy *this,uint param_1)

{
  code *pcVar1;
  PopUpTy *pPVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    uVar5 = param_1 & 0xff;
    ccFntTy::SetSurf(local_8->field_0094,(int)local_8->field_0090,0,0,uVar5 * 0x13,
                     local_8->field_0090->field_0004,0x13);
    iVar3 = pPVar2->field_0098;
    if ((int)uVar5 < *(int *)(iVar3 + 8)) {
      puVar6 = *(uint **)(*(int *)(iVar3 + 0x14) + uVar5 * 4);
    }
    else {
      puVar6 = (uint *)0x0;
    }
    ccFntTy::WrStr(pPVar2->field_0094,puVar6,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x2d,0,iVar3,"%s",
                             "PopUpTy::OutStr");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x2d);
  return;
}

