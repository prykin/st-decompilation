#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::InitPausePanel */

void __thiscall PausePanelTy::InitPausePanel(PausePanelTy *this)

{
  code *pcVar1;
  PausePanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  uint *resourceString;
  undefined4 uVar5;
  ccFntTy *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_pausePanel_008016E0 = local_8;
    iVar2 = g_nWidth_00806730 + -0x1c;
    local_8->field_003C = iVar2;
    pcVar6 = (ccFntTy *)((local_8->field_0040 - iVar2) + g_nWidth_00806730);
    local_8->field_0174 = pcVar6;
    pcVar6 = (ccFntTy *)ccFntTy::operator(pcVar6,0x19d,*(int *)&PTR_00802a28->field_0x28);
    this_00->field_017C = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0;
    iVar2 = 1;
    piVar9 = (int *)0x0;
    pCVar3 = thunk_FUN_00571240("BKG_PAUSE",0);
    puVar4 = cMf32::RecGet(DAT_00806790,1,pCVar3,piVar9,iVar2);
    this_00->field_0180 = puVar4;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)puVar4);
    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x52,2,0xd1,0xc);
    iVar11 = -1;
    iVar10 = -1;
    uVar8 = 0;
    iVar7 = -1;
    iVar2 = -2;
    resourceString = (uint *)LoadResourceString(0x2716,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_017C,resourceString,iVar2,iVar7,uVar8,iVar10,iVar11);
    pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar5 = PanelTy::CreateBut((PanelTy *)this_00,0,1,0x115,0x8b,1,0,1,pCVar3,0xbfff,0xc000,0,0,0,
                               (char *)0x0,1);
    this_00->field_0184 = uVar5;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x28,0,iVar2,"%s",
                             "PausePanelTy::InitPausePanel");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\pause.cpp",0x28);
  return;
}

