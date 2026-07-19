
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::InitCPanel */

void __thiscall CPanelTy::InitCPanel(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  ushort *puVar8;
  byte *pbVar9;
  char *pcVar10;
  uint *puVar11;
  short *psVar12;
  uint uVar13;
  ccFntTy *this_01;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined1 *puVar14;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar15;
  short sVar16;
  undefined2 uVar17;
  byte bVar18;
  int iVar19;
  int *piVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  uint *local_1c;
  CPanelTy *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
  local_24[0] = 0xe0;
  local_24[1] = 0xe2;
  local_24[2] = 0xe4;
  local_24[3] = 0xe6;
  local_24[4] = 0xe8;
  local_24[5] = 0xea;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_18 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar3 == 0) {
    DAT_00801688 = local_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (-(uint)((char)_DAT_00807348 != '\x01') & 0x80) + 0x70;
    }
    piVar20 = (int *)&local_18->field_0x68;
    *(int *)&local_18->field_0x90 = iVar3;
    *(int *)&local_18->field_0x8c = iVar3;
    local_10 = (int *)0xb;
    do {
      iVar3 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_8 = piVar20;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar3 = FUN_006b50c0(*piVar20,piVar20[0x16],(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5
                           ,iVar3);
      piVar20[0x46] = iVar3;
      uVar4 = *(uint *)(iVar3 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar13 = uVar4 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar5 = 0x3a3a3a3a;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0x3a;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      piVar20 = local_8 + 1;
      local_10 = (int *)((int)local_10 + -1);
    } while (local_10 != (int *)0x0);
    local_8 = piVar20;
    iVar3 = thunk_FUN_004f4640(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)&this_00->field_0x1b8 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(undefined4 *)(*(int *)&this_00->field_0x1b8 + 0x96) = 1;
    puVar5 = ccFntTy::operator(this_01,0x19d,DAT_00806790,s_TIME_FONT_007c212c,0);
    *(undefined4 **)&this_00->field_0x1bc = puVar5;
    puVar5[0x16] = 1;
    puVar5[0x17] = 0;
    puVar5 = ccFntTy::operator(DAT_00806790,0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
    *(undefined4 **)&this_00->field_0x1c0 = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    puVar5 = ccFntTy::operator(this_02,0x19d,DAT_00806790,s_MONEY_FONT_007c211c,0);
    *(undefined4 **)&this_00->field_0x1c4 = puVar5;
    puVar5[0x16] = 1;
    puVar5[0x17] = 0;
    puVar5 = ccFntTy::operator(this_03,0x19d,DAT_00806790,s_TIMER_FONT_007c210c,0);
    *(undefined4 **)&this_00->field_0x1cc = puVar5;
    puVar5[0x16] = 1;
    puVar5[0x17] = 0;
    puVar5 = ccFntTy::operator(DAT_00806790,0x19d,DAT_00806790,s_HOLD_FONT_007c1844,0);
    *(undefined4 **)&this_00->field_0x1c8 = puVar5;
    puVar5[0x16] = 1;
    puVar5[0x17] = 0;
    iVar3 = thunk_FUN_004f4c70(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)&this_00->field_0x1d0 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0xffffffff;
    local_10 = *(int **)&this_00->field_0x1d0;
    if (*(int *)((int)local_10 + 0xa0) != 0) {
      FUN_00710790((int)local_10);
    }
    *(int *)&this_00->field_0x108 = *(int *)((int)local_10 + 0x8a) * 5 + -3;
    iVar3 = thunk_FUN_004f4950(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    *(int *)&this_00->field_0x1d4 = iVar3;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    iVar3 = 1;
    bVar2 = 2;
    pCVar6 = thunk_FUN_00571240(s_BKG_TIMER_007c2100,0);
    iVar3 = FUN_0070a9f0(DAT_00806790,pCVar6,bVar2,iVar3);
    *(int *)&this_00->field_0x1ac = iVar3;
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1cc,iVar3,0,0,0,0,0);
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    iVar3 = FUN_006b50c0(*(int *)&this_00->field_0x104,*(int *)&this_00->field_0x108,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    *(int *)&this_00->field_0x1b0 = iVar3;
    local_10 = *(int **)(iVar3 + 0x14);
    if (local_10 == (int *)0x0) {
      local_10 = (int *)(((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 &
                         0x1ffffffc) * *(int *)(iVar3 + 8));
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar4 = (uint)local_10 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = (uint)local_10 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1d0,*(int *)&this_00->field_0x1b0,0,0,0,0,0);
    iVar3 = 1;
    bVar2 = 2;
    pCVar6 = thunk_FUN_00571240(s_BK_BRIEF_007c20f4,0);
    uVar7 = FUN_0070a9f0(DAT_00806790,pCVar6,bVar2,iVar3);
    *(undefined4 *)&this_00->field_0x1b4 = uVar7;
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_INF_LIFELEV_007c20e4,(int *)0x0,1);
    *(ushort **)&this_00->field_0x286 = puVar8;
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_INF_LIFELEVU_007c20d4,(int *)0x0,1);
    *(ushort **)&this_00->field_0x28a = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_IND_BKG_007c20c8,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2b2 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_INF_WEAP_007c20bc,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x28e = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_INF_WEAPD_007c20b0,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x292 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_UPG_BOAT_007c20a4,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x296 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)&this_00->field_0x29a = puVar8;
    if (DAT_0080874e != '\x03') {
      puVar5 = (undefined4 *)0x0;
      iVar19 = 0;
      iVar3 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pbVar9 = (byte *)thunk_FUN_00571240(s_INF_BKDEEP_007c2090,0);
      puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
      *(ushort **)&this_00->field_0x29e = puVar8;
    }
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pbVar9 = (byte *)thunk_FUN_00571240(s_INF_DEEP_007c2084,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x2a2 = puVar8;
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pbVar9 = (byte *)thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x2b6 = puVar8;
    if (DAT_0080874d == 0xff) {
      iVar3 = 1;
    }
    else {
      iVar3 = DAT_0080874d + 1;
    }
    wsprintfA(&this_00->field_0x1e1,s_BOATS__d_007c1810,iVar3);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,&this_00->field_0x1e1,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2ba = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_BOATS_R_007c206c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2be = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2c2 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_SOBJS_007c2064,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2c6 = puVar8;
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pbVar9 = (byte *)thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x2ca = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_ARTEFACT_007c2050,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2ce = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2d2 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2d6 = puVar8;
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pbVar9 = (byte *)thunk_FUN_00571240(s_BUT_PRIORITY_007c2038,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0xb17 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_SPIMG_SI_007c202c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0xb1b = puVar8;
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pbVar9 = (byte *)thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x9d5 = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_ENOBJ_007c2014,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2da = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x2de = puVar8;
    puVar8 = FUN_00709af0(DAT_00806794,CASE_B,(byte *)s_MHELP_007c200c,0xffffffff,0,1,0,
                          (undefined4 *)0x0);
    *(ushort **)&this_00->field_0x77c = puVar8;
    iVar3 = 1;
    piVar20 = (int *)0x0;
    pCVar6 = thunk_FUN_00571240(s_INF_BKLUINF_007c1ffc,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0x954 = puVar8;
    pCVar6 = thunk_FUN_00571240(s_INF_BKLDINF_007c1fec,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0x958 = puVar8;
    *(undefined4 *)&this_00->field_0x2e2 = 0;
    pCVar6 = thunk_FUN_00571240(s_CP2_CLEAR_007c1fe0,1);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    *(ushort **)&this_00->field_0x974 = puVar8;
    iVar3 = 1;
    piVar20 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CLEARUP1_007c1f68,(int *)0x0,1);
      *(ushort **)&this_00->field_0x978 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CLEARUP2_007c1f58,(int *)0x0,1);
      *(ushort **)&this_00->field_0x97c = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP1_007c1f48,(int *)0x0,1);
      *(ushort **)&this_00->field_0x980 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP2_007c1f38,(int *)0x0,1);
      *(ushort **)&this_00->field_0x984 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP2_CTRLDN1_007c1f28,(int *)0x0,1);
      *(ushort **)&this_00->field_0x988 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP3_007c1f18,(int *)0x0,1);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      pcVar10 = s_CP2_CTRLUP4_007c1f08;
      *(ushort **)&this_00->field_0x98c = puVar8;
      bVar2 = 6;
    }
    else {
      pCVar6 = thunk_FUN_00571240(s_CP2_1ROW_007c1fd4,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x978 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_CP2_2ROW_007c1fc8,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x97c = puVar8;
      pCVar6 = thunk_FUN_00571240(s_CP2_2ROWC_007c1fbc,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x980 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BUT_BKGSHOWUPD_007c1fa8,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x984 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BUT_BKGRETREP_007c1f98,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x988 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_BOAT_BLD_007c1f88,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x98c = puVar8;
      pcVar10 = thunk_FUN_00571240(s_BK_BOAT_TRTXT_007c1f78,0);
      bVar2 = 1;
    }
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,bVar2,pcVar10,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0x990 = puVar8;
    pCVar6 = thunk_FUN_00571240(s_INF_BKMAP_007c1efc,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    *(ushort **)&this_00->field_0x994 = puVar8;
    local_10 = (int *)&this_00->field_0x227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      puVar11 = (uint *)FUN_006b0140((UINT)local_8,DAT_00807618);
      iVar22 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_1c = puVar11;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      uVar13 = (uint)*(ushort *)(DAT_0080679c + 0xe);
      iVar3 = FUN_007111c0(*(void **)&this_00->field_0x1b8,puVar11);
      iVar19 = FUN_00711110(*(void **)&this_00->field_0x1b8,puVar11);
      local_c = FUN_006b50c0(iVar19,iVar3,uVar13,uVar4,puVar5,iVar22);
      if (local_c != 0) {
        uVar4 = *(uint *)(local_c + 0x14);
        if (uVar4 == 0) {
          uVar4 = ((uint)*(ushort *)(local_c + 0xe) * *(int *)(local_c + 4) + 0x1f >> 3 & 0x1ffffffc
                  ) * *(int *)(local_c + 8);
        }
        puVar5 = (undefined4 *)FUN_006b4fa0(local_c);
        for (uVar13 = uVar4 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar5 = 0x3a3a3a3a;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = 0x3a;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,local_c,0,0,0,0,0);
        ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1b8,local_1c,0,0,0);
        FUN_006b4b20(local_10,local_c,0,0x3a);
        FUN_006ab060(&local_c);
      }
      local_8 = (int *)((int)local_8 + 1);
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 0;
    puVar5 = (undefined4 *)&this_00->field_0xdbf;
    local_14 = 2;
    do {
      puVar23 = (undefined4 *)0x0;
      iVar22 = 0;
      iVar19 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pbVar9 = (byte *)FUN_006f2c00(s_SM_TARGET__007c1eec,1,iVar3);
      puVar8 = FUN_00709af0(DAT_00806784,CASE_B,pbVar9,uVar4,bVar2,iVar19,iVar22,puVar23);
      *(ushort **)((int)puVar5 + -0x3f7) = puVar8;
      iVar19 = 1;
      piVar20 = (int *)0x0;
      *puVar5 = puVar8 + 0x18;
      pCVar6 = FUN_006f2c00(s_SM_CROSS__007c1ee0,1,iVar3);
      puVar8 = cMf32::RecGet(DAT_00806780,6,pCVar6,piVar20,iVar19);
      puVar5[-2] = puVar8;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    pCVar6 = thunk_FUN_00571240(s_CP4_CLEAR_007c1ed4,1);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    *(ushort **)&this_00->field_0x9d9 = puVar8;
    iVar3 = 1;
    piVar20 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN1_007c1dfc,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9dd = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN2_007c1dec,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9e1 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN3_007c1ddc,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9e5 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN4_007c1dcc,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9e9 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN5_007c1dbc,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9ed = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN6_007c1dac,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9f5 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CLEARUP1_007c1d9c,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9f9 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CLEARUP2_007c1d8c,(int *)0x0,1);
      *(ushort **)&this_00->field_0x9fd = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CTRLUP1_007c1d7c,(int *)0x0,1);
      *(ushort **)&this_00->field_0xa01 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CTRLUP2_007c1d6c,(int *)0x0,1);
      *(ushort **)&this_00->field_0xa05 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_BK_RC_SI_007c1d60,(int *)0x0,1);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0xa09 = puVar8;
      pcVar10 = s_BK_BOAT_SI_007c1d50;
    }
    else {
      pCVar6 = thunk_FUN_00571240(s_CP4_ROW1_007c1ec8,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9dd = puVar8;
      pCVar6 = thunk_FUN_00571240(s_CP4_ROW2_007c1ebc,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9e1 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_CP4_ROW3_007c1eb0,1);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9e5 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKBUT_007c1ea0,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9e9 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BLDREP_007c1e90,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9ed = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKIND_007c1e80,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9f5 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT1_007c1e6c,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9f9 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKRDOCK_007c1e58,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0x9fd = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKPLASM1_007c1e44,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0xa01 = puVar8;
      pCVar6 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT2_007c1e30,0);
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
      *(ushort **)&this_00->field_0xa05 = puVar8;
      puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_BK_OBJ_BKPLASM2_007c1e1c,(int *)0x0,1);
      iVar3 = 1;
      piVar20 = (int *)0x0;
      *(ushort **)&this_00->field_0xa09 = puVar8;
      pcVar10 = thunk_FUN_00571240(s_BK_ARTEFACT_007c1e0c,0);
    }
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pcVar10,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0xa11 = puVar8;
    pCVar6 = thunk_FUN_00571240(s_BK_OBJ_STRING_007c1d40,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0x9f1 = puVar8;
    pCVar6 = thunk_FUN_00571240(s_PROC_CRAK_007c1d34,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0xa0d = puVar8;
    pCVar6 = thunk_FUN_00571240(s_INF_BKRUINF_007c1d24,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    iVar3 = 1;
    piVar20 = (int *)0x0;
    *(ushort **)&this_00->field_0xb43 = puVar8;
    pCVar6 = thunk_FUN_00571240(s_INF_BKRDINF_007c1d14,0);
    puVar8 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar3);
    *(ushort **)&this_00->field_0xb47 = puVar8;
    *(undefined4 *)&this_00->field_0x2e6 = 0;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar20 = (int *)&this_00->field_0x1a4;
      iVar19 = 0;
      iVar3 = 1;
      pCVar6 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar6 = thunk_FUN_00571240(pCVar6,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar19);
      piVar20 = (int *)&this_00->field_0x1a8;
      iVar19 = 0;
      iVar3 = 1;
      pCVar6 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar6 = thunk_FUN_00571240(pCVar6,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar6,piVar20,iVar19);
    }
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,9,10);
    *(uint **)&this_00->field_0xb95 = puVar11;
    STAllPlayersC::GetPanelInfo(DAT_007fa174,1,(int *)&this_00->field_0B63);
    STAllPlayersC::GetPanelInfo(DAT_007fa174,2,(int *)&this_00->field_0xb99);
    STAllPlayersC::GetPanelInfo(DAT_007fa174,4,(int *)&this_00->field_0xbf5);
    STAllPlayersC::GetPanelInfo(DAT_007fa174,5,(int *)&this_00->field_0C51);
    STAllPlayersC::GetPanelInfo(DAT_007fa174,0xe,(int *)&this_00->field_0xc87);
    STAllPlayersC::GetPanelInfo(DAT_007fa174,0xf,(int *)&this_00->field_0xcc9);
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    pbVar9 = (byte *)thunk_FUN_00526100(&this_00->field_0B63,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_1F,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x2e2 = puVar8;
    this_00->field_0x2ea = 0;
    puVar5 = (undefined4 *)0x0;
    iVar19 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    this_00->field_0x2ec = 1;
    *(undefined4 *)&this_00->field_0x2ee = this_00->field_0038;
    pbVar9 = (byte *)thunk_FUN_00526100(&this_00->field_0C51,0);
    puVar8 = FUN_00709af0(DAT_00806794,CASE_1F,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar5);
    *(ushort **)&this_00->field_0x2e6 = puVar8;
    this_00->field_0x2eb = 0;
    this_00->field_0x2ed = 1;
    *(undefined4 *)&this_00->field_0x2f2 = this_00->field_0038;
    local_8 = (int *)&this_00->field_0xc87;
    puVar5 = (undefined4 *)&this_00->field_0xd53;
    puVar14 = &this_00->field_0xd47;
    local_10 = (int *)0x2;
    do {
      local_14 = 6;
      do {
        puVar23 = (undefined4 *)0x0;
        iVar19 = 0;
        iVar3 = 1;
        bVar2 = 0;
        uVar4 = 6;
        pbVar9 = (byte *)thunk_FUN_004f1d20((undefined1 *)local_8);
        puVar8 = FUN_00709af0(DAT_00806794,CASE_1F,pbVar9,uVar4,bVar2,iVar3,iVar19,puVar23);
        puVar5[-0x12] = puVar8;
        puVar14[-0xc] = 0;
        *puVar14 = 1;
        local_8 = (int *)((int)local_8 + 0xb);
        *puVar5 = this_00->field_0038;
        puVar5[0xc] = 0;
        puVar5 = puVar5 + 1;
        puVar14 = puVar14 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_10 = (int *)((int)local_10 + -1);
    } while (local_10 != (int *)0x0);
    PaintInfoBoat(this_00);
    if (DAT_0080874e == '\x03') {
      PaintCtrlBoatSI(this_00);
    }
    else {
      PaintCtrlBoat(this_00);
    }
    PaintMap(this_00);
    if (DAT_0080874e == '\x03') {
      PaintCtrlObjSI(this_00);
    }
    else {
      PaintCtrlObj(this_00,1);
    }
    PaintInfoObj(this_00);
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)&this_00->field_0x11c);
    iVar3 = *(int *)&this_00->field_0x11c;
    piVar20 = (int *)&this_00->field_0x3c;
    this_00->field_0040 = iVar3;
    *piVar20 = iVar3;
    if (DAT_0080874e == '\x03') {
      *(int *)&this_00->field_0x48 = *(int *)&this_00->field_0x6c + iVar3;
    }
    else {
      iVar19 = *(int *)&this_00->field_0x6c + iVar3;
      *(int *)&this_00->field_0x44 = iVar19;
      *(int *)&this_00->field_0x48 = *(int *)&this_00->field_0x70 + iVar19;
    }
    iVar22 = *(int *)&this_00->field_0x74 + *(int *)&this_00->field_0x48;
    *(int *)&this_00->field_0x4c = iVar22;
    iVar22 = iVar22 + *(int *)&this_00->field_0x78;
    iVar19 = *(int *)&this_00->field_0x7c;
    *(int *)&this_00->field_0x50 = iVar22;
    if (DAT_0080874e != '\x03') {
      iVar22 = iVar22 + iVar19;
      iVar19 = *(int *)&this_00->field_0x80;
      *(int *)&this_00->field_0x54 = iVar22;
    }
    *(int *)&this_00->field_0x64 = iVar3;
    this_00->field_0058 = iVar22 + iVar19;
    *(int *)&this_00->field_0x5c = iVar22 + iVar19;
    iVar3 = 10;
    *(int *)&this_00->field_0x60 = *(int *)&this_00->field_0x88 + *(int *)&this_00->field_0x5c;
    do {
      *piVar20 = *piVar20 + *(int *)&this_00->field_0x8c;
      piVar20 = piVar20 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar2 = 0;
    piVar20 = (int *)&this_00->field_0x94;
    do {
      iVar3 = *(int *)&this_00->field_0x120 + -0x9b + *(int *)&this_00->field_0x128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar3 = iVar3 + this_00->field_00C0;
      }
      *piVar20 = iVar3;
      bVar2 = bVar2 + 1;
      piVar20 = piVar20 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - *(short *)&this_00->field_0x94;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar4 = 0;
      do {
        if ((*(uint *)(&this_00->field_0x68 + uVar4 * 4) != 0) &&
           ((&this_00->field_00C0)[uVar4] != 0)) {
          puVar11 = (uint *)(&this_00->field_0x148 + uVar4 * 4);
          FUN_006b2330((uint)DAT_008075a8,puVar11,5,0x402946,
                       *(uint *)(&this_00->field_0x68 + uVar4 * 4),(&this_00->field_00C0)[uVar4],
                       *(uint *)(&this_00->field_0x180 + uVar4 * 4));
          FUN_006b1b10((int)DAT_008075a8,*puVar11,3);
          FUN_006b28c0((int)DAT_008075a8,*puVar11,1);
        }
        bVar2 = bVar2 + 1;
        local_1c = (uint *)CONCAT31(local_1c._1_3_,bVar2);
        uVar4 = (uint)bVar2;
      } while (uVar4 < (-(uint)(DAT_00807348 != '\0') & 2) + 9);
    }
    this_00->field_0134 = 1;
    this_00->field_0138 = 1;
    this_00->field_0130 = 1;
    *(undefined4 *)&this_00->field_0xf4 = *(undefined4 *)(*(int *)&this_00->field_0x1ac + 4);
    *(undefined4 *)&this_00->field_0xf8 = *(undefined4 *)(*(int *)&this_00->field_0x1ac + 8);
    *(int *)&this_00->field_0xec =
         (*(int *)&this_00->field_0x124 - *(int *)&this_00->field_0xf4) +
         *(int *)&this_00->field_0x11c;
    if ((DAT_0080c4d3 == 1) || (DAT_0080c4d3 == 3)) {
      iVar3 = *(int *)&this_00->field_0x120;
    }
    else {
      iVar3 = *(int *)&this_00->field_0x120 - *(int *)&this_00->field_0xf8;
    }
    *(int *)&this_00->field_0xf0 = iVar3;
    puVar14 = &this_00->field_0x174;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar14,5,0x40402a,*(uint *)&this_00->field_0xf4,
                 *(uint *)&this_00->field_0xf8,*(uint *)&this_00->field_0x1ac);
    FUN_006b1b10((int)DAT_008075a8,*(uint *)puVar14,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)puVar14,0xffffffff,*(uint *)&this_00->field_0xec,
               *(uint *)&this_00->field_0xf0);
    puVar14 = &this_00->field_0x178;
    *(int *)&this_00->field_0xfc =
         (*(int *)&this_00->field_0x124 - *(int *)&this_00->field_0x104) +
         *(int *)&this_00->field_0x11c;
    *(int *)&this_00->field_0x100 = *(int *)&this_00->field_0xa4 - *(int *)&this_00->field_0x108;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar14,6,0x40402a,*(uint *)&this_00->field_0x104,
                 *(uint *)&this_00->field_0x108,*(uint *)&this_00->field_0x1b0);
    FUN_006b1b10((int)DAT_008075a8,*(uint *)puVar14,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)puVar14,0xffffffff,*(uint *)&this_00->field_0xfc,
               *(uint *)&this_00->field_0x100);
    FUN_006b3af0(DAT_008075a8,*(uint *)puVar14);
    *(undefined4 *)&this_00->field_0x114 = *(undefined4 *)(*(int *)&this_00->field_0x1b4 + 4);
    *(undefined4 *)&this_00->field_0x118 = *(undefined4 *)(*(int *)&this_00->field_0x1b4 + 8);
    puVar14 = &this_00->field_0x17c;
    *(int *)&this_00->field_0x10c =
         (*(int *)&this_00->field_0x124 - *(int *)&this_00->field_0x114) +
         *(int *)&this_00->field_0x11c;
    *(undefined4 *)&this_00->field_0x110 = *(undefined4 *)&this_00->field_0xa4;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar14,6,0x401988,*(uint *)&this_00->field_0x114,
                 *(uint *)&this_00->field_0x118,*(uint *)&this_00->field_0x1b4);
    FUN_006b1b10((int)DAT_008075a8,*(uint *)puVar14,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)puVar14,0xffffffff,*(uint *)&this_00->field_0x10c,
               *(uint *)&this_00->field_0x110);
    FUN_006b3af0(DAT_008075a8,*(uint *)puVar14);
    iVar3 = 1;
    bVar18 = 0;
    bVar2 = 6;
    pcVar10 = thunk_FUN_00526100((undefined1 *)0x0,0);
    psVar12 = FUN_0070b430(DAT_00806790,pcVar10,bVar2,bVar18,iVar3);
    *(short **)&this_00->field_0x25b = psVar12;
    this_00->field_0x25f = 0;
    this_00->field_0x260 = 2;
    *(undefined4 *)&this_00->field_0x261 = this_00->field_0038;
    thunk_FUN_0054b6d0(DAT_00802a30);
    bVar2 = 0;
    puVar11 = (uint *)&this_00->field_0x148;
    do {
      if (-1 < (int)*puVar11) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*puVar11,0xffffffff,puVar11[-0x43],puVar11[-0x2d]);
      }
      bVar2 = bVar2 + 1;
      puVar11 = puVar11 + 1;
    } while (bVar2 < 0xb);
    if (DAT_0080874e == '\x03') {
      SetControlBoatSI(this_00);
    }
    else {
      SetControlBoat(this_00);
    }
    thunk_FUN_00501a10((int)this_00);
    uVar24 = 0;
    uVar21 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPSCIV_007c1cf4;
    iVar3 = 0x3afc;
    uVar17 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + *(int *)&this_00->field_0x4c;
    sVar16 = 2;
    uVar15 = 0xb105;
    uVar7 = 0xb104;
    local_30 = *(int *)&this_00->field_0xa4 + 8;
    *(int **)&this_00->field_0x30 = &local_34;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPSCIV_007c1ce4,0);
    uVar7 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,
                      local_34 - *(int *)&this_00->field_0x4c,
                      local_30 - *(int *)&this_00->field_0xa4,6,(int)pCVar6,uVar7,uVar15,sVar16,
                      uVar17,iVar3,pcVar10,iVar19,uVar21,uVar24);
    *(undefined4 *)&this_00->field_0x9a4 = uVar7;
    uVar24 = 0;
    uVar21 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPSMIL_007c1cd4;
    iVar3 = 0x3afd;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb107;
    uVar7 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + *(int *)&this_00->field_0x4c;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
    uVar7 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,
                      local_34 - *(int *)&this_00->field_0x4c,
                      local_30 - *(int *)&this_00->field_0xa4,6,(int)pCVar6,uVar7,uVar15,sVar16,
                      uVar17,iVar3,pcVar10,iVar19,uVar21,uVar24);
    uVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPZIN_007c1cb4;
    iVar3 = 0x3afe;
    uVar17 = 0;
    sVar16 = 2;
    uVar21 = 0xb109;
    uVar15 = 0xb108;
    *(undefined4 *)&this_00->field_0x9a8 = uVar7;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPZIN_007c1ca4,0);
    uVar7 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,(int)pCVar6,uVar15,uVar21
                      ,sVar16,uVar17,iVar3,pcVar10,iVar19,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPZOUT_007c1c94;
    iVar3 = 0x3aff;
    uVar17 = 0;
    sVar16 = 2;
    uVar21 = 0xb10b;
    uVar15 = 0xb10a;
    *(undefined4 *)&this_00->field_0x9ac = uVar7;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
    uVar7 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,(int)pCVar6,uVar15,uVar21
                      ,sVar16,uVar17,iVar3,pcVar10,iVar19,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPTLFT_007c1c74;
    iVar3 = 0x3b00;
    uVar17 = 0;
    sVar16 = 2;
    uVar21 = 0xb10d;
    uVar15 = 0xb10c;
    *(undefined4 *)&this_00->field_0x9b0 = uVar7;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
    uVar7 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,(int)pCVar6,uVar15,uVar21,
                      sVar16,uVar17,iVar3,pcVar10,iVar19,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPTRT_007c1c54;
    iVar3 = 0x3b01;
    uVar17 = 0;
    sVar16 = 2;
    uVar21 = 0xb10f;
    uVar15 = 0xb10e;
    *(undefined4 *)&this_00->field_0x9b4 = uVar7;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPTRT_007c1c44,0);
    uVar7 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,(int)pCVar6,uVar15,uVar21
                      ,sVar16,uVar17,iVar3,pcVar10,iVar19,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar19 = 0;
    pcVar10 = s_BUT_MMAPDIR_007c1c34;
    iVar3 = 0x3b03;
    uVar17 = 0;
    sVar16 = 2;
    uVar21 = 0xb114;
    uVar15 = 0xb113;
    *(undefined4 *)&this_00->field_0x9b8 = uVar7;
    pCVar6 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    uVar7 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,(int)pCVar6,uVar15,uVar21,
                      sVar16,uVar17,iVar3,pcVar10,iVar19,uVar24,uVar25);
    *(undefined4 *)&this_00->field_0x9bc = uVar7;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0xbae;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + *(int *)&this_00->field_0x4c;
    uVar24 = 0;
    uVar21 = 0;
    iVar19 = 0;
    pcVar10 = (char *)0x0;
    iVar3 = 0x3b02;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb112;
    uVar7 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + *(int *)&this_00->field_0xa4;
    *(int **)&this_00->field_0x30 = &local_34;
    pCVar6 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar7 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0xbae,
                      local_34 - *(int *)&this_00->field_0x4c,
                      local_30 - *(int *)&this_00->field_0xa4,1,(int)pCVar6,uVar7,uVar15,sVar16,
                      uVar17,iVar3,pcVar10,iVar19,uVar21,uVar24);
    *(undefined4 *)&this_00->field_0x9c0 = uVar7;
    uVar24 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0xc0a;
    uVar21 = 0;
    iVar19 = 0;
    pcVar10 = (char *)0x0;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + *(int *)&this_00->field_0x4c;
    iVar3 = 0x3b02;
    uVar17 = 0;
    sVar16 = 2;
    uVar15 = 0xb112;
    uVar7 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + *(int *)&this_00->field_0xa4;
    *(int **)&this_00->field_0x30 = &local_34;
    pCVar6 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar7 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0xc0a,
                      local_34 - *(int *)&this_00->field_0x4c,
                      local_30 - *(int *)&this_00->field_0xa4,1,(int)pCVar6,uVar7,uVar15,sVar16,
                      uVar17,iVar3,pcVar10,iVar19,uVar21,uVar24);
    *(undefined4 *)&this_00->field_0x9c4 = uVar7;
    if (DAT_0080874e == '\x03') {
      SetControlObjSI(this_00,'\x01');
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    thunk_FUN_00506040((int)this_00);
    thunk_FUN_0052ab40(DAT_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
    FUN_006e6400(DAT_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    *(uint *)((int)DAT_00807598 + 0x418) = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    thunk_FUN_004a9b60(*(int *)&this_00->field_0x11c,*(int *)&this_00->field_0x120,
                       *(int *)&this_00->field_0x124,*(int *)&this_00->field_0x128 + -0x9b);
    puVar14 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;
    FUN_006e6000(this_00,0xf,0,(undefined4 *)puVar14);
    if ((DAT_00807327 & 8) != 0) {
      FUN_006e6500(DAT_00807598,(undefined4 *)&this_00->field_0x227);
    }
    puVar5 = (undefined4 *)puVar14;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x13;
    uVar17 = *(undefined2 *)&this_00->field_0xa;
    *(undefined2 *)&this_00->field_0x2c = *(undefined2 *)&this_00->field_0x8;
    this_00->field_002E = uVar17;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar14);
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
      if (DAT_008117bc != (undefined4 *)0x0) {
        (**(code **)*DAT_008117bc)(puVar14);
      }
      DAT_0080c4f9 = '\0';
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar19 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x1bf,0,iVar3,&DAT_007a4ccc,
                              s_CPanelTy__InitCPanel_007c1bfc);
  if (iVar19 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x1bf);
  return;
}

