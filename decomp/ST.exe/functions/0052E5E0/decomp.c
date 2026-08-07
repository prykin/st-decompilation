#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::InitOptPanel */

void __thiscall OptPanelTy::InitOptPanel(OptPanelTy *this)

{
  OptPanelTy *this_00;
  int iVar2;
  ccFntTy *pcVar2;
  LPSTR pCVar3;
  ushort *local_EAX_158;
  ushort *puVar5;
  ushort *local_EAX_238;
  ushort *local_EAX_275;
  ushort *local_EAX_317;
  int uVar11;
  ushort *puVar4;
  DArrayTy *pDVar5;
  int iVar17;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  byte bVar11;
  undefined4 uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar18;
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
    pcVar2 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar2;
    pcVar2->field_0058 = 0;
    pcVar2->field_005C = 0;
    pcVar2 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
    this_00->field_0180 = pcVar2;
    pcVar2->field_0058 = 1;
    pcVar2->field_005C = 0;
    iVar18 = 1;
    piVar14 = nullptr;
    pCVar3 = thunk_FUN_00571240("BKG_OPTIONS",0);
    local_EAX_158 = cMf32::RecGet(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0184 = local_EAX_158;
    this_00->field_0188 = 0;
    pCVar3 = thunk_FUN_00571240("BKG_OPT_NUM",0);
    puVar5 = cMf32::RecGet(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_018C = puVar5;
    pCVar3 = thunk_FUN_00571240("BKG_OPT_SAVE",0);
    local_EAX_238 = cMf32::RecGet(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0190 = local_EAX_238;
    pCVar3 = thunk_FUN_00571240("BKG_OPT_MOBJ",0);
    local_EAX_275 = cMf32::RecGet(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    puVar19 = nullptr;
    iVar15 = 0;
    iVar18 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    this_00->field_0194 = local_EAX_275;
    pCVar3 = thunk_FUN_00571240("IND_PNT",0);
    local_EAX_317 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar18,iVar15,puVar19);
    this_00->field_0198 = local_EAX_317;
    puVar4 = this_00->field_0184 + 0x14;
    iVar18 = 1;
    uVar11 = FUN_006b4fe0((int)this_00->field_0184);
    puVar4 = (ushort *)
             FUN_006b50c0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar4,iVar18);
    this_00->field_01E5 = puVar4;
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_01F1 = pDVar5;
    Library::DKW::TBL::FUN_006b6020(pDVar5,0,&CHAR_00h_008016a0);
    PrepMissObj(this_00);
    SetOptControls(this_00);
    uVar20 = 0;
    uVar16 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar7 = 0xc002;
    uVar6 = 0xc001;
    pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar10 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0xc9,0x9f,1,pCVar3,uVar6,uVar7,sVar8,uVar9,
                                 uVar12,pcVar13,uVar16,uVar20);
    uVar20 = 0;
    uVar16 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar7 = 0xc004;
    uVar6 = 0xc003;
    this_00->field_01AD[0] = uVar10;
    pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
    uVar10 = UPanelTy::CreateBut((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar3,uVar6,uVar7,sVar8,uVar9,
                                 uVar12,pcVar13,uVar16,uVar20);
    uVar6 = this_00->field_0038;
    this_00->field_01AD[1] = uVar10;
    this_00->field_0301 = uVar6;
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

