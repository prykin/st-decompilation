#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintNameResSI */

void __thiscall CPanelTy::PaintNameResSI(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  UINT resourceId;
  uint *puVar6;
  HINSTANCE module;
  int iVar7;
  int iVar8;
  int iVar9;
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
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,0x26,0x50,'\x01',pbVar5);
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x15,0x6c,0xc3,0xb);
    iVar9 = -1;
    iVar8 = -1;
    uVar4 = 5;
    iVar7 = -1;
    iVar3 = -2;
    module = HINSTANCE_00807618;
    resourceId = thunk_FUN_00528060(pCVar2->field_0C31,pCVar2->field_0C32);
    puVar6 = (uint *)LoadResourceString(resourceId,module);
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar6,iVar3,iVar7,uVar4,iVar8,iVar9);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x84,0,iVar3,"%s",
                             "CPanelTy::PaintNameResSI");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x84);
  return;
}

