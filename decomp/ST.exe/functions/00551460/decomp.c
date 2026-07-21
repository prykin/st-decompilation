#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::SetModeControls */

void __thiscall TradePanelTy::SetModeControls(TradePanelTy *this,char param_1)

{
  AnonPointee_TradePanelTy_0000 *pAVar1;
  code *pcVar2;
  TradePanelTy *pTVar3;
  int errorCode;
  LPSTR pCVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  if (this->field_01BB != param_1) {
    this->field_01BB = param_1;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pTVar3 = local_8;
    if (errorCode == 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0068,0,0xa6,0x31,
                 (byte *)local_8->field_0185,0,0xa6,0x31,0x77,0x39);
      if (pTVar3->field_01C8 != 0) {
        StartSystemTy::sub_006E56B0(pTVar3->field_000C,pTVar3->field_01C8);
      }
      pTVar3->field_01C8 = 0;
      if (pTVar3->field_01CC != 0) {
        StartSystemTy::sub_006E56B0(pTVar3->field_000C,pTVar3->field_01CC);
      }
      pAVar1 = pTVar3->field_0000;
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0xb200;
      uVar7 = 0xb1ff;
      pTVar3->field_01CC = 0;
      if (pTVar3->field_01BB == '\0') {
        pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar7 = (*(code *)pAVar1->field_0004)
                          (0,1,0xac,0x57,0,1,1,pCVar4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13)
        ;
        uVar6 = 1;
        pAVar1 = pTVar3->field_0000;
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0xb202;
        uVar8 = 0xb201;
        pTVar3->field_01C8 = uVar7;
        pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar7 = (*(code *)pAVar1->field_0004)
                          (0,1,0xe5,0x57,0,1,1,pCVar4,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar6)
        ;
        pTVar3->field_01CC = uVar7;
      }
      else {
        pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar7 = (*(code *)pAVar1->field_0004)(0,1,0xca,0x57,0,1,1,pCVar4);
        pTVar3->field_01C8 = uVar7;
      }
      thunk_FUN_00551b10((AnonShape_00551B10_03263458 *)pTVar3);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x81,0,errorCode,
                               "%s","TradePanelTy::SetModeControls");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x81);
  }
  return;
}

