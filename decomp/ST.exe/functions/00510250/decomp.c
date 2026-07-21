#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::DoneFrmPanel */

void __thiscall FrmPanelTy::DoneFrmPanel(FrmPanelTy *this)

{
  code *pcVar1;
  FrmPanelTy *pFVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 8;
    puVar5 = &local_8->field_01B3;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pFVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = &pFVar2->field_01D3;
    iVar3 = 4;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(pFVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_0080168c = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x4f,0,iVar3,&DAT_007a4ccc,
                             s_FrmPanelTy__DoneFrmPanel_007c2a6c);
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x4f);
  return;
}

