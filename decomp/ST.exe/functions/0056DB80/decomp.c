#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall STAppC::StartGame(STAppC *this)

{
  ushort **value;
  STAppC_field_1180State SVar1;
  undefined4 uVar2;
  ST3DSMAPContext *pSVar4;
  InternalExceptionFrame *pIVar5;
  uint *puVar6;
  ushort *puVar7;
  char *pcVar8;
  DArrayTy *pDVar9;
  DWORD DVar10;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *this_00;
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
  STAppC_field_1180State *local_8;

  local_224 = DAT_008016a0;
  puVar13 = &local_223;
  local_c = this;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  *(undefined2 *)puVar13 = 0;
  *(undefined1 *)((int)puVar13 + 2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar11 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
  pSVar12 = local_c;
  if (iVar11 == 0) {
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
    if (g_int_00811764 != nullptr) {
      FUN_006b6500(g_int_00811764,DAT_0080733c);
    }
    pSVar12->field_4ED7 = 2;
    pSVar12->field_4EB3 = 2;
    pSVar12->field_4EAF = 0;
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar2 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar12->field_1168 = 0;
    pSVar12->field_0034 = uVar2;
    pSVar12->field_1164 = 0;
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_00 = extraout_ECX_00;
    }
    else {
      this_00 = (cLoadingTy *)g_cursorClass_00802A30->field_001C;
      if (this_00 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,(uint)this_00);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX;
      }
    }
    puVar6 = cLoadingTy::new(this_00,0x5c,"MisLoad.log",1);
    if (puVar6 == nullptr) {
      g_cLoading_00802A58 = nullptr;
    }
    else {
      g_cLoading_00802A58 = (cLoadingTy *)thunk_FUN_005545c0((int *)puVar6);
    }
    if ((g_cLoading_00802A58 != nullptr) &&
       (cLoadingTy::ShowScr(g_cLoading_00802A58,10,1), g_cLoading_00802A58 != nullptr)) {
      cLoadingTy::InitParam(g_cLoading_00802A58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    g_cMf32_00806754 =
         (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&pSVar12->field_76F6,0,0,0);
    local_8 = (STAppC_field_1180State *)&pSVar12->field_4EAF;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (STAppC_field_1180State *)&pSVar12->field_4EB3;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar12->field_0x4eb7;
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar12->field_1180;
    pSVar12->field_4ED9 = puVar7 != nullptr;
    if ((*local_8 != 0xc) && (*local_8 != 0x10)) {
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar12->field_0x2b2f;
    cMf32::RecGet(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != nullptr) {
      cMf32::delete(g_cMf32_00806758);
    }
    local_8 = &pSVar12->field_7D1A;
    g_cMf32_00806758 = nullptr;
    memset((void *)local_8, 0, 0x834); /* compiler bulk-zero initialization */
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar7 == nullptr) || (local_14 = &pSVar12->field_7D1A, pSVar12->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      iVar11 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
      pSVar12 = local_c;
      pIVar5 = local_dc.previous;
      if (iVar11 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_76F6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar12->field_78FE,local_14,0x103);
      pSVar12->field_7A01 = 0;
      wsprintfA(local_14,"%s%s",&pSVar12->field_0x60,&pSVar12->field_78FE);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      iVar11 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0);
      pSVar12 = local_c;
      pIVar5 = local_120.previous;
      if (iVar11 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar5;
    value = &pSVar12->field_7D12;
    if (pSVar12->field_7D12 != nullptr) {
      FreeAndNull(value);
    }
    puVar7 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *value = puVar7;
    iVar11 = cMf32::RecGetOrigLen(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,nullptr,1);
    pSVar12->field_7D16 = iVar11;
    wsprintfA((LPSTR)&local_224,"%s%s%s",&pSVar12->field_0x60,PTR_s_SYSTEM__0079b030,*value
             );
    if (g_cMf32_00806760 != nullptr) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(g_cMf32_00806760,&DAT_0080679c);
      if (DAT_00806764 != nullptr) {
        FUN_0070a300((int *)&DAT_00806764);
      }
      cMf32::delete(g_cMf32_00806760);
      g_cMf32_00806760 = nullptr;
    }
    g_cMf32_00806760 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_224,0,0,0);
    DAT_00806764 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806760);
    DAT_0080679c = FUN_0070a9f0(g_cMf32_00806760,"PALETTE",2,1);
    LoadGamePlt((int)g_cMf32_00806760,0);
    if (pSVar12->field_7D0E == 0) {
      puVar15 = &pSVar12->field_4DA3;
      pcVar8 = LoadResourceString(0x267f,g_module_00807618);
      wsprintfA(&pSVar12->field_7D1A,"%s %s",pcVar8,puVar15);
      if (g_cLoading_00802A58 != nullptr) {
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar12->field_7D1A);
      }
      if ((pSVar12->field_1180 == CASE_3) || (pSVar12->field_1180 == CASE_8)) {
        memset(&pSVar12->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar11 = 0;
        pSVar12->field_6CE2 = 0;
        pSVar12->field_6CE0 = 0;
        pSVar12->field_6CE1 = 0;
        pSVar12->field_521A = 0;
      }
      else {
        memset(&pSVar12->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        iVar11 = 0;
      }
    }
    else {
      local_8 = &pSVar12->field_4DA3;
      memset((void *)local_8, 0, 0x104); /* compiler bulk-zero initialization */
      iVar11 = 0;
      puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar7 == nullptr) || (pbVar14 = &pSVar12->field_4DA3, pSVar12->field_4DA3 == '\0')
         ) {
        Library::MSVCRT::FUN_0072e730
                  (&pSVar12->field_76F6,nullptr,nullptr,local_328,nullptr);
        pbVar14 = local_328;
      }
      pcVar8 = LoadResourceString(0x267f,g_module_00807618);
      wsprintfA(&pSVar12->field_7D1A,"%s %s",pcVar8,pbVar14);
      if (g_cLoading_00802A58 != nullptr) {
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar12->field_7D1A);
      }
      if ((pSVar12->field_1180 == 0xc) || (pSVar12->field_1180 == 0x10)) {
        local_8 = &pSVar12->field_1180;
        cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar12->field_0x1196;
        cMf32::RecGet(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        sub_0056EF50(pSVar12);
        sub_0056F040(pSVar12);
      }
      if ((DArrayTy *)pSVar12->field_4EA7 != nullptr) {
        FUN_006b5570((DArrayTy *)pSVar12->field_4EA7);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar12->field_4EA7 = puVar6;
      if (puVar6 == nullptr) {
        pDVar9 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        pSVar12->field_4EA7 = &pDVar9->flags;
      }
      if ((DArrayTy *)pSVar12->field_4EAB != nullptr) {
        FUN_006b5570((DArrayTy *)pSVar12->field_4EAB);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar12->field_4EAB = puVar6;
      if (puVar6 == nullptr) {
        pDVar9 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        pSVar12->field_4EAB = &pDVar9->flags;
      }
      if ((pSVar12->field_117C == 0) &&
         ((SVar1 = pSVar12->field_1180, SVar1 == CASE_8 || (SVar1 == CASE_3)))) {
        memset(&pSVar12->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar12->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar11 = 0;
        pSVar12->field_6CE2 = 0;
        pSVar12->field_6CE0 = 0;
        pSVar12->field_6CE1 = 0;
        pSVar12->field_521A = 0;
        pSVar12->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar12->field_4F02;
        puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar7 == nullptr) {
          memset(&pSVar12->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
          iVar11 = 0;
        }
        pSVar12->field_7D0E = 0;
      }
    }
    pSVar12->field_4F02 = 0;
    if (((pSVar12->field_1185 == 0) && (pSVar12->field_1181 == 0)) &&
       (pSVar12->field_1163 != '\x03')) {
      DVar10 = sub_006E51B0(pSVar12);
      pSVar12->field_1134 = DVar10;
    }
    local_8 = (STAppC_field_1180State *)&pSVar12->field_1134;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    CreateGameSystem();
    ST3DSMAPContext::sub_006E8640
              (g_sT3DSMAPContext_00807598,
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
    ST3DSMAPContext::sub_006DDA90(g_sT3DSMAPContext_00807598,0.7,0.95);
    ST3DSMAPContext::sub_006DDAE0(g_sT3DSMAPContext_00807598,0x10,4,4,DAT_008032c8);
    if (DAT_00807328 == 0) {
      ST3DSMAPContext::sub_006DDBB0(g_sT3DSMAPContext_00807598);
    }
    pSVar4 = g_sT3DSMAPContext_00807598;
    uVar2 = DAT_008032c0;
    g_sT3DSMAPContext_00807598->field_0278 = 0x10;
    pSVar4->field_027C = uVar2;
    ST3DSMAPContext::sub_006E8630(g_sT3DSMAPContext_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    CreatePlaySystem();
    cMf32::delete(g_cMf32_00806754);
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      pcVar8 = LoadResourceString(0x2680,g_module_00807618);
      cLoadingTy::DrawLineCR(g_cLoading_00802A58,pcVar8);
      if ((pSVar12->field_115E != '\0') && (pSVar12->field_1163 == '\x03')) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete((uint *)g_cLoading_00802A58);
      g_cLoading_00802A58 = nullptr;
    }
    thunk_FUN_0056a500();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    iVar11 = 0;
    local_34[4] = 0x6107;
    local_34[5] = 1;
    pSVar12->GetMessage((int)local_34);
    thunk_FUN_0056a500();
    memset(&pSVar12->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
    iVar11 = 0;
    memset(&pSVar12->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
    iVar11 = 0;
    puVar13 = (undefined4 *)&pSVar12->field_0x5327;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    memset(&pSVar12->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
    iVar11 = 0;
    pSVar12->field_6CE1 = 0;
    pSVar12->field_6CE0 = 0;
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    GameSystemC::sub_00577690(g_parentSystem_0081163C);
    SoundClassTy::PlaySound
              ((SoundClassTy *)&pSVar12->field_0038,SOUND_MODE_1,nullptr,0x4b7,
               nullptr,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20(g_dDXContext_0080759C,0);
    FUN_006ba780(g_dDXContext_0080759C,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar12->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  iVar11 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x54d,0,iVar11,"%s",
                              "STAppC::StartGame");
  if (iVar11 == 0) {
    if (g_cMf32_00806754 != nullptr) {
      cMf32::delete(g_cMf32_00806754);
    }
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      cLoadingTy::delete((uint *)g_cLoading_00802A58);
    }
    pSVar12 = local_c;
    memset(local_54, 0, 0x20); /* compiler bulk-zero initialization */
    g_cLoading_00802A58 = nullptr;
    local_44 = 0x6102;
    pSVar12->GetMessage((int)local_54);
    pSVar12->field_1195 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

