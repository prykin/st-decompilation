#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::SetPanel */

undefined4 __thiscall PlayPanelTy::SetPanel(PlayPanelTy *this,char param_1)

{
  code *pcVar1;
  PlayPanelTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  InternalExceptionFrame local_4c;
  PlayPanelTy *local_8;

  if (this->field_0180 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0180 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
        CPanelTy::ShiftControls(g_cPanel_00801688,1);
      }
      iVar2 = 0;
    }
    else {
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
      if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
      }
      if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
        ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
      }
      if (g_helpPanel_00801690 != (AnonShape_GLOBAL_00801690_2AA401C1 *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)g_helpPanel_00801690 + 0x18))(0);
      }
      if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
        OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
      }
      iVar2 = 1;
    }
    SwitchOptPanel(this_00,iVar2);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",0xe9,0,iVar2,"%s",
                             "PlayPanelTy::SetPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\playpan.cpp",0xe9);
  return 1;
}

