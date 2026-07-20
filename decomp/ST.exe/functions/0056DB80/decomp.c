
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall STAppC::StartGame(STAppC *this)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  InternalExceptionFrame *pIVar4;
  uint *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  DWORD DVar8;
  int iVar9;
  cLoadingTy *extraout_ECX;
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *pcVar10;
  cMf32 *this_00;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *this_01;
  cMf32 *this_02;
  cLoadingTy *this_03;
  cLoadingTy *this_04;
  cLoadingTy *extraout_ECX_03;
  undefined4 unaff_ESI;
  STAppC *pSVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  LPSTR pCVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  byte local_328 [260];
  byte local_224;
  undefined4 local_223;
  InternalExceptionFrame local_120;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_34 [8];
  LPSTR local_14;
  undefined4 *local_10;
  STAppC *local_c;
  char *local_8;
  
  local_224 = DAT_008016a0;
  puVar12 = &local_223;
  local_c = this;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  *(undefined1 *)((int)puVar12 + 2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar9 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar11 = local_c;
  if (iVar9 == 0) {
    local_c->field_4EEE = 0;
    local_c->field_4EEA = 0;
    local_c->field_4EF2 = 0;
    local_c->field_4EFE = 0;
    if (local_c->field_1195 == '\0') {
      local_c->field_1181 = 0;
    }
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    if (g_int_00811764 != (int *)0x0) {
      FUN_006b6500(g_int_00811764,DAT_0080733c);
    }
    pSVar11->field_4ED7 = 2;
    pSVar11->field_4EB3 = 2;
    pSVar11->field_4EAF = 0;
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar7 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar11->field_1168 = 0;
    pSVar11->field_0034 = uVar7;
    pSVar11->field_1164 = 0;
    DarkScreen(DAT_0080759c,10,2);
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      pcVar10 = extraout_ECX_00;
    }
    else {
      pcVar10 = *(cLoadingTy **)(DAT_00802a30 + 0x1c);
      if (pcVar10 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),(uint)pcVar10);
        pcVar10 = extraout_ECX;
      }
    }
    puVar5 = cLoadingTy::new(pcVar10,0x5c,s_MisLoad_log_007ca1d4,1);
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
    g_cMf32_00806754 =
         (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&pSVar11->field_0x76f6,0,0,0);
    local_8 = (char *)&pSVar11->field_4EAF;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (char *)&pSVar11->field_4EB3;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar11->field_0x4eb7;
    puVar6 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar11->field_1180;
    pSVar11->field_4ED9 = puVar6 != (ushort *)0x0;
    if ((*local_8 != '\f') && (*local_8 != '\x10')) {
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar11->field_0x2b2f;
    cMf32::RecGet(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      cMf32::delete(this_00,g_cMf32_00806758);
    }
    local_8 = &pSVar11->field_7D1A;
    g_cMf32_00806758 = (cMf32 *)0x0;
    puVar12 = (undefined4 *)local_8;
    for (iVar9 = 0x20d; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    puVar6 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar6 == (ushort *)0x0) || (local_14 = &pSVar11->field_7D1A, pSVar11->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      iVar9 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pSVar11 = local_c;
      pIVar4 = local_dc.previous;
      if (iVar9 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_0x76f6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar4 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar11->field_0x78fe,local_14,0x103);
      pSVar11->field_7A01 = 0;
      puVar14 = &DAT_007c6ee4;
      pCVar13 = local_14;
      wsprintfA(local_14,&DAT_007c6ee4,&pSVar11->field_0x60,&pSVar11->field_0x78fe);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      iVar9 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0,pCVar13,puVar14);
      pSVar11 = local_c;
      pIVar4 = local_120.previous;
      if (iVar9 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar4 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar4;
    puVar12 = &pSVar11->field_7D12;
    if (pSVar11->field_7D12 != 0) {
      FUN_006ab060((LPVOID *)puVar12);
    }
    puVar6 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *puVar12 = puVar6;
    iVar9 = cMf32::RecGetOrigLen(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    pSVar11->field_7D16 = iVar9;
    wsprintfA((LPSTR)&local_224,s__s_s_s_007c6edc,&pSVar11->field_0x60,PTR_s_SYSTEM__0079b030,
              *puVar12);
    if (g_cMf32_00806760 != (cMf32 *)0x0) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(g_cMf32_00806760,&DAT_0080679c);
      this_01 = extraout_ECX_01;
      if (DAT_00806764 != (int *)0x0) {
        FUN_0070a300((int *)&DAT_00806764);
        this_01 = extraout_ECX_02;
      }
      cMf32::delete(this_01,g_cMf32_00806760);
      g_cMf32_00806760 = (cMf32 *)0x0;
    }
    g_cMf32_00806760 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_224,0,0,0);
    DAT_00806764 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806760);
    DAT_0080679c = FUN_0070a9f0(g_cMf32_00806760,s_PALETTE_007ca1c8,2,1);
    LoadGamePlt(g_cMf32_00806760,0);
    if (pSVar11->field_7D0E == 0) {
      puVar16 = &pSVar11->field_4DA3;
      uVar7 = FUN_006b0140(0x267f,HINSTANCE_00807618);
      wsprintfA(&pSVar11->field_7D1A,s__s__s_007c411c,uVar7,puVar16);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)&pSVar11->field_7D1A);
      }
      if ((pSVar11->field_1180 == '\x03') || (pSVar11->field_1180 == '\b')) {
        puVar12 = (undefined4 *)&pSVar11->field_0x5012;
        for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x5116;
        for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x6ce3;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x6d03;
        for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x521e;
        for (iVar9 = 0x4a; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)&pSVar11->field_0x5347;
        for (iVar9 = 0x666; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        *(undefined1 *)puVar12 = 0;
        pSVar11->field_6CE2 = 0;
        pSVar11->field_6CE0 = 0;
        pSVar11->field_6CE1 = 0;
        pSVar11->field_521A = 0;
      }
      else {
        puVar12 = &pSVar11->field_4F02;
        for (iVar9 = 0x9fc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
    }
    else {
      local_8 = &pSVar11->field_4DA3;
      puVar12 = (undefined4 *)local_8;
      for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      puVar6 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar6 == (ushort *)0x0) || (pbVar15 = &pSVar11->field_4DA3, pSVar11->field_4DA3 == '\0')
         ) {
        Library::MSVCRT::FUN_0072e730
                  (&pSVar11->field_0x76f6,(byte *)0x0,(byte *)0x0,local_328,(byte *)0x0);
        pbVar15 = local_328;
      }
      uVar7 = FUN_006b0140(0x267f,HINSTANCE_00807618);
      wsprintfA(&pSVar11->field_7D1A,s__s__s_007c411c,uVar7,pbVar15);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)&pSVar11->field_7D1A);
      }
      if ((pSVar11->field_1180 == '\f') || (pSVar11->field_1180 == '\x10')) {
        local_8 = &pSVar11->field_1180;
        cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar11->field_0x1196;
        cMf32::RecGet(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        thunk_FUN_0056ef50((int)pSVar11);
        thunk_FUN_0056f040((int)pSVar11);
      }
      if ((byte *)pSVar11->field_4EA7 != (byte *)0x0) {
        FUN_006b5570((byte *)pSVar11->field_4EA7);
      }
      puVar5 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar11->field_4EA7 = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        pSVar11->field_4EA7 = puVar5;
      }
      if ((byte *)pSVar11->field_4EAB != (byte *)0x0) {
        FUN_006b5570((byte *)pSVar11->field_4EAB);
      }
      puVar5 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar11->field_4EAB = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        pSVar11->field_4EAB = puVar5;
      }
      if ((pSVar11->field_117C == 0) &&
         ((cVar1 = pSVar11->field_1180, cVar1 == '\b' || (cVar1 == '\x03')))) {
        puVar12 = (undefined4 *)&pSVar11->field_0x5012;
        for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x5116;
        for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x6ce3;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x6d03;
        for (iVar9 = 0x46; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        puVar12 = (undefined4 *)&pSVar11->field_0x521e;
        for (iVar9 = 0x4a; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)&pSVar11->field_0x5347;
        for (iVar9 = 0x666; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        *(undefined1 *)puVar12 = 0;
        pSVar11->field_6CE2 = 0;
        pSVar11->field_6CE0 = 0;
        pSVar11->field_6CE1 = 0;
        pSVar11->field_521A = 0;
        pSVar11->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar11->field_4F02;
        puVar6 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar6 == (ushort *)0x0) {
          puVar12 = &pSVar11->field_4F02;
          for (iVar9 = 0x9fc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
        }
        pSVar11->field_7D0E = 0;
      }
    }
    pSVar11->field_4F02 = 0;
    if (((pSVar11->field_1185 == 0) && (pSVar11->field_1181 == 0)) &&
       (pSVar11->field_1163 != '\x03')) {
      DVar8 = FUN_006e51b0((int)pSVar11);
      pSVar11->field_1134 = DVar8;
    }
    local_8 = (char *)&pSVar11->field_1134;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    CreateGameSystem();
    FUN_006e8640(DAT_00807598,
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
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
    CreatePlaySystem();
    cMf32::delete(this_02,g_cMf32_00806754);
    g_cMf32_00806754 = (cMf32 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      puVar5 = (uint *)FUN_006b0140(0x2680,HINSTANCE_00807618);
      cLoadingTy::DrawLineCR(DAT_00802a58,puVar5);
      if ((pSVar11->field_115E != '\0') && (pSVar11->field_1163 == '\x03')) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete(this_03,(uint *)DAT_00802a58);
      DAT_00802a58 = (cLoadingTy *)0x0;
    }
    thunk_FUN_0056a500();
    puVar12 = local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_34[4] = 0x6107;
    local_34[5] = 1;
    (*pSVar11->vtable->GetMessage)(pSVar11,(int)local_34);
    thunk_FUN_0056a500();
    puVar12 = (undefined4 *)&pSVar11->field_0x5012;
    for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    puVar12 = (undefined4 *)&pSVar11->field_0x521e;
    for (iVar9 = 0x4a; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined1 *)puVar12 = 0;
    puVar12 = (undefined4 *)&pSVar11->field_0x5327;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    puVar12 = (undefined4 *)&pSVar11->field_0x6ce3;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    pSVar11->field_6CE1 = 0;
    pSVar11->field_6CE0 = 0;
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    puVar12 = local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(DAT_0081163c);
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&pSVar11->field_0038,SOUND_MODE_1,(char *)0x0,0x4b7,
               (SoundPosition *)0x0,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20((int)DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar11->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  iVar9 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x54d,0,iVar9,&DAT_007a4ccc,
                             s_STAppC__StartGame_007ca1b0);
  if (iVar9 == 0) {
    pcVar10 = this_04;
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      cMf32::delete((cMf32 *)this_04,g_cMf32_00806754);
      pcVar10 = extraout_ECX_03;
    }
    g_cMf32_00806754 = (cMf32 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::delete(pcVar10,(uint *)DAT_00802a58);
    }
    pSVar11 = local_c;
    puVar12 = local_54;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    DAT_00802a58 = (cLoadingTy *)0x0;
    local_44 = 0x6102;
    (*pSVar11->vtable->GetMessage)(pSVar11,(int)local_54);
    pSVar11->field_1195 = 0;
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

