
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004f5690(void)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LPSTR pCVar7;
  undefined4 uVar8;
  ushort *puVar9;
  byte *pbVar10;
  char *pcVar11;
  uint *puVar12;
  short *psVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar16;
  short sVar17;
  undefined2 uVar18;
  byte bVar19;
  int iVar20;
  int *piVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 *puStack_78;
  undefined4 auStack_74 [16];
  int iStack_34;
  int iStack_30;
  byte abStack_24 [8];
  uint *puStack_1c;
  void *pvStack_18;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  int *piStack_8;
  
  abStack_24[0] = 0xe0;
  abStack_24[1] = 0xe2;
  abStack_24[2] = 0xe4;
  abStack_24[3] = 0xe6;
  abStack_24[4] = 0xe8;
  abStack_24[5] = 0xea;
  puStack_78 = DAT_00858df8;
  DAT_00858df8 = &puStack_78;
  iVar4 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    DAT_00801688 = pvStack_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)((char)_DAT_00807348 != '\x01') & 0x80) + 0x70;
    }
    piVar21 = (int *)((int)pvStack_18 + 0x68);
    *(int *)((int)pvStack_18 + 0x90) = iVar4;
    *(int *)((int)pvStack_18 + 0x8c) = iVar4;
    piStack_10 = (int *)0xb;
    do {
      iVar4 = 1;
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      piStack_8 = piVar21;
      uVar5 = FUN_006b4fe0(DAT_0080679c);
      iVar4 = FUN_006b50c0(*piVar21,piVar21[0x16],(uint)*(ushort *)(DAT_0080679c + 0xe),uVar5,puVar6
                           ,iVar4);
      piVar21[0x46] = iVar4;
      uVar5 = *(uint *)(iVar4 + 0x14);
      if (uVar5 == 0) {
        uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar4 + 8);
      }
      puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
      for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar6 = 0x3a3a3a3a;
        puVar6 = puVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 0x3a;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      piVar21 = piStack_8 + 1;
      piStack_10 = (int *)((int)piStack_10 + -1);
    } while (piStack_10 != (int *)0x0);
    piStack_8 = piVar21;
    iVar4 = thunk_FUN_004f4640(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)((int)pvStack_18 + 0x1b8) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    *(undefined4 *)(*(int *)((int)pvStack_18 + 0x1b8) + 0x96) = 1;
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_TIME_FONT_007c212c,0);
    *(undefined4 **)((int)pvStack_18 + 0x1bc) = puVar6;
    puVar6[0x16] = 1;
    puVar6[0x17] = 0;
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
    *(undefined4 **)((int)pvStack_18 + 0x1c0) = puVar6;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    *(undefined4 **)((int)pvStack_18 + 0x1c4) = puVar6;
    puVar6[0x16] = 1;
    puVar6[0x17] = 0;
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_TIMER_FONT_007c210c,0);
    *(undefined4 **)((int)pvStack_18 + 0x1cc) = puVar6;
    puVar6[0x16] = 1;
    puVar6[0x17] = 0;
    puVar6 = FUN_0070ceb0(0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
    *(undefined4 **)((int)pvStack_18 + 0x1c8) = puVar6;
    puVar6[0x16] = 1;
    puVar6[0x17] = 0;
    iVar4 = thunk_FUN_004f4c70(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)((int)pvStack_18 + 0x1d0) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 0;
    *(undefined4 *)(iVar4 + 0x5c) = 0xffffffff;
    piStack_10 = *(int **)((int)pvStack_18 + 0x1d0);
    if (*(int *)((int)piStack_10 + 0xa0) != 0) {
      FUN_00710790((int)piStack_10);
    }
    *(int *)((int)pvStack_18 + 0x108) = *(int *)((int)piStack_10 + 0x8a) * 5 + -3;
    iVar4 = thunk_FUN_004f4950(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)((int)pvStack_18 + 0x1d4) = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = 1;
    *(undefined4 *)(iVar4 + 0x5c) = 0;
    iVar4 = 1;
    bVar3 = 2;
    pCVar7 = thunk_FUN_00571240(s_BKG_TIMER_007c2100,0);
    iVar4 = FUN_0070a9f0(DAT_00806790,pCVar7,bVar3,iVar4);
    *(int *)((int)pvStack_18 + 0x1ac) = iVar4;
    FUN_00710a90(iVar4,0,0,0,0,0);
    iVar4 = 1;
    puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar5 = FUN_006b4fe0(DAT_0080679c);
    iVar4 = FUN_006b50c0(*(int *)((int)pvStack_18 + 0x104),*(int *)((int)pvStack_18 + 0x108),
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar5,puVar6,iVar4);
    *(int *)((int)pvStack_18 + 0x1b0) = iVar4;
    piStack_10 = *(int **)(iVar4 + 0x14);
    if (piStack_10 == (int *)0x0) {
      piStack_10 = (int *)(((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 &
                           0x1ffffffc) * *(int *)(iVar4 + 8));
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar5 = (uint)piStack_10 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = (uint)piStack_10 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    FUN_00710a90(*(int *)((int)pvStack_18 + 0x1b0),0,0,0,0,0);
    iVar4 = 1;
    bVar3 = 2;
    pCVar7 = thunk_FUN_00571240(s_BK_BRIEF_007c20f4,0);
    uVar8 = FUN_0070a9f0(DAT_00806790,pCVar7,bVar3,iVar4);
    *(undefined4 *)((int)pvStack_18 + 0x1b4) = uVar8;
    puVar9 = FUN_006f1ce0(1,s_INF_LIFELEV_007c20e4,(int *)0x0,1);
    *(ushort **)((int)pvStack_18 + 0x286) = puVar9;
    puVar9 = FUN_006f1ce0(1,s_INF_LIFELEVU_007c20d4,(int *)0x0,1);
    *(ushort **)((int)pvStack_18 + 0x28a) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_IND_BKG_007c20c8,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2b2) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_INF_WEAP_007c20bc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x28e) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_INF_WEAPD_007c20b0,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x292) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_UPG_BOAT_007c20a4,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x296) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x29a) = puVar9;
    if (DAT_0080874e != '\x03') {
      puVar6 = (undefined4 *)0x0;
      iVar20 = 0;
      iVar4 = 1;
      bVar3 = 0;
      uVar5 = 0xffffffff;
      pbVar10 = (byte *)thunk_FUN_00571240(s_INF_BKDEEP_007c2090,0);
      puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
      *(ushort **)((int)pvStack_18 + 0x29e) = puVar9;
    }
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 0xffffffff;
    pbVar10 = (byte *)thunk_FUN_00571240(s_INF_DEEP_007c2084,0);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x2a2) = puVar9;
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 0xffffffff;
    pbVar10 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x2b6) = puVar9;
    if (DAT_0080874d == 0xff) {
      iVar4 = 1;
    }
    else {
      iVar4 = DAT_0080874d + 1;
    }
    wsprintfA((LPSTR)((int)pvStack_18 + 0x1e1),s_BOATS__d_007c1810,iVar4);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)((int)pvStack_18 + 0x1e1),0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2ba) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BOATS_R_007c206c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2be) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2c2) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_SOBJS_007c2064,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2c6) = puVar9;
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 0xffffffff;
    pbVar10 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x2ca) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_ARTEFACT_007c2050,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2ce) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2d2) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2d6) = puVar9;
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 0xffffffff;
    pbVar10 = (byte *)thunk_FUN_00571240(s_BUT_PRIORITY_007c2038,0);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0xb17) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_SPIMG_SI_007c202c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0xb1b) = puVar9;
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 0xffffffff;
    pbVar10 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar9 = FUN_00709af0(DAT_00806794,0xb,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x9d5) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_ENOBJ_007c2014,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2da) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x2de) = puVar9;
    puVar9 = FUN_00709af0(DAT_00806794,0xb,(byte *)s_MHELP_007c200c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)((int)pvStack_18 + 0x77c) = puVar9;
    iVar4 = 1;
    piVar21 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240(s_INF_BKLUINF_007c1ffc,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0x954) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKLDINF_007c1fec,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0x958) = puVar9;
    *(undefined4 *)((int)pvStack_18 + 0x2e2) = 0;
    pCVar7 = thunk_FUN_00571240(s_CP2_CLEAR_007c1fe0,1);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    *(ushort **)((int)pvStack_18 + 0x974) = puVar9;
    iVar4 = 1;
    piVar21 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = FUN_006f1ce0(6,s_CP2_CLEARUP1_007c1f68,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x978) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP2_CLEARUP2_007c1f58,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x97c) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP2_CTRLUP1_007c1f48,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x980) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP2_CTRLUP2_007c1f38,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x984) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP2_CTRLDN1_007c1f28,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x988) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP2_CTRLUP3_007c1f18,(int *)0x0,1);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      pcVar11 = s_CP2_CTRLUP4_007c1f08;
      *(ushort **)((int)pvStack_18 + 0x98c) = puVar9;
      bVar3 = 6;
    }
    else {
      pCVar7 = thunk_FUN_00571240(s_CP2_1ROW_007c1fd4,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x978) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP2_2ROW_007c1fc8,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x97c) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP2_2ROWC_007c1fbc,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x980) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BUT_BKGSHOWUPD_007c1fa8,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x984) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BUT_BKGRETREP_007c1f98,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x988) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_BOAT_BLD_007c1f88,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x98c) = puVar9;
      pcVar11 = thunk_FUN_00571240(s_BK_BOAT_TRTXT_007c1f78,0);
      bVar3 = 1;
    }
    puVar9 = FUN_006f1ce0(bVar3,pcVar11,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0x990) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKMAP_007c1efc,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    *(ushort **)((int)pvStack_18 + 0x994) = puVar9;
    piStack_10 = (int *)((int)pvStack_18 + 0x227);
    piStack_8 = (int *)0x3b60;
    iStack_14 = 4;
    do {
      puVar12 = (uint *)FUN_006b0140((UINT)piStack_8,DAT_00807618);
      iVar23 = 1;
      puVar6 = (undefined4 *)(DAT_0080679c + 0x28);
      puStack_1c = puVar12;
      uVar5 = FUN_006b4fe0(DAT_0080679c);
      uVar14 = (uint)*(ushort *)(DAT_0080679c + 0xe);
      iVar4 = FUN_007111c0(*(void **)((int)pvStack_18 + 0x1b8),puVar12);
      iVar20 = FUN_00711110(*(void **)((int)pvStack_18 + 0x1b8),puVar12);
      uStack_c = FUN_006b50c0(iVar20,iVar4,uVar14,uVar5,puVar6,iVar23);
      if (uStack_c != 0) {
        uVar5 = *(uint *)(uStack_c + 0x14);
        if (uVar5 == 0) {
          uVar5 = ((uint)*(ushort *)(uStack_c + 0xe) * *(int *)(uStack_c + 4) + 0x1f >> 3 &
                  0x1ffffffc) * *(int *)(uStack_c + 8);
        }
        puVar6 = (undefined4 *)FUN_006b4fa0(uStack_c);
        for (uVar14 = uVar5 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar6 = 0x3a3a3a3a;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0x3a;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        FUN_00710a90(uStack_c,0,0,0,0,0);
        FUN_007119c0(puStack_1c,0,0,0);
        FUN_006b4b20(piStack_10,uStack_c,0,0x3a);
        FUN_006ab060(&uStack_c);
      }
      piStack_8 = (int *)((int)piStack_8 + 1);
      piStack_10 = piStack_10 + 1;
      iStack_14 = iStack_14 + -1;
    } while (iStack_14 != 0);
    iVar4 = 0;
    puVar6 = (undefined4 *)((int)pvStack_18 + 0xdbf);
    iStack_14 = 2;
    do {
      puVar24 = (undefined4 *)0x0;
      iVar23 = 0;
      iVar20 = 1;
      bVar3 = 0;
      uVar5 = 0xffffffff;
      pbVar10 = (byte *)FUN_006f2c00(s_SM_TARGET__007c1eec,1,iVar4);
      puVar9 = FUN_00709af0(DAT_00806784,0xb,pbVar10,uVar5,bVar3,iVar20,iVar23,puVar24);
      *(ushort **)((int)puVar6 + -0x3f7) = puVar9;
      iVar20 = 1;
      piVar21 = (int *)0x0;
      *puVar6 = puVar9 + 0x18;
      pCVar7 = FUN_006f2c00(s_SM_CROSS__007c1ee0,1,iVar4);
      puVar9 = FUN_006f1ce0(6,pCVar7,piVar21,iVar20);
      puVar6[-2] = puVar9;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
      iStack_14 = iStack_14 + -1;
    } while (iStack_14 != 0);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240(s_CP4_CLEAR_007c1ed4,1);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    *(ushort **)((int)pvStack_18 + 0x9d9) = puVar9;
    iVar4 = 1;
    piVar21 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN1_007c1dfc,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9dd) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN2_007c1dec,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9e1) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN3_007c1ddc,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9e5) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN4_007c1dcc,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9e9) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN5_007c1dbc,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9ed) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_CP4_CTRLDN6_007c1dac,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9f5) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP4_CLEARUP1_007c1d9c,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9f9) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP4_CLEARUP2_007c1d8c,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0x9fd) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP4_CTRLUP1_007c1d7c,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0xa01) = puVar9;
      puVar9 = FUN_006f1ce0(6,s_CP4_CTRLUP2_007c1d6c,(int *)0x0,1);
      *(ushort **)((int)pvStack_18 + 0xa05) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_BK_RC_SI_007c1d60,(int *)0x0,1);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0xa09) = puVar9;
      pcVar11 = s_BK_BOAT_SI_007c1d50;
    }
    else {
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW1_007c1ec8,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9dd) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW2_007c1ebc,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9e1) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW3_007c1eb0,1);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9e5) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKBUT_007c1ea0,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9e9) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BLDREP_007c1e90,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9ed) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKIND_007c1e80,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9f5) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT1_007c1e6c,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9f9) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKRDOCK_007c1e58,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0x9fd) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKPLASM1_007c1e44,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0xa01) = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT2_007c1e30,0);
      puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
      *(ushort **)((int)pvStack_18 + 0xa05) = puVar9;
      puVar9 = FUN_006f1ce0(1,s_BK_OBJ_BKPLASM2_007c1e1c,(int *)0x0,1);
      iVar4 = 1;
      piVar21 = (int *)0x0;
      *(ushort **)((int)pvStack_18 + 0xa09) = puVar9;
      pcVar11 = thunk_FUN_00571240(s_BK_ARTEFACT_007c1e0c,0);
    }
    puVar9 = FUN_006f1ce0(1,pcVar11,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0xa11) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_BK_OBJ_STRING_007c1d40,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0x9f1) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_PROC_CRAK_007c1d34,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0xa0d) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKRUINF_007c1d24,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    iVar4 = 1;
    piVar21 = (int *)0x0;
    *(ushort **)((int)pvStack_18 + 0xb43) = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKRDINF_007c1d14,0);
    puVar9 = FUN_006f1ce0(1,pCVar7,piVar21,iVar4);
    *(ushort **)((int)pvStack_18 + 0xb47) = puVar9;
    *(undefined4 *)((int)pvStack_18 + 0x2e6) = 0;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar21 = (int *)((int)pvStack_18 + 0x1a4);
      iVar20 = 0;
      iVar4 = 1;
      pCVar7 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar4);
      FUN_006f1ce0(1,pCVar7,piVar21,iVar20);
      piVar21 = (int *)((int)pvStack_18 + 0x1a8);
      iVar20 = 0;
      iVar4 = 1;
      pCVar7 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar4);
      FUN_006f1ce0(1,pCVar7,piVar21,iVar20);
    }
    puVar12 = FUN_006ae290((uint *)0x0,10,9,10);
    *(uint **)((int)pvStack_18 + 0xb95) = puVar12;
    thunk_FUN_0043beb0(DAT_007fa174,1,(int *)((int)pvStack_18 + 0xb63));
    thunk_FUN_0043beb0(DAT_007fa174,2,(int *)((int)pvStack_18 + 0xb99));
    thunk_FUN_0043beb0(DAT_007fa174,4,(int *)((int)pvStack_18 + 0xbf5));
    thunk_FUN_0043beb0(DAT_007fa174,5,(int *)((int)pvStack_18 + 0xc51));
    thunk_FUN_0043beb0(DAT_007fa174,0xe,(int *)((int)pvStack_18 + 0xc87));
    thunk_FUN_0043beb0(DAT_007fa174,0xf,(int *)((int)pvStack_18 + 0xcc9));
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 6;
    pbVar10 = (byte *)thunk_FUN_00526100((undefined1 *)((int)pvStack_18 + 0xb63),0);
    puVar9 = FUN_00709af0(DAT_00806794,0x1f,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x2e2) = puVar9;
    *(undefined1 *)((int)pvStack_18 + 0x2ea) = 0;
    puVar6 = (undefined4 *)0x0;
    iVar20 = 0;
    iVar4 = 1;
    bVar3 = 0;
    uVar5 = 6;
    *(undefined1 *)((int)pvStack_18 + 0x2ec) = 1;
    *(undefined4 *)((int)pvStack_18 + 0x2ee) = *(undefined4 *)((int)pvStack_18 + 0x38);
    pbVar10 = (byte *)thunk_FUN_00526100((undefined1 *)((int)pvStack_18 + 0xc51),0);
    puVar9 = FUN_00709af0(DAT_00806794,0x1f,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar6);
    *(ushort **)((int)pvStack_18 + 0x2e6) = puVar9;
    *(undefined1 *)((int)pvStack_18 + 0x2eb) = 0;
    *(undefined1 *)((int)pvStack_18 + 0x2ed) = 1;
    *(undefined4 *)((int)pvStack_18 + 0x2f2) = *(undefined4 *)((int)pvStack_18 + 0x38);
    piStack_8 = (int *)((int)pvStack_18 + 0xc87);
    puVar6 = (undefined4 *)((int)pvStack_18 + 0xd53);
    puVar15 = (undefined1 *)((int)pvStack_18 + 0xd47);
    piStack_10 = (int *)0x2;
    do {
      iStack_14 = 6;
      do {
        puVar24 = (undefined4 *)0x0;
        iVar20 = 0;
        iVar4 = 1;
        bVar3 = 0;
        uVar5 = 6;
        pbVar10 = (byte *)thunk_FUN_004f1d20((undefined1 *)piStack_8);
        puVar9 = FUN_00709af0(DAT_00806794,0x1f,pbVar10,uVar5,bVar3,iVar4,iVar20,puVar24);
        puVar6[-0x12] = puVar9;
        puVar15[-0xc] = 0;
        *puVar15 = 1;
        piStack_8 = (int *)((int)piStack_8 + 0xb);
        *puVar6 = *(undefined4 *)((int)pvStack_18 + 0x38);
        puVar6[0xc] = 0;
        puVar6 = puVar6 + 1;
        puVar15 = puVar15 + 1;
        iStack_14 = iStack_14 + -1;
      } while (iStack_14 != 0);
      piStack_10 = (int *)((int)piStack_10 + -1);
    } while (piStack_10 != (int *)0x0);
    thunk_FUN_004fe960();
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00502990();
    }
    else {
      thunk_FUN_00501590();
    }
    thunk_FUN_005040a0();
    if (DAT_0080874e == '\x03') {
      thunk_FUN_0050a340();
    }
    else {
      thunk_FUN_005061c0(1);
    }
    thunk_FUN_004fee10();
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(int *)((int)pvStack_18 + 0x11c));
    iVar4 = *(int *)((int)pvStack_18 + 0x11c);
    piVar21 = (int *)((int)pvStack_18 + 0x3c);
    *(int *)((int)pvStack_18 + 0x40) = iVar4;
    *piVar21 = iVar4;
    if (DAT_0080874e == '\x03') {
      *(int *)((int)pvStack_18 + 0x48) = *(int *)((int)pvStack_18 + 0x6c) + iVar4;
    }
    else {
      iVar20 = *(int *)((int)pvStack_18 + 0x6c) + iVar4;
      *(int *)((int)pvStack_18 + 0x44) = iVar20;
      *(int *)((int)pvStack_18 + 0x48) = *(int *)((int)pvStack_18 + 0x70) + iVar20;
    }
    iVar23 = *(int *)((int)pvStack_18 + 0x74) + *(int *)((int)pvStack_18 + 0x48);
    *(int *)((int)pvStack_18 + 0x4c) = iVar23;
    iVar23 = iVar23 + *(int *)((int)pvStack_18 + 0x78);
    iVar20 = *(int *)((int)pvStack_18 + 0x7c);
    *(int *)((int)pvStack_18 + 0x50) = iVar23;
    if (DAT_0080874e != '\x03') {
      iVar23 = iVar23 + iVar20;
      iVar20 = *(int *)((int)pvStack_18 + 0x80);
      *(int *)((int)pvStack_18 + 0x54) = iVar23;
    }
    *(int *)((int)pvStack_18 + 100) = iVar4;
    *(int *)((int)pvStack_18 + 0x58) = iVar23 + iVar20;
    *(int *)((int)pvStack_18 + 0x5c) = iVar23 + iVar20;
    iVar4 = 10;
    *(int *)((int)pvStack_18 + 0x60) =
         *(int *)((int)pvStack_18 + 0x88) + *(int *)((int)pvStack_18 + 0x5c);
    do {
      *piVar21 = *piVar21 + *(int *)((int)pvStack_18 + 0x8c);
      piVar21 = piVar21 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    bVar3 = 0;
    piVar21 = (int *)((int)pvStack_18 + 0x94);
    do {
      iVar4 = *(int *)((int)pvStack_18 + 0x120) + -0x9b + *(int *)((int)pvStack_18 + 0x128);
      if ((bVar3 == 1) || (bVar3 == 7)) {
        iVar4 = iVar4 + *(int *)((int)pvStack_18 + 0xc0);
      }
      *piVar21 = iVar4;
      bVar3 = bVar3 + 1;
      piVar21 = piVar21 + 1;
    } while (bVar3 < 0xb);
    bVar3 = 0;
    *(short *)((int)pvStack_18 + 0x241) = (short)DAT_00806734 - *(short *)((int)pvStack_18 + 0x94);
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar5 = 0;
      do {
        uVar14 = *(uint *)((int)pvStack_18 + uVar5 * 4 + 0x68);
        if ((uVar14 != 0) && (uVar1 = *(uint *)((int)pvStack_18 + uVar5 * 4 + 0xc0), uVar1 != 0)) {
          puVar12 = (uint *)((int)pvStack_18 + uVar5 * 4 + 0x148);
          FUN_006b2330((uint)DAT_008075a8,puVar12,5,0x402946,uVar14,uVar1,
                       *(uint *)((int)pvStack_18 + uVar5 * 4 + 0x180));
          FUN_006b1b10((int)DAT_008075a8,*puVar12,3);
          FUN_006b28c0((int)DAT_008075a8,*puVar12,1);
        }
        bVar3 = bVar3 + 1;
        puStack_1c = (uint *)CONCAT31(puStack_1c._1_3_,bVar3);
        uVar5 = (uint)bVar3;
      } while (uVar5 < (-(uint)(DAT_00807348 != '\0') & 2) + 9);
    }
    *(undefined4 *)((int)pvStack_18 + 0x134) = 1;
    *(undefined4 *)((int)pvStack_18 + 0x138) = 1;
    *(undefined4 *)((int)pvStack_18 + 0x130) = 1;
    *(undefined4 *)((int)pvStack_18 + 0xf4) = *(undefined4 *)(*(int *)((int)pvStack_18 + 0x1ac) + 4)
    ;
    *(undefined4 *)((int)pvStack_18 + 0xf8) = *(undefined4 *)(*(int *)((int)pvStack_18 + 0x1ac) + 8)
    ;
    *(int *)((int)pvStack_18 + 0xec) =
         (*(int *)((int)pvStack_18 + 0x124) - *(int *)((int)pvStack_18 + 0xf4)) +
         *(int *)((int)pvStack_18 + 0x11c);
    if ((DAT_0080c4d3 == 1) || (DAT_0080c4d3 == 3)) {
      iVar4 = *(int *)((int)pvStack_18 + 0x120);
    }
    else {
      iVar4 = *(int *)((int)pvStack_18 + 0x120) - *(int *)((int)pvStack_18 + 0xf8);
    }
    *(int *)((int)pvStack_18 + 0xf0) = iVar4;
    puVar12 = (uint *)((int)pvStack_18 + 0x174);
    FUN_006b2330((uint)DAT_008075a8,puVar12,5,0x40402a,*(uint *)((int)pvStack_18 + 0xf4),
                 *(uint *)((int)pvStack_18 + 0xf8),*(uint *)((int)pvStack_18 + 0x1ac));
    FUN_006b1b10((int)DAT_008075a8,*puVar12,3);
    FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,*(uint *)((int)pvStack_18 + 0xec),
                 *(uint *)((int)pvStack_18 + 0xf0));
    puVar12 = (uint *)((int)pvStack_18 + 0x178);
    *(int *)((int)pvStack_18 + 0xfc) =
         (*(int *)((int)pvStack_18 + 0x124) - *(int *)((int)pvStack_18 + 0x104)) +
         *(int *)((int)pvStack_18 + 0x11c);
    *(int *)((int)pvStack_18 + 0x100) =
         *(int *)((int)pvStack_18 + 0xa4) - *(int *)((int)pvStack_18 + 0x108);
    FUN_006b2330((uint)DAT_008075a8,puVar12,6,0x40402a,*(uint *)((int)pvStack_18 + 0x104),
                 *(uint *)((int)pvStack_18 + 0x108),*(uint *)((int)pvStack_18 + 0x1b0));
    FUN_006b1b10((int)DAT_008075a8,*puVar12,3);
    FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,*(uint *)((int)pvStack_18 + 0xfc),
                 *(uint *)((int)pvStack_18 + 0x100));
    FUN_006b3af0(DAT_008075a8,*puVar12);
    *(undefined4 *)((int)pvStack_18 + 0x114) =
         *(undefined4 *)(*(int *)((int)pvStack_18 + 0x1b4) + 4);
    *(undefined4 *)((int)pvStack_18 + 0x118) =
         *(undefined4 *)(*(int *)((int)pvStack_18 + 0x1b4) + 8);
    puVar12 = (uint *)((int)pvStack_18 + 0x17c);
    *(int *)((int)pvStack_18 + 0x10c) =
         (*(int *)((int)pvStack_18 + 0x124) - *(int *)((int)pvStack_18 + 0x114)) +
         *(int *)((int)pvStack_18 + 0x11c);
    *(undefined4 *)((int)pvStack_18 + 0x110) = *(undefined4 *)((int)pvStack_18 + 0xa4);
    FUN_006b2330((uint)DAT_008075a8,puVar12,6,0x401988,*(uint *)((int)pvStack_18 + 0x114),
                 *(uint *)((int)pvStack_18 + 0x118),*(uint *)((int)pvStack_18 + 0x1b4));
    FUN_006b1b10((int)DAT_008075a8,*puVar12,3);
    FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,*(uint *)((int)pvStack_18 + 0x10c),
                 *(uint *)((int)pvStack_18 + 0x110));
    FUN_006b3af0(DAT_008075a8,*puVar12);
    iVar4 = 1;
    bVar19 = 0;
    bVar3 = 6;
    pcVar11 = thunk_FUN_00526100((undefined1 *)0x0,0);
    psVar13 = FUN_0070b430(DAT_00806790,pcVar11,bVar3,bVar19,iVar4);
    *(short **)((int)pvStack_18 + 0x25b) = psVar13;
    *(undefined1 *)((int)pvStack_18 + 0x25f) = 0;
    *(undefined1 *)((int)pvStack_18 + 0x260) = 2;
    *(undefined4 *)((int)pvStack_18 + 0x261) = *(undefined4 *)((int)pvStack_18 + 0x38);
    thunk_FUN_0054b6d0(DAT_00802a30);
    bVar3 = 0;
    puVar12 = (uint *)((int)pvStack_18 + 0x148);
    do {
      if (-1 < (int)*puVar12) {
        FUN_006b3640(DAT_008075a8,*puVar12,0xffffffff,puVar12[-0x43],puVar12[-0x2d]);
      }
      bVar3 = bVar3 + 1;
      puVar12 = puVar12 + 1;
    } while (bVar3 < 0xb);
    if (DAT_0080874e == '\x03') {
      thunk_FUN_00503450();
    }
    else {
      thunk_FUN_00502360();
    }
    thunk_FUN_00501a10((int)pvStack_18);
    uVar25 = 0;
    uVar22 = 0;
    *(uint *)((int)pvStack_18 + 0x2c) = (uint)(DAT_00807327 & 2 | 1);
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPSCIV_007c1cf4;
    iVar4 = 0x3afc;
    uVar18 = 0;
    iStack_34 = (DAT_0080874e == '\x03') + 0x68 + *(int *)((int)pvStack_18 + 0x4c);
    sVar17 = 2;
    uVar16 = 0xb105;
    uVar8 = 0xb104;
    iStack_30 = *(int *)((int)pvStack_18 + 0xa4) + 8;
    *(int **)((int)pvStack_18 + 0x30) = &iStack_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPSCIV_007c1ce4,0);
    uVar8 = thunk_FUN_004f3130(4,3,*(int *)((int)pvStack_18 + 0x2c),
                               iStack_34 - *(int *)((int)pvStack_18 + 0x4c),
                               iStack_30 - *(int *)((int)pvStack_18 + 0xa4),6,(int)pCVar7,uVar8,
                               uVar16,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar22,uVar25);
    *(undefined4 *)((int)pvStack_18 + 0x9a4) = uVar8;
    uVar25 = 0;
    uVar22 = 0;
    *(uint *)((int)pvStack_18 + 0x2c) = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPSMIL_007c1cd4;
    iVar4 = 0x3afd;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb107;
    uVar8 = 0xb106;
    iStack_34 = (DAT_0080874e == '\x03') + 0x7b + *(int *)((int)pvStack_18 + 0x4c);
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
    uVar8 = thunk_FUN_004f3130(4,3,*(int *)((int)pvStack_18 + 0x2c),
                               iStack_34 - *(int *)((int)pvStack_18 + 0x4c),
                               iStack_30 - *(int *)((int)pvStack_18 + 0xa4),6,(int)pCVar7,uVar8,
                               uVar16,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar22,uVar25);
    uVar26 = 0;
    uVar25 = 0;
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPZIN_007c1cb4;
    iVar4 = 0x3afe;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb109;
    uVar16 = 0xb108;
    *(undefined4 *)((int)pvStack_18 + 0x9a8) = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPZIN_007c1ca4,0);
    uVar8 = thunk_FUN_004f3130(4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,(int)pCVar7,uVar16,
                               uVar22,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar25,uVar26);
    uVar26 = 0;
    uVar25 = 0;
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPZOUT_007c1c94;
    iVar4 = 0x3aff;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10b;
    uVar16 = 0xb10a;
    *(undefined4 *)((int)pvStack_18 + 0x9ac) = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
    uVar8 = thunk_FUN_004f3130(4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,(int)pCVar7,uVar16,
                               uVar22,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar25,uVar26);
    uVar26 = 0;
    uVar25 = 0;
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPTLFT_007c1c74;
    iVar4 = 0x3b00;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10d;
    uVar16 = 0xb10c;
    *(undefined4 *)((int)pvStack_18 + 0x9b0) = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
    uVar8 = thunk_FUN_004f3130(4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,(int)pCVar7,uVar16,uVar22
                               ,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar25,uVar26);
    uVar26 = 0;
    uVar25 = 0;
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPTRT_007c1c54;
    iVar4 = 0x3b01;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb10f;
    uVar16 = 0xb10e;
    *(undefined4 *)((int)pvStack_18 + 0x9b4) = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPTRT_007c1c44,0);
    uVar8 = thunk_FUN_004f3130(4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,(int)pCVar7,uVar16,
                               uVar22,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar25,uVar26);
    uVar26 = 0;
    uVar25 = 0;
    iVar20 = 0;
    pcVar11 = s_BUT_MMAPDIR_007c1c34;
    iVar4 = 0x3b03;
    uVar18 = 0;
    sVar17 = 2;
    uVar22 = 0xb114;
    uVar16 = 0xb113;
    *(undefined4 *)((int)pvStack_18 + 0x9b8) = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    uVar8 = thunk_FUN_004f3130(4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,(int)pCVar7,uVar16,uVar22,
                               sVar17,uVar18,iVar4,pcVar11,iVar20,uVar25,uVar26);
    *(undefined4 *)((int)pvStack_18 + 0x9bc) = uVar8;
    *(uint *)((int)pvStack_18 + 0x2c) = (uint)*(byte *)((int)pvStack_18 + 0xbae);
    iStack_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 +
                *(int *)((int)pvStack_18 + 0x4c);
    uVar25 = 0;
    uVar22 = 0;
    iVar20 = 0;
    pcVar11 = (char *)0x0;
    iVar4 = 0x3b02;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb112;
    uVar8 = 0xb110;
    iStack_30 = (DAT_0080874e != '\x03') + 0x65 + *(int *)((int)pvStack_18 + 0xa4);
    *(int **)((int)pvStack_18 + 0x30) = &iStack_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar8 = thunk_FUN_004f3130(4,3,(uint)*(byte *)((int)pvStack_18 + 0xbae),
                               iStack_34 - *(int *)((int)pvStack_18 + 0x4c),
                               iStack_30 - *(int *)((int)pvStack_18 + 0xa4),1,(int)pCVar7,uVar8,
                               uVar16,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar22,uVar25);
    *(undefined4 *)((int)pvStack_18 + 0x9c0) = uVar8;
    uVar25 = 0;
    *(uint *)((int)pvStack_18 + 0x2c) = (uint)*(byte *)((int)pvStack_18 + 0xc0a);
    uVar22 = 0;
    iVar20 = 0;
    pcVar11 = (char *)0x0;
    iStack_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + *(int *)((int)pvStack_18 + 0x4c);
    iVar4 = 0x3b02;
    uVar18 = 0;
    sVar17 = 2;
    uVar16 = 0xb112;
    uVar8 = 0xb111;
    iStack_30 = (DAT_0080874e != '\x03') + 0x65 + *(int *)((int)pvStack_18 + 0xa4);
    *(int **)((int)pvStack_18 + 0x30) = &iStack_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar8 = thunk_FUN_004f3130(4,3,(uint)*(byte *)((int)pvStack_18 + 0xc0a),
                               iStack_34 - *(int *)((int)pvStack_18 + 0x4c),
                               iStack_30 - *(int *)((int)pvStack_18 + 0xa4),1,(int)pCVar7,uVar8,
                               uVar16,sVar17,uVar18,iVar4,pcVar11,iVar20,uVar22,uVar25);
    *(undefined4 *)((int)pvStack_18 + 0x9c4) = uVar8;
    if (DAT_0080874e == '\x03') {
      thunk_FUN_0050e7d0('\x01');
    }
    else {
      thunk_FUN_005097e0('\x01');
    }
    thunk_FUN_00506040((int)pvStack_18);
    thunk_FUN_0052ab40(DAT_00806750,(int *)((int)pvStack_18 + 0x217),0x8b,abStack_24);
    FUN_006e6400(DAT_00807598,(int *)((int)pvStack_18 + 0x217),0,0x8b,0x46);
    *(uint *)((int)DAT_00807598 + 0x418) = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    thunk_FUN_004a9b60(*(int *)((int)pvStack_18 + 0x11c),*(int *)((int)pvStack_18 + 0x120),
                       *(int *)((int)pvStack_18 + 0x124),*(int *)((int)pvStack_18 + 0x128) + -0x9b);
    puVar6 = (undefined4 *)((int)pvStack_18 + 0x18);
    *(undefined4 *)((int)pvStack_18 + 0x28) = 0x4403;
    FUN_006e6000(pvStack_18,0xf,0,puVar6);
    if ((DAT_00807327 & 8) != 0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)((int)pvStack_18 + 0x227));
    }
    puVar24 = puVar6;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar24 = 0;
      puVar24 = puVar24 + 1;
    }
    *(undefined4 *)((int)pvStack_18 + 0x28) = 0x13;
    *(undefined4 *)((int)pvStack_18 + 0x2c) = *(undefined4 *)((int)pvStack_18 + 8);
    FUN_006e6000(pvStack_18,3,1,puVar6);
    if (DAT_0080c4f9 != '\0') {
      *(undefined4 *)((int)pvStack_18 + 0x28) = 0x5dc6;
      *(undefined **)((int)pvStack_18 + 0x2c) = &DAT_0080c4d7;
      if (DAT_008117bc != (undefined4 *)0x0) {
        (**(code **)*DAT_008117bc)(puVar6);
      }
      DAT_0080c4f9 = '\0';
    }
    DAT_00858df8 = puStack_78;
    return;
  }
  DAT_00858df8 = puStack_78;
  iVar20 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x1bf,0,iVar4,&DAT_007a4ccc);
  if (iVar20 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c1bd8,0x1bf);
  return;
}

