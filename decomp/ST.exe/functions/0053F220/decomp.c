#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::DoneProdPanel */

void __thiscall ProdPanelTy::DoneProdPanel(ProdPanelTy *this)

{
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0180 != 0) {
      StartSystemTy::sub_006E56B0(local_8->field_000C,local_8->field_0180);
    }
    pPVar2->field_0180 = 0;
    if (pPVar2->field_019D != 0) {
      StartSystemTy::sub_006E56B0(pPVar2->field_000C,pPVar2->field_019D);
    }
    pPVar2->field_019D = 0;
    puVar6 = &pPVar2->field_01A1;
    iVar5 = 5;
    do {
      if (*puVar6 != 0) {
        StartSystemTy::sub_006E56B0(pPVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pPVar2->field_017C != nullptr) {
      ccFntTy::operator_delete((uint *)pPVar2->field_017C);
      pPVar2->field_017C = nullptr;
    }
    if (pPVar2->field_0184 != 0) {
      cMf32::RecMemFree(g_cMf32_00806790,&pPVar2->field_0184);
    }
    pPVar2->field_0190 = nullptr;
    pPVar2->field_0188 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x1a6,0,iVar3,"%s",
                             "ProdPanelTy::DoneProdPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0x1a6);
  return;
}

