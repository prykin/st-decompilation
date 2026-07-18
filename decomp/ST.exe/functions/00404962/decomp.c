
void __thiscall PlayPanelTy::InitPlayPanel(PlayPanelTy *this)

{
  PlayPanelTy *pPVar1;
  code *pcVar2;
  PlayPanelTy *this_00;
  undefined4 *puVar3;
  ushort *puVar4;
  byte *pbVar5;
  LPSTR pCVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar12;
  UINT UVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  undefined2 uVar18;
  uint uVar19;
  byte bVar20;
  undefined4 uVar21;
  char *pcVar22;
  int iVar23;
  int *piVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 auStack_6b8 [140];
  int aiStack_488 [6];
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_304;
  int aiStack_300 [26];
  undefined4 uStack_298;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_b0;
  undefined4 auStack_ac [16];
  undefined4 auStack_6c [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  PlayPanelTy *pPStack_14;
  PlayPanelTy *pPStack_10;
  int iStack_c;
  byte bStack_5;
  
  piVar24 = aiStack_488;
  pPStack_14 = this;
  for (iVar9 = 0xf6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *piVar24 = 0;
    piVar24 = piVar24 + 1;
  }
  uStack_b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_b0;
  iVar9 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  this_00 = pPStack_14;
  if (iVar9 == 0) {
    DAT_008016e4 = pPStack_14;
    puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)(this_00 + 0x1dd) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar4 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)(this_00 + 0x1d1) = puVar4;
    puVar3 = (undefined4 *)0x0;
    iVar23 = 0;
    iVar9 = 1;
    bVar20 = 0;
    uVar19 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_GAMEB_ALLY_007c75f8,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar5,uVar19,bVar20,iVar9,iVar23,puVar3);
    *(ushort **)(this_00 + 0x1d5) = puVar4;
    puVar3 = (undefined4 *)0x0;
    iVar23 = 0;
    iVar9 = 1;
    bVar20 = 0;
    uVar19 = 0xffffffff;
    pbVar5 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar4 = FUN_00709af0(DAT_00806794,0xb,pbVar5,uVar19,bVar20,iVar9,iVar23,puVar3);
    *(ushort **)(this_00 + 0x1d9) = puVar4;
    iVar9 = *(int *)(this_00 + 0x68);
    uVar19 = *(uint *)(iVar9 + 0x14);
    if (uVar19 == 0) {
      uVar19 = ((uint)*(ushort *)(iVar9 + 0xe) * *(int *)(iVar9 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar9 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar9);
    for (uVar10 = uVar19 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    iVar9 = 1;
    piVar24 = (int *)0x0;
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYW_007c75e4,0);
    puVar4 = FUN_006f1ce0(1,pCVar6,piVar24,iVar9);
    pPVar1 = this_00 + 0x1cd;
    *(ushort **)pPVar1 = puVar4;
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0,0,'\x01',(byte *)puVar4);
    cMf32::RecMemFree(DAT_00806790,(uint *)pPVar1);
    if (DAT_00808783 != '\x03') {
      iVar9 = 1;
      piVar24 = (int *)0x0;
      pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYC_007c75d0,0);
      puVar4 = FUN_006f1ce0(1,pCVar6,piVar24,iVar9);
      *(ushort **)pPVar1 = puVar4;
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),0x20,0xa4,'\x01',(byte *)puVar4);
      cMf32::RecMemFree(DAT_00806790,(uint *)pPVar1);
    }
    iVar9 = 1;
    piVar24 = (int *)0x0;
    pCVar6 = thunk_FUN_00571240(s_BKG_DIPLOMACYB_007c75bc,0);
    puVar4 = FUN_006f1ce0(1,pCVar6,piVar24,iVar9);
    *(ushort **)pPVar1 = puVar4;
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1dd),*(int *)(this_00 + 0x68),0,0x6c,2,0xf3,0xc);
    uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar23 = -1;
    iVar9 = -2;
    puVar7 = (uint *)FUN_006b0140(0x2733,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1dd),puVar7,iVar9,iVar23,uVar19);
    PaintPlayPanel(this_00);
    uVar26 = 0;
    uVar25 = 0;
    pcVar22 = (char *)0x0;
    uVar21 = 0;
    uVar18 = 0;
    sVar17 = 0;
    uVar16 = 0xc000;
    uVar15 = 0xbfff;
    pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar15 = UPanelTy::CreateBut((UPanelTy *)this_00,0,1,0x171,199,1,(int)pCVar6,uVar15,uVar16,
                                 sVar17,uVar18,uVar21,pcVar22,uVar25,uVar26);
    *(undefined4 *)(this_00 + 0x17c) = uVar15;
    aiStack_488[0] = 0;
    if (DAT_00808aaf < 9) {
      iStack_c8 = 0;
    }
    else {
      iStack_c8 = DAT_00808aaf - 8;
    }
    aiStack_488[4] = *(int *)(this_00 + 0x3c) + 0x19c;
    iVar9 = *(int *)(this_00 + 0x5c);
    uStack_c4 = *(undefined4 *)(this_00 + 0x1c9);
    uStack_e0 = *(undefined4 *)(this_00 + 8);
    uStack_dc = 2;
    uStack_d8 = 0x6200;
    aiStack_488[1] = 2;
    aiStack_488[2] = 0;
    aiStack_488[3] = 2;
    if (iVar9 == 0) {
      iVar23 = -*(int *)(this_00 + 0x48);
    }
    else {
      iVar23 = *(int *)(this_00 + 0x44);
    }
    uStack_420 = *(undefined4 *)(this_00 + 8);
    aiStack_488[5] = iVar23 + 0x6d;
    uStack_41c = 2;
    uStack_304 = 2;
    uStack_470 = 0x11;
    uStack_46c = 0x24;
    uStack_370 = 500;
    uStack_36c = 0x32;
    uStack_418 = 0x6202;
    uStack_378 = 1;
    uStack_374 = 1;
    piVar24 = aiStack_488 + 2;
    piVar12 = aiStack_300;
    for (iVar23 = 0x5f; iVar23 != 0; iVar23 = iVar23 + -1) {
      *piVar12 = *piVar24;
      piVar24 = piVar24 + 1;
      piVar12 = piVar12 + 1;
    }
    if (iVar9 == 0) {
      aiStack_300[3] = -*(int *)(this_00 + 0x48);
    }
    else {
      aiStack_300[3] = *(int *)(this_00 + 0x44);
    }
    aiStack_300[3] = aiStack_300[3] + 0x1a;
    uStack_298 = 0x6201;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(4,this_00 + 0x1c5,0,aiStack_488,0);
    if (8 < DAT_00808aaf) {
      *(undefined4 *)(this_00 + 0x28) = 0x20;
      *(undefined4 *)(this_00 + 0x2c) = 1;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1c5),(undefined4 *)(this_00 + 0x18));
    }
    pPStack_10 = this_00 + 0x1a1;
    bStack_5 = 0;
    iVar23 = 0xb4ff;
    iVar9 = 0x1c;
    do {
      if ((bStack_5 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        iVar8 = 1;
      }
      else {
        iVar8 = 0;
      }
      uVar15 = UPanelTy::CreateBut((UPanelTy *)this_00,0,iVar8,0x4d,iVar9 + -2,0,0,iVar23,
                                   iVar23 + 0x10,0,0,0,(char *)0x0,0x16,0xe);
      *(undefined4 *)(pPStack_10 + -0x20) = uVar15;
      if ((DAT_00808aaf <= bStack_5) || (iStack_c = 1, DAT_00808783 != '\x03')) {
        iStack_c = 0;
      }
      uVar25 = 0;
      uVar21 = 0;
      pcVar22 = (char *)0x0;
      uVar16 = 0;
      uVar18 = 0;
      iVar8 = iVar23 + 0x30;
      sVar17 = 0;
      iVar11 = iVar23 + 0x20;
      uVar15 = 0;
      iVar14 = 1;
      pCVar6 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar14,uVar15);
      uVar15 = UPanelTy::CreateBut((UPanelTy *)this_00,0,iStack_c,0x183,iVar9,1,(int)pCVar6,iVar11,
                                   iVar8,sVar17,uVar18,uVar16,pcVar22,uVar21,uVar25);
      iVar9 = iVar9 + 0xf;
      *(undefined4 *)pPStack_10 = uVar15;
      bStack_5 = bStack_5 + 1;
      iVar23 = iVar23 + 1;
      pPStack_10 = pPStack_10 + 4;
    } while (bStack_5 < 8);
    if (DAT_00808783 == '\x03') {
      iVar23 = 1;
      puVar3 = auStack_6c;
      for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = auStack_6b8;
      for (iVar9 = 0x8c; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      puVar3 = auStack_6b8 + 1;
      iVar9 = *(int *)(this_00 + 0x3c) + 0x27;
      iVar8 = 4;
      do {
        iVar11 = *(int *)(this_00 + 0x5c);
        puVar3[-1] = iVar23;
        *puVar3 = 0;
        puVar3[2] = iVar9;
        puVar3[4] = 0x13;
        if (iVar11 == 0) {
          iVar11 = -*(int *)(this_00 + 0x48);
        }
        else {
          iVar11 = *(int *)(this_00 + 0x44);
        }
        iVar23 = iVar23 + 1;
        puVar3[3] = iVar11 + 0xa9;
        puVar3[5] = 0xe;
        iVar9 = iVar9 + 0x5c;
        puVar3 = puVar3 + 0x1c;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      puStack_24 = auStack_6b8;
      uStack_5c = *(undefined4 *)(this_00 + 8);
      auStack_6c[0] = 1;
      uStack_20 = 1;
      uStack_1c = 1;
      uStack_18 = 1;
      uStack_58 = 2;
      uStack_54 = 0xb208;
      uStack_38 = 2;
      uStack_34 = 0xb209;
      uStack_3c = uStack_5c;
      (**(code **)(**(int **)(this_00 + 0xc) + 8))(5,this_00 + 0x1c1,0,auStack_6c,0);
      UVar13 = 0x42b8;
      iVar9 = 0x3c;
      iStack_c = 4;
      do {
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1dd),*(int *)(this_00 + 0x68),0,iVar9,0xa9,0x46,
                         0xe);
        uVar19 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar8 = -1;
        iVar23 = 0;
        puVar7 = (uint *)FUN_006b0140(UVar13,DAT_00807618);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1dd),puVar7,iVar23,iVar8,uVar19);
        iVar9 = iVar9 + 0x5c;
        UVar13 = UVar13 + 1;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_b0;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_b0;
  iVar23 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x81,0,iVar9,&DAT_007a4ccc);
  if (iVar23 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar9,0,0x7c7574,0x81);
  return;
}

