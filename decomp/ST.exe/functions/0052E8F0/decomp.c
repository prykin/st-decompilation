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
    if (local_8->field_01E9 != (DArrayTy *)0x0) {
      FUN_006b5570(local_8->field_01E9);
      pOVar2->field_01E9 = (DArrayTy *)0x0;
    }
    if (pOVar2->field_01ED != (DArrayTy *)0x0) {
      DArrayDestroy(pOVar2->field_01ED);
      pOVar2->field_01ED = (DArrayTy *)0x0;
    }
    if (pOVar2->field_01F1 != (DArrayTy *)0x0) {
      FUN_006b5570(pOVar2->field_01F1);
      pOVar2->field_01F1 = (DArrayTy *)0x0;
    }
    if (pOVar2->field_01E5 != (ushort *)0x0) {
      FreeAndNull(&pOVar2->field_01E5);
    }
    if ((DArrayTy *)pOVar2->field_02F9 != (DArrayTy *)0x0) {
      FUN_006b5570((DArrayTy *)pOVar2->field_02F9);
    }
    pOVar2->field_02F9 = (uint *)0x0;
    if (pOVar2->field_02FD != (DArrayTy *)0x0) {
      DArrayDestroy(pOVar2->field_02FD);
    }
    pOVar2->field_02FD = (DArrayTy *)0x0;
    if (pOVar2->field_01DD != (HANDLE)0x0) {
      FindCloseChangeNotification(pOVar2->field_01DD);
      pOVar2->field_01DD = (HANDLE)0x0;
    }
    puVar6 = &pOVar2->field_01B5;
    iVar3 = 10;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pOVar2->field_000C,*puVar6);
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
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_optPanel_008016DC = (OptPanelTy *)0x0;
    if (pOVar2->field_017C != (ccFntTy *)0x0) {
      ccFntTy::operator((uint *)pOVar2->field_017C);
      pOVar2->field_017C = (ccFntTy *)0x0;
    }
    if (pOVar2->field_0180 != (ccFntTy *)0x0) {
      ccFntTy::operator((uint *)pOVar2->field_0180);
      pOVar2->field_0180 = (ccFntTy *)0x0;
    }
    pOVar2->field_0198 = (ushort *)0x0;
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

