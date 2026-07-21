#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\intercom.cpp
   IntercomPanelTy::DoneIntercomPanel */

void __thiscall IntercomPanelTy::DoneIntercomPanel(IntercomPanelTy *this)

{
  code *pcVar1;
  IntercomPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  InternalExceptionFrame local_4c;
  IntercomPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if ((AnonShape_006B5570_4D68B99C *)local_8->field_0198 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_0198);
      pIVar2->field_0198 = 0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    if (pIVar2->field_01A0 != 0) {
      StartSystemTy::sub_006E56B0(pIVar2->field_000C,pIVar2->field_01A0);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_01;
    }
    pIVar2->field_01A0 = 0;
    g_intercomPanel_0080169C = (IntercomPanelTy *)0x0;
    if (pIVar2->field_0180 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pIVar2->field_0180);
      pIVar2->field_0180 = (ccFntTy *)0x0;
    }
    if (pIVar2->field_0184 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pIVar2->field_0184);
    }
    if (pIVar2->field_019C != (AnonPointee_IntercomPanelTy_019C *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pIVar2->field_019C);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\intercom.cpp",0x4a,0,errorCode,
                             "%s","IntercomPanelTy::DoneIntercomPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\intercom.cpp",0x4a);
  return;
}

