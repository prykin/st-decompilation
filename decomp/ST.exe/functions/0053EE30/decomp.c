#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PreInitProdPanel */

void __thiscall ProdPanelTy::PreInitProdPanel(ProdPanelTy *this)

{
  code *pcVar1;
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    FUN_006b1a50((int)PTR_008075a8,3,(undefined4 *)0x0,(undefined4 *)&local_8->field_0x4c);
    iVar3 = pPVar2->field_0050 + pPVar2->field_0058;
    pPVar2->field_0044 = iVar3;
    pPVar2->field_0174 = (pPVar2->field_0048 - iVar3) + DAT_00806734;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\specpan.cpp",0x178,0,iVar3,"%s",
                             "ProdPanelTy::PreInitProdPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\specpan.cpp",0x178);
  return;
}

