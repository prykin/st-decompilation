#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::SetModeControls */

void __thiscall TradePanelTy::SetModeControls(TradePanelTy *this,char param_1)

{
  AnonPointee_TradePanelTy_0000 *pAVar1;
  code *pcVar2;
  TradePanelTy *this_00;
  int errorCode;
  LPSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_4c;
  TradePanelTy *local_8;

  if (this->field_01BB != param_1) {
    this->field_01BB = param_1;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)local_8->field_0068,0,0xa6,0x31,
                 (byte *)local_8->field_0185,0,0xa6,0x31,0x77,0x39);
      if (this_00->field_01C8 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_01C8);
      }
      this_00->field_01C8 = 0;
      if (this_00->field_01CC != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_01CC);
      }
      pAVar1 = this_00->field_0000;
      uVar12 = 1;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0xb200;
      uVar6 = 0xb1ff;
      this_00->field_01CC = 0;
      if (this_00->field_01BB == '\0') {
        pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)
                          (0,1,0xac,0x57,0,1,1,pCVar3,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
        uVar5 = 1;
        pAVar1 = this_00->field_0000;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0xb202;
        uVar7 = 0xb201;
        this_00->field_01C8 = uVar6;
        pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)
                          (0,1,0xe5,0x57,0,1,1,pCVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar5);
        this_00->field_01CC = uVar6;
      }
      else {
        pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar6 = (*(code *)pAVar1->field_0004)(0,1,0xca,0x57,0,1,1,pCVar3);
        this_00->field_01C8 = uVar6;
      }
      sub_00551B10(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0x81,0,errorCode,
                               "%s","TradePanelTy::SetModeControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\tradecen.cpp",0x81);
  }
  return;
}

