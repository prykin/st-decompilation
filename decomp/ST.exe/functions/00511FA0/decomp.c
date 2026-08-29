#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::SetPanel */

undefined4 __thiscall HelpPanelTy::SetPanel(HelpPanelTy *this,char param_1)

{
  HelpPanelTy *this_00;
  int errorCode;
  int iVar2;
  uint uVar3;
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
      if (g_researchPanel_008016E8 != nullptr) {
        /* ST_CALLSITE[0051200A]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
      }
      if (g_bldBoatPanel_0080167C != nullptr) {
        /* ST_CALLSITE[0051201B]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
      }
      if (g_bldObjPanel_00801684 != nullptr) {
        /* ST_CALLSITE[0051202C]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
      }
      if (g_infocPanel_00801698 != nullptr) {
        /* ST_CALLSITE[0051203F]: CALL dword ptr [EDX + 0x1c] */
        (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
      }
      if (g_tradePanel_00802A44 != nullptr) {
        /* ST_CALLSITE[00512050]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
        TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
      }
      if (g_behPanel_00801678 != nullptr) {
        /* ST_CALLSITE[00512063]: CALL dword ptr [EAX + 0x1c] */
        (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
      }
      if (g_sAMPanel_008016EC != nullptr) {
        /* ST_CALLSITE[00512074]: CALL dword ptr [EDX + 0x1c] */
        (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
      }
      if (g_upgPanel_00802A48 != nullptr) {
        /* ST_CALLSITE[00512085]: CALL dword ptr [EAX + 0x1c] */
        (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
      }
      if (g_bldLabPanel_00801680 != nullptr) {
        /* ST_CALLSITE[00512094]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
      }
      if (g_frmPanel_0080168C != nullptr) {
        /* ST_CALLSITE[005120A7]: CALL dword ptr [EDX + 0x1c] */
        (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
      }
      if (g_playPanel_008016E4 != nullptr) {
        /* ST_CALLSITE[005120B6]: CALL 0x0040425f; direct=0040425F PlayPanelTy::SetPanel */
        PlayPanelTy::SetPanel(g_playPanel_008016E4,'\0');
      }
      if (g_optPanel_008016DC != nullptr) {
        /* ST_CALLSITE[005120C5]: CALL 0x00402630; direct=00402630 OptPanelTy::SwitchOptPanelOff */
        OptPanelTy::SwitchOptPanelOff(g_optPanel_008016DC);
      }
      /* ST_CALLSITE[005120CE]: CALL 0x00405c3b; direct=00405C3B HelpPanelTy::SwitchOptPanel */
      SwitchOptPanel(this_00,1);
      g_currentExceptionFrame = local_4c.previous;
      return 1;
    }
    if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
      /* ST_CALLSITE[005120FD]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      CPanelTy::ShiftControls(g_cPanel_00801688,1);
    }
    /* ST_CALLSITE[00512106]: CALL 0x00405c3b; direct=00405C3B HelpPanelTy::SwitchOptPanel */
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

