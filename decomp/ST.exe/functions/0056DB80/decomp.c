
/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall STAppC::StartGame(STAppC *this)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  void *pvVar7;
  InternalExceptionFrame *pIVar8;
  uint *puVar9;
  ushort *puVar10;
  undefined4 uVar11;
  int iVar12;
  cLoadingTy *extraout_ECX;
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *this_00;
  cMf32 *this_01;
  cMf32 *extraout_ECX_01;
  cMf32 *extraout_ECX_02;
  cMf32 *pcVar13;
  cMf32 *this_02;
  cLoadingTy *this_03;
  cMf32 *this_04;
  cLoadingTy *extraout_ECX_03;
  undefined4 unaff_ESI;
  STAppC *pSVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  LPSTR pCVar16;
  undefined *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
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
  puVar15 = &local_223;
  local_c = this;
  for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  *(undefined2 *)puVar15 = 0;
  *(undefined1 *)((int)puVar15 + 2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar12 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar14 = local_c;
  if (iVar12 == 0) {
    cVar2 = local_c->field_0x1195;
    *(undefined4 *)&local_c->field_0x4eee = 0;
    *(undefined4 *)&local_c->field_0x4eea = 0;
    *(undefined4 *)&local_c->field_0x4ef2 = 0;
    local_c[1].vtable = (STAppCVTable *)0x0;
    if (cVar2 == '\0') {
      *(undefined4 *)&local_c->field_0x1181 = 0;
    }
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    if (DAT_00811764 != 0) {
      FUN_006b6500(DAT_00811764,DAT_0080733c);
    }
    *(undefined2 *)&pSVar14->field_0x4ed7 = 2;
    *(undefined4 *)&pSVar14->field_0x4eb3 = 2;
    *(undefined4 *)&pSVar14->field_0x4eaf = 0;
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    pcVar1 = s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8;
    cVar2 = pcVar1[0];
    cVar4 = pcVar1[1];
    cVar5 = pcVar1[2];
    cVar6 = pcVar1[3];
    *(undefined4 *)&pSVar14->field_0x1168 = 0;
    pSVar14->field_0x34 = cVar2;
    pSVar14->field_0x35 = cVar4;
    pSVar14->field_0x36 = cVar5;
    pSVar14->field_0x37 = cVar6;
    *(undefined4 *)&pSVar14->field_0x1164 = 0;
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      this_00 = extraout_ECX_00;
    }
    else {
      this_00 = *(cLoadingTy **)(DAT_00802a30 + 0x1c);
      if (this_00 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),(uint)this_00);
        this_00 = extraout_ECX;
      }
    }
    puVar9 = cLoadingTy::new(this_00,0x5c,0x7ca1d4,1);
    if (puVar9 == (uint *)0x0) {
      DAT_00802a58 = (cLoadingTy *)0x0;
    }
    else {
      DAT_00802a58 = (cLoadingTy *)thunk_FUN_005545c0((int *)puVar9);
    }
    if ((DAT_00802a58 != (cLoadingTy *)0x0) &&
       (cLoadingTy::ShowScr(DAT_00802a58,10,1), DAT_00802a58 != (cLoadingTy *)0x0)) {
      cLoadingTy::InitParam(DAT_00802a58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    DAT_00806754 = (cMf32 *)FUN_006f0ec0(0x345,&pSVar14[1].field_0x27f8,0,0,0);
    local_8 = &pSVar14->field_0x4eaf;
    cMf32::RecGet(DAT_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = &pSVar14->field_0x4eb3;
    cMf32::RecGet(DAT_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar14->field_0x4eb7;
    puVar10 = cMf32::RecGet(DAT_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar14->field_0x1180;
    pSVar14->field_0x4ed9 = puVar10 != (ushort *)0x0;
    if ((*local_8 != '\f') && (*local_8 != '\x10')) {
      cMf32::RecGet(DAT_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar14->field_0x2b2f;
    cMf32::RecGet(DAT_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (DAT_00806758 != (undefined4 *)0x0) {
      cMf32::delete(this_01,DAT_00806758);
    }
    local_8 = &pSVar14[1].field_0x2e1c;
    DAT_00806758 = (undefined4 *)0x0;
    puVar15 = (undefined4 *)local_8;
    for (iVar12 = 0x20d; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    puVar10 = cMf32::RecGet(DAT_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar10 == (ushort *)0x0) ||
       (local_14 = &pSVar14[1].field_0x2e1c, pSVar14[1].field_0x2e1c == '\0')) {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      iVar12 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0,unaff_EDI,unaff_ESI);
      pSVar14 = local_c;
      pIVar8 = local_dc.previous;
      if (iVar12 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,&local_c[1].field_0x27f8,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar8 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar14[1].field_0x2a00,local_14,0x103);
      pSVar14[1].field_0x2b03 = 0;
      puVar17 = &DAT_007c6ee4;
      pCVar16 = local_14;
      wsprintfA(local_14,&DAT_007c6ee4,&pSVar14->field_0x60,&pSVar14[1].field_0x2a00);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      iVar12 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0,pCVar16,puVar17);
      pSVar14 = local_c;
      pIVar8 = local_120.previous;
      if (iVar12 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,&local_c[1].field_0x2e1c,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar8 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar8;
    puVar19 = &pSVar14[1].field_0x2e14;
    if (*(int *)&pSVar14[1].field_0x2e14 != 0) {
      FUN_006ab060((undefined4 *)puVar19);
    }
    puVar10 = FUN_0071ad00(DAT_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *(ushort **)puVar19 = puVar10;
    iVar12 = cMf32::RecGetOrigLen(DAT_00806754,0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    *(int *)&pSVar14[1].field_0x2e18 = iVar12;
    wsprintfA((LPSTR)&local_224,s__s_s_s_007c6edc,&pSVar14->field_0x60,PTR_s_SYSTEM__0079b030,
              *(undefined4 *)puVar19);
    if (DAT_00806760 != (cMf32 *)0x0) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(DAT_00806760,&DAT_0080679c);
      pcVar13 = extraout_ECX_01;
      if (DAT_00806764 != (int *)0x0) {
        FUN_0070a300((int *)&DAT_00806764);
        pcVar13 = extraout_ECX_02;
      }
      cMf32::delete(pcVar13,(undefined4 *)DAT_00806760);
      DAT_00806760 = (cMf32 *)0x0;
    }
    DAT_00806760 = (cMf32 *)FUN_006f0ec0(0x345,&local_224,0,0,0);
    DAT_00806764 = FUN_007097c0((int)DAT_00806760);
    DAT_0080679c = FUN_0070a9f0(DAT_00806760,s_PALETTE_007ca1c8,2,1);
    thunk_FUN_0055d730((int)DAT_00806760,0);
    if (*(int *)&pSVar14[1].field_0x2e10 == 0) {
      puVar19 = &pSVar14->field_0x4da3;
      uVar11 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA(&pSVar14[1].field_0x2e1c,s__s__s_007c411c,uVar11,puVar19);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)&pSVar14[1].field_0x2e1c);
      }
      if ((pSVar14->field_0x1180 == '\x03') || (pSVar14->field_0x1180 == '\b')) {
        puVar15 = (undefined4 *)&pSVar14[1].field_0x114;
        for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x218;
        for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x1de5;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x1e05;
        for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x320;
        for (iVar12 = 0x4a; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)&pSVar14[1].field_0x449;
        for (iVar12 = 0x666; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        *(undefined1 *)puVar15 = 0;
        pSVar14[1].field_0x1de4 = 0;
        pSVar14[1].field_0x1de2 = 0;
        pSVar14[1].field_0x1de3 = 0;
        *(undefined4 *)&pSVar14[1].field_0x31c = 0;
      }
      else {
        puVar15 = (undefined4 *)&pSVar14[1].field_0x4;
        for (iVar12 = 0x9fc; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
    }
    else {
      local_8 = &pSVar14->field_0x4da3;
      puVar15 = (undefined4 *)local_8;
      for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      puVar10 = cMf32::RecGet(DAT_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar10 == (ushort *)0x0) ||
         (pbVar18 = &pSVar14->field_0x4da3, pSVar14->field_0x4da3 == '\0')) {
        Library::MSVCRT::FUN_0072e730
                  (&pSVar14[1].field_0x27f8,(byte *)0x0,(byte *)0x0,local_328,(byte *)0x0);
        pbVar18 = local_328;
      }
      uVar11 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA(&pSVar14[1].field_0x2e1c,s__s__s_007c411c,uVar11,pbVar18);
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(DAT_00802a58,(uint *)&pSVar14[1].field_0x2e1c);
      }
      if ((pSVar14->field_0x1180 == '\f') || (pSVar14->field_0x1180 == '\x10')) {
        local_8 = &pSVar14->field_0x1180;
        cMf32::RecGet(DAT_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar14->field_0x1196;
        cMf32::RecGet(DAT_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        thunk_FUN_0056ef50((int)pSVar14);
        thunk_FUN_0056f040((int)pSVar14);
      }
      if (*(byte **)&pSVar14->field_0x4ea7 != (byte *)0x0) {
        FUN_006b5570(*(byte **)&pSVar14->field_0x4ea7);
      }
      puVar9 = FUN_0071aa10((int)DAT_00806754,PTR_s_DESCRIPTION_0079b074,0);
      *(uint **)&pSVar14->field_0x4ea7 = puVar9;
      if (puVar9 == (uint *)0x0) {
        puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)&pSVar14->field_0x4ea7 = puVar9;
      }
      if (*(byte **)&pSVar14->field_0x4eab != (byte *)0x0) {
        FUN_006b5570(*(byte **)&pSVar14->field_0x4eab);
      }
      puVar9 = FUN_0071aa10((int)DAT_00806754,PTR_s_OBJECTIVES_0079b078,0);
      *(uint **)&pSVar14->field_0x4eab = puVar9;
      if (puVar9 == (uint *)0x0) {
        puVar9 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)&pSVar14->field_0x4eab = puVar9;
      }
      if ((*(int *)&pSVar14->field_0x117c == 0) &&
         ((cVar2 = pSVar14->field_0x1180, cVar2 == '\b' || (cVar2 == '\x03')))) {
        puVar15 = (undefined4 *)&pSVar14[1].field_0x114;
        for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x218;
        for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x1de5;
        for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x1e05;
        for (iVar12 = 0x46; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar15 = (undefined4 *)&pSVar14[1].field_0x320;
        for (iVar12 = 0x4a; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)&pSVar14[1].field_0x449;
        for (iVar12 = 0x666; iVar12 != 0; iVar12 = iVar12 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        *(undefined1 *)puVar15 = 0;
        pSVar14[1].field_0x1de4 = 0;
        pSVar14[1].field_0x1de2 = 0;
        pSVar14[1].field_0x1de3 = 0;
        *(undefined4 *)&pSVar14[1].field_0x31c = 0;
        *(undefined4 *)&pSVar14[1].field_0x2e10 = 0;
      }
      else {
        local_10 = (undefined4 *)&pSVar14[1].field_0x4;
        puVar10 = cMf32::RecGet(DAT_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar10 == (ushort *)0x0) {
          puVar15 = (undefined4 *)&pSVar14[1].field_0x4;
          for (iVar12 = 0x9fc; iVar12 != 0; iVar12 = iVar12 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
        }
        *(undefined4 *)&pSVar14[1].field_0x2e10 = 0;
      }
    }
    iVar12 = *(int *)&pSVar14->field_0x1185;
    *(undefined4 *)&pSVar14[1].field_0x4 = 0;
    if (((iVar12 == 0) && (*(int *)&pSVar14->field_0x1181 == 0)) &&
       (pSVar14->field_0x1163 != '\x03')) {
      uVar11 = FUN_006e51b0((int)pSVar14);
      *(undefined4 *)&pSVar14->field_0x1134 = uVar11;
    }
    local_8 = &pSVar14->field_0x1134;
    cMf32::RecGet(DAT_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
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
    pvVar7 = DAT_00807598;
    uVar11 = DAT_008032c0;
    *(undefined4 *)((int)DAT_00807598 + 0x278) = 0x10;
    *(undefined4 *)((int)pvVar7 + 0x27c) = uVar11;
    FUN_006e8630(DAT_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    thunk_FUN_0054c740();
    cMf32::delete(this_02,(undefined4 *)DAT_00806754);
    DAT_00806754 = (cMf32 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      puVar9 = (uint *)FUN_006b0140(0x2680,DAT_00807618);
      cLoadingTy::DrawLineCR(DAT_00802a58,puVar9);
      if ((pSVar14->field_0x115e != '\0') && (pSVar14->field_0x1163 == '\x03')) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete(this_03,(uint *)DAT_00802a58);
      DAT_00802a58 = (cLoadingTy *)0x0;
    }
    thunk_FUN_0056a500();
    puVar15 = local_34;
    for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    local_34[4] = 0x6107;
    local_34[5] = 1;
    (*pSVar14->vtable->GetMessage)(pSVar14,(int)local_34);
    thunk_FUN_0056a500();
    puVar15 = (undefined4 *)&pSVar14[1].field_0x114;
    for (iVar12 = 0x41; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    puVar15 = (undefined4 *)&pSVar14[1].field_0x320;
    for (iVar12 = 0x4a; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)&pSVar14[1].field_0x429;
    for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0xffffffff;
      puVar15 = puVar15 + 1;
    }
    puVar15 = (undefined4 *)&pSVar14[1].field_0x1de5;
    for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    pSVar14[1].field_0x1de3 = 0;
    pSVar14[1].field_0x1de2 = 0;
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
    puVar15 = local_34;
    for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(DAT_0081163c);
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&pSVar14->field_0x38,SOUND_MODE_1,(char *)0x0,0x4b7,
               (SoundPosition *)0x0,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20((int)DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar14->field_0x1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  iVar12 = ReportDebugMessage(s_E____titans_tapp_cpp_007ca0c8,0x54d,0,iVar12,&DAT_007a4ccc,
                              s_STAppC__StartGame_007ca1b0);
  if (iVar12 == 0) {
    pcVar13 = this_04;
    if (DAT_00806754 != (cMf32 *)0x0) {
      cMf32::delete(this_04,(undefined4 *)DAT_00806754);
      pcVar13 = (cMf32 *)extraout_ECX_03;
    }
    DAT_00806754 = (cMf32 *)0x0;
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::delete((cLoadingTy *)pcVar13,(uint *)DAT_00802a58);
    }
    pSVar14 = local_c;
    puVar15 = local_54;
    for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    DAT_00802a58 = (cLoadingTy *)0x0;
    local_44 = 0x6102;
    (*pSVar14->vtable->GetMessage)(pSVar14,(int)local_54);
    pSVar14->field_0x1195 = 0;
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

