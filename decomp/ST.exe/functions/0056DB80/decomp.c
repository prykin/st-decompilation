#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8;CASE_9=9;CASE_B=11;CASE_C=12 */

void __thiscall STAppC::StartGame(STAppC *this)

{
  ushort **slotStorage;
  STAppC_field_1180State SVar1;
  uint uVar2;
  ST3DSMAPContext *pSVar4;
  InternalExceptionFrame *pIVar5;
  int iVar11;
  int *piVar6;
  ushort *puVar7;
  int local_EAX_841;
  int local_EAX_938;
  int local_EAX_1075;
  char *pcVar8_mg2;
  uint *puVar8;
  uint *puVar8_mg1;
  uint *puVar8_mg3;
  char *pcVar8_mg1;
  cLoadingTy *pcVar8_mg3;
  int local_EAX_2834;
  int iVar9;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  cLoadingTy *extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  cLoadingTy *extraout_ECX_00;
  cLoadingTy *this_00;
  STAppC *pSVar10;
  char *pcVar11;
  uint *puVar12;
  RecoveredRecord_006E3DB0_0F66DDCF *pRVar13;
  byte *pbVar14;
  byte *puVar15;
  byte local_328 [260];
  byte local_224;
  uint local_223;
  InternalExceptionFrame local_120;
  InternalExceptionFrame local_dc;
  InternalExceptionFrame local_98;
  uint local_54 [4];
  uint local_44;
  RecoveredRecord_006E3DB0_0F66DDCF local_34;
  uint local_24;
  uint local_20;
  char *local_14;
  undefined4 *local_10;
  STAppC *local_c;
  STAppC_field_1180State *local_8;

  local_224 = CHAR_00h_008016a0;
  puVar12 = &local_223;
  local_c = this;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  *(undefined2 *)puVar12 = 0;
  STField<undefined1>(puVar12,2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;

  iVar11 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
  pSVar10 = local_c;
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
    pSVar10->field_4ED7 = 2;
    pSVar10->field_4EB3 = 2;
    pSVar10->field_4EAF = 0;
    /* ST_CALLSITE[0056DC5A]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar2 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar10->field_1168 = 0;
    pSVar10->field_0034 = uVar2;
    pSVar10->field_1164 = 0;
    /* ST_CALLSITE[0056DCAC]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
      this_00 = extraout_ECX_00;
    }
    else {
      this_00 = (cLoadingTy *)g_cursorClass_00802A30->field_001C;
      if (this_00 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,(uint)this_00);
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        this_00 = extraout_ECX;
      }
    }
    /* ST_CALLSITE[0056DCEC]: CALL 0x00404b2e; direct=00404B2E cLoadingTy::new; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/cLoadingTy;/uint;pointer:/char;/uint */
    piVar6 = cLoadingTy::new(this_00,0x5c,"MisLoad.log",1);
    if (piVar6 == nullptr) {
      g_cLoading_00802A58 = nullptr;
    }
    else {
      g_cLoading_00802A58 = (cLoadingTy *)thunk_FUN_005545c0(piVar6);
    }
    if ((g_cLoading_00802A58 != nullptr) &&
       /* ST_CALLSITE[0056DD13]: CALL 0x00403b52; direct=00403B52 cLoadingTy::ShowScr */
       (cLoadingTy::ShowScr(g_cLoading_00802A58,10,1), g_cLoading_00802A58 != nullptr)) {
      /* ST_CALLSITE[0056DD3C]: CALL 0x004046d8; direct=004046D8 cLoadingTy::InitParam */
      cLoadingTy::InitParam(g_cLoading_00802A58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    /* ST_CALLSITE[0056DD41]: CALL dword ptr [0x0085bedc] */
    DAT_00806720 = timeGetTime();
    /* ST_CALLSITE[0056DD5B]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
    g_cMf32_00806754 =
         Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&pSVar10->field_76F6,0,0,0);
    local_8 = (STAppC_field_1180State *)&pSVar10->field_4EAF;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (STAppC_field_1180State *)&pSVar10->field_4EB3;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar10->field_0x4eb7;
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar10->field_1180;
    pSVar10->field_4ED9 = puVar7 != nullptr;
    if ((*local_8 != CASE_C) && (*local_8 != 0x10)) {
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar10->field_0x2b2f;
    cMf32::RecGet(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != nullptr) {
      cMf32::delete(g_cMf32_00806758);
    }
    local_8 = (STAppC_field_1180State *)&pSVar10->field_7D1A;
    g_cMf32_00806758 = nullptr;
    memset((char *)local_8, 0, 0x834); /* compiler bulk-zero initialization */
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar7 == nullptr) || (local_14 = &pSVar10->field_7D1A, pSVar10->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;

      local_EAX_938 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
      pSVar10 = local_c;
      pIVar5 = local_dc.previous;
      if (local_EAX_938 == 0) {
        /* ST_CALLSITE[0056DF48]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
        g_cMf32_00806758 =
             Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&local_c->field_76F6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar10->field_78FE,local_14,0x103);
      pSVar10->field_7A01 = 0;
      /* ST_CALLSITE[0056DEA3]: CALL dword ptr [0x0085bde8] */
      wsprintfA(local_14,"%s%s",&pSVar10->field_0x60,&pSVar10->field_78FE);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;

      local_EAX_841 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0);
      pSVar10 = local_c;
      pIVar5 = local_120.previous;
      if (local_EAX_841 == 0) {
        /* ST_CALLSITE[0056DEE7]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
        g_cMf32_00806758 =
             Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar5;
    slotStorage = &pSVar10->field_7D12;
    if (pSVar10->field_7D12 != nullptr) {
      FreeAndNull(slotStorage);
    }
    puVar7 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *slotStorage = puVar7;

    local_EAX_1075 =
         cMf32::RecGetOrigLen(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,nullptr,1);
    pSVar10->field_7D16 = local_EAX_1075;
    /* ST_CALLSITE[0056DFD8]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&local_224,"%s%s%s",&pSVar10->field_0x60,PTR_s_SYSTEM__0079b030,
              *slotStorage);
    if (g_cMf32_00806760 != nullptr) {
      thunk_FUN_0055d910();
      cMf32::RecMemFree(g_cMf32_00806760,(uint *)&PTR_0080679c);
      if (PTR_00806764 != nullptr) {
        FUN_0070a300((int *)&PTR_00806764);
      }
      cMf32::delete(g_cMf32_00806760);
      g_cMf32_00806760 = nullptr;
    }
    /* ST_CALLSITE[0056E03C]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
    g_cMf32_00806760 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_224,0,0,0);
    PTR_00806764 = Library::Ourlib::MFRLOAD::mfRLoadCreate((int)g_cMf32_00806760);
    PTR_0080679c = FUN_0070a9f0(g_cMf32_00806760,"PALETTE",2,1);
    /* ST_CALLSITE[0056E073]: CALL 0x00402c43; direct=00402C43 LoadGamePlt */
    LoadGamePlt((int)g_cMf32_00806760,0);
    if (pSVar10->field_7D0E == 0) {
      puVar15 = &pSVar10->field_4DA3;
      pcVar8_mg1 = LoadResourceString(0x267f,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0056E2F9]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar10->field_7D1A,"%s %s",pcVar8_mg1,puVar15);
      if (g_cLoading_00802A58 != nullptr) {
        /* ST_CALLSITE[0056E30D]: CALL 0x00401230; direct=00401230 cLoadingTy::DrawLineCR */
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar10->field_7D1A);
      }
      if ((pSVar10->field_1180 == CASE_3) || (pSVar10->field_1180 == CASE_8)) {
        memset(&pSVar10->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar9 = 0;
        pSVar10->field_6CE2 = 0;
        pSVar10->field_6CE0 = 0;
        pSVar10->field_6CE1 = 0;
        pSVar10->field_521A = 0;
      }
      else {
        memset(&pSVar10->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        iVar9 = 0;
      }
    }
    else {
      local_8 = &pSVar10->field_4DA3;
      memset((void *)local_8, 0, 0x104); /* compiler bulk-zero initialization */
      iVar9 = 0;
      puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar7 == nullptr) || (pbVar14 = &pSVar10->field_4DA3, pSVar10->field_4DA3 == '\0')
         ) {
        Library::MSVCRT::FUN_0072e730
                  ((byte *)&pSVar10->field_76F6,nullptr,nullptr,local_328,nullptr);
        pbVar14 = local_328;
      }
      pcVar8_mg2 = LoadResourceString(0x267f,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0056E117]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&pSVar10->field_7D1A,"%s %s",pcVar8_mg2,pbVar14);
      if (g_cLoading_00802A58 != nullptr) {
        /* ST_CALLSITE[0056E12B]: CALL 0x00401230; direct=00401230 cLoadingTy::DrawLineCR */
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar10->field_7D1A);
      }
      if ((pSVar10->field_1180 == CASE_C) || (pSVar10->field_1180 == 0x10)) {
        local_8 = &pSVar10->field_1180;
        cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar10->field_0x1196;
        cMf32::RecGet(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        /* ST_CALLSITE[0056E166]: CALL 0x004025b3; direct=004025B3 STAppC::sub_0056EF50 */
        sub_0056EF50(pSVar10);
        /* ST_CALLSITE[0056E16D]: CALL 0x004039ae; direct=004039AE STAppC::sub_0056F040 */
        sub_0056F040(pSVar10);
      }
      if ((DArrayTy *)pSVar10->field_4EA7 != nullptr) {
        FUN_006b5570((DArrayTy *)pSVar10->field_4EA7);
      }
      puVar8 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar10->field_4EA7 = puVar8;
      if (puVar8 == nullptr) {
        /* ST_CALLSITE[0056E1C5]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
        puVar8_mg1 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        pSVar10->field_4EA7 = puVar8_mg1;
      }
      if ((DArrayTy *)pSVar10->field_4EAB != nullptr) {
        FUN_006b5570((DArrayTy *)pSVar10->field_4EAB);
      }
      puVar8 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar10->field_4EAB = puVar8;
      if (puVar8 == nullptr) {
        /* ST_CALLSITE[0056E205]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
        puVar8_mg3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        pSVar10->field_4EAB = puVar8_mg3;
      }
      if ((pSVar10->field_117C == 0) &&
         ((SVar1 = pSVar10->field_1180, SVar1 == CASE_8 || (SVar1 == CASE_3)))) {
        memset(&pSVar10->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar9 = 0;
        memset(&pSVar10->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar9 = 0;
        pSVar10->field_6CE2 = 0;
        pSVar10->field_6CE0 = 0;
        pSVar10->field_6CE1 = 0;
        pSVar10->field_521A = 0;
        pSVar10->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar10->field_4F02;
        puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar7 == nullptr) {
          memset(&pSVar10->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        }
        pSVar10->field_7D0E = 0;
      }
    }
    pSVar10->field_4F02 = 0;
    if (((pSVar10->field_1185 == 0) && (pSVar10->field_1181 == 0)) &&
       (pSVar10->field_1163 != '\x03')) {

      iVar9 = sub_006E51B0(pSVar10);
      pSVar10->field_1134 = iVar9;
    }
    local_8 = (STAppC_field_1180State *)&pSVar10->field_1134;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    /* ST_CALLSITE[0056E3ED]: CALL 0x00403873; direct=00403873 CreateGameSystem */
    CreateGameSystem();
    ST3DSMAPContext::sub_006E8640
              (g_sT3DSMAPContext_00807598,
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
               *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
    ST3DSMAPContext::sub_006DDA90(g_sT3DSMAPContext_00807598,0.7,0.95);
    ST3DSMAPContext::sub_006DDAE0(g_sT3DSMAPContext_00807598,0x10,4,4,PTR_008032c8);
    if (DAT_00807328 == 0) {
      ST3DSMAPContext::sub_006DDBB0(g_sT3DSMAPContext_00807598);
    }
    pSVar4 = g_sT3DSMAPContext_00807598;
    puVar7 = PTR_008032c0;
    g_sT3DSMAPContext_00807598->field_0278 = 0x10;
    pSVar4->field_027C = puVar7;
    ST3DSMAPContext::sub_006E8630(g_sT3DSMAPContext_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    /* ST_CALLSITE[0056E48A]: CALL 0x004052f9; direct=004052F9 CreatePlaySystem */
    CreatePlaySystem();
    cMf32::delete(g_cMf32_00806754);
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      /* ST_CALLSITE[0056E4B8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cLoadingTy; signature=__stdcall;pointer:/cLoadingTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
      pcVar8_mg3 = LoadResourceString(0x2680,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0056E4C4]: CALL 0x00401230; direct=00401230 cLoadingTy::DrawLineCR */
      cLoadingTy::DrawLineCR(g_cLoading_00802A58,(char *)pcVar8_mg3);
      if ((pSVar10->field_115E != '\0') && (pSVar10->field_1163 == '\x03')) {
        /* ST_CALLSITE[0056E4DF]: CALL dword ptr [0x0085bc6c] */
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      /* ST_CALLSITE[0056E4FB]: CALL 0x00405b28; direct=00405B28 cLoadingTy::delete */
      cLoadingTy::delete((uint *)g_cLoading_00802A58);
      g_cLoading_00802A58 = nullptr;
    }

    thunk_FUN_0056a500();
    pRVar13 = &local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pRVar13 = 0;
      pRVar13 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar13->field_0x4;
    }
    local_24 = 0x6107;
    local_20 = 1;
    /* ST_CALLSITE[0056E534]: CALL dword ptr [EAX + 0x18]; [STIndirectCallsiteApplier] exact slot 0x18; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/STAppC;/int */
    pSVar10->GetMessage((int)&local_34);

    thunk_FUN_0056a500();
    memset(&pSVar10->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
    iVar9 = 0;
    memset(&pSVar10->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
    iVar9 = 0;
    puVar12 = (undefined4 *)&pSVar10->field_0x5327;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    memset(&pSVar10->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
    iVar9 = 0;
    pSVar10->field_6CE1 = 0;
    pSVar10->field_6CE0 = 0;
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
    pRVar13 = &local_34;
    for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined4 *)pRVar13 = 0;
      pRVar13 = (RecoveredRecord_006E3DB0_0F66DDCF *)&pRVar13->field_0x4;
    }
    local_34.field_000C = 0xf;
    local_24 = 5;

    FUN_006e3db0((AppClassTy *)pSVar10,&local_34);

    thunk_FUN_0056a500();
    /* ST_CALLSITE[0056E610]: CALL 0x00403085; direct=00403085 GameSystemC::sub_00577690 */
    GameSystemC::sub_00577690(g_parentSystem_0081163C);
    /* ST_CALLSITE[0056E622]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
    SoundClassTy::PlaySound
              ((SoundClassTy *)&pSVar10->field_0038,SOUND_MODE_1,nullptr,0x4b7,
               nullptr,0);
    DAT_0080674c = 2;
    /* ST_CALLSITE[0056E632]: CALL dword ptr [0x0085be40] */
    ShowCursor(0);
    DAT_00856d7c = 0;

    FUN_006bbb20(g_dDXContext_0080759C,0);
    FUN_006ba780(g_dDXContext_0080759C,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar10->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;

  local_EAX_2834 =
       ReportDebugMessage("E:\\__titans\\tapp.cpp",0x54d,0,iVar11,"%s",
                          "STAppC::StartGame");
  if (local_EAX_2834 == 0) {
    if (g_cMf32_00806754 != nullptr) {
      cMf32::delete(g_cMf32_00806754);
    }
    g_cMf32_00806754 = nullptr;
    if (g_cLoading_00802A58 != nullptr) {
      /* ST_CALLSITE[0056E6C1]: CALL 0x00405b28; direct=00405B28 cLoadingTy::delete */
      cLoadingTy::delete((uint *)g_cLoading_00802A58);
    }
    pSVar10 = local_c;
    memset(local_54, 0, 0x20); /* compiler bulk-zero initialization */
    g_cLoading_00802A58 = nullptr;
    local_44 = 0x6102;
    /* ST_CALLSITE[0056E6ED]: CALL dword ptr [EDX + 0x18] */
    pSVar10->GetMessage((int)local_54);
    pSVar10->field_1195 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

