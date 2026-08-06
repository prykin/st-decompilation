#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetCmdBoat
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00503D0B MOV ECX,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::SetCmdBoat(CPanelTy *this,byte param_1)

{
  byte bVar1;
  bool bVar3;
  CPanelTy *this_00;
  int iVar4;
  int iVar5;
  uint local_9c [9];
  uint local_78 [9];
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  uint local_c;
  undefined1 local_8;
  bool local_6;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff,0,iVar4,"%s"
                               ,"CPanelTy::SetCmdBoat");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel2.cpp",0x2ff);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  thunk_FUN_005252c0(0xae);
  this_00 = local_10;
  local_10->field_012C = 0;
  if (local_10->field_0B64 == '\0') {
    sub_004F8020(local_10,'\x01',0);
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
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  bVar1 = *(byte *)((int)this_00->field_0B1F + param_1 + 0x83);
  switch((uint)bVar1) {
  case 1:
    local_5 = 0;
    thunk_FUN_0054edf0((undefined4 *)0xa,(uint *)&stack0xfffffffb,0,0xffffffff);
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
    CursorClassTy::sub_0054B630(g_cursorClass_00802A30,(uint)bVar1,0);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 4:
    memset(local_78, 0, 0x21); /* compiler bulk-zero initialization */
    STPiece<0,1>(local_78[0]) = 10;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_78,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xb:
  case 0xc:
    local_6 = bVar1 == 0xb;
    thunk_FUN_0054edf0((undefined4 *)0x28,(uint *)&local_6,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0xe:
    if ((g_bldObjPanel_00801684 != nullptr) && (g_bldObjPanel_00801684->field_0172 == 2))
    {
      ProdPanelTy::SetPanel(g_bldObjPanel_00801684,'\x01');
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
    if ((g_behPanel_00801678 != nullptr) && (g_behPanel_00801678->field_0172 == 2)) {
      (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\x01');
    }
    break;
  case 0x48:
    memset(local_9c, 0, 0x21); /* compiler bulk-zero initialization */
    STPiece<0,1>(local_9c[0]) = 0x14;
    thunk_FUN_0054edf0((undefined4 *)0x17,local_9c,0,0xffffffff);
    g_currentExceptionFrame = local_54.previous;
    return;
  case 0x4c:
    if ((g_sAMPanel_008016EC != nullptr) && (g_sAMPanel_008016EC->field_0172 == 2)) {
      (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\x01');
    }
  }
  sub_004FAD20(this_00);
switchD_00503d36_caseD_15:
  g_currentExceptionFrame = local_54.previous;
  return;
}

