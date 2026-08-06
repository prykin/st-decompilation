#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::DoneFrmPanel */

void __thiscall FrmPanelTy::DoneFrmPanel(FrmPanelTy *this)

{
  FrmPanelTy *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 8;
    puVar6 = local_8->field_01B3;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pFVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar6 = pFVar2->field_01D3;
    iVar5 = 4;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pFVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_frmPanel_0080168C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0x4f,0,iVar3,"%s",
                             "FrmPanelTy::DoneFrmPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x4f);
  return;
}

