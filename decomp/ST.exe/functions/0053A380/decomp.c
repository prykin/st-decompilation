#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall PlayPanelTy::DonePlayPanel(PlayPanelTy *this)

{
  PlayPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_50;
  PlayPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pPVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_017C);
    }
    pPVar2->field_017C = 0;
    if (pPVar2->field_01C5 != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_01C5);
    }
    pPVar2->field_01C5 = 0;
    if (pPVar2->field_01C1 != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_01C1);
    }
    pPVar2->field_01C1 = 0;
    puVar5 = &pPVar2->field_0181;
    local_8 = 2;
    do {
      iVar3 = 8;
      do {
        if (*puVar5 != 0) {
          StartSystemTy::sub_006E56B0(pPVar2->field_000C,*puVar5);
          *puVar5 = 0;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pPVar2->field_01DD != nullptr) {
      ccFntTy::operator_delete((uint *)pPVar2->field_01DD);
      pPVar2->field_01DD = nullptr;
    }
    if (pPVar2->field_01CD != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pPVar2->field_01CD);
    }
    pPVar2->field_01D9 = nullptr;
    pPVar2->field_01D5 = nullptr;
    pPVar2->field_01D1 = nullptr;
    g_playPanel_008016E4 = nullptr;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",0x97,0,iVar3,"%s",
                             "PlayPanelTy::DonePlayPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\playpan.cpp",0x97);
  return;
}

