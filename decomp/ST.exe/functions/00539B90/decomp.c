
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::InitPlayPanel */

void __thiscall PlayPanelTy::InitPlayPanel(PlayPanelTy *this)

{
  ushort **ppuVar1;
  AnonPointee_PlayPanelTy_0068 *pAVar2;
  code *pcVar3;
  PlayPanelTy *this_00;
  ccFntTy *pcVar4;
  ushort *puVar5;
  LPSTR pCVar6;
  uint *extraout_EAX;
  int iVar7;
  uint *extraout_EAX_00;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar11;
  UINT resourceId;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  short sVar15;
  undefined2 uVar16;
  uint uVar17;
  byte bVar18;
  undefined4 uVar19;
  char *pcVar20;
  int iVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
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
  
  piVar22 = local_488;
  local_14 = this;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar22 = 0;
    piVar22 = piVar22 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar8 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar8 == 0) {
    g_playPanel_008016E4 = local_14;
    pcVar4 = (ccFntTy *)
             ccFntTy::operator(*(ccFntTy **)&PTR_00802a28->field_0x28,0x19d,
                               (int)*(ccFntTy **)&PTR_00802a28->field_0x28);
    this_00->field_01DD = pcVar4;
    pcVar4->field_0058 = 0;
    pcVar4->field_005C = 0;
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
    this_00->field_01D1 = puVar5;
    puVar24 = (undefined4 *)0x0;
    iVar21 = 0;
    iVar8 = 1;
    bVar18 = 0;
    uVar17 = 0xffffffff;
    pCVar6 = thunk_FUN_00571240(s_GAMEB_ALLY_007c75f8,0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar6,uVar17,bVar18,iVar8,iVar21,puVar24);
    this_00->field_01D5 = puVar5;
    puVar24 = (undefined4 *)0x0;
    iVar21 = 0;
    iVar8 = 1;
    bVar18 = 0;
    uVar17 = 0xffffffff;
    pCVar6 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar6,uVar17,bVar18,iVar8,iVar21,puVar24);
    this_00->field_01D9 = puVar5;
    pAVar2 = this_00->field_0068;
    uVar17 = pAVar2->field_0014;
    if (uVar17 == 0) {
      uVar17 = ((uint)(ushort)pAVar2->field_000E * pAVar2->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
               pAVar2->field_0008;
    }
    puVar24 = (undefined4 *)FUN_006b4fa0((int)pAVar2);
    for (uVar9 = uVar17 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar24 = 0xffffffff;
      puVar24 = puVar24 + 1;
    }
    iVar8 = 1;
    piVar22 = (int *)0x0;
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar24 = 0xff;
      puVar24 = (undefined4 *)((int)puVar24 + 1);
    }
    pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYW_007c75e4,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar22,iVar8);
    ppuVar1 = &this_00->field_01CD;
    *ppuVar1 = puVar5;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,0,'\x01',(byte *)puVar5);
    cMf32::RecMemFree(DAT_00806790,(uint *)ppuVar1);
    if (DAT_00808783 != '\x03') {
      iVar8 = 1;
      piVar22 = (int *)0x0;
      pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYC_007c75d0,0);
      puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar22,iVar8);
      *ppuVar1 = puVar5;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0x20,0xa4,'\x01',(byte *)puVar5);
      cMf32::RecMemFree(DAT_00806790,(uint *)ppuVar1);
    }
    iVar8 = 1;
    piVar22 = (int *)0x0;
    pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYB_007c75bc,0);
    puVar5 = cMf32::RecGet(DAT_00806790,1,pCVar6,piVar22,iVar8);
    *ppuVar1 = puVar5;
    ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,0x6c,2,0xf3,0xc);
    uVar17 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar21 = -1;
    iVar8 = -2;
    LoadResourceString(0x2733,HINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01DD,extraout_EAX,iVar8,iVar21,uVar17);
    PaintPlayPanel(this_00);
    uVar25 = 0;
    uVar23 = 0;
    pcVar20 = (char *)0x0;
    uVar19 = 0;
    uVar16 = 0;
    sVar15 = 0;
    uVar14 = 0xc000;
    uVar13 = 0xbfff;
    pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar13 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x171,199,1,(int)pCVar6,uVar13,uVar14,
                                 sVar15,uVar16,uVar19,pcVar20,uVar23,uVar25);
    this_00->field_017C = uVar13;
    local_488[0] = 0;
    if (DAT_00808aaf < 9) {
      local_c8 = 0;
    }
    else {
      local_c8 = DAT_00808aaf - 8;
    }
    local_488[4] = this_00->field_003C + 0x19c;
    iVar8 = this_00->field_005C;
    local_c4 = this_00->field_01C9;
    local_e0 = this_00->field_0008;
    local_dc = 2;
    local_d8 = 0x6200;
    local_488[1] = 2;
    local_488[2] = 0;
    local_488[3] = 2;
    if (iVar8 == 0) {
      iVar21 = -this_00->field_0048;
    }
    else {
      iVar21 = this_00->field_0044;
    }
    local_420 = this_00->field_0008;
    local_488[5] = iVar21 + 0x6d;
    local_41c = 2;
    local_304 = 2;
    local_470 = 0x11;
    local_46c = 0x24;
    local_370 = 500;
    local_36c = 0x32;
    local_418 = 0x6202;
    local_378 = 1;
    local_374 = 1;
    piVar22 = local_488 + 2;
    piVar11 = local_300;
    for (iVar21 = 0x5f; iVar21 != 0; iVar21 = iVar21 + -1) {
      *piVar11 = *piVar22;
      piVar22 = piVar22 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar8 == 0) {
      local_300[3] = -this_00->field_0048;
    }
    else {
      local_300[3] = this_00->field_0044;
    }
    local_300[3] = local_300[3] + 0x1a;
    local_298 = 0x6201;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,&this_00->field_01C5,(int *)0x0,local_488,0);
    if (8 < DAT_00808aaf) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      FUN_006e6080(this_00,2,this_00->field_01C5,(undefined4 *)&this_00->field_0x18);
    }
    local_10 = &this_00->field_01A1;
    local_5 = 0;
    iVar21 = 0xb4ff;
    iVar8 = 0x1c;
    do {
      if ((local_5 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
      }
      uVar13 = UPanelTy::CreateBut((UPanelTy *)this_00,0,iVar7,0x4d,iVar8 + -2,0,0,iVar21,
                                   iVar21 + 0x10,0,0,0,(char *)0x0,0x16,0xe);
      local_10[-8] = uVar13;
      if ((DAT_00808aaf <= local_5) || (local_c = 1, DAT_00808783 != '\x03')) {
        local_c = 0;
      }
      uVar23 = 0;
      uVar19 = 0;
      pcVar20 = (char *)0x0;
      uVar14 = 0;
      uVar16 = 0;
      iVar7 = iVar21 + 0x30;
      sVar15 = 0;
      iVar10 = iVar21 + 0x20;
      uVar13 = 0;
      iVar12 = 1;
      pCVar6 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar12,uVar13);
      uVar13 = UPanelTy::CreateBut((UPanelTy *)this_00,0,local_c,0x183,iVar8,1,(int)pCVar6,iVar10,
                                   iVar7,sVar15,uVar16,uVar14,pcVar20,uVar19,uVar23);
      iVar8 = iVar8 + 0xf;
      *local_10 = uVar13;
      local_5 = local_5 + 1;
      iVar21 = iVar21 + 1;
      local_10 = local_10 + 1;
    } while (local_5 < 8);
    if (DAT_00808783 == '\x03') {
      iVar21 = 1;
      puVar24 = local_6c;
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + 1;
      }
      puVar24 = local_6b8;
      for (iVar8 = 0x8c; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + 1;
      }
      puVar24 = local_6b8 + 1;
      iVar8 = this_00->field_003C + 0x27;
      iVar7 = 4;
      do {
        iVar10 = this_00->field_005C;
        puVar24[-1] = iVar21;
        *puVar24 = 0;
        puVar24[2] = iVar8;
        puVar24[4] = 0x13;
        if (iVar10 == 0) {
          iVar10 = -this_00->field_0048;
        }
        else {
          iVar10 = this_00->field_0044;
        }
        iVar21 = iVar21 + 1;
        puVar24[3] = iVar10 + 0xa9;
        puVar24[5] = 0xe;
        iVar8 = iVar8 + 0x5c;
        puVar24 = puVar24 + 0x1c;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
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
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,5,&this_00->field_01C1,(int *)0x0,local_6c,0);
      resourceId = 0x42b8;
      iVar8 = 0x3c;
      local_c = 4;
      do {
        ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,iVar8,0xa9,0x46,0xe);
        uVar17 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar7 = -1;
        iVar21 = 0;
        LoadResourceString(resourceId,HINSTANCE_00807618);
        ccFntTy::WrStr(this_00->field_01DD,extraout_EAX_00,iVar21,iVar7,uVar17);
        iVar8 = iVar8 + 0x5c;
        resourceId = resourceId + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar21 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,0x81,0,iVar8,&DAT_007a4ccc,
                              s_PlayPanelTy__InitPlayPanel_007c759c);
  if (iVar21 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar8,0,s_E____titans_Andrey_playpan_cpp_007c7574,0x81);
  return;
}

