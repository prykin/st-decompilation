#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall SpecPanelTy::DonePanel(SpecPanelTy *this)

{
  code *pcVar1;
  SpecPanelTy *pSVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  ccFntTy *this_00;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if (local_8->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_017C);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pSVar2->field_017C = 0;
    if (pSVar2->field_0189 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pSVar2->field_0189);
      pSVar2->field_0189 = (ccFntTy *)0x0;
    }
    if (pSVar2->field_0185 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pSVar2->field_0185);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Andrey_specpan_cpp_007c7870,0xfa,0,errorCode,
                             &DAT_007a4ccc,s_SpecPanelTy__DonePanel_007c7948);
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,s_E____titans_Andrey_specpan_cpp_007c7870,0xfa);
  return;
}

