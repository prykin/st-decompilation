#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\pause.cpp
   PausePanelTy::InitPausePanel */

void __thiscall PausePanelTy::InitPausePanel(PausePanelTy *this)

{
  PausePanelTy *this_00;
  int iVar2;
  int iVar4;
  ccFntTy *pcVar5;
  LPSTR pCVar6;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar7;
  char *resourceString;
  int iVar3;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_4c;
  PausePanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_pausePanel_008016E0 = local_8;
    iVar4 = g_nWidth_00806730 + -0x1c;
    local_8->field_003C = iVar4;
    local_8->field_0174 = (local_8->field_0040 - iVar4) + g_nWidth_00806730;
    /* ST_CALLSITE[005392E9]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
    pcVar5 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar5;
    pcVar5->field_0058 = 0;
    pcVar5->field_005C = 0;
    iVar4 = 1;
    piVar10 = nullptr;
    pCVar6 = thunk_FUN_00571240("BKG_PAUSE",0);
    /* ST_CALLSITE[00539321]: CALL 0x006f1ce0; direct=006F1CE0 cMf32::RecGet; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;pointer:/int;/int */
    pRVar7 = cMf32::RecGet(g_cMf32_00806790,1,pCVar6,piVar10,iVar4);
    this_00->field_0180 = (ushort *)pRVar7;
    /* ST_CALLSITE[00539337]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',pRVar7);

    ccFntTy::SetSurf(this_00->field_017C,this_00->field_0068,0,0x52,2,0xd1,0xc);
    iVar12 = -1;
    iVar11 = -1;
    uVar9 = 0;
    iVar8 = -1;
    iVar4 = -2;
    /* ST_CALLSITE[00539370]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    resourceString = LoadResourceString(0x2716,g_hINSTANCE_00807618);

    ccFntTy::WrTxt(this_00->field_017C,resourceString,iVar4,iVar8,uVar9,iVar11,iVar12);
    pCVar6 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[005393BB]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
    iVar4 = PanelTy::CreateBut((PanelTy *)this_00,0,1,0x115,0x8b,1,0,1,pCVar6,0xbfff,0xc000,0,0,0,
                               nullptr,1);
    this_00->field_0184 = iVar4;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\pause.cpp",0x28,0,iVar2,"%s",
                             "PausePanelTy::InitPausePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\pause.cpp",0x28);
  return;
}

