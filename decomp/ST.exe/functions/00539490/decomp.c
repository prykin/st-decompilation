#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::DonePausePanel */

void __thiscall PausePanelTy::DonePausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *pPVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if (local_8->field_0184 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_0184);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pPVar2->field_0184 = 0;
    g_pausePanel_008016E0 = (PausePanelTy *)0x0;
    if (pPVar2->field_017C != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pPVar2->field_017C);
      pPVar2->field_017C = (ccFntTy *)0x0;
    }
    if (pPVar2->field_0180 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pPVar2->field_0180);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_pause_cpp_007c7490,0x3b,0,errorCode,&DAT_007a4ccc,
                             s_PausePanelTy__DonePausePanel_007c74e4);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_pause_cpp_007c7490,0x3b);
  return;
}

