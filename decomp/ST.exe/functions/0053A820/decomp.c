#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::SetPanel */

undefined4 __thiscall PlayPanelTy::SetPanel(PlayPanelTy *this,char param_1)

{
  PlayPanelTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  int iVar4;
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
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0053A964]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
        CPanelTy::ShiftControls(g_cPanel_00801688,1);
      }
      iVar4 = 0;
    }
    else {
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[0053A88A]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[0053A89B]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_CALLSITE[0053A8AC]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[0053A8BF]: CALL dword ptr [EDX + 0x1c] */
        (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[0053A8D0]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
        TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != nullptr) {
        /* ST_CALLSITE[0053A8E3]: CALL dword ptr [EAX + 0x1c] */
        (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
      }
      if (g_sAMPanel_008016EC != nullptr) {
        /* ST_CALLSITE[0053A8F4]: CALL dword ptr [EDX + 0x1c] */
        (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
      }
      if (g_upgPanel_00802A48 != nullptr) {
        /* ST_CALLSITE[0053A905]: CALL dword ptr [EAX + 0x1c] */
        (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
      }
      if (g_frmPanel_0080168C != nullptr) {
        /* ST_CALLSITE[0053A916]: CALL dword ptr [EDX + 0x1c] */
        (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[0053A925]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
      }
      if (g_helpPanel_00801690 != nullptr) {
        /* ST_CALLSITE[0053A938]: CALL dword ptr [EAX + 0x18] */
        g_helpPanel_00801690->SetPanel('\0');
      }
      if (g_optPanel_008016DC != nullptr) {
        /* ST_CALLSITE[0053A945]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
        OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
      }
      iVar4 = 1;
    }
    /* ST_CALLSITE[0053A96D]: CALL 0x004052c7; direct=004052C7 PlayPanelTy::SwitchOptPanel */
    SwitchOptPanel(this_00,iVar4);
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

