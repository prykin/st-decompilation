#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::InitOptPanel */

void __thiscall OptPanelTy::InitOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  ccFntTy *this_01;
  undefined4 uVar8;
  short sVar9;
  undefined2 uVar10;
  uint uVar11;
  byte bVar12;
  undefined4 uVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_optPanel_008016DC = local_8;
    pcVar3 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                               (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
    this_00->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pcVar3 = (ccFntTy *)ccFntTy::operator(this_01,0x19d,*(int *)&PTR_00802a28->field_0x2c);
    this_00->field_0180 = pcVar3;
    pcVar3->field_0058 = 1;
    pcVar3->field_005C = 0;
    iVar2 = 1;
    piVar15 = (int *)0x0;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPTIONS_007c713c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar15,iVar2);
    iVar2 = 1;
    piVar15 = (int *)0x0;
    this_00->field_0184 = puVar5;
    this_00->field_0188 = 0;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_NUM_007c712c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar15,iVar2);
    iVar2 = 1;
    piVar15 = (int *)0x0;
    this_00->field_018C = puVar5;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_SAVE_007c711c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar15,iVar2);
    iVar2 = 1;
    piVar15 = (int *)0x0;
    this_00->field_0190 = puVar5;
    pCVar4 = thunk_FUN_00571240(s_BKG_OPT_MOBJ_007c710c,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar4,piVar15,iVar2);
    puVar18 = (undefined4 *)0x0;
    iVar16 = 0;
    iVar2 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    this_00->field_0194 = puVar5;
    pCVar4 = thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar4,uVar11,bVar12,iVar2,iVar16,puVar18);
    this_00->field_0198 = puVar5;
    puVar5 = this_00->field_0184 + 0x14;
    iVar2 = 1;
    uVar11 = FUN_006b4fe0((int)this_00->field_0184);
    uVar6 = FUN_006b50c0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar5,iVar2);
    this_00->field_01E5 = uVar6;
    puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_01F1 = puVar7;
    Library::DKW::TBL::FUN_006b6020(puVar7,0,&DAT_008016a0);
    PrepMissObj(this_00);
    SetOptControls(this_00);
    uVar19 = 0;
    uVar17 = 0;
    pcVar14 = (char *)0x0;
    uVar13 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar8 = 0xc002;
    uVar6 = 0xc001;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar6 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0xc9,0x9f,1,(int)pCVar4,uVar6,uVar8,sVar9,
                                uVar10,uVar13,pcVar14,uVar17,uVar19);
    uVar20 = 0;
    uVar19 = 0;
    pcVar14 = (char *)0x0;
    uVar17 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar13 = 0xc004;
    uVar8 = 0xc003;
    this_00->field_01AD = uVar6;
    pCVar4 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar6 = UPanelTy::CreateBut((UPanelTy *)this_00,0,0,0x93,0x9f,1,(int)pCVar4,uVar8,uVar13,sVar9,
                                uVar10,uVar17,pcVar14,uVar19,uVar20);
    this_00->field_01B1 = uVar6;
    this_00->field_0301 = this_00->field_0038;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar16 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x5b,0,iVar2,&DAT_007a4ccc,
                              s_OptPanelTy__InitOptPanel_007c70ec);
  if (iVar16 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x5b);
  return;
}

