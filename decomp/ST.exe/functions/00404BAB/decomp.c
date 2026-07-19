
void __thiscall STAppC::StartGame(STAppC *this)

{
  STAppC SVar1;
  code *pcVar2;
  void *pvVar3;
  InternalExceptionFrame *pIVar4;
  uint *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  cLoadingTy *extraout_ECX;
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *this_00;
  cMf32 *this_01;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *pcVar9;
  cMf32 *this_02;
  cLoadingTy *this_03;
  cMf32 *this_04;
  cLoadingTy *extraout_ECX_03;
  undefined4 unaff_ESI;
  STAppC *pSVar10;
  void *unaff_EDI;
  STAppC *pSVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  STAppC aSStack_328 [260];
  byte bStack_224;
  undefined4 uStack_223;
  InternalExceptionFrame IStack_120;
  InternalExceptionFrame IStack_dc;
  InternalExceptionFrame IStack_98;
  undefined4 auStack_54 [4];
  undefined4 uStack_44;
  undefined4 auStack_34 [8];
  STAppC *pSStack_14;
  STAppC *pSStack_10;
  STAppC *pSStack_c;
  STAppC *pSStack_8;
  
  bStack_224 = DAT_008016a0;
  puVar12 = &uStack_223;
  pSStack_c = this;
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  *(undefined1 *)((int)puVar12 + 2) = 0;
  IStack_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_98;
  iVar8 = __setjmp3(IStack_98.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar10 = pSStack_c;
  if (iVar8 == 0) {
    *(undefined4 *)(pSStack_c + 0x4eee) = 0;
    *(undefined4 *)(pSStack_c + 0x4eea) = 0;
    *(undefined4 *)(pSStack_c + 0x4ef2) = 0;
    *(undefined4 *)(pSStack_c + 0x4efe) = 0;
    if (pSStack_c[0x1195] == (STAppC)0x0) {
      *(undefined4 *)(pSStack_c + 0x1181) = 0;
    }
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    if (DAT_00811764 != 0) {
      FUN_006b6500(DAT_00811764,DAT_0080733c);
    }
    *(undefined2 *)(pSVar10 + 0x4ed7) = 2;
    *(undefined4 *)(pSVar10 + 0x4eb3) = 2;
    *(undefined4 *)(pSVar10 + 0x4eaf) = 0;
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    iVar8 = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    *(int *)(pSVar10 + 0x1168) = 0;
    *(int *)(pSVar10 + 0x34) = iVar8;
    *(int *)(pSVar10 + 0x1164) = 0;
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      this_00 = extraout_ECX_00;
    }
    else {
      this_00 = *(cLoadingTy **)(DAT_00802a30 + 0x1c);
      if (this_00 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),(uint)this_00);
        this_00 = extraout_ECX;
      }
    }
    puVar5 = cLoadingTy::new(this_00,0x5c,0x7ca1d4,1);
    if (puVar5 == (uint *)0x0) {
      DAT_00802a58 = (cLoadingTy *)0x0;
    }
    else {
      DAT_00802a58 = (cLoadingTy *)thunk_FUN_005545c0((int *)puVar5);
    }
    if ((DAT_00802a58 != (cLoadingTy *)0x0) &&
       (cLoadingTy::ShowScr(DAT_00802a58,10,1), DAT_00802a58 != (cLoadingTy *)0x0)) {
      cLoadingTy::InitParam(DAT_00802a58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    DAT_00806754 = FUN_006f0ec0(0x345,(byte *)(pSVar10 + 0x76f6),0,0,0);
    pSStack_8 = pSVar10 + 0x4eaf;
    FUN_006f1ce0(0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&pSStack_8,0);
    pSStack_8 = pSVar10 + 0x4eb3;
    FUN_006f1ce0(0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&pSStack_8,0);
    pSStack_8 = pSVar10 + 0x4eb7;
    puVar6 = FUN_006f1ce0(0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&pSStack_8,0);
    pSStack_8 = pSVar10 + 0x1180;
    pSVar10[0x4ed9] = (STAppC)(puVar6 != (ushort *)0x0);
    if ((*pSStack_8 != (STAppC)0xc) && (*pSStack_8 != (STAppC)0x10)) {
      FUN_006f1ce0(0xc,PTR_s_TYPE_START_0079b08c,(int *)&pSStack_8,0);
    }
    pSStack_8 = pSVar10 + 0x2b2f;
    FUN_006f1ce0(0,PTR_s_RESTART_GAME_0079b060,(int *)&pSStack_8,0);
    if (DAT_00806758 != (undefined4 *)0x0) {
      cMf32::delete(this_01,DAT_00806758);
    }
    pSStack_8 = pSVar10 + 0x7d1a;
    DAT_00806758 = (undefined4 *)0x0;
    pSVar11 = pSStack_8;
    for (iVar8 = 0x20d; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(int *)pSVar11 = 0;
      pSVar11 = pSVar11 + 4;
    }
    puVar6 = FUN_006f1ce0(0,PTR_s_ORIG_DB_0079b088,(int *)&pSStack_8,0);
    if ((puVar6 == (ushort *)0x0) || (pSStack_14 = pSVar10 + 0x7d1a, pSVar10[0x7d1a] == (STAppC)0x0)
       ) {
      IStack_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_dc;
      iVar8 = __setjmp3(IStack_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pSVar10 = pSStack_c;
      pIVar4 = IStack_dc.previous;
      if (iVar8 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x76f6),0,0,0);
        g_currentExceptionFrame = IStack_dc.previous;
        pIVar4 = g_currentExceptionFrame;
      }
    }
    else {
      _strncpy((char *)(pSVar10 + 0x78fe),(char *)pSStack_14,0x103);
      pSVar10[0x7a01] = (STAppC)0x0;
      puVar13 = &DAT_007c6ee4;
      pSVar11 = pSStack_14;
      wsprintfA((LPSTR)pSStack_14,&DAT_007c6ee4,pSVar10 + 0x60,pSVar10 + 0x78fe);
      IStack_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_120;
      iVar8 = __setjmp3(IStack_120.jumpBuffer,0,pSVar11,puVar13);
      pSVar10 = pSStack_c;
      pIVar4 = IStack_120.previous;
      if (iVar8 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x7d1a),0,0,0);
        g_currentExceptionFrame = IStack_120.previous;
        pIVar4 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar4;
    pSVar11 = pSVar10 + 0x7d12;
    if (*(int *)(pSVar10 + 0x7d12) != 0) {
      FUN_006ab060((undefined4 *)pSVar11);
    }
    puVar6 = FUN_0071ad00(DAT_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *(ushort **)pSVar11 = puVar6;
    iVar8 = FUN_006f2600(0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    *(int *)(pSVar10 + 0x7d16) = iVar8;
    wsprintfA((LPSTR)&bStack_224,s__s_s_s_007c6edc,pSVar10 + 0x60,PTR_s_SYSTEM__0079b030,
              *(undefined4 *)pSVar11);
    if (DAT_00806760 != (cMf32 *)0x0) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(DAT_00806760,&DAT_0080679c);
      pcVar9 = extraout_ECX_01;
      if (DAT_00806764 != (int *)0x0) {
        FUN_0070a300((int *)&DAT_00806764);
        pcVar9 = extraout_ECX_02;
      }
      cMf32::delete(pcVar9,(undefined4 *)DAT_00806760);
      DAT_00806760 = (cMf32 *)0x0;
    }
    DAT_00806760 = (cMf32 *)FUN_006f0ec0(0x345,&bStack_224,0,0,0);
    DAT_00806764 = FUN_007097c0((int)DAT_00806760);
    DAT_0080679c = FUN_0070a9f0(DAT_00806760,s_PALETTE_007ca1c8,2,1);
    thunk_FUN_0055d730((int)DAT_00806760,0);
    if (*(int *)(pSVar10 + 0x7d0e) == 0) {
      pSVar11 = pSVar10 + 0x4da3;
      uVar7 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA((LPSTR)(pSVar10 + 0x7d1a),s__s__s_007c411c,uVar7,pSVar11);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)(pSVar10 + 0x7d1a));
      }
      if ((pSVar10[0x1180] == (STAppC)0x3) || (pSVar10[0x1180] == (STAppC)0x8)) {
        pSVar11 = pSVar10 + 0x5012;
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x5116;
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x6ce3;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x6d03;
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x521e;
        for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        *pSVar11 = (STAppC)0x0;
        pSVar11 = pSVar10 + 0x5347;
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        *pSVar11 = (STAppC)0x0;
        pSVar10[0x6ce2] = (STAppC)0x0;
        pSVar10[0x6ce0] = (STAppC)0x0;
        pSVar10[0x6ce1] = (STAppC)0x0;
        *(undefined4 *)(pSVar10 + 0x521a) = 0;
      }
      else {
        pSVar11 = pSVar10 + 0x4f02;
        for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
      }
    }
    else {
      pSStack_8 = pSVar10 + 0x4da3;
      pSVar11 = pSStack_8;
      for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(int *)pSVar11 = 0;
        pSVar11 = pSVar11 + 4;
      }
      puVar6 = FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&pSStack_8,0);
      if ((puVar6 == (ushort *)0x0) || (pSVar11 = pSVar10 + 0x4da3, pSVar10[0x4da3] == (STAppC)0x0))
      {
        FUN_0072e730((byte *)(pSVar10 + 0x76f6),(byte *)0x0,(byte *)0x0,(byte *)aSStack_328,
                     (byte *)0x0);
        pSVar11 = aSStack_328;
      }
      uVar7 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA((LPSTR)(pSVar10 + 0x7d1a),s__s__s_007c411c,uVar7,pSVar11);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)(pSVar10 + 0x7d1a));
      }
      if ((pSVar10[0x1180] == (STAppC)0xc) || (pSVar10[0x1180] == (STAppC)0x10)) {
        pSStack_8 = pSVar10 + 0x1180;
        FUN_006f1ce0(0xc,PTR_s_TYPE_START_0079b08c,(int *)&pSStack_8,0);
      }
      else {
        pSStack_10 = pSVar10 + 0x1196;
        FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,(int *)&pSStack_10,0);
        thunk_FUN_0056ef50((int)pSVar10);
        thunk_FUN_0056f040((int)pSVar10);
      }
      if (*(byte **)(pSVar10 + 0x4ea7) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(pSVar10 + 0x4ea7));
      }
      puVar5 = FUN_0071aa10((int)DAT_00806754,PTR_s_DESCRIPTION_0079b074,0);
      *(uint **)(pSVar10 + 0x4ea7) = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(pSVar10 + 0x4ea7) = puVar5;
      }
      if (*(byte **)(pSVar10 + 0x4eab) != (byte *)0x0) {
        FUN_006b5570(*(byte **)(pSVar10 + 0x4eab));
      }
      puVar5 = FUN_0071aa10((int)DAT_00806754,PTR_s_OBJECTIVES_0079b078,0);
      *(uint **)(pSVar10 + 0x4eab) = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)(pSVar10 + 0x4eab) = puVar5;
      }
      if ((*(int *)(pSVar10 + 0x117c) == 0) &&
         ((SVar1 = pSVar10[0x1180], SVar1 == (STAppC)0x8 || (SVar1 == (STAppC)0x3)))) {
        pSVar11 = pSVar10 + 0x5012;
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x5116;
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x6ce3;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x6d03;
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        pSVar11 = pSVar10 + 0x521e;
        for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        *pSVar11 = (STAppC)0x0;
        pSVar11 = pSVar10 + 0x5347;
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)pSVar11 = 0;
          pSVar11 = pSVar11 + 4;
        }
        *pSVar11 = (STAppC)0x0;
        pSVar10[0x6ce2] = (STAppC)0x0;
        pSVar10[0x6ce0] = (STAppC)0x0;
        pSVar10[0x6ce1] = (STAppC)0x0;
        *(undefined4 *)(pSVar10 + 0x521a) = 0;
        *(undefined4 *)(pSVar10 + 0x7d0e) = 0;
      }
      else {
        pSStack_10 = pSVar10 + 0x4f02;
        puVar6 = FUN_006f1ce0(0,PTR_s_REPORT_0079b090,(int *)&pSStack_10,0);
        if (puVar6 == (ushort *)0x0) {
          pSVar11 = pSVar10 + 0x4f02;
          for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)pSVar11 = 0;
            pSVar11 = pSVar11 + 4;
          }
        }
        *(undefined4 *)(pSVar10 + 0x7d0e) = 0;
      }
    }
    *(undefined4 *)(pSVar10 + 0x4f02) = 0;
    if (((*(int *)(pSVar10 + 0x1185) == 0) && (*(int *)(pSVar10 + 0x1181) == 0)) &&
       (pSVar10[0x1163] != (STAppC)0x3)) {
      iVar8 = FUN_006e51b0((int)pSVar10);
      *(int *)(pSVar10 + 0x1134) = iVar8;
    }
    pSStack_8 = pSVar10 + 0x1134;
    FUN_006f1ce0(0xc,PTR_s_RND_INIT_0079b05c,(int *)&pSStack_8,0);
    thunk_FUN_00577280();
    FUN_006e8640(DAT_00807598,
                 *(undefined4 *)
                  (s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
                 *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4))
    ;
    FUN_006dda90(DAT_00807598,0.7,0.95);
    FUN_006ddae0(DAT_00807598,0x10,4,4,DAT_008032c8);
    if (DAT_00807328 == 0) {
      FUN_006ddbb0((int)DAT_00807598);
    }
    pvVar3 = DAT_00807598;
    uVar7 = DAT_008032c0;
    *(undefined4 *)((int)DAT_00807598 + 0x278) = 0x10;
    *(undefined4 *)((int)pvVar3 + 0x27c) = uVar7;
    FUN_006e8630(DAT_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    thunk_FUN_0054c740();
    cMf32::delete(this_02,DAT_00806754);
    DAT_00806754 = (undefined4 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      puVar5 = (uint *)FUN_006b0140(0x2680,DAT_00807618);
      cLoadingTy::DrawLineCR(DAT_00802a58,puVar5);
      if ((pSVar10[0x115e] != (STAppC)0x0) && (pSVar10[0x1163] == (STAppC)0x3)) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete(this_03,(uint *)DAT_00802a58);
      DAT_00802a58 = (cLoadingTy *)0x0;
    }
    thunk_FUN_0056a500();
    puVar12 = auStack_34;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    auStack_34[4] = 0x6107;
    auStack_34[5] = 1;
    (**(code **)(*(int *)pSVar10 + 0x18))(auStack_34);
    thunk_FUN_0056a500();
    pSVar11 = pSVar10 + 0x5012;
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pSVar11 = 0;
      pSVar11 = pSVar11 + 4;
    }
    pSVar11 = pSVar10 + 0x521e;
    for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pSVar11 = 0;
      pSVar11 = pSVar11 + 4;
    }
    *pSVar11 = (STAppC)0x0;
    pSVar11 = pSVar10 + 0x5327;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pSVar11 = 0xffffffff;
      pSVar11 = pSVar11 + 4;
    }
    pSVar11 = pSVar10 + 0x6ce3;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pSVar11 = 0;
      pSVar11 = pSVar11 + 4;
    }
    pSVar10[0x6ce1] = (STAppC)0x0;
    pSVar10[0x6ce0] = (STAppC)0x0;
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    puVar12 = auStack_34;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    auStack_34[3] = 0xf;
    auStack_34[4] = 5;
    FUN_006e3db0((int)auStack_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(DAT_0081163c);
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)(pSVar10 + 0x38),SOUND_MODE_1,(char *)0x0,0x4b7,(SoundPosition *)0x0,
               0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20((int)DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    g_currentExceptionFrame = IStack_98.previous;
    pSVar10[0x1195] = (STAppC)0x0;
    return;
  }
  g_currentExceptionFrame = IStack_98.previous;
  iVar8 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x54d,0,iVar8,&DAT_007a4ccc,
                             s_STAppC__StartGame_007ca1b0);
  if (iVar8 == 0) {
    pcVar9 = this_04;
    if (DAT_00806754 != (undefined4 *)0x0) {
      cMf32::delete(this_04,DAT_00806754);
      pcVar9 = (cMf32 *)extraout_ECX_03;
    }
    DAT_00806754 = (undefined4 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::delete((cLoadingTy *)pcVar9,(uint *)DAT_00802a58);
    }
    pSVar10 = pSStack_c;
    puVar12 = auStack_54;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    DAT_00802a58 = (cLoadingTy *)0x0;
    uStack_44 = 0x6102;
    (**(code **)(*(int *)pSVar10 + 0x18))(auStack_54);
    pSVar10[0x1195] = (STAppC)0x0;
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

