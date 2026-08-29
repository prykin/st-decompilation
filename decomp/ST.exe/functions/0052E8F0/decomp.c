#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::DoneOptPanel */

void __thiscall OptPanelTy::DoneOptPanel(OptPanelTy *this)

{
  OptPanelTy *pOVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort **ppuVar6;
  uint *puVar7;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pOVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_01E9 != nullptr) {
      FUN_006b5570(local_8->field_01E9);
      pOVar2->field_01E9 = nullptr;
    }
    if (pOVar2->field_01ED != nullptr) {
      DArrayDestroy(pOVar2->field_01ED);
      pOVar2->field_01ED = nullptr;
    }
    if (pOVar2->field_01F1 != nullptr) {
      FUN_006b5570(pOVar2->field_01F1);
      pOVar2->field_01F1 = nullptr;
    }
    if (pOVar2->field_01E5 != nullptr) {
      FreeAndNull(&pOVar2->field_01E5);
    }
    if ((DArrayTy *)pOVar2->field_02F9 != nullptr) {
      FUN_006b5570((DArrayTy *)pOVar2->field_02F9);
    }
    pOVar2->field_02F9 = nullptr;
    if (pOVar2->field_02FD != nullptr) {
      DArrayDestroy((DArrayTy *)pOVar2->field_02FD);
    }
    pOVar2->field_02FD = nullptr;
    if (pOVar2->field_01DD != (HANDLE)0x0) {
      /* ST_CALLSITE[0052E9B8]: CALL dword ptr [0x0085bcac] */
      FindCloseChangeNotification(pOVar2->field_01DD);
      pOVar2->field_01DD = (HANDLE)0x0;
    }
    puVar7 = pOVar2->field_01B5;
    iVar5 = 10;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(pOVar2->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar7 = pOVar2->field_01AD;
    iVar5 = 2;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(pOVar2->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_optPanel_008016DC = nullptr;
    if (pOVar2->field_017C != nullptr) {
      ccFntTy::operator_delete((uint *)pOVar2->field_017C);
      pOVar2->field_017C = nullptr;
    }
    if (pOVar2->field_0180 != nullptr) {
      ccFntTy::operator_delete((uint *)pOVar2->field_0180);
      pOVar2->field_0180 = nullptr;
    }
    pOVar2->field_0198 = nullptr;
    ppuVar6 = &pOVar2->field_0184;
    iVar5 = 5;
    do {
      if (*ppuVar6 != nullptr) {
        cMf32::RecMemFree(g_cMf32_00806790,(uint *)ppuVar6);
      }
      ppuVar6 = ppuVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
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

