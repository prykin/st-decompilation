
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
  ccFntTy *pcVar6;
  LPSTR pCVar7;
  undefined4 uVar8;
  ushort *puVar9;
  char *pcVar10;
  uint *puVar11;
  uint uVar12;
  ccFntTy *this_01;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined1 *puVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar14;
  short sVar15;
  undefined2 uVar16;
  byte bVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 *puVar22;
  short *psVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  InternalExceptionFrame local_78;
  int local_34;
  int local_30;
  byte local_24 [8];
  uint *local_1c;
  CPanelTy *local_18;
  int local_14;
  ccFntTy *local_10;
  LPVOID local_c;
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
    g_cPanel_00801688 = local_18;
    if ((char)_DAT_00807348 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (-(uint)((char)_DAT_00807348 != '\x01') & 0x80) + 0x70;
    }
    piVar19 = &local_18->field_0068;
    local_18->field_0090 = iVar3;
    local_18->field_008C = iVar3;
    local_10 = (ccFntTy *)0xb;
    do {
      iVar3 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_8 = piVar19;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      iVar3 = FUN_006b50c0(*piVar19,piVar19[0x16],(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5
                           ,iVar3);
      piVar19[0x46] = iVar3;
      uVar4 = *(uint *)(iVar3 + 0x14);
      if (uVar4 == 0) {
        uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(iVar3 + 8);
      }
      puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
      for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar5 = 0x3a3a3a3a;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0x3a;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      piVar19 = local_8 + 1;
      local_10 = (ccFntTy *)((int)local_10 + -1);
    } while (local_10 != (ccFntTy *)0x0);
    local_8 = piVar19;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4640(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01B8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    this_00->field_01B8->field_0096 = 1;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_01,0x19d,(cMf32 *)DAT_00806790,s_TIME_FONT_007c212c,0);
    this_00->field_01BC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    puVar5 = ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_HOLD_FONT_007c1844,0);
    this_00->field_01C0 = puVar5;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_02,0x19d,(cMf32 *)DAT_00806790,s_MONEY_FONT_007c211c,0);
    this_00->field_01C4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(this_03,0x19d,(cMf32 *)DAT_00806790,s_TIMER_FONT_007c210c,0);
    this_00->field_01CC = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)
             ccFntTy::operator(DAT_00806790,0x19d,(cMf32 *)DAT_00806790,s_HOLD_FONT_007c1844,0);
    this_00->field_01C8 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4c70(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01D0 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0xffffffff;
    local_10 = this_00->field_01D0;
    if (local_10->field_00A0 != 0) {
      FUN_00710790((uint *)local_10);
    }
    this_00->field_0108 = *(int *)&local_10->field_0x8a * 5 + -3;
    pcVar6 = (ccFntTy *)thunk_FUN_004f4950(DAT_0080679c,(undefined *)0x0,DAT_00807dd9);
    this_00->field_01D4 = pcVar6;
    pcVar6->field_0058 = 1;
    pcVar6->field_005C = 0;
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240(s_BKG_TIMER_007c2100,0);
    iVar3 = FUN_0070a9f0((cMf32 *)DAT_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01AC = iVar3;
    ccFntTy::SetSurf(this_00->field_01CC,iVar3,0,0,0,0,0);
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    iVar3 = FUN_006b50c0(this_00->field_0104,this_00->field_0108,
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    this_00->field_01B0 = iVar3;
    local_10 = *(ccFntTy **)(iVar3 + 0x14);
    if (local_10 == (ccFntTy *)0x0) {
      local_10 = (ccFntTy *)
                 (((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(iVar3 + 8));
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
    ccFntTy::SetSurf(this_00->field_01D0,this_00->field_01B0,0,0,0,0,0);
    iVar3 = 1;
    bVar2 = 2;
    pCVar7 = thunk_FUN_00571240(s_BK_BRIEF_007c20f4,0);
    uVar8 = FUN_0070a9f0((cMf32 *)DAT_00806790,pCVar7,bVar2,iVar3);
    this_00->field_01B4 = uVar8;
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_INF_LIFELEV_007c20e4,(int *)0x0,1);
    this_00->field_0286 = puVar9;
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_INF_LIFELEVU_007c20d4,(int *)0x0,1);
    this_00->field_028A = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_IND_BKG_007c20c8,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02B2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_INF_WEAP_007c20bc,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_028E = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_INF_WEAPD_007c20b0,0xffffffff,0,1,0,(undefined4 *)0x0)
    ;
    this_00->field_0292 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_UPG_BOAT_007c20a4,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0296 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c20a0,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_029A = puVar9;
    if (DAT_0080874e != '\x03') {
      puVar5 = (undefined4 *)0x0;
      iVar18 = 0;
      iVar3 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pCVar7 = thunk_FUN_00571240(s_INF_BKDEEP_007c2090,0);
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
      this_00->field_029E = puVar9;
    }
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240(s_INF_DEEP_007c2084,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_02A2 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240(s_IND_PNT_007c2078,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_02B6 = puVar9;
    if (DAT_0080874d == 0xff) {
      iVar3 = 1;
    }
    else {
      iVar3 = DAT_0080874d + 1;
    }
    wsprintfA(&this_00->field_0x1e1,s_BOATS__d_007c1810,iVar3);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&this_00->field_0x1e1,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
    this_00->field_02BA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_BOATS_R_007c206c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02BE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c1910,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02C2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_SOBJS_007c2064,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02C6 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240(s_FRAMES_007c205c,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_02CA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_ARTEFACT_007c2050,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02CE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c204c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02D2 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,&DAT_007c2048,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02D6 = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240(s_BUT_PRIORITY_007c2038,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_0B17 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_SPIMG_SI_007c202c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_0B1B = puVar9;
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 0xffffffff;
    pCVar7 = thunk_FUN_00571240(s_BUT_PRODWEAP_007c201c,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,pCVar7,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_09D5 = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_ENOBJ_007c2014,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_02DA = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_BUT_MSK_SI_007c16f4,0xffffffff,0,1,0,(undefined4 *)0x0
                       );
    this_00->field_02DE = puVar9;
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_B,s_MHELP_007c200c,0xffffffff,0,1,0,(undefined4 *)0x0);
    this_00->field_077C = puVar9;
    iVar3 = 1;
    piVar19 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240(s_INF_BKLUINF_007c1ffc,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0954 = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKLDINF_007c1fec,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0958 = puVar9;
    this_00->field_02E2 = 0;
    pCVar7 = thunk_FUN_00571240(s_CP2_CLEAR_007c1fe0,1);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    this_00->field_0974 = puVar9;
    iVar3 = 1;
    piVar19 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CLEARUP1_007c1f68,(int *)0x0,1);
      this_00->field_0978 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CLEARUP2_007c1f58,(int *)0x0,1);
      this_00->field_097C = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP1_007c1f48,(int *)0x0,1);
      this_00->field_0980 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP2_007c1f38,(int *)0x0,1);
      this_00->field_0984 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP2_CTRLDN1_007c1f28,(int *)0x0,1);
      this_00->field_0988 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP2_CTRLUP3_007c1f18,(int *)0x0,1);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      pcVar10 = s_CP2_CTRLUP4_007c1f08;
      this_00->field_098C = puVar9;
      bVar2 = 6;
    }
    else {
      pCVar7 = thunk_FUN_00571240(s_CP2_1ROW_007c1fd4,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0978 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP2_2ROW_007c1fc8,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_097C = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP2_2ROWC_007c1fbc,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0980 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BUT_BKGSHOWUPD_007c1fa8,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0984 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BUT_BKGRETREP_007c1f98,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0988 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_BOAT_BLD_007c1f88,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_098C = puVar9;
      pcVar10 = thunk_FUN_00571240(s_BK_BOAT_TRTXT_007c1f78,0);
      bVar2 = 1;
    }
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,bVar2,pcVar10,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0990 = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKMAP_007c1efc,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    this_00->field_0994 = puVar9;
    local_10 = (ccFntTy *)&this_00->field_0227;
    local_8 = (int *)0x3b60;
    local_14 = 4;
    do {
      puVar11 = (uint *)FUN_006b0140((UINT)local_8,HINSTANCE_00807618);
      iVar21 = 1;
      puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
      local_1c = puVar11;
      uVar4 = FUN_006b4fe0(DAT_0080679c);
      uVar12 = (uint)*(ushort *)(DAT_0080679c + 0xe);
      iVar3 = FUN_007111c0(this_00->field_01B8,puVar11);
      iVar18 = FUN_00711110(this_00->field_01B8,puVar11);
      local_c = (LPVOID)FUN_006b50c0(iVar18,iVar3,uVar12,uVar4,puVar5,iVar21);
      if (local_c != (LPVOID)0x0) {
        uVar4 = *(uint *)((int)local_c + 0x14);
        if (uVar4 == 0) {
          uVar4 = ((uint)*(ushort *)((int)local_c + 0xe) * *(int *)((int)local_c + 4) + 0x1f >> 3 &
                  0x1ffffffc) * *(int *)((int)local_c + 8);
        }
        puVar5 = (undefined4 *)FUN_006b4fa0((int)local_c);
        for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar5 = 0x3a3a3a3a;
          puVar5 = puVar5 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar5 = 0x3a;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        }
        ccFntTy::SetSurf(this_00->field_01B8,(int)local_c,0,0,0,0,0);
        ccFntTy::WrStr(this_00->field_01B8,local_1c,0,0,0);
        FUN_006b4b20((int *)local_10,(uint)local_c,0,0x3a);
        FUN_006ab060(&local_c);
      }
      local_8 = (int *)((int)local_8 + 1);
      local_10 = (ccFntTy *)((int)local_10 + 4);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 0;
    puVar5 = &this_00->field_0DBF;
    local_14 = 2;
    do {
      puVar22 = (undefined4 *)0x0;
      iVar21 = 0;
      iVar18 = 1;
      bVar2 = 0;
      uVar4 = 0xffffffff;
      pCVar7 = FUN_006f2c00(s_SM_TARGET__007c1eec,1,iVar3);
      puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                         (DAT_00806784,CASE_B,pCVar7,uVar4,bVar2,iVar18,iVar21,puVar22);
      *(ushort **)((int)puVar5 + -0x3f7) = puVar9;
      iVar18 = 1;
      piVar19 = (int *)0x0;
      *puVar5 = puVar9 + 0x18;
      pCVar7 = FUN_006f2c00(s_SM_CROSS__007c1ee0,1,iVar3);
      puVar9 = cMf32::RecGet(g_cMf32_00806780,6,pCVar7,piVar19,iVar18);
      puVar5[-2] = puVar9;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    pCVar7 = thunk_FUN_00571240(s_CP4_CLEAR_007c1ed4,1);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    this_00->field_09D9 = puVar9;
    iVar3 = 1;
    piVar19 = (int *)0x0;
    if (DAT_0080874e == '\x03') {
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN1_007c1dfc,(int *)0x0,1);
      this_00->field_09DD = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN2_007c1dec,(int *)0x0,1);
      this_00->field_09E1 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN3_007c1ddc,(int *)0x0,1);
      this_00->field_09E5 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN4_007c1dcc,(int *)0x0,1);
      this_00->field_09E9 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN5_007c1dbc,(int *)0x0,1);
      this_00->field_09ED = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_CP4_CTRLDN6_007c1dac,(int *)0x0,1);
      this_00->field_09F5 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CLEARUP1_007c1d9c,(int *)0x0,1);
      this_00->field_09F9 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CLEARUP2_007c1d8c,(int *)0x0,1);
      this_00->field_09FD = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CTRLUP1_007c1d7c,(int *)0x0,1);
      this_00->field_0A01 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,6,s_CP4_CTRLUP2_007c1d6c,(int *)0x0,1);
      this_00->field_0A05 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_BK_RC_SI_007c1d60,(int *)0x0,1);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0A09 = puVar9;
      pcVar10 = s_BK_BOAT_SI_007c1d50;
    }
    else {
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW1_007c1ec8,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09DD = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW2_007c1ebc,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09E1 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_CP4_ROW3_007c1eb0,1);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09E5 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKBUT_007c1ea0,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09E9 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BLDREP_007c1e90,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09ED = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKIND_007c1e80,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09F5 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT1_007c1e6c,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09F9 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKRDOCK_007c1e58,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_09FD = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKPLASM1_007c1e44,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0A01 = puVar9;
      pCVar7 = thunk_FUN_00571240(s_BK_OBJ_BKMFACT2_007c1e30,0);
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
      this_00->field_0A05 = puVar9;
      puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,s_BK_OBJ_BKPLASM2_007c1e1c,(int *)0x0,1);
      iVar3 = 1;
      piVar19 = (int *)0x0;
      this_00->field_0A09 = puVar9;
      pcVar10 = thunk_FUN_00571240(s_BK_ARTEFACT_007c1e0c,0);
    }
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pcVar10,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0A11 = puVar9;
    pCVar7 = thunk_FUN_00571240(s_BK_OBJ_STRING_007c1d40,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_09F1 = puVar9;
    pCVar7 = thunk_FUN_00571240(s_PROC_CRAK_007c1d34,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0A0D = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKRUINF_007c1d24,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    iVar3 = 1;
    piVar19 = (int *)0x0;
    this_00->field_0B43 = puVar9;
    pCVar7 = thunk_FUN_00571240(s_INF_BKRDINF_007c1d14,0);
    puVar9 = cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar3);
    this_00->field_0B47 = puVar9;
    this_00->field_02E6 = 0;
    if (((byte)_DAT_00807348 != 0) && ((byte)_DAT_00807348 < 3)) {
      piVar19 = (int *)&this_00->field_0x1a4;
      iVar18 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar18);
      piVar19 = (int *)&this_00->field_0x1a8;
      iVar18 = 0;
      iVar3 = 1;
      pCVar7 = FUN_006f2c00(s_BK_HIGHRES_007c1d04,1,_DAT_00807348 & 0xff);
      pCVar7 = thunk_FUN_00571240(pCVar7,iVar3);
      cMf32::RecGet((cMf32 *)DAT_00806790,1,pCVar7,piVar19,iVar18);
    }
    puVar11 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,9,10);
    this_00->field_0B95 = puVar11;
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,1,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B63);
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,2,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0B99);
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0BF5);
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,5,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0C51);
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,0xe,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xc87);
    STAllPlayersC::GetPanelInfo
              (g_sTAllPlayers_007FA174,0xf,(AnonShape_0043BEB0_1C00EC12 *)&this_00->field_0xcc9);
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    pcVar10 = thunk_FUN_00526100(&this_00->field_0B63,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar10,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_02E2 = puVar9;
    this_00->field_02EA = 0;
    puVar5 = (undefined4 *)0x0;
    iVar18 = 0;
    iVar3 = 1;
    bVar2 = 0;
    uVar4 = 6;
    this_00->field_02EC = 1;
    this_00->field_02EE = this_00->field_0038;
    pcVar10 = thunk_FUN_00526100(&this_00->field_0C51,0);
    puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                       (DAT_00806794,CASE_1F,pcVar10,uVar4,bVar2,iVar3,iVar18,puVar5);
    this_00->field_02E6 = puVar9;
    this_00->field_02EB = 0;
    this_00->field_02ED = 1;
    this_00->field_02F2 = this_00->field_0038;
    local_8 = (int *)&this_00->field_0xc87;
    puVar5 = &this_00->field_0D53;
    puVar13 = &this_00->field_0D47;
    local_10 = (ccFntTy *)0x2;
    do {
      local_14 = 6;
      do {
        puVar22 = (undefined4 *)0x0;
        iVar18 = 0;
        iVar3 = 1;
        bVar2 = 0;
        uVar4 = 6;
        pcVar10 = (char *)thunk_FUN_004f1d20((undefined1 *)local_8);
        puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806794,CASE_1F,pcVar10,uVar4,bVar2,iVar3,iVar18,puVar22);
        puVar5[-0x12] = puVar9;
        puVar13[-0xc] = 0;
        *puVar13 = 1;
        local_8 = (int *)((int)local_8 + 0xb);
        *puVar5 = this_00->field_0038;
        puVar5[0xc] = 0;
        puVar5 = puVar5 + 1;
        puVar13 = puVar13 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_10 = (ccFntTy *)((int)local_10 + -1);
    } while (local_10 != (ccFntTy *)0x0);
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
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,&this_00->field_011C);
    iVar3 = this_00->field_011C;
    piVar19 = &this_00->field_003C;
    this_00->field_0040 = iVar3;
    *piVar19 = iVar3;
    if (DAT_0080874e == '\x03') {
      this_00->field_0048 = this_00->field_006C + iVar3;
    }
    else {
      iVar18 = this_00->field_006C + iVar3;
      this_00->field_0044 = iVar18;
      this_00->field_0048 = this_00->field_0070 + iVar18;
    }
    iVar21 = this_00->field_0074 + this_00->field_0048;
    this_00->field_004C = iVar21;
    iVar21 = iVar21 + this_00->field_0078;
    iVar18 = this_00->field_007C;
    this_00->field_0050 = iVar21;
    if (DAT_0080874e != '\x03') {
      iVar21 = iVar21 + iVar18;
      iVar18 = this_00->field_0080;
      this_00->field_0054 = iVar21;
    }
    this_00->field_0064 = iVar3;
    this_00->field_0058 = iVar21 + iVar18;
    this_00->field_005C = iVar21 + iVar18;
    iVar3 = 10;
    this_00->field_0060 = this_00->field_0088 + this_00->field_005C;
    do {
      *piVar19 = *piVar19 + this_00->field_008C;
      piVar19 = piVar19 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    bVar2 = 0;
    piVar19 = (int *)&this_00->field_0x94;
    do {
      iVar3 = this_00->field_0120 + -0x9b + this_00->field_0128;
      if ((bVar2 == 1) || (bVar2 == 7)) {
        iVar3 = iVar3 + this_00->field_00C0;
      }
      *piVar19 = iVar3;
      bVar2 = bVar2 + 1;
      piVar19 = piVar19 + 1;
    } while (bVar2 < 0xb);
    bVar2 = 0;
    this_00->field_0241 = (short)DAT_00806734 - *(short *)&this_00->field_0x94;
    if ((-(uint)(DAT_00807348 != '\0') & 2) != 0xfffffff7) {
      uVar4 = 0;
      do {
        if (((&this_00->field_0068)[uVar4] != 0) && ((&this_00->field_00C0)[uVar4] != 0)) {
          puVar11 = &this_00->field_0148 + uVar4;
          FUN_006b2330((uint)DAT_008075a8,puVar11,5,0x402946,(&this_00->field_0068)[uVar4],
                       (&this_00->field_00C0)[uVar4],(&this_00->field_0180)[uVar4]);
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
    this_00->field_00F4 = *(undefined4 *)(this_00->field_01AC + 4);
    this_00->field_00F8 = *(undefined4 *)(this_00->field_01AC + 8);
    this_00->field_00EC = (this_00->field_0124 - this_00->field_00F4) + this_00->field_011C;
    if ((DAT_0080c4d3 == 1) || (DAT_0080c4d3 == 3)) {
      iVar3 = this_00->field_0120;
    }
    else {
      iVar3 = this_00->field_0120 - this_00->field_00F8;
    }
    this_00->field_00F0 = iVar3;
    puVar5 = &this_00->field_0174;
    FUN_006b2330((uint)DAT_008075a8,puVar5,5,0x40402a,this_00->field_00F4,this_00->field_00F8,
                 this_00->field_01AC);
    FUN_006b1b10((int)DAT_008075a8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*puVar5,0xffffffff,this_00->field_00EC,this_00->field_00F0);
    puVar5 = &this_00->field_0178;
    this_00->field_00FC = (this_00->field_0124 - this_00->field_0104) + this_00->field_011C;
    this_00->field_0100 = this_00->field_00A4 - this_00->field_0108;
    FUN_006b2330((uint)DAT_008075a8,puVar5,6,0x40402a,this_00->field_0104,this_00->field_0108,
                 this_00->field_01B0);
    FUN_006b1b10((int)DAT_008075a8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*puVar5,0xffffffff,this_00->field_00FC,this_00->field_0100);
    FUN_006b3af0(DAT_008075a8,*puVar5);
    this_00->field_0114 = *(undefined4 *)(this_00->field_01B4 + 4);
    this_00->field_0118 = *(undefined4 *)(this_00->field_01B4 + 8);
    puVar5 = &this_00->field_017C;
    this_00->field_010C = (this_00->field_0124 - this_00->field_0114) + this_00->field_011C;
    this_00->field_0110 = this_00->field_00A4;
    FUN_006b2330((uint)DAT_008075a8,puVar5,6,0x401988,this_00->field_0114,this_00->field_0118,
                 this_00->field_01B4);
    FUN_006b1b10((int)DAT_008075a8,*puVar5,3);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*puVar5,0xffffffff,this_00->field_010C,this_00->field_0110);
    FUN_006b3af0(DAT_008075a8,*puVar5);
    psVar23 = (short *)0x1;
    bVar17 = 0;
    bVar2 = 6;
    pcVar10 = thunk_FUN_00526100((undefined1 *)0x0,0);
    psVar23 = Library::Ourlib::MFIMG::mfQmtLoad((cMf32 *)DAT_00806790,pcVar10,bVar2,bVar17,psVar23);
    this_00->field_025B = psVar23;
    this_00->field_025F = 0;
    this_00->field_0260 = 2;
    this_00->field_0261 = this_00->field_0038;
    thunk_FUN_0054b6d0((int)PTR_00802a30);
    bVar2 = 0;
    puVar11 = &this_00->field_0148;
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
    thunk_FUN_00501a10((AnonShape_00501A10_7BD31715 *)this_00);
    uVar24 = 0;
    uVar20 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(DAT_00807327 & 2 | 1);
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPSCIV_007c1cf4;
    iVar3 = 0x3afc;
    uVar16 = 0;
    local_34 = (DAT_0080874e == '\x03') + 0x68 + this_00->field_004C;
    sVar15 = 2;
    uVar14 = 0xb105;
    uVar8 = 0xb104;
    local_30 = this_00->field_00A4 + 8;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPSCIV_007c1ce4,0);
    uVar8 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                      local_30 - this_00->field_00A4,6,pCVar7,uVar8,uVar14,sVar15,uVar16,iVar3,
                      pcVar10,iVar18,uVar20,uVar24);
    this_00->field_09A4 = uVar8;
    uVar24 = 0;
    uVar20 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)((DAT_00807327 & 4 | 2) >> 1);
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPSMIL_007c1cd4;
    iVar3 = 0x3afd;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb107;
    uVar8 = 0xb106;
    local_34 = (DAT_0080874e == '\x03') + 0x7b + this_00->field_004C;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPSMIL_007c1cc4,0);
    uVar8 = CreateBut(this_00,4,3,*(int *)&this_00->field_0x2c,local_34 - this_00->field_004C,
                      local_30 - this_00->field_00A4,6,pCVar7,uVar8,uVar14,sVar15,uVar16,iVar3,
                      pcVar10,iVar18,uVar20,uVar24);
    uVar25 = 0;
    uVar24 = 0;
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPZIN_007c1cb4;
    iVar3 = 0x3afe;
    uVar16 = 0;
    sVar15 = 2;
    uVar20 = 0xb109;
    uVar14 = 0xb108;
    this_00->field_09A8 = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPZIN_007c1ca4,0);
    uVar8 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x58,0x6d,6,pCVar7,uVar14,uVar20,
                      sVar15,uVar16,iVar3,pcVar10,iVar18,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPZOUT_007c1c94;
    iVar3 = 0x3aff;
    uVar16 = 0;
    sVar15 = 2;
    uVar20 = 0xb10b;
    uVar14 = 0xb10a;
    this_00->field_09AC = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPZOUT_007c1c84,0);
    uVar8 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x5d,0x84,6,pCVar7,uVar14,uVar20,
                      sVar15,uVar16,iVar3,pcVar10,iVar18,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPTLFT_007c1c74;
    iVar3 = 0x3b00;
    uVar16 = 0;
    sVar15 = 2;
    uVar20 = 0xb10d;
    uVar14 = 0xb10c;
    this_00->field_09B0 = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPTLFT_007c1c64,0);
    uVar8 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0xd,0x84,6,pCVar7,uVar14,uVar20,
                      sVar15,uVar16,iVar3,pcVar10,iVar18,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPTRT_007c1c54;
    iVar3 = 0x3b01;
    uVar16 = 0;
    sVar15 = 2;
    uVar20 = 0xb10f;
    uVar14 = 0xb10e;
    this_00->field_09B4 = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPTRT_007c1c44,0);
    uVar8 = CreateBut(this_00,4,1,1,(DAT_0080874e == '\x03') + 0x1c,0x6d,6,pCVar7,uVar14,uVar20,
                      sVar15,uVar16,iVar3,pcVar10,iVar18,uVar24,uVar25);
    uVar25 = 0;
    uVar24 = 0;
    iVar18 = 0;
    pcVar10 = s_BUT_MMAPDIR_007c1c34;
    iVar3 = 0x3b03;
    uVar16 = 0;
    sVar15 = 2;
    uVar20 = 0xb114;
    uVar14 = 0xb113;
    this_00->field_09B8 = uVar8;
    pCVar7 = thunk_FUN_00571240(s_BUT_MAPDIR_007c1c24,0);
    uVar8 = CreateBut(this_00,4,3,(DAT_00807327 & 8 | 4) >> 2,6,0x20,6,pCVar7,uVar14,uVar20,sVar15,
                      uVar16,iVar3,pcVar10,iVar18,uVar24,uVar25);
    this_00->field_09BC = uVar8;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0BAE;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 4 + this_00->field_004C;
    uVar24 = 0;
    uVar20 = 0;
    iVar18 = 0;
    pcVar10 = (char *)0x0;
    iVar3 = 0x3b02;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb112;
    uVar8 = 0xb110;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar8 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0BAE,local_34 - this_00->field_004C,
                      local_30 - this_00->field_00A4,1,pCVar7,uVar8,uVar14,sVar15,uVar16,iVar3,
                      pcVar10,iVar18,uVar20,uVar24);
    this_00->field_09C0 = uVar8;
    uVar24 = 0;
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_0C0A;
    uVar20 = 0;
    iVar18 = 0;
    pcVar10 = (char *)0x0;
    local_34 = (-(uint)(DAT_0080874e != '\x03') & 3) + 0x81 + this_00->field_004C;
    iVar3 = 0x3b02;
    uVar16 = 0;
    sVar15 = 2;
    uVar14 = 0xb112;
    uVar8 = 0xb111;
    local_30 = (DAT_0080874e != '\x03') + 0x65 + this_00->field_00A4;
    this_00->field_0030 = &local_34;
    pCVar7 = thunk_FUN_00571240(s_BUT_AIASS_007c1c18,0);
    uVar8 = CreateBut(this_00,4,3,(uint)(byte)this_00->field_0C0A,local_34 - this_00->field_004C,
                      local_30 - this_00->field_00A4,1,pCVar7,uVar8,uVar14,sVar15,uVar16,iVar3,
                      pcVar10,iVar18,uVar20,uVar24);
    this_00->field_09C4 = uVar8;
    if (DAT_0080874e == '\x03') {
      SetControlObjSI(this_00,'\x01');
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    thunk_FUN_00506040((AnonShape_00506040_A874E362 *)this_00);
    CreateMiniMap(DAT_00806750,(int *)&this_00->field_0x217,0x8b,local_24);
    FUN_006e6400(PTR_00807598,(undefined4 *)&this_00->field_0x217,0,0x8b,0x46);
    PTR_00807598->field_0418 = (uint)DAT_00807327;
    thunk_FUN_004a8f20(0);
    thunk_FUN_004a9b60(this_00->field_011C,this_00->field_0120,this_00->field_0124,
                       this_00->field_0128 + -0x9b);
    puVar13 = &this_00->field_0x18;
    this_00->field_0028 = 0x4403;
    FUN_006e6000(this_00,0xf,0,(undefined4 *)puVar13);
    if ((DAT_00807327 & 8) != 0) {
      FUN_006e6500(PTR_00807598,&this_00->field_0227);
    }
    puVar5 = (undefined4 *)puVar13;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    this_00->field_0028 = 0x13;
    *(undefined4 *)&this_00->field_0x2c = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)puVar13);
    if (DAT_0080c4f9 != '\0') {
      this_00->field_0028 = 0x5dc6;
      *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
      if (DAT_008117bc != (undefined4 *)0x0) {
        (**(code **)*DAT_008117bc)(puVar13);
      }
      DAT_0080c4f9 = '\0';
    }
    g_currentExceptionFrame = local_78.previous;
    return;
  }
  g_currentExceptionFrame = local_78.previous;
  iVar18 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x1bf,0,iVar3,&DAT_007a4ccc,
                              s_CPanelTy__InitCPanel_007c1bfc);
  if (iVar18 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x1bf);
  return;
}

