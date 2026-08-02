#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::DoneHelpPanel */

void __thiscall HelpPanelTy::DoneHelpPanel(HelpPanelTy *this)

{
  code *pcVar1;
  HelpPanelTy *pHVar2;
  int errorCode;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pHVar2 = local_c;
  if (errorCode == 0) {
    if (local_c->field_017C != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_017C);
    }
    pHVar2->field_017C = 0;
    puVar4 = &pHVar2->field_0180;
    local_8 = 7;
    do {
      if (*puVar4 != 0) {
        StartSystemTy::sub_006E56B0(pHVar2->field_000C,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (pHVar2->field_019C != 0) {
      StartSystemTy::sub_006E56B0(pHVar2->field_000C,pHVar2->field_019C);
    }
    pHVar2->field_019C = 0;
    if ((DArrayTy *)pHVar2->field_01B3 != nullptr) {
      DArrayDestroy((DArrayTy *)pHVar2->field_01B3);
    }
    pHVar2->field_01B3 = nullptr;
    if (pHVar2->field_01BB != nullptr) {
      DArrayDestroy(pHVar2->field_01BB);
    }
    pHVar2->field_01BB = nullptr;
    if (pHVar2->field_01CB != nullptr) {
      DArrayDestroy(pHVar2->field_01CB);
    }
    pHVar2->field_01CB = nullptr;
    if ((DArrayTy *)pHVar2->field_01D7 != nullptr) {
      DArrayDestroy((DArrayTy *)pHVar2->field_01D7);
    }
    pHVar2->field_01D7 = 0;
    if ((DArrayTy *)pHVar2->field_01D3 != nullptr) {
      FUN_006b5570((DArrayTy *)pHVar2->field_01D3);
    }
    pHVar2->field_01D3 = nullptr;
    puVar4 = &pHVar2->field_01F0;
    local_8 = 10;
    do {
      if (*puVar4 != 0) {
        cMf32::RecMemFree(g_cMf32_00806790,puVar4);
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    pHVar2->field_0238 = 0;
    pHVar2->field_0248 = 0;
    pHVar2->field_022C = 0;
    pHVar2->field_0228 = 0;
    pHVar2->field_0234 = 0;
    pHVar2->field_0230 = 0;
    pHVar2->field_0224 = 0;
    pHVar2->field_0220 = 0;
    pHVar2->field_0244 = 0;
    pHVar2->field_0240 = 0;
    pHVar2->field_023C = 0;
    if (pHVar2->field_01E0 != nullptr) {
      ccFntTy::operator_delete((uint *)pHVar2->field_01E0);
      pHVar2->field_01E0 = nullptr;
    }
    if (pHVar2->field_01E4 != nullptr) {
      ccFntTy::operator_delete((uint *)pHVar2->field_01E4);
      pHVar2->field_01E4 = nullptr;
    }
    if (pHVar2->field_01E8 != nullptr) {
      ccFntTy::operator_delete((uint *)pHVar2->field_01E8);
      pHVar2->field_01E8 = nullptr;
    }
    if (pHVar2->field_0218 != nullptr) {
      FreeAndNull(&pHVar2->field_0218);
    }
    if (pHVar2->field_01EC != 0) {
      FreeAndNull((void **)&pHVar2->field_01EC);
    }
    if (pHVar2->field_024C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pHVar2->field_024C);
    }
    if (pHVar2->field_01DC != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pHVar2->field_01DC);
    }
    if (pHVar2->field_021C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&pHVar2->field_021C);
    }
    g_helpPanel_00801690 = nullptr;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0xcf,0,errorCode,
                             "%s","HelpPanelTy::DoneHelpPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0xcf);
  return;
}

