#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::InitPlayPanel */

void __thiscall PlayPanelTy::InitPlayPanel(PlayPanelTy *this)

{
  ushort **ppuVar1;
  ushort *puVar2;
  PlayPanelTy *this_00;
  int iVar8;
  ccFntTy *pcVar4;
  ushort *local_EAX_142;
  LPSTR pCVar5;
  ushort *puVar4;
  ushort *local_EAX_231;
  ushort *local_EAX_336;
  ushort *local_EAX_413;
  ushort *local_EAX_480;
  char *pcVar6_mg0;
  int iVar6;
  char *pcVar6_mg3;
  int iVar21;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  UINT resourceId;
  int iVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  ushort uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  char *pcVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  undefined4 local_6b8 [140];
  int local_488 [6];
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_304;
  int local_300 [26];
  undefined4 local_298;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_c8;
  undefined4 local_c4;
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  PlayPanelTy *local_14;
  undefined4 *local_10;
  int local_c;
  byte local_5;

  piVar21 = local_488;
  local_14 = this;
  for (iVar7 = 0xf6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar21 = 0;
    piVar21 = piVar21 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar8 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0);
  this_00 = local_14;
  if (iVar8 == 0) {
    g_playPanel_008016E4 = local_14;
    /* ST_CALLSITE[00539BF8]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar4 = (ccFntTy *)ccFntTy::operator_new(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00->field_01DD = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    local_EAX_142 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,"BUT_CHPLAYER",0xffffffff,0,1,0,nullptr);
    this_00->field_01D1 = local_EAX_142;
    puVar23 = nullptr;
    iVar20 = 0;
    iVar7 = 1;
    bVar17 = 0;
    uVar16 = 0xffffffff;
    pCVar5 = thunk_FUN_00571240("GAMEB_ALLY",0);
    puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_B,pCVar5,uVar16,bVar17,iVar7,iVar20,puVar23);
    this_00->field_01D5 = puVar4;
    puVar23 = nullptr;
    iVar20 = 0;
    iVar7 = 1;
    bVar17 = 0;
    uVar16 = 0xffffffff;
    pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
    local_EAX_231 =
         Library::Ourlib::MFRLOAD::mfRLoad
                   (PTR_00806794,CASE_B,pCVar5,uVar16,bVar17,iVar7,iVar20,puVar23);
    this_00->field_01D9 = local_EAX_231;
    puVar2 = this_00->field_0068;
    uVar16 = *(uint *)(puVar2 + 10);
    if (uVar16 == 0) {
      uVar16 = ((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar2 + 4);
    }
    puVar23 = (undefined4 *)FUN_006b4fa0((int *)puVar2);
    for (uVar8 = uVar16 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar23 = 0xffffffff;
      puVar23 = puVar23 + 1;
    }
    iVar7 = 1;
    piVar21 = nullptr;
    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar23 = 0xff;
      puVar23 = (undefined4 *)((int)puVar23 + 1);
    }
    pCVar5 = thunk_FUN_00571240("BKG_DIPLOMACYW",0);
    local_EAX_336 = cMf32::RecGet(g_cMf32_00806790,1,pCVar5,piVar21,iVar7);
    ppuVar1 = &this_00->field_01CD;
    *ppuVar1 = local_EAX_336;
    /* ST_CALLSITE[00539CF6]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)local_EAX_336);
    cMf32::RecMemFree(g_cMf32_00806790,(uint *)ppuVar1);
    if (DAT_00808783 != '\x03') {
      iVar7 = 1;
      piVar21 = nullptr;
      pCVar5 = thunk_FUN_00571240("BKG_DIPLOMACYC",0);
      local_EAX_413 = cMf32::RecGet(g_cMf32_00806790,1,pCVar5,piVar21,iVar7);
      *ppuVar1 = local_EAX_413;
      /* ST_CALLSITE[00539D42]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x20,0xa4,'\x01',
             (byte *)local_EAX_413);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)ppuVar1);
    }
    iVar7 = 1;
    piVar21 = nullptr;
    pCVar5 = thunk_FUN_00571240("BKG_DIPLOMACYB",0);
    local_EAX_480 = cMf32::RecGet(g_cMf32_00806790,1,pCVar5,piVar21,iVar7);
    *ppuVar1 = local_EAX_480;
    ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,0x6c,2,0xf3,0xc);
    uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar20 = -1;
    iVar7 = -2;
    pcVar6_mg0 = LoadResourceString(0x2733,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01DD,pcVar6_mg0,iVar7,iVar20,uVar16);
    /* ST_CALLSITE[00539DCC]: CALL 0x00403242; direct=00403242 PlayPanelTy::PaintPlayPanel */
    PaintPlayPanel(this_00);
    uVar24 = 0;
    uVar22 = 0;
    pcVar19 = nullptr;
    uVar18 = 0;
    uVar15 = 0;
    sVar14 = 0;
    uVar13 = 0xc000;
    uVar12 = 0xbfff;
    pCVar5 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[00539E01]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x171,199,1,pCVar5,uVar12,uVar13,sVar14,
                                 uVar15,uVar18,pcVar19,uVar22,uVar24);
    this_00->field_017C = uVar12;
    local_488[0] = 0;
    if (DAT_00808aaf < 9) {
      local_c8 = 0;
    }
    else {
      local_c8 = DAT_00808aaf - 8;
    }
    local_488[4] = this_00->field_003C + 0x19c;
    iVar7 = this_00->field_005C;
    local_c4 = this_00->field_01C9;
    local_e0 = this_00->field_0008;
    local_dc = 2;
    local_d8 = 0x6200;
    local_488[1] = 2;
    local_488[2] = 0;
    local_488[3] = 2;
    if (iVar7 == 0) {
      iVar20 = -this_00->field_0048;
    }
    else {
      iVar20 = this_00->field_0044;
    }
    local_420 = this_00->field_0008;
    local_488[5] = iVar20 + 0x6d;
    local_41c = 2;
    local_304 = 2;
    local_470 = 0x11;
    local_46c = 0x24;
    local_370 = 500;
    local_36c = 0x32;
    local_418 = 0x6202;
    local_378 = 1;
    local_374 = 1;
    piVar21 = local_488 + 2;
    piVar10 = local_300;
    memmove(piVar10, piVar21, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar7 == 0) {
      local_300[3] = -this_00->field_0048;
    }
    else {
      local_300[3] = this_00->field_0044;
    }
    local_300[3] = local_300[3] + 0x1a;
    local_298 = 0x6201;
    /* ST_CALLSITE[00539F32]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,&this_00->field_01C5,nullptr,local_488,0);
    if (8 < DAT_00808aaf) {
      uVar12 = this_00->field_01C5;
      this_00->field_0028 = 0x20;
      this_00->field_002C = 1;
      this_00->field_002E = 0;
      FUN_006e6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
    }
    local_10 = &this_00->field_01A1;
    local_5 = 0;
    iVar20 = 0xb4ff;
    iVar7 = 0x1c;
    do {
      if ((local_5 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        iVar6 = 1;
      }
      else {
        iVar6 = 0;
      }
      /* ST_CALLSITE[00539FB1]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,iVar6,0x4d,iVar7 + -2,0,(LPSTR)0x0,iVar20,
                                   iVar20 + 0x10,0,0,0,nullptr,0x16,0xe);
      local_10[-8] = uVar12;
      if ((DAT_00808aaf <= local_5) || (local_c = 1, DAT_00808783 != '\x03')) {
        local_c = 0;
      }
      uVar22 = 0;
      uVar18 = 0;
      pcVar19 = nullptr;
      uVar13 = 0;
      uVar15 = 0;
      iVar6 = iVar20 + 0x30;
      sVar14 = 0;
      iVar9 = iVar20 + 0x20;
      uVar12 = 0;
      iVar11 = 1;
      pCVar5 = thunk_FUN_00571240("BUT_PRODWEAP",0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar11,uVar12);
      /* ST_CALLSITE[0053A020]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar12 = UPanelTy::CreateBut((UPanelTy *)this_00,0,local_c,0x183,iVar7,1,pCVar5,iVar9,iVar6,
                                   sVar14,uVar15,uVar13,pcVar19,uVar18,uVar22);
      iVar7 = iVar7 + 0xf;
      *local_10 = uVar12;
      local_5 = local_5 + 1;
      iVar20 = iVar20 + 1;
      local_10 = local_10 + 1;
    } while (local_5 < 8);
    if (DAT_00808783 == '\x03') {
      iVar20 = 1;
      memset(local_6c, 0, 0x58); /* compiler bulk-zero initialization */
      iVar7 = 0;
      memset(local_6b8, 0, 0x230); /* compiler bulk-zero initialization */
      puVar23 = local_6b8 + 1;
      iVar7 = this_00->field_003C + 0x27;
      iVar6 = 4;
      do {
        iVar9 = this_00->field_005C;
        puVar23[-1] = iVar20;
        *puVar23 = 0;
        puVar23[2] = iVar7;
        puVar23[4] = 0x13;
        if (iVar9 == 0) {
          iVar9 = -this_00->field_0048;
        }
        else {
          iVar9 = this_00->field_0044;
        }
        iVar20 = iVar20 + 1;
        puVar23[3] = iVar9 + 0xa9;
        puVar23[5] = 0xe;
        iVar7 = iVar7 + 0x5c;
        puVar23 = puVar23 + 0x1c;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      local_24 = local_6b8;
      local_5c = this_00->field_0008;
      local_6c[0] = 1;
      local_20 = 1;
      local_1c = 1;
      local_18 = 1;
      local_58 = 2;
      local_54 = 0xb208;
      local_38 = 2;
      local_34 = 0xb209;
      local_3c = local_5c;
      /* ST_CALLSITE[0053A110]: CALL dword ptr [EDX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C1,nullptr,local_6c,0);
      resourceId = 0x42b8;
      iVar7 = 0x3c;
      local_c = 4;
      do {
        ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,iVar7,0xa9,0x46,0xe);
        uVar16 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar6 = -1;
        iVar20 = 0;
        pcVar6_mg3 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01DD,pcVar6_mg3,iVar20,iVar6,uVar16);
        iVar7 = iVar7 + 0x5c;
        resourceId = resourceId + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar21 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",0x81,0,iVar8,"%s",
                              "PlayPanelTy::InitPlayPanel");
  if (iVar21 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\playpan.cpp",0x81);
  return;
}

