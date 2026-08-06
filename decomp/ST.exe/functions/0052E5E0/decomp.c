#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::InitOptPanel */

void __thiscall OptPanelTy::InitOptPanel(OptPanelTy *this)

{
  OptPanelTy *this_00;
  int iVar2;
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  int uVar11;
  DArrayTy *pDVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
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
    pcVar3 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pcVar3 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
    this_00->field_0180 = pcVar3;
    pcVar3->field_0058 = 1;
    pcVar3->field_005C = 0;
    iVar2 = 1;
    piVar16 = nullptr;
    pCVar4 = thunk_FUN_00571240("BKG_OPTIONS",0);
    puVar5 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_0184 = puVar5;
    this_00->field_0188 = 0;
    pCVar4 = thunk_FUN_00571240("BKG_OPT_NUM",0);
    puVar5 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_018C = puVar5;
    pCVar4 = thunk_FUN_00571240("BKG_OPT_SAVE",0);
    puVar5 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_0190 = puVar5;
    pCVar4 = thunk_FUN_00571240("BKG_OPT_MOBJ",0);
    puVar5 = cMf32::RecGet(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    puVar19 = nullptr;
    iVar17 = 0;
    iVar2 = 1;
    bVar13 = 0;
    uVar12 = 0xffffffff;
    this_00->field_0194 = puVar5;
    pCVar4 = thunk_FUN_00571240("IND_PNT",0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar4,uVar12,bVar13,iVar2,iVar17,puVar19);
    this_00->field_0198 = puVar5;
    puVar5 = this_00->field_0184 + 0x14;
    iVar2 = 1;
    uVar11 = FUN_006b4fe0((int)this_00->field_0184);
    puVar5 = (ushort *)
             FUN_006b50c0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar5,iVar2);
    this_00->field_01E5 = puVar5;
    pDVar6 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_01F1 = pDVar6;
    Library::DKW::TBL::FUN_006b6020(pDVar6,0,&DAT_008016a0);
    PrepMissObj(this_00);
    SetOptControls(this_00);
    uVar20 = 0;
    uVar18 = 0;
    pcVar15 = nullptr;
    uVar14 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar8 = 0xc002;
    uVar7 = 0xc001;
    pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0xc9,0x9f,1,pCVar4,uVar7,uVar8,sVar9,uVar10
                                 ,uVar14,pcVar15,uVar18,uVar20);
    uVar20 = 0;
    uVar18 = 0;
    pcVar15 = nullptr;
    uVar14 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar8 = 0xc004;
    uVar7 = 0xc003;
    this_00->field_01AD[0] = uVar12;
    pCVar4 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar4,uVar7,uVar8,sVar9,uVar10
                                 ,uVar14,pcVar15,uVar18,uVar20);
    uVar7 = this_00->field_0038;
    this_00->field_01AD[1] = uVar12;
    this_00->field_0301 = uVar7;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x5b,0,iVar2,"%s",
                              "OptPanelTy::InitOptPanel");
  if (iVar17 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x5b);
  return;
}

