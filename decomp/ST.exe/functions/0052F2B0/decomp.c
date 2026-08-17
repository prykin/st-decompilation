#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall OptPanelTy::SwitchOptPanel(OptPanelTy *this,char param_1)

{
  OptPanelTy *this_00;
  int errorCode;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  Global_sub_005252C0_param_1Enum GVar14;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  OptPanelTy *local_c;
  int local_8;

  if (this->field_019C != 0) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar2 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x125,0,errorCode,
                               "%s","OptPanelTy::SwitchOptPanel");
    if (iVar2 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x125);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_c->field_0172) {
  case CASE_1:
  case CASE_3:
    switch(param_1) {
    case '\x02':
    case '\f':
    case '\x0e':
      local_c->field_01A9 = 1;
    case '\x01':
      if (param_1 == '\x01') {
        local_c->field_01A9 = 0;
      }
      if (param_1 == local_c->field_01A4) {
        g_currentExceptionFrame = local_5c.previous;
        return;
      }
      local_c->field_01A4 = param_1;
      /* ST_CALLSITE[0052F35C]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(local_c);
      g_currentExceptionFrame = local_5c.previous;
      return;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\r':
    default:
      if (local_c->field_0172 == CASE_1) {
        /* ST_CALLSITE[0052F37D]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
        ShiftControls(local_c,0);
      }
      this_00->field_0172 = CASE_4;
      DAT_00808788 = 0;
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0052F3A7]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
        CPanelTy::ShiftControls(g_cPanel_00801688,1);
      }
      GVar14 = CASE_B0;
    }
    goto LAB_0052f60b;
  case CASE_2:
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[0052F3C3]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
    }
    bVar3 = local_8 != 0;
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[0052F3E4]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
    }
    bVar4 = local_8 != 0;
    if (g_bldObjPanel_00801684 != nullptr) {
      /* ST_CALLSITE[0052F400]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
    }
    bVar5 = local_8 != 0;
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[0052F41E]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_infocPanel_00801698->vtable->SetPanel)
                          ((SpecPanelTy *)g_infocPanel_00801698,'\0');
    }
    bVar6 = local_8 != 0;
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[0052F439]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      local_8 = TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
    }
    bVar7 = local_8 != 0;
    if (g_behPanel_00801678 != nullptr) {
      /* ST_CALLSITE[0052F457]: CALL dword ptr [EAX + 0x1c] */
      local_8 = (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    bVar8 = local_8 != 0;
    if (g_sAMPanel_008016EC != nullptr) {
      /* ST_CALLSITE[0052F473]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    bVar9 = local_8 != 0;
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[0052F48F]: CALL dword ptr [EAX + 0x1c] */
      local_8 = (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    bVar10 = local_8 != 0;
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[0052F4AB]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
    bVar11 = local_8 != 0;
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[0052F4C5]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
    }
    bVar12 = local_8 != 0;
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_CALLSITE[0052F4E3]: CALL dword ptr [EAX + 0x18] */
      local_8 = g_helpPanel_00801690->SetPanel('\0');
    }
    bVar13 = local_8 != 0;
    if (g_playPanel_008016E4 != nullptr) {
      /* ST_CALLSITE[0052F4FD]: CALL 0x0040425f; direct=0040425F PlayPanelTy::SetPanel */
      local_8 = PlayPanelTy::SetPanel(g_playPanel_008016E4,'\0');
    }
    if ((local_8 != 0 ||
         (bVar13 ||
         (bVar12 ||
         (bVar11 ||
         (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || bVar3))))))))))) &&
       (param_1 == '\x0f')) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    local_10 = 0;
    local_14 = (uint)(DAT_00808783 != '\x03');
    local_18 = 1;
    thunk_FUN_0054edf0((undefined4 *)0x5,&local_18,1,0xffffffff);
    DAT_0080878c = 1;
    if (g_cPanel_00801688 != nullptr) {
      /* ST_CALLSITE[0052F569]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      CPanelTy::ShiftControls(g_cPanel_00801688,0);
    }
    switch(param_1) {
    case '\x01':
      break;
    case '\x02':
    case '\f':
    case '\x0e':
      this_00->field_01A9 = 1;
      break;
    default:
      goto switchD_0052f589_caseD_3;
    }
    if (param_1 == '\x01') {
      this_00->field_01A9 = 0;
    }
    if (param_1 != this_00->field_01A4) {
      this_00->field_01A4 = param_1;
      /* ST_CALLSITE[0052F5B2]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
      goto switchD_0052f30f_caseD_4;
    }
    break;
  case CASE_4:
switchD_0052f30f_caseD_4:
    break;
  default:
    goto switchD_0052f30f_default;
  }
switchD_0052f589_caseD_3:
  switch(param_1) {
  case '\x02':
  case '\f':
  case '\x0e':
    this_00->field_01A9 = 1;
  case '\x01':
    if (param_1 == '\x01') {
      this_00->field_01A9 = 0;
    }
    if (param_1 != this_00->field_01A4) {
      this_00->field_01A4 = param_1;
      /* ST_CALLSITE[0052F5F8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      SetOptControls(this_00);
    }
  default:
    this_00->field_0172 = CASE_3;
    GVar14 = CASE_AF;
  }
LAB_0052f60b:
  thunk_FUN_005252c0(GVar14);
switchD_0052f30f_default:
  g_currentExceptionFrame = local_5c.previous;
  return;
}

