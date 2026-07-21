#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cp_sup.cpp
   CPanelTy::PaintCostsXY */

void __thiscall
CPanelTy::PaintCostsXY
          (CPanelTy *this,int param_1,int param_2,int param_3,ushort param_4,ushort param_5,
          uint param_6,uint param_7)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    if ((param_4 != 0xffff) || (param_5 != 0xffff)) {
      ccFntTy::SetSurf(local_8->field_01B8,param_1,0,param_2,param_3,0x30,10);
      iVar8 = -1;
      iVar7 = -1;
      uVar6 = 1;
      iVar5 = -1;
      iVar3 = 0;
      puVar4 = (uint *)LoadResourceString(0x36b3,HINSTANCE_00807618);
      ccFntTy::WrTxt(pCVar2->field_01B8,puVar4,iVar3,iVar5,uVar6,iVar7,iVar8);
    }
    if (param_4 != 0xffff) {
      wsprintfA(&pCVar2->field_0x1e1,"%d",param_4);
      ccFntTy::SetSurf(pCVar2->field_01B8,param_1,0,param_2 + 0x30,param_3,0x11,10);
      ccFntTy::WrTxt(pCVar2->field_01B8,(uint *)&pCVar2->field_0x1e1,-3,-1,param_6 & 0xffff,-1,-1);
    }
    if (param_5 != 0xffff) {
      wsprintfA(&pCVar2->field_0x1e1,"%d",param_5);
      ccFntTy::SetSurf(pCVar2->field_01B8,param_1,0,param_2 + 0x30,param_3 + 0xb,0x11,10);
      ccFntTy::WrTxt(pCVar2->field_01B8,(uint *)&pCVar2->field_0x1e1,-3,-1,param_7 & 0xffff,-1,-1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cp_sup.cpp",0xbe,0,iVar3,"%s",
                             "CPanelTy::PaintCostsXY");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cp_sup.cpp",0xbe);
  return;
}

