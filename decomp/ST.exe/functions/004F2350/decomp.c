#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintCostsXYSI */

void __thiscall
CPanelTy::PaintCostsXYSI
          (CPanelTy *this,int param_1,ushort param_2,ushort param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *resourceString;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    if ((param_2 != 0xffff) || (param_3 != 0xffff)) {
      ccFntTy::SetSurf(local_8->field_01B8,param_1,0,0x5c,0x50,0x3c,10);
      iVar7 = -1;
      iVar6 = -1;
      uVar5 = 5;
      iVar4 = -1;
      iVar3 = -1;
      resourceString = (uint *)LoadResourceString(0x36b3,g_module_00807618);
      ccFntTy::WrTxt(pCVar2->field_01B8,resourceString,iVar3,iVar4,uVar5,iVar6,iVar7);
    }
    if (param_2 != 0xffff) {
      wsprintfA(&pCVar2->field_0x1e1,"%4d",param_2);
      ccFntTy::SetSurf(pCVar2->field_01C4,param_1,0,0x7d,0x5a,0x18,0xf);
      ccFntTy::WrTxt(pCVar2->field_01C4,(uint *)&pCVar2->field_0x1e1,-3,-1,param_4 & 0xffff,-1,-1);
    }
    if (param_3 != 0xffff) {
      wsprintfA(&pCVar2->field_0x1e1,"%4d",param_3);
      ccFntTy::SetSurf(pCVar2->field_01C4,param_1,0,0x5f,0x5a,0x18,0xf);
      ccFntTy::WrTxt(pCVar2->field_01C4,(uint *)&pCVar2->field_0x1e1,-3,-1,param_5 & 0xffff,-1,-1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0xd9,0,iVar3,"%s",
                             "CPanelTy::PaintCostsXYSI");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0xd9);
  return;
}

