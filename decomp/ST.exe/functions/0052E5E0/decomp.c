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
  int puVar4_mg1;
  DArrayTy *pDVar4;
  int iVar17;
  uint uVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_optPanel_008016DC = local_8;
    /* ST_CALLSITE[0052E62C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
    pcVar2 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar2;
    pcVar2->field_0058 = 0;
    pcVar2->field_005C = 0;
    /* ST_CALLSITE[0052E64C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__cdecl;pointer:/ccFntTy;/uint;pointer:/ccFntTy */
    pcVar2 = ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
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
    bVar10 = 0;
    uVar9 = 0xffffffff;
    this_00->field_0194 = local_EAX_275;
    /* ST_CALLSITE[0052E70B]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar3 = thunk_FUN_00571240("IND_PNT",0);
    local_EAX_317 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar3,uVar9,bVar10,iVar18,iVar15,puVar19);
    this_00->field_0198 = local_EAX_317;
    puVar16 = this_00->field_0184 + 0x14;
    iVar18 = 1;

    uVar11 = FUN_006b4fe0(this_00->field_0184);
    /* ST_CALLSITE[0052E752]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ushort; signature=__stdcall;pointer:/ushort;/int;/int;/int;/uint;pointer:/undefined4;/int */
    puVar4_mg1 = (int)FUN_006b50c0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,
                                   (undefined4 *)puVar16,iVar18);
    this_00->field_01E5 = (ushort *)puVar4_mg1;
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_01F1 = pDVar4;

    Library::DKW::TBL::FUN_006b6020(pDVar4,0,&CHAR_00h_008016a0);
    /* ST_CALLSITE[0052E77B]: CALL 0x0040443a; direct=0040443A OptPanelTy::PrepMissObj */
    PrepMissObj(this_00);
    /* ST_CALLSITE[0052E782]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
    SetOptControls(this_00);
    uVar20 = 0;
    uVar17 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar8 = 0;
    sVar7 = 0;
    uVar6 = 0xc002;
    uVar5 = 0xc001;
    pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[0052E7B7]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar9 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0xc9,0x9f,1,pCVar3,uVar5,uVar6,sVar7,uVar8,
                                uVar12,pcVar13,uVar17,uVar20);
    uVar20 = 0;
    uVar17 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar8 = 0;
    sVar7 = 0;
    uVar6 = 0xc004;
    uVar5 = 0xc003;
    this_00->field_01AD[0] = uVar9;
    pCVar3 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[0052E7F1]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar9 = UPanelTy::CreateBut((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar3,uVar5,uVar6,sVar7,uVar8,
                                uVar12,pcVar13,uVar17,uVar20);
    iVar18 = this_00->field_0038;
    this_00->field_01AD[1] = uVar9;
    this_00->field_0301 = iVar18;
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

