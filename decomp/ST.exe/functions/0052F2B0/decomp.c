#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall OptPanelTy::SwitchOptPanel(OptPanelTy *this,char param_1)

{
  code *pcVar1;
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
  undefined4 local_18;
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
    iVar2 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x125,0,errorCode,
                               &DAT_007a4ccc,s_OptPanelTy__SwitchOptPanel_007c71e0);
    if (iVar2 == 0) {
      RaiseInternalException(errorCode,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x125);
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
        ShiftControls(local_c,0);
      }
      this_00->field_0172 = CASE_4;
      DAT_00808788 = 0;
      if ((g_cPanel_00801688 != (CPanelTy *)0x0) && (g_cPanel_00801688->field_023F == CASE_1)) {
        CPanelTy::ShiftControls(g_cPanel_00801688,1);
      }
      GVar14 = CASE_B0;
    }
    goto LAB_0052f60b;
  case CASE_2:
    if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
    }
    bVar3 = local_8 != 0;
    if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
    }
    bVar4 = local_8 != 0;
    if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
    }
    bVar5 = local_8 != 0;
    if (DAT_00801698 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_00801698 + 0x1c))(0);
    }
    bVar6 = local_8 != 0;
    if (DAT_00802a44 != (void *)0x0) {
      local_8 = thunk_FUN_00552160(DAT_00802a44,'\0','\0');
    }
    bVar7 = local_8 != 0;
    if (DAT_00801678 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_00801678 + 0x1c))(0);
    }
    bVar8 = local_8 != 0;
    if (DAT_008016ec != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_008016ec + 0x1c))(0);
    }
    bVar9 = local_8 != 0;
    if (DAT_00802a48 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_00802a48 + 0x1c))(0);
    }
    bVar10 = local_8 != 0;
    if (DAT_0080168c != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_0080168c + 0x1c))(0);
    }
    bVar11 = local_8 != 0;
    if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
      local_8 = ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
    }
    bVar12 = local_8 != 0;
    if (DAT_00801690 != (int *)0x0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(*DAT_00801690 + 0x18))(0);
    }
    bVar13 = local_8 != 0;
    if (g_playPanel_008016E4 != (PlayPanelTy *)0x0) {
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
    if (g_cPanel_00801688 != (CPanelTy *)0x0) {
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

