#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall SAMPanelTy::InitSAMPanel(SAMPanelTy *this)

{
  SAMPanelTyVTable *pSVar1;
  SAMPanelTy *this_00;
  int iVar3;
  LPSTR pCVar3;
  ushort *puVar4;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar5;
  char *pcVar17_mg1;
  int iVar15;
  int iVar6;
  uint uVar7;
  int arg_9;
  short sVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  uint arg_15;
  InternalExceptionFrame local_5c;
  SAMPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    g_sAMPanel_008016EC = local_14;
    /* ST_CALLSITE[0053CF4C]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)local_14,"BKG_SETANYW",0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar16 = nullptr;
    iVar14 = 0;
    iVar12 = 1;
    bVar10 = 0;
    uVar9 = 0xffffffff;
    /* ST_CALLSITE[0053CF62]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
    pCVar3 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar3,uVar9,bVar10,iVar12,iVar14,puVar16);
    local_c = &this_00->field_01B5;
    this_00->field_01B1 = puVar4;
    iVar12 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar17 = 1;
      pcVar15 = nullptr;
      uVar13 = 0;
      pSVar1 = this_00->vtable;
      uVar11 = 0;
      iVar14 = iVar12 + 0x10;
      sVar8 = 0;
      uVar7 = 0;
      iVar6 = 1;
      arg_9 = iVar12;
      /* ST_CALLSITE[0053CFB9]: CALL 0x0040577c; direct=0040577C thunk_FUN_00571240; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
      pCVar3 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar3 = FUN_006f2c00(pCVar3,iVar6,uVar7);
      iVar6 = local_8;
      /* ST_CALLSITE[0053CFE2]: CALL dword ptr [EDX + 0x4] */
      uVar7 = (*pSVar1->CreateBut)
                        ((PanelTy *)this_00,0,1,0x24,local_8 + 1,0,1,1,pCVar3,arg_9,iVar14,sVar8,
                         uVar11,uVar13,pcVar15,uVar17);
      *local_c = uVar7;
      /* ST_CALLSITE[0053D005]: CALL 0x00710ba0; direct=00710BA0 ccFntTy::CreateSurf; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/ccFntTy;/int;/uint;/int;/int;/int;/int;/int */
      pRVar5 = ccFntTy::CreateSurf(this_00->field_0189,this_00->field_0185,0,0x37,iVar6,0xd2,0xc,0);
      if (pRVar5 != nullptr) {
        uVar9 = 0;
        iVar6 = -1;
        iVar14 = 0;
        /* ST_CALLSITE[0053D023]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
        pcVar17_mg1 = LoadResourceString(iVar12 - 0x842b,g_hINSTANCE_00807618);

        ccFntTy::WrStr(this_00->field_0189,pcVar17_mg1,iVar14,iVar6,uVar9);
        /* ST_CALLSITE[0053D041]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x37,local_8,'\x01',pRVar5);

        ccFntTy::EraseSufr(this_00->field_0189);
      }
      iVar12 = iVar12 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    arg_15 = 1;
    pSVar1 = this_00->vtable;
    pcVar15 = nullptr;
    uVar17 = 0;
    uVar11 = 0;
    sVar8 = 0;
    uVar13 = 0xb518;
    uVar7 = 0xb508;
    pCVar3 = thunk_FUN_00571240("BUT_BIG",0);
    /* ST_CALLSITE[0053D0AD]: CALL dword ptr [EDI + 0x4] */
    uVar7 = (*pSVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xa0,0x5c,0,1,1,pCVar3,uVar7,uVar13,sVar8,uVar11,
                       uVar17,pcVar15,arg_15);
    this_00->field_01CD = uVar7;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;

  iVar15 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x29,0,iVar3,"%s",
                              "SAMPanelTy::InitSAMPanel");
  if (iVar15 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\setamine.cpp",0x29);
  return;
}

