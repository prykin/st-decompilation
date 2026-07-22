#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameRes */

void __thiscall CPanelTy::PaintNameRes(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT resourceId;
  uint *resourceString;
  HINSTANCE module;
  int iVar6;
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
    uVar4 = thunk_FUN_005276e0(local_8->field_0C31,local_8->field_0C32);
    pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_029A,uVar4);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,param_1 + 5,0x65,'\x01',pbVar5);
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,param_1 + 2,0x52,0xb2,10);
    iVar8 = -1;
    iVar7 = -1;
    uVar4 = 0;
    iVar6 = -1;
    iVar3 = -2;
    module = g_module_00807618;
    resourceId = thunk_FUN_00528060(pCVar2->field_0C31,pCVar2->field_0C32);
    resourceString = (uint *)LoadResourceString(resourceId,module);
    ccFntTy::WrTxt(pCVar2->field_01B8,resourceString,iVar3,iVar6,uVar4,iVar7,iVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x76,0,iVar3,"%s",
                             "CPanelTy::PaintNameRes");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x76);
  return;
}

