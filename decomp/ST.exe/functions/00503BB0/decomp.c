#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetCmdBoat */

void __thiscall CPanelTy::SetCmdBoat(CPanelTy *this,uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar6;
  undefined4 local_9c [9];
  undefined4 local_78 [9];
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  undefined4 local_c;
  undefined1 local_8;
  undefined1 local_6;
  undefined1 local_5;

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
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff,0,iVar5,"%s"
                               ,"CPanelTy::SetCmdBoat");
    if (iVar6 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005252c0(0xae);
  pCVar4 = local_10;
  local_10->field_012C = 0;
  if (local_10->field_0B64 == '\0') {
    sub_004F8020(local_10,'\x01',0);
  }
  pCVar4->field_012C = 1;
  if (g_prodPanel_008016E8 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_008016E8,'\0');
  }
  if (g_prodPanel_0080167C != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_0080167C,'\0');
  }
  if (g_prodPanel_00801680 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801680,'\0');
  }
  if (g_infocPanel_00801698 != (InfocPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_infocPanel_00801698->field_0000->field_001C)(0);
  }
  if (g_tradePanel_00802A44 != (TradePanelTy *)0x0) {
    thunk_FUN_00552160(g_tradePanel_00802A44,'\0','\0');
  }
  if (g_prodPanel_00801684 != (ProdPanelTy *)0x0) {
    ProdPanelTy::SetPanel(g_prodPanel_00801684,'\0');
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
    (*(code *)g_upgPanel_00802A48->field_0000->field_001C)(0);
  }
  if (g_frmPanel_0080168C != (FrmPanelTy *)0x0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)g_frmPanel_0080168C->field_0000->field_001C)(0);
  }
  CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  bVar1 = (&pCVar4->field_0BA2)[param_1 & 0xff];
  switch((uint)bVar1) {
  case 1:
    local_5 = 0;
    thunk_FUN_0054edf0((undefined4 *)0xa,(undefined4 *)&local_5,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 2:
  case 3:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x18:
    thunk_FUN_0054b630(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 4:
    memset(local_78, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_78[0]._0_1_ = 10;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_78,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xb:
  case 0xc:
    local_6 = bVar1 == 0xb;
    thunk_FUN_0054edf0((undefined4 *)0x28,(undefined4 *)&local_6,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xe:
    if ((g_prodPanel_00801684 != (ProdPanelTy *)0x0) && (g_prodPanel_00801684->field_0172 == 2)) {
      ProdPanelTy::SetPanel(g_prodPanel_00801684,'\x01');
    }
    break;
  case 0x14:
    local_8 = 0;
    local_c = 3;
    thunk_FUN_0054edf0((undefined4 *)0x21,&local_c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  default:
    goto switchD_00503d36_caseD_15;
  case 0x2f:
    if ((g_behPanel_00801678 != (BehPanelTy *)0x0) && (g_behPanel_00801678->field_0172 == 2)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)g_behPanel_00801678->field_0000[2].field_0004)(1);
    }
    break;
  case 0x48:
    memset(local_9c, 0, 0x21); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_9c[0]._0_1_ = 0x14;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_9c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0x4c:
    if ((g_sAMPanel_008016EC != (SAMPanelTy *)0x0) && (g_sAMPanel_008016EC->field_0172 == 2)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)&g_sAMPanel_008016EC->field_0000[1].field_0x8)(1);
    }
  }
  thunk_FUN_004fad20(pCVar4);
switchD_00503d36_caseD_15:
  g_currentExceptionFrame = local_54.previous;
  return;
}

