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
  uint *resourceString;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
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
    puVar18 = (undefined4 *)0x0;
    iVar16 = 0;
    iVar4 = 1;
    bVar13 = 0;
    uVar11 = 0xffffffff;
    pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar5,uVar11,bVar13,iVar4,iVar16,puVar18);
    local_c = &pSVar3->field_01B5;
    pSVar3->field_01B1 = puVar6;
    iVar4 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar19 = 1;
      uVar17 = 0;
      uVar15 = 0;
      pAVar1 = pSVar3->field_0000;
      uVar14 = 0;
      iVar16 = iVar4 + 0x10;
      uVar12 = 0;
      uVar9 = 0;
      iVar8 = 1;
      iVar10 = iVar4;
      pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar8,uVar9);
      iVar8 = local_8;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar9 = (*(code *)pAVar1->field_0004)
                        (0,1,0x24,local_8 + 1,0,1,1,pCVar5,iVar10,iVar16,uVar12,uVar14,uVar15,uVar17
                         ,uVar19);
      *local_c = uVar9;
      pbVar7 = (byte *)ccFntTy::CreateSurf(pSVar3->field_0189,pSVar3->field_0185,0,0x37,iVar8,0xd2,
                                           0xc,0);
      if (pbVar7 != (byte *)0x0) {
        uVar9 = 0;
        iVar8 = -1;
        iVar16 = 0;
        resourceString = (uint *)LoadResourceString(iVar4 - 0x842b,g_module_00807618);
        ccFntTy::WrStr(pSVar3->field_0189,resourceString,iVar16,iVar8,uVar9);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pSVar3->field_0068,0x37,local_8,'\x01',pbVar7);
        ccFntTy::EraseSufr(pSVar3->field_0189);
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar20 = 1;
    pAVar1 = pSVar3->field_0000;
    uVar19 = 0;
    uVar17 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = 0xb518;
    uVar9 = 0xb508;
    pCVar5 = thunk_FUN_00571240("BUT_BIG",0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar9 = (*(code *)pAVar1->field_0004)
                      (0,1,0xa0,0x5c,0,1,1,pCVar5,uVar9,uVar12,uVar14,uVar15,uVar17,uVar19,uVar20);
    pSVar3->field_01CD = uVar9;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar16 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x29,0,iVar4,"%s",
                              "SAMPanelTy::InitSAMPanel");
  if (iVar16 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\setamine.cpp",0x29);
  return;
}

