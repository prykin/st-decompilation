#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetCmdObj
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0050F587 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::SetCmdObj(CPanelTy *this,byte param_1)

{
  byte bVar1;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  bool *pbVar6;
  bool *pbVar7;
  undefined4 *puVar8;
  bool local_19c [36];
  bool local_178 [36];
  bool local_154 [36];
  bool local_130 [36];
  bool local_10c [36];
  InternalExceptionFrame local_e8;
  bool local_a4 [29];
  uint local_87;
  bool local_80 [29];
  uint local_63;
  bool local_5c [24];
  CPanelTy *local_44;
  bool local_40 [8];
  bool local_38 [12];
  bool local_2c [12];
  bool local_20 [12];
  bool local_14;
  int3 iStack_13;
  undefined1 local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  bool local_8;
  bool local_7;
  bool local_6;
  bool local_5;

  if (DAT_00808784 != 0) {
    return;
  }
  if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  local_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_e8;
  local_44 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_e8.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a,0,iVar4,"%s"
                               ,"CPanelTy::SetCmdObj");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0xa1a);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005252c0(0xae);
  this_00 = local_44;
  local_44->field_012C = 0;
  if (local_44->field_0C52 == '\0') {
    sub_004F8020(local_44,'\0',0);
  }
  this_00->field_012C = 1;
  if (g_researchPanel_008016E8 != nullptr) {
    ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\0');
  }
  if (g_bldBoatPanel_0080167C != nullptr) {
    ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\0');
  }
  if (g_bldLabPanel_00801680 != nullptr) {
    ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\0');
  }
  if (g_infocPanel_00801698 != nullptr) {
    (*g_infocPanel_00801698->vtable->SetPanel)((SpecPanelTy *)g_infocPanel_00801698,'\0');
  }
  if (g_tradePanel_00802A44 != nullptr) {
    TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\0','\0');
  }
  if (g_bldObjPanel_00801684 != nullptr) {
    ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\0');
  }
  if (g_behPanel_00801678 != nullptr) {
    (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
  }
  if (g_sAMPanel_008016EC != nullptr) {
    (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
  }
  if (g_upgPanel_00802A48 != nullptr) {
    (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
  }
  if (g_frmPanel_0080168C != nullptr) {
    (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
  }
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  bVar1 = (&this_00->field_0BFE)[param_1];
  switch((uint)bVar1) {
  case 1:
    pbVar6 = &local_6;
    local_6 = false;
    puVar8 = (undefined4 *)0x8;
    break;
  case 2:
  case 3:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x26:
  case 0x2a:
  case 0x34:
  case 0x37:
  case 0x42:
  case 0x43:
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_e8.previous;
    return;
  default:
    goto switchD_0050f5b2_caseD_4;
  case 0x15:
  case 0x16:
    local_5 = bVar1 != 0x15;
    pbVar6 = &local_5;
    puVar8 = (undefined4 *)0x28;
    break;
  case 0x1b:
    pbVar6 = local_38;
    local_38[4] = false;
    local_38[0] = true;
    local_38[1] = false;
    local_38[2] = false;
    local_38[3] = false;
    local_38[5] = true;
    local_38[6] = false;
    local_38[7] = true;
    local_38[8] = true;
    local_38[9] = true;
    local_38[10] = true;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1c:
    pbVar6 = local_2c;
    local_2c[4] = false;
    local_2c[0] = true;
    local_2c[1] = false;
    local_2c[2] = false;
    local_2c[3] = false;
    local_2c[5] = true;
    local_2c[6] = false;
    local_2c[7] = true;
    local_2c[8] = true;
    local_2c[9] = true;
    local_2c[10] = true;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x1d:
  case 0x3d:
    if ((g_bldBoatPanel_0080167C != nullptr) &&
       (g_bldBoatPanel_0080167C->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_bldBoatPanel_0080167C,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x1e:
  case 0x1f:
    pbVar6 = &local_14;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    _local_14 = CONCAT31((-(uint3)(bVar1 != 0x1e) & 0xc) + 9,1);
    local_10 = 0;
    uStack_f = 1;
    uStack_d = 0xff;
    local_c = 0xffff;
    local_a = 0xff;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x20:
  case 0x33:
    pbVar6 = &local_7;
    local_7 = false;
    puVar8 = (undefined4 *)0x22;
    break;
  case 0x21:
  case 0x41:
    if ((g_researchPanel_008016E8 != nullptr) &&
       (g_researchPanel_008016E8->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_researchPanel_008016E8,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x22:
  case 0x3b:
  case 0x40:
    pbVar6 = local_40;
    local_40[4] = false;
    local_40[5] = false;
    local_40[6] = false;
    local_40[0] = true;
    local_40[1] = false;
    local_40[2] = false;
    local_40[3] = false;
    puVar8 = (undefined4 *)0x1f;
    break;
  case 0x23:
    pbVar6 = local_10c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_10c;
    local_10c[0] = true;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x24:
  case 0x25:
    pbVar7 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_a4;
    *pbVar7 = false;
    local_a4[0] = true;
    puVar8 = (undefined4 *)0x17;
    local_87 = (uint)(bVar1 == 0x24);
    break;
  case 0x27:
  case 0x32:
    pbVar6 = &local_8;
    local_8 = false;
    puVar8 = (undefined4 *)0x9;
    break;
  case 0x28:
  case 0x29:
    pbVar6 = local_178;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_178;
    local_178[0] = (bool)((bVar1 != 0x28) + '\f');
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x30:
  case 0x3f:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\x01','\0');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x31:
    if ((g_tradePanel_00802A44 != nullptr) && (g_tradePanel_00802A44->field_0172 == 2))
    {
      TradePanelTy::sub_00552160(g_tradePanel_00802A44,'\x01','\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x36:
    pbVar6 = local_130;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_130;
    local_130[0] = true;
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x38:
  case 0x45:
    pbVar7 = local_80;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_80;
    *pbVar7 = false;
    local_80[0] = true;
    puVar8 = (undefined4 *)0x17;
    local_63 = (uint)(bVar1 != 0x38);
    break;
  case 0x39:
  case 0x46:
    pbVar7 = local_19c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    pbVar6 = local_19c;
    *pbVar7 = false;
    puVar8 = (undefined4 *)0x17;
    local_19c[0] = (bool)((bVar1 != 0x39) + '\f');
    break;
  case 0x3e:
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,0xe,0x6c);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x44:
    if ((g_bldLabPanel_00801680 != nullptr) && (g_bldLabPanel_00801680->field_0172 == 2))
    {
      ProdPanelTy::SetPanel(g_bldLabPanel_00801680,'\x01');
    }
    sub_004FAD20(this_00);
    g_currentExceptionFrame = local_e8.previous;
    return;
  case 0x4f:
    pbVar6 = local_20;
    local_20[4] = false;
    local_20[0] = true;
    local_20[1] = false;
    local_20[2] = false;
    local_20[3] = false;
    local_20[5] = true;
    local_20[6] = false;
    local_20[7] = true;
    local_20[8] = true;
    local_20[9] = true;
    local_20[10] = true;
    puVar8 = (undefined4 *)0x1e;
    break;
  case 0x50:
  case 0x51:
    pbVar6 = local_154;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar6[0] = false;
      pbVar6[1] = false;
      pbVar6[2] = false;
      pbVar6[3] = false;
      pbVar6 = pbVar6 + 4;
    }
    *pbVar6 = false;
    pbVar6 = local_154;
    local_154[0] = (bool)((bVar1 != 0x50) + '\x1b');
    puVar8 = (undefined4 *)0x17;
    break;
  case 0x52:
    pbVar6 = local_5c;
    pbVar7 = local_5c;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = false;
      pbVar7[1] = false;
      pbVar7[2] = false;
      pbVar7[3] = false;
      pbVar7 = pbVar7 + 4;
    }
    local_5c[0] = true;
    puVar8 = (undefined4 *)0x16;
  }
  thunk_FUN_0054edf0(puVar8,(uint *)pbVar6,0,0xffffffff);
switchD_0050f5b2_caseD_4:
  g_currentExceptionFrame = local_e8.previous;
  return;
}

