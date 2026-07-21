#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SetPanel */

undefined4 __thiscall HelpPanelTy::SetPanel(HelpPanelTy *this,char param_1)

{
  code *pcVar1;
  HelpPanelTy *this_00;
  int errorCode;
  int iVar2;
  undefined4 uVar3;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  if (this->field_01A0 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    local_8->field_01A0 = param_1;
    if (param_1 != '\0') {
      if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
      }
      if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
      }
      if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)g_infocPanel_00801698 + 0x1c))(0);
      }
      if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
        thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != (BehPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_behPanel_00801678->field_0000[2].field_0004)(0);
      }
      if (g_sAMPanel_008016EC != (SAMPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0x8)(0);
      }
      if (g_upgPanel_00802A48 != (UpgPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)g_upgPanel_00802A48 + 0x1c))(0);
      }
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
      }
      if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
      }
      if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
        PlayPanelTy::SetPanel(g_playPanel_008016E4,'\0');
      }
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
      }
      SwitchOptPanel(this_00,1);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
      CPanelTy::ShiftControls(g_cPanel_00801688,1);
    }
    SwitchOptPanel(this_00,0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x12e,0,errorCode,
                             "%s","HelpPanelTy::SetPanel");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x12e);
  return 1;
}

