#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\panel.cpp
   PanelTy::DonePanel */

void __thiscall PanelTy::DonePanel(PanelTy *this)

{
  code *pcVar1;
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  PanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    local_8->field_0028 = 0x14;
    local_8->field_002C = local_8->field_0008;
    FUN_006e6000(local_8,3,1,(undefined4 *)&local_8->field_0x18);
    if (-1 < pPVar2->field_0060) {
      FUN_006b3bb0((int *)PTR_008075a8,pPVar2->field_0060);
    }
    pPVar2->field_0060 = -1;
    if (pPVar2->field_0068 != 0) {
      FreeAndNull((void **)&pPVar2->field_0068);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\panel.cpp",0x3c,0,iVar3,"%s",
                             "PanelTy::DonePanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\panel.cpp",0x3c);
  return;
}

