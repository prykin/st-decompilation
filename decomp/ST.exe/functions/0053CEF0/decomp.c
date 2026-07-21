#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall SAMPanelTy::InitSAMPanel(SAMPanelTy *this)

{
  AnonPointee_SAMPanelTy_0000 *pAVar1;
  code *pcVar2;
  SAMPanelTy *pSVar3;
  int iVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  InternalExceptionFrame local_5c;
  SAMPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar4 == 0) {
    g_sAMPanel_008016EC = local_14;
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)local_14,"BKG_SETANYW",0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar19 = (undefined4 *)0x0;
    iVar17 = 0;
    iVar4 = 1;
    bVar14 = 0;
    uVar12 = 0xffffffff;
    pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar5,uVar12,bVar14,iVar4,iVar17,puVar19);
    local_c = &pSVar3->field_01B5;
    pSVar3->field_01B1 = puVar6;
    iVar4 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar20 = 1;
      uVar18 = 0;
      uVar16 = 0;
      pAVar1 = pSVar3->field_0000;
      uVar15 = 0;
      iVar17 = iVar4 + 0x10;
      uVar13 = 0;
      uVar10 = 0;
      iVar9 = 1;
      iVar11 = iVar4;
      pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar9,uVar10);
      iVar9 = local_8;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar10 = (*(code *)pAVar1->field_0004)
                         (0,1,0x24,local_8 + 1,0,1,1,pCVar5,iVar11,iVar17,uVar13,uVar15,uVar16,
                          uVar18,uVar20);
      *local_c = uVar10;
      pbVar7 = (byte *)ccFntTy::CreateSurf(pSVar3->field_0189,pSVar3->field_0185,0,0x37,iVar9,0xd2,
                                           0xc,0);
      if (pbVar7 != (byte *)0x0) {
        uVar10 = 0;
        iVar9 = -1;
        iVar17 = 0;
        puVar8 = (uint *)LoadResourceString(iVar4 - 0x842b,HINSTANCE_00807618);
        ccFntTy::WrStr(pSVar3->field_0189,puVar8,iVar17,iVar9,uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pSVar3->field_0068,0x37,local_8,'\x01',pbVar7);
        ccFntTy::EraseSufr(pSVar3->field_0189);
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar21 = 1;
    pAVar1 = pSVar3->field_0000;
    uVar20 = 0;
    uVar18 = 0;
    uVar16 = 0;
    uVar15 = 0;
    uVar13 = 0xb518;
    uVar10 = 0xb508;
    pCVar5 = thunk_FUN_00571240("BUT_BIG",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar10 = (*(code *)pAVar1->field_0004)
                       (0,1,0xa0,0x5c,0,1,1,pCVar5,uVar10,uVar13,uVar15,uVar16,uVar18,uVar20,uVar21)
    ;
    pSVar3->field_01CD = uVar10;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x29,0,iVar4,"%s",
                              "SAMPanelTy::InitSAMPanel");
  if (iVar17 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\setamine.cpp",0x29);
  return;
}

