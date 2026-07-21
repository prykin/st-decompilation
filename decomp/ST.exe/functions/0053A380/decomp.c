#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::DonePlayPanel */

void __thiscall PlayPanelTy::DonePlayPanel(PlayPanelTy *this)

{
  code *pcVar1;
  PlayPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_03;
  ccFntTy *this_00;
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
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_00 = extraout_ECX;
    if (local_c->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_017C);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pPVar2->field_017C = 0;
    if (pPVar2->field_01C5 != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_01C5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_01;
    }
    pPVar2->field_01C5 = 0;
    if (pPVar2->field_01C1 != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_01C1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_02;
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
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          this_00 = extraout_ECX_03;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pPVar2->field_01DD != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pPVar2->field_01DD);
      pPVar2->field_01DD = (ccFntTy *)0x0;
    }
    if (pPVar2->field_01CD != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&pPVar2->field_01CD);
    }
    pPVar2->field_01D9 = 0;
    pPVar2->field_01D5 = 0;
    pPVar2->field_01D1 = 0;
    g_playPanel_008016E4 = (PlayPanelTy *)0x0;
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

