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
  byte *pbVar5;
  char *pcVar17_mg1;
  int iVar15;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_5c;
  SAMPanelTy *local_14;
  int local_10;
  uint *local_c;
  int local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    g_sAMPanel_008016EC = local_14;
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)local_14,"BKG_SETANYW",0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar18 = nullptr;
    iVar16 = 0;
    iVar13 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    pCVar3 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar13,iVar16,puVar18);
    local_c = this_00->field_01B5;
    this_00->field_01B1 = puVar4;
    iVar13 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar19 = 1;
      pcVar17 = nullptr;
      uVar14 = 0;
      pSVar1 = this_00->vtable;
      uVar12 = 0;
      iVar16 = iVar13 + 0x10;
      sVar9 = 0;
      uVar7 = 0;
      iVar6 = 1;
      iVar8 = iVar13;
      pCVar3 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar3 = FUN_006f2c00(pCVar3,iVar6,uVar7);
      iVar6 = local_8;
      uVar10 = (*pSVar1->CreateBut)
                         ((PanelTy *)this_00,0,1,0x24,local_8 + 1,0,1,1,pCVar3,iVar8,iVar16,sVar9,
                          uVar12,uVar14,pcVar17,uVar19);
      *local_c = uVar10;
      pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_0189,this_00->field_0185,0,0x37,iVar6,0xd2
                                           ,0xc,0);
      if (pbVar5 != nullptr) {
        uVar10 = 0;
        iVar6 = -1;
        iVar16 = 0;
        pcVar17_mg1 = LoadResourceString(iVar13 - 0x842b,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_0189,pcVar17_mg1,iVar16,iVar6,uVar10);
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x37,local_8,'\x01',pbVar5);
        ccFntTy::EraseSufr(this_00->field_0189);
      }
      iVar13 = iVar13 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar20 = 1;
    pSVar1 = this_00->vtable;
    pcVar17 = nullptr;
    uVar19 = 0;
    uVar12 = 0;
    sVar9 = 0;
    uVar14 = 0xb518;
    uVar7 = 0xb508;
    pCVar3 = thunk_FUN_00571240("BUT_BIG",0);
    uVar7 = (*pSVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xa0,0x5c,0,1,1,pCVar3,uVar7,uVar14,sVar9,uVar12,
                       uVar19,pcVar17,uVar20);
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

