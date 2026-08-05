#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall SAMPanelTy::InitSAMPanel(SAMPanelTy *this)

{
  SAMPanelTyVTable *pSVar1;
  code *pcVar2;
  SAMPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint *resourceString;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  byte bVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
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
    puVar17 = nullptr;
    iVar15 = 0;
    iVar3 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pCVar4 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar4,uVar11,bVar12,iVar3,iVar15,puVar17);
    local_c = this_00->field_01B5;
    this_00->field_01B1 = puVar5;
    iVar3 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar18 = 1;
      pcVar16 = nullptr;
      uVar14 = 0;
      pSVar1 = this_00->vtable;
      uVar13 = 0;
      iVar15 = iVar3 + 0x10;
      sVar10 = 0;
      uVar8 = 0;
      iVar7 = 1;
      iVar9 = iVar3;
      pCVar4 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar4 = FUN_006f2c00(pCVar4,iVar7,uVar8);
      iVar7 = local_8;
      uVar11 = (*pSVar1->CreateBut)
                         ((PanelTy *)this_00,0,1,0x24,local_8 + 1,0,1,1,pCVar4,iVar9,iVar15,sVar10,
                          uVar13,uVar14,pcVar16,uVar18);
      *local_c = uVar11;
      pbVar6 = (byte *)ccFntTy::CreateSurf(this_00->field_0189,this_00->field_0185,0,0x37,iVar7,0xd2
                                           ,0xc,0);
      if (pbVar6 != nullptr) {
        uVar11 = 0;
        iVar7 = -1;
        iVar15 = 0;
        resourceString = (uint *)LoadResourceString(iVar3 - 0x842b,g_module_00807618);
        ccFntTy::WrStr(this_00->field_0189,resourceString,iVar15,iVar7,uVar11);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x37,local_8,'\x01',pbVar6);
        ccFntTy::EraseSufr(this_00->field_0189);
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar19 = 1;
    pSVar1 = this_00->vtable;
    pcVar16 = nullptr;
    uVar18 = 0;
    uVar13 = 0;
    sVar10 = 0;
    uVar14 = 0xb518;
    uVar8 = 0xb508;
    pCVar4 = thunk_FUN_00571240("BUT_BIG",0);
    uVar8 = (*pSVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xa0,0x5c,0,1,1,pCVar4,uVar8,uVar14,sVar10,uVar13,
                       uVar18,pcVar16,uVar19);
    this_00->field_01CD = uVar8;
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

