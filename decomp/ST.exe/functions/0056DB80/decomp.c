#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall STAppC::StartGame(STAppC *this)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar4;
  InternalExceptionFrame *pIVar5;
  uint *puVar6;
  ushort *puVar7;
  char *pcVar8;
  DWORD DVar9;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *pcVar11;
  cMf32 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_02;
  cMf32 *this_01;
  cMf32 *this_02;
  cLoadingTy *this_03;
  cLoadingTy *this_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX_03;
  STAppC *pSVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined1 *puVar15;
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
  puVar13 = &local_223;
  local_c = this;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  *(undefined1 *)((int)puVar13 + 2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar10 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
  pSVar12 = local_c;
  if (iVar10 == 0) {
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
    pSVar12->field_4ED7 = 2;
    pSVar12->field_4EB3 = 2;
    pSVar12->field_4EAF = 0;
    MMsgTy::HidePanel(PTR_0081176c->field_02E6,0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar2 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar12->field_1168 = 0;
    pSVar12->field_0034 = uVar2;
    pSVar12->field_1164 = 0;
    DarkScreen((undefined4 *)DAT_0080759c,10,2);
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar11 = extraout_ECX_00;
    }
    else {
      pcVar11 = (cLoadingTy *)PTR_00802a30->field_001C;
      if (pcVar11 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,(uint)pcVar11);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar11 = extraout_ECX;
      }
    }
    puVar6 = cLoadingTy::new(pcVar11,0x5c,"MisLoad.log",1);
    if (puVar6 == (uint *)0x0) {
      PTR_00802a58 = (cLoadingTy *)0x0;
    }
    else {
      PTR_00802a58 = (cLoadingTy *)thunk_FUN_005545c0((int *)puVar6);
    }
    if ((PTR_00802a58 != (cLoadingTy *)0x0) &&
       (cLoadingTy::ShowScr(PTR_00802a58,10,1), PTR_00802a58 != (cLoadingTy *)0x0)) {
      cLoadingTy::InitParam(PTR_00802a58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    g_cMf32_00806754 =
         (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&pSVar12->field_0x76f6,0,0,0);
    local_8 = (char *)&pSVar12->field_4EAF;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (char *)&pSVar12->field_4EB3;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar12->field_0x4eb7;
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar12->field_1180;
    pSVar12->field_4ED9 = puVar7 != (ushort *)0x0;
    if ((*local_8 != '\f') && (*local_8 != '\x10')) {
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar12->field_0x2b2f;
    cMf32::RecGet(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      cMf32::delete(this_00,g_cMf32_00806758);
    }
    local_8 = &pSVar12->field_7D1A;
    g_cMf32_00806758 = (cMf32 *)0x0;
    puVar13 = (undefined4 *)local_8;
    for (iVar10 = 0x20d; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar7 == (ushort *)0x0) || (local_14 = &pSVar12->field_7D1A, pSVar12->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      iVar10 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
      pSVar12 = local_c;
      pIVar5 = local_dc.previous;
      if (iVar10 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_0x76f6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar12->field_0x78fe,local_14,0x103);
      pSVar12->field_7A01 = 0;
      wsprintfA(local_14,"%s%s",&pSVar12->field_0x60,&pSVar12->field_0x78fe);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      iVar10 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0);
      pSVar12 = local_c;
      pIVar5 = local_120.previous;
      if (iVar10 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar5;
    puVar13 = &pSVar12->field_7D12;
    if (pSVar12->field_7D12 != 0) {
      FreeAndNull((void **)puVar13);
    }
    puVar7 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *puVar13 = puVar7;
    iVar10 = cMf32::RecGetOrigLen(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    pSVar12->field_7D16 = iVar10;
    wsprintfA((LPSTR)&local_224,"%s%s%s",&pSVar12->field_0x60,PTR_s_SYSTEM__0079b030,
              *puVar13);
    if (g_cMf32_00806760 != (cMf32 *)0x0) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(g_cMf32_00806760,&DAT_0080679c);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_01;
      if (DAT_00806764 != (int *)0x0) {
        FUN_0070a300((int *)&DAT_00806764);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_01 = extraout_ECX_02;
      }
      cMf32::delete(this_01,g_cMf32_00806760);
      g_cMf32_00806760 = (cMf32 *)0x0;
    }
    g_cMf32_00806760 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_224,0,0,0);
    DAT_00806764 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806760);
    DAT_0080679c = FUN_0070a9f0(g_cMf32_00806760,"PALETTE",2,1);
    LoadGamePlt(g_cMf32_00806760,0);
    if (pSVar12->field_7D0E == 0) {
      puVar15 = &pSVar12->field_4DA3;
      pcVar8 = LoadResourceString(0x267f,HINSTANCE_00807618);
      wsprintfA(&pSVar12->field_7D1A,"%s %s",pcVar8,puVar15);
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(PTR_00802a58,(uint *)&pSVar12->field_7D1A);
      }
      if ((pSVar12->field_1180 == '\x03') || (pSVar12->field_1180 == '\b')) {
        puVar13 = (undefined4 *)&pSVar12->field_5012;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x5116;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x6ce3;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x6d03;
        for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x521e;
        for (iVar10 = 0x4a; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined1 *)puVar13 = 0;
        puVar13 = (undefined4 *)&pSVar12->field_0x5347;
        for (iVar10 = 0x666; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined1 *)puVar13 = 0;
        pSVar12->field_6CE2 = 0;
        pSVar12->field_6CE0 = 0;
        pSVar12->field_6CE1 = 0;
        pSVar12->field_521A = 0;
      }
      else {
        puVar13 = &pSVar12->field_4F02;
        for (iVar10 = 0x9fc; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
      }
    }
    else {
      local_8 = &pSVar12->field_4DA3;
      puVar13 = (undefined4 *)local_8;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar7 == (ushort *)0x0) || (pbVar14 = &pSVar12->field_4DA3, pSVar12->field_4DA3 == '\0')
         ) {
        Library::MSVCRT::FUN_0072e730
                  (&pSVar12->field_0x76f6,(byte *)0x0,(byte *)0x0,local_328,(byte *)0x0);
        pbVar14 = local_328;
      }
      pcVar8 = LoadResourceString(0x267f,HINSTANCE_00807618);
      wsprintfA(&pSVar12->field_7D1A,"%s %s",pcVar8,pbVar14);
      if (PTR_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(PTR_00802a58,(uint *)&pSVar12->field_7D1A);
      }
      if ((pSVar12->field_1180 == '\f') || (pSVar12->field_1180 == '\x10')) {
        local_8 = &pSVar12->field_1180;
        cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar12->field_0x1196;
        cMf32::RecGet(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        thunk_FUN_0056ef50((AnonShape_0056EF50_CAB83E9D *)pSVar12);
        thunk_FUN_0056f040((AnonShape_0056F040_86F75ABE *)pSVar12);
      }
      if ((AnonShape_006B5570_4D68B99C *)pSVar12->field_4EA7 != (AnonShape_006B5570_4D68B99C *)0x0)
      {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar12->field_4EA7);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar12->field_4EA7 = puVar6;
      if (puVar6 == (uint *)0x0) {
        puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        pSVar12->field_4EA7 = puVar6;
      }
      if ((AnonShape_006B5570_4D68B99C *)pSVar12->field_4EAB != (AnonShape_006B5570_4D68B99C *)0x0)
      {
        FUN_006b5570((AnonShape_006B5570_4D68B99C *)pSVar12->field_4EAB);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar12->field_4EAB = puVar6;
      if (puVar6 == (uint *)0x0) {
        puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
        pSVar12->field_4EAB = puVar6;
      }
      if ((pSVar12->field_117C == 0) &&
         ((cVar1 = pSVar12->field_1180, cVar1 == '\b' || (cVar1 == '\x03')))) {
        puVar13 = (undefined4 *)&pSVar12->field_5012;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x5116;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x6ce3;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x6d03;
        for (iVar10 = 0x46; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        puVar13 = (undefined4 *)&pSVar12->field_0x521e;
        for (iVar10 = 0x4a; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined1 *)puVar13 = 0;
        puVar13 = (undefined4 *)&pSVar12->field_0x5347;
        for (iVar10 = 0x666; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        *(undefined1 *)puVar13 = 0;
        pSVar12->field_6CE2 = 0;
        pSVar12->field_6CE0 = 0;
        pSVar12->field_6CE1 = 0;
        pSVar12->field_521A = 0;
        pSVar12->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar12->field_4F02;
        puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar7 == (ushort *)0x0) {
          puVar13 = &pSVar12->field_4F02;
          for (iVar10 = 0x9fc; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
          }
        }
        pSVar12->field_7D0E = 0;
      }
    }
    pSVar12->field_4F02 = 0;
    if (((pSVar12->field_1185 == 0) && (pSVar12->field_1181 == 0)) &&
       (pSVar12->field_1163 != '\x03')) {
      DVar9 = FUN_006e51b0((int)pSVar12);
      pSVar12->field_1134 = DVar9;
    }
    local_8 = (char *)&pSVar12->field_1134;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    CreateGameSystem();
    FUN_006e8640(PTR_00807598,
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
    FUN_006dda90(PTR_00807598,0.7,0.95);
    FUN_006ddae0(PTR_00807598,0x10,4,4,DAT_008032c8);
    if (DAT_00807328 == 0) {
      FUN_006ddbb0((int)PTR_00807598);
    }
    pAVar4 = PTR_00807598;
    uVar2 = DAT_008032c0;
    PTR_00807598->field_0278 = 0x10;
    *(undefined4 *)&pAVar4->field_0x27c = uVar2;
    FUN_006e8630(PTR_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    CreatePlaySystem();
    cMf32::delete(this_02,g_cMf32_00806754);
    g_cMf32_00806754 = (cMf32 *)0x0;
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      puVar6 = (uint *)LoadResourceString(0x2680,HINSTANCE_00807618);
      cLoadingTy::DrawLineCR(PTR_00802a58,puVar6);
      if ((pSVar12->field_115E != '\0') && (pSVar12->field_1163 == '\x03')) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete(this_03,(uint *)PTR_00802a58);
      PTR_00802a58 = (cLoadingTy *)0x0;
    }
    thunk_FUN_0056a500();
    puVar13 = local_34;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    local_34[4] = 0x6107;
    local_34[5] = 1;
    (*pSVar12->vtable->GetMessage)(pSVar12,(int)local_34);
    thunk_FUN_0056a500();
    puVar13 = (undefined4 *)&pSVar12->field_5012;
    for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    puVar13 = (undefined4 *)&pSVar12->field_0x521e;
    for (iVar10 = 0x4a; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)puVar13 = 0;
    puVar13 = (undefined4 *)&pSVar12->field_0x5327;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    puVar13 = (undefined4 *)&pSVar12->field_0x6ce3;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    pSVar12->field_6CE1 = 0;
    pSVar12->field_6CE0 = 0;
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    puVar13 = local_34;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(PTR_0081163c);
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&pSVar12->field_0038,SOUND_MODE_1,(char *)0x0,0x4b7,
               (SoundPosition *)0x0,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20(DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar12->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  iVar10 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x54d,0,iVar10,"%s",
                              "STAppC::StartGame");
  if (iVar10 == 0) {
    pcVar11 = this_04;
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      cMf32::delete((cMf32 *)this_04,g_cMf32_00806754);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar11 = extraout_ECX_03;
    }
    g_cMf32_00806754 = (cMf32 *)0x0;
    if (PTR_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::delete(pcVar11,(uint *)PTR_00802a58);
    }
    pSVar12 = local_c;
    puVar13 = local_54;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    PTR_00802a58 = (cLoadingTy *)0x0;
    local_44 = 0x6102;
    (*pSVar12->vtable->GetMessage)(pSVar12,(int)local_54);
    pSVar12->field_1195 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

