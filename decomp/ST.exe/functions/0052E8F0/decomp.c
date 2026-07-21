#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::DoneOptPanel */

void __thiscall OptPanelTy::DoneOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
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
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ccFntTy *extraout_ECX_05;
  ccFntTy *this_00;
  ushort **ppuVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pOVar2 = local_8;
  if (iVar3 == 0) {
    if ((AnonShape_006B5570_4D68B99C *)local_8->field_01E9 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_01E9);
      pOVar2->field_01E9 = (AnonPointee_OptPanelTy_01E9 *)0x0;
    }
    if ((DArrayTy *)pOVar2->field_01ED != (DArrayTy *)0x0) {
      DArrayDestroy((DArrayTy *)pOVar2->field_01ED);
      pOVar2->field_01ED = 0;
    }
    if ((AnonShape_006B5570_4D68B99C *)pOVar2->field_01F1 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pOVar2->field_01F1);
      pOVar2->field_01F1 = 0;
    }
    this_00 = (ccFntTy *)0x0;
    if (pOVar2->field_01E5 != 0) {
      FreeAndNull((void **)&pOVar2->field_01E5);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX;
    }
    if ((AnonShape_006B5570_4D68B99C *)pOVar2->field_02F9 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)pOVar2->field_02F9);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    pOVar2->field_02F9 = (uint *)0x0;
    if (pOVar2->field_02FD != (DArrayTy *)0x0) {
      DArrayDestroy(pOVar2->field_02FD);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_01;
    }
    pOVar2->field_02FD = (DArrayTy *)0x0;
    if (pOVar2->field_01DD != (HANDLE)0x0) {
      FindCloseChangeNotification(pOVar2->field_01DD);
      pOVar2->field_01DD = (HANDLE)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_02;
    }
    puVar6 = &pOVar2->field_01B5;
    iVar3 = 10;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pOVar2->field_000C,*puVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX_03;
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar6 = &pOVar2->field_01AD;
    iVar3 = 2;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pOVar2->field_000C,*puVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX_04;
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_optPanel_008016DC = (OptPanelTy *)0x0;
    if (pOVar2->field_017C != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pOVar2->field_017C);
      pOVar2->field_017C = (ccFntTy *)0x0;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_05;
    }
    if (pOVar2->field_0180 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_00,(uint *)pOVar2->field_0180);
      pOVar2->field_0180 = (ccFntTy *)0x0;
    }
    pOVar2->field_0198 = 0;
    ppuVar5 = &pOVar2->field_0184;
    iVar3 = 5;
    do {
      if (*ppuVar5 != (ushort *)0x0) {
        cMf32::RecMemFree(DAT_00806790,(uint *)ppuVar5);
      }
      ppuVar5 = ppuVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x79,0,iVar3,"%s",
                             "OptPanelTy::DoneOptPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x79);
  return;
}

