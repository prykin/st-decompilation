
void thunk_FUN_00539b90(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  LPSTR pCVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar11;
  UINT UVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short sVar16;
  undefined2 uVar17;
  uint uVar18;
  byte bVar19;
  undefined4 uVar20;
  char *pcVar21;
  int iVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
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
  void *pvStack_14;
  undefined4 *puStack_10;
  int iStack_c;
  byte bStack_5;
  
  piVar23 = aiStack_488;
  for (iVar8 = 0xf6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar23 = 0;
    piVar23 = piVar23 + 1;
  }
  uStack_b0 = DAT_00858df8;
  DAT_00858df8 = &uStack_b0;
  iVar8 = __setjmp3(auStack_ac,0,unaff_EDI,unaff_ESI);
  if (iVar8 == 0) {
    DAT_008016e4 = pvStack_14;
    puVar2 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x28));
    *(undefined4 **)((int)pvStack_14 + 0x1dd) = puVar2;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar3 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_CHPLAYER_007c3f08,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_14 + 0x1d1) = puVar3;
    puVar2 = (undefined4 *)0x0;
    iVar22 = 0;
    iVar8 = 1;
    bVar19 = 0;
    uVar18 = 0xffffffff;
    pbVar4 = (byte *)thunk_FUN_00571240(s_GAMEB_ALLY_007c75f8,0);
    puVar3 = FUN_00709af0(DAT_00806794,0xb,pbVar4,uVar18,bVar19,iVar8,iVar22,puVar2);
    *(ushort **)((int)pvStack_14 + 0x1d5) = puVar3;
    puVar2 = (undefined4 *)0x0;
    iVar22 = 0;
    iVar8 = 1;
    bVar19 = 0;
    uVar18 = 0xffffffff;
    pbVar4 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar3 = FUN_00709af0(DAT_00806794,0xb,pbVar4,uVar18,bVar19,iVar8,iVar22,puVar2);
    *(ushort **)((int)pvStack_14 + 0x1d9) = puVar3;
    iVar8 = *(int *)((int)pvStack_14 + 0x68);
    uVar18 = *(uint *)(iVar8 + 0x14);
    if (uVar18 == 0) {
      uVar18 = ((uint)*(ushort *)(iVar8 + 0xe) * *(int *)(iVar8 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar8 + 8);
    }
    puVar2 = (undefined4 *)FUN_006b4fa0(iVar8);
    for (uVar9 = uVar18 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    iVar8 = 1;
    piVar23 = (int *)0x0;
    for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined1 *)puVar2 = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    pCVar5 = thunk_FUN_00571240(s_BKG_DIPLOMACYW_007c75e4,0);
    puVar3 = FUN_006f1ce0(1,pCVar5,piVar23,iVar8);
    puVar6 = (uint *)((int)pvStack_14 + 0x1cd);
    *puVar6 = (uint)puVar3;
    thunk_FUN_00540760(*(undefined4 **)((int)pvStack_14 + 0x68),0,0,'\x01',(byte *)puVar3);
    FUN_006f20e0(puVar6);
    if (DAT_00808783 != '\x03') {
      iVar8 = 1;
      piVar23 = (int *)0x0;
      pCVar5 = thunk_FUN_00571240(s_BKG_DIPLOMACYC_007c75d0,0);
      puVar3 = FUN_006f1ce0(1,pCVar5,piVar23,iVar8);
      *puVar6 = (uint)puVar3;
      thunk_FUN_00540760(*(undefined4 **)((int)pvStack_14 + 0x68),0x20,0xa4,'\x01',(byte *)puVar3);
      FUN_006f20e0(puVar6);
    }
    iVar8 = 1;
    piVar23 = (int *)0x0;
    pCVar5 = thunk_FUN_00571240(s_BKG_DIPLOMACYB_007c75bc,0);
    puVar3 = FUN_006f1ce0(1,pCVar5,piVar23,iVar8);
    *puVar6 = (uint)puVar3;
    FUN_00710a90(*(int *)((int)pvStack_14 + 0x68),0,0x6c,2,0xf3,0xc);
    uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar22 = -1;
    iVar8 = -2;
    puVar6 = (uint *)FUN_006b0140(0x2733,DAT_00807618);
    FUN_007119c0(puVar6,iVar8,iVar22,uVar18);
    thunk_FUN_0053ac00();
    uVar25 = 0;
    uVar24 = 0;
    pcVar21 = (char *)0x0;
    uVar20 = 0;
    uVar17 = 0;
    sVar16 = 0;
    uVar15 = 0xc000;
    uVar14 = 0xbfff;
    pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    uVar14 = thunk_FUN_0053dea0(0,1,0x171,199,1,(int)pCVar5,uVar14,uVar15,sVar16,uVar17,uVar20,
                                pcVar21,uVar24,uVar25);
    *(undefined4 *)((int)pvStack_14 + 0x17c) = uVar14;
    aiStack_488[0] = 0;
    if (DAT_00808aaf < 9) {
      iStack_c8 = 0;
    }
    else {
      iStack_c8 = DAT_00808aaf - 8;
    }
    aiStack_488[4] = *(int *)((int)pvStack_14 + 0x3c) + 0x19c;
    iVar8 = *(int *)((int)pvStack_14 + 0x5c);
    uStack_c4 = *(undefined4 *)((int)pvStack_14 + 0x1c9);
    uStack_e0 = *(undefined4 *)((int)pvStack_14 + 8);
    uStack_dc = 2;
    uStack_d8 = 0x6200;
    aiStack_488[1] = 2;
    aiStack_488[2] = 0;
    aiStack_488[3] = 2;
    if (iVar8 == 0) {
      iVar22 = -*(int *)((int)pvStack_14 + 0x48);
    }
    else {
      iVar22 = *(int *)((int)pvStack_14 + 0x44);
    }
    uStack_420 = *(undefined4 *)((int)pvStack_14 + 8);
    aiStack_488[5] = iVar22 + 0x6d;
    uStack_41c = 2;
    uStack_304 = 2;
    uStack_470 = 0x11;
    uStack_46c = 0x24;
    uStack_370 = 500;
    uStack_36c = 0x32;
    uStack_418 = 0x6202;
    uStack_378 = 1;
    uStack_374 = 1;
    piVar23 = aiStack_488 + 2;
    piVar11 = aiStack_300;
    for (iVar22 = 0x5f; iVar22 != 0; iVar22 = iVar22 + -1) {
      *piVar11 = *piVar23;
      piVar23 = piVar23 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar8 == 0) {
      aiStack_300[3] = -*(int *)((int)pvStack_14 + 0x48);
    }
    else {
      aiStack_300[3] = *(int *)((int)pvStack_14 + 0x44);
    }
    aiStack_300[3] = aiStack_300[3] + 0x1a;
    uStack_298 = 0x6201;
    (**(code **)(**(int **)((int)pvStack_14 + 0xc) + 8))
              (4,(undefined4 *)((int)pvStack_14 + 0x1c5),0,aiStack_488,0);
    if (8 < DAT_00808aaf) {
      *(undefined4 *)((int)pvStack_14 + 0x28) = 0x20;
      *(undefined4 *)((int)pvStack_14 + 0x2c) = 1;
      FUN_006e6080(pvStack_14,2,*(undefined4 *)((int)pvStack_14 + 0x1c5),
                   (undefined4 *)((int)pvStack_14 + 0x18));
    }
    puStack_10 = (undefined4 *)((int)pvStack_14 + 0x1a1);
    bStack_5 = 0;
    iVar22 = 0xb4ff;
    iVar8 = 0x1c;
    do {
      if ((bStack_5 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
      }
      uVar14 = thunk_FUN_0053dea0(0,iVar7,0x4d,iVar8 + -2,0,0,iVar22,iVar22 + 0x10,0,0,0,(char *)0x0
                                  ,0x16,0xe);
      puStack_10[-8] = uVar14;
      if ((DAT_00808aaf <= bStack_5) || (iStack_c = 1, DAT_00808783 != '\x03')) {
        iStack_c = 0;
      }
      uVar24 = 0;
      uVar20 = 0;
      pcVar21 = (char *)0x0;
      uVar15 = 0;
      uVar17 = 0;
      iVar7 = iVar22 + 0x30;
      sVar16 = 0;
      iVar10 = iVar22 + 0x20;
      uVar14 = 0;
      iVar13 = 1;
      pCVar5 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar13,uVar14);
      uVar14 = thunk_FUN_0053dea0(0,iStack_c,0x183,iVar8,1,(int)pCVar5,iVar10,iVar7,sVar16,uVar17,
                                  uVar15,pcVar21,uVar20,uVar24);
      iVar8 = iVar8 + 0xf;
      *puStack_10 = uVar14;
      bStack_5 = bStack_5 + 1;
      iVar22 = iVar22 + 1;
      puStack_10 = puStack_10 + 1;
    } while (bStack_5 < 8);
    if (DAT_00808783 == '\x03') {
      iVar22 = 1;
      puVar2 = auStack_6c;
      for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = auStack_6b8;
      for (iVar8 = 0x8c; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      puVar2 = auStack_6b8 + 1;
      iVar8 = *(int *)((int)pvStack_14 + 0x3c) + 0x27;
      iVar7 = 4;
      do {
        iVar10 = *(int *)((int)pvStack_14 + 0x5c);
        puVar2[-1] = iVar22;
        *puVar2 = 0;
        puVar2[2] = iVar8;
        puVar2[4] = 0x13;
        if (iVar10 == 0) {
          iVar10 = -*(int *)((int)pvStack_14 + 0x48);
        }
        else {
          iVar10 = *(int *)((int)pvStack_14 + 0x44);
        }
        iVar22 = iVar22 + 1;
        puVar2[3] = iVar10 + 0xa9;
        puVar2[5] = 0xe;
        iVar8 = iVar8 + 0x5c;
        puVar2 = puVar2 + 0x1c;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      puStack_24 = auStack_6b8;
      uStack_5c = *(undefined4 *)((int)pvStack_14 + 8);
      auStack_6c[0] = 1;
      uStack_20 = 1;
      uStack_1c = 1;
      uStack_18 = 1;
      uStack_58 = 2;
      uStack_54 = 0xb208;
      uStack_38 = 2;
      uStack_34 = 0xb209;
      uStack_3c = uStack_5c;
      (**(code **)(**(int **)((int)pvStack_14 + 0xc) + 8))(5,(int)pvStack_14 + 0x1c1,0,auStack_6c,0)
      ;
      UVar12 = 0x42b8;
      iVar8 = 0x3c;
      iStack_c = 4;
      do {
        FUN_00710a90(*(int *)((int)pvStack_14 + 0x68),0,iVar8,0xa9,0x46,0xe);
        uVar18 = (DAT_0080874e != '\x03') - 1 & 5;
        iVar7 = -1;
        iVar22 = 0;
        puVar6 = (uint *)FUN_006b0140(UVar12,DAT_00807618);
        FUN_007119c0(puVar6,iVar22,iVar7,uVar18);
        iVar8 = iVar8 + 0x5c;
        UVar12 = UVar12 + 1;
        iStack_c = iStack_c + -1;
      } while (iStack_c != 0);
    }
    DAT_00858df8 = (undefined4 *)uStack_b0;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_b0;
  iVar22 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,0x81,0,iVar8,&DAT_007a4ccc);
  if (iVar22 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar8,0,0x7c7574,0x81);
  return;
}

