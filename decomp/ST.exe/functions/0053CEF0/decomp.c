
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall SAMPanelTy::InitSAMPanel(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *pSVar2;
  int iVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint *extraout_EAX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  byte bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    DAT_008016ec = local_14;
    SpecPanelTy::InitPanel
              ((SpecPanelTy *)local_14,s_BKG_SETANYW_007c77ec,0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar18 = (undefined4 *)0x0;
    iVar15 = 0;
    iVar3 = 1;
    bVar12 = 0;
    uVar10 = 0xffffffff;
    pCVar4 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar4,uVar10,bVar12,iVar3,iVar15,puVar18);
    local_c = &pSVar2->field_01B5;
    pSVar2->field_01B1 = puVar5;
    iVar3 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar19 = 1;
      uVar16 = 0;
      uVar14 = 0;
      iVar17 = pSVar2->field_0000;
      uVar13 = 0;
      iVar15 = iVar3 + 0x10;
      uVar11 = 0;
      uVar8 = 0;
      iVar7 = 1;
      iVar9 = iVar3;
      pCVar4 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar4 = FUN_006f2c00(pCVar4,iVar7,uVar8);
      iVar7 = local_8;
      uVar8 = (**(code **)(iVar17 + 4))
                        (0,1,0x24,local_8 + 1,0,1,1,pCVar4,iVar9,iVar15,uVar11,uVar13,uVar14,uVar16,
                         uVar19);
      *local_c = uVar8;
      pbVar6 = (byte *)ccFntTy::CreateSurf(pSVar2->field_0189,pSVar2->field_0185,0,0x37,iVar7,0xd2,
                                           0xc,0);
      if (pbVar6 != (byte *)0x0) {
        uVar8 = 0;
        iVar17 = -1;
        iVar15 = 0;
        LoadResourceString(iVar3 - 0x842b,HINSTANCE_00807618);
        ccFntTy::WrStr(pSVar2->field_0189,extraout_EAX,iVar15,iVar17,uVar8);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)pSVar2->field_0068,0x37,local_8,'\x01',pbVar6);
        ccFntTy::EraseSufr(pSVar2->field_0189);
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar20 = 1;
    iVar3 = pSVar2->field_0000;
    uVar19 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = 0xb518;
    uVar8 = 0xb508;
    pCVar4 = thunk_FUN_00571240(s_BUT_BIG_007c77e0,0);
    uVar8 = (**(code **)(iVar3 + 4))
                      (0,1,0xa0,0x5c,0,1,1,pCVar4,uVar8,uVar11,uVar13,uVar14,uVar16,uVar19,uVar20);
    pSVar2->field_01CD = uVar8;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar15 = ReportDebugMessage(s_E____titans_Andrey_setamine_cpp_007c7798,0x29,0,iVar3,&DAT_007a4ccc,
                              s_SAMPanelTy__InitSAMPanel_007c77c0);
  if (iVar15 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_setamine_cpp_007c7798,0x29);
  return;
}

