#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::StartGame */

void __thiscall STAppC::StartGame(STAppC *this)

{
  ushort **value;
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  AnonShape_GLOBAL_00807598_0C6808FB *pAVar4;
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
  cLoadingTy *pcVar12;
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
  STAppC *pSVar13;
  undefined4 *puVar14;
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
  puVar14 = &local_223;
  local_c = this;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  *(undefined2 *)puVar14 = 0;
  *(undefined1 *)((int)puVar14 + 2) = 0;
  local_98.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_98;
  iVar11 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
  pSVar13 = local_c;
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
    if (g_int_00811764 != (int *)0x0) {
      FUN_006b6500(g_int_00811764,DAT_0080733c);
    }
    pSVar13->field_4ED7 = 2;
    pSVar13->field_4EB3 = 2;
    pSVar13->field_4EAF = 0;
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    uVar2 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    pSVar13->field_1168 = 0;
    pSVar13->field_0034 = uVar2;
    pSVar13->field_1164 = 0;
    DarkScreen((undefined4 *)DAT_0080759c,10,2);
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar12 = extraout_ECX_00;
    }
    else {
      pcVar12 = g_cursorClass_00802A30->field_001C;
      if (pcVar12 != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,(uint)pcVar12);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        pcVar12 = extraout_ECX;
      }
    }
    puVar6 = cLoadingTy::new(pcVar12,0x5c,"MisLoad.log",1);
    if (puVar6 == (uint *)0x0) {
      g_cLoading_00802A58 = (cLoadingTy *)0x0;
    }
    else {
      g_cLoading_00802A58 = (cLoadingTy *)thunk_FUN_005545c0((int *)puVar6);
    }
    if ((g_cLoading_00802A58 != (cLoadingTy *)0x0) &&
       (cLoadingTy::ShowScr(g_cLoading_00802A58,10,1), g_cLoading_00802A58 != (cLoadingTy *)0x0)) {
      cLoadingTy::InitParam(g_cLoading_00802A58,0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    g_cMf32_00806754 =
         (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&pSVar13->field_0x76f6,0,0,0);
    local_8 = (char *)&pSVar13->field_4EAF;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (char *)&pSVar13->field_4EB3;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = &pSVar13->field_0x4eb7;
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = &pSVar13->field_1180;
    pSVar13->field_4ED9 = puVar7 != (ushort *)0x0;
    if ((*local_8 != '\f') && (*local_8 != '\x10')) {
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = &pSVar13->field_0x2b2f;
    cMf32::RecGet(g_cMf32_00806754,0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (g_cMf32_00806758 != (cMf32 *)0x0) {
      cMf32::delete(this_00,g_cMf32_00806758);
    }
    local_8 = &pSVar13->field_7D1A;
    g_cMf32_00806758 = (cMf32 *)0x0;
    memset((void *)local_8, 0, 0x834); /* compiler bulk-zero initialization */
    puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar7 == (ushort *)0x0) || (local_14 = &pSVar13->field_7D1A, pSVar13->field_7D1A == '\0'))
    {
      local_dc.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_dc;
      iVar11 = Library::MSVCRT::__setjmp3(local_dc.jumpBuffer,0);
      pSVar13 = local_c;
      pIVar5 = local_dc.previous;
      if (iVar11 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_0x76f6,0,0,0);
        g_currentExceptionFrame = local_dc.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    else {
      Library::MSVCRT::_strncpy(&pSVar13->field_0x78fe,local_14,0x103);
      pSVar13->field_7A01 = 0;
      wsprintfA(local_14,"%s%s",&pSVar13->field_0x60,&pSVar13->field_0x78fe);
      local_120.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_120;
      iVar11 = Library::MSVCRT::__setjmp3(local_120.jumpBuffer,0);
      pSVar13 = local_c;
      pIVar5 = local_120.previous;
      if (iVar11 == 0) {
        g_cMf32_00806758 =
             (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&local_c->field_7D1A,0,0,0);
        g_currentExceptionFrame = local_120.previous;
        pIVar5 = g_currentExceptionFrame;
      }
    }
    g_currentExceptionFrame = pIVar5;
    value = &pSVar13->field_7D12;
    if (pSVar13->field_7D12 != (ushort *)0x0) {
      FreeAndNull(value);
    }
    puVar7 = Library::Ourlib::MFANY::mfAnyLoad(g_cMf32_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *value = puVar7;
    iVar11 = cMf32::RecGetOrigLen(g_cMf32_00806754,0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    pSVar13->field_7D16 = iVar11;
    wsprintfA((LPSTR)&local_224,"%s%s%s",&pSVar13->field_0x60,PTR_s_SYSTEM__0079b030,*value
             );
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
    LoadGamePlt((int)g_cMf32_00806760,0);
    if (pSVar13->field_7D0E == 0) {
      puVar16 = &pSVar13->field_4DA3;
      pcVar8 = LoadResourceString(0x267f,g_module_00807618);
      wsprintfA(&pSVar13->field_7D1A,"%s %s",pcVar8,puVar16);
      if (g_cLoading_00802A58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar13->field_7D1A);
      }
      if ((pSVar13->field_1180 == '\x03') || (pSVar13->field_1180 == '\b')) {
        memset(&pSVar13->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar11 = 0;
        pSVar13->field_6CE2 = 0;
        pSVar13->field_6CE0 = 0;
        pSVar13->field_6CE1 = 0;
        pSVar13->field_521A = 0;
      }
      else {
        memset(&pSVar13->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
        iVar11 = 0;
      }
    }
    else {
      local_8 = &pSVar13->field_4DA3;
      memset((void *)local_8, 0, 0x104); /* compiler bulk-zero initialization */
      iVar11 = 0;
      puVar7 = cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar7 == (ushort *)0x0) || (pbVar15 = &pSVar13->field_4DA3, pSVar13->field_4DA3 == '\0')
         ) {
        Library::MSVCRT::FUN_0072e730
                  (&pSVar13->field_0x76f6,(byte *)0x0,(byte *)0x0,local_328,(byte *)0x0);
        pbVar15 = local_328;
      }
      pcVar8 = LoadResourceString(0x267f,g_module_00807618);
      wsprintfA(&pSVar13->field_7D1A,"%s %s",pcVar8,pbVar15);
      if (g_cLoading_00802A58 != (cLoadingTy *)0x0) {
        cLoadingTy::DrawLineCR(g_cLoading_00802A58,&pSVar13->field_7D1A);
      }
      if ((pSVar13->field_1180 == '\f') || (pSVar13->field_1180 == '\x10')) {
        local_8 = &pSVar13->field_1180;
        cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)&pSVar13->field_0x1196;
        cMf32::RecGet(g_cMf32_00806754,0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        sub_0056EF50(pSVar13);
        sub_0056F040(pSVar13);
      }
      if ((DArrayTy *)pSVar13->field_4EA7 != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)pSVar13->field_4EA7);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_DESCRIPTION_0079b074,0);
      pSVar13->field_4EA7 = puVar6;
      if (puVar6 == (uint *)0x0) {
        pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
        pSVar13->field_4EA7 = &pDVar9->flags;
      }
      if ((DArrayTy *)pSVar13->field_4EAB != (DArrayTy *)0x0) {
        FUN_006b5570((DArrayTy *)pSVar13->field_4EAB);
      }
      puVar6 = Library::Ourlib::MFSARR::mfSarLoad(g_cMf32_00806754,PTR_s_OBJECTIVES_0079b078,0);
      pSVar13->field_4EAB = puVar6;
      if (puVar6 == (uint *)0x0) {
        pDVar9 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
        pSVar13->field_4EAB = &pDVar9->flags;
      }
      if ((pSVar13->field_117C == 0) &&
         ((cVar1 = pSVar13->field_1180, cVar1 == '\b' || (cVar1 == '\x03')))) {
        memset(&pSVar13->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x5116, 0, 0x104); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x6d03, 0, 0x118); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
        iVar11 = 0;
        memset(&pSVar13->field_0x5347, 0, 0x1999); /* compiler bulk-zero initialization */
        iVar11 = 0;
        pSVar13->field_6CE2 = 0;
        pSVar13->field_6CE0 = 0;
        pSVar13->field_6CE1 = 0;
        pSVar13->field_521A = 0;
        pSVar13->field_7D0E = 0;
      }
      else {
        local_10 = &pSVar13->field_4F02;
        puVar7 = cMf32::RecGet(g_cMf32_00806754,0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar7 == (ushort *)0x0) {
          memset(&pSVar13->field_4F02, 0, 0x27f0); /* compiler bulk-zero initialization */
          iVar11 = 0;
        }
        pSVar13->field_7D0E = 0;
      }
    }
    pSVar13->field_4F02 = 0;
    if (((pSVar13->field_1185 == 0) && (pSVar13->field_1181 == 0)) &&
       (pSVar13->field_1163 != '\x03')) {
      DVar10 = sub_006E51B0(pSVar13);
      pSVar13->field_1134 = DVar10;
    }
    local_8 = (char *)&pSVar13->field_1134;
    cMf32::RecGet(g_cMf32_00806754,0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    CreateGameSystem();
    FUN_006e8640(PTR_00807598,
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
                 *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4));
    FUN_006dda90(PTR_00807598,0.7,0.95);
    FUN_006ddae0(PTR_00807598,0x10,4,4,DAT_008032c8);
    if (DAT_00807328 == 0) {
      FUN_006ddbb0(PTR_00807598);
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
    if (g_cLoading_00802A58 != (cLoadingTy *)0x0) {
      pcVar8 = LoadResourceString(0x2680,g_module_00807618);
      cLoadingTy::DrawLineCR(g_cLoading_00802A58,pcVar8);
      if ((pSVar13->field_115E != '\0') && (pSVar13->field_1163 == '\x03')) {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      cLoadingTy::delete(this_03,(uint *)g_cLoading_00802A58);
      g_cLoading_00802A58 = (cLoadingTy *)0x0;
    }
    thunk_FUN_0056a500();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    iVar11 = 0;
    local_34[4] = 0x6107;
    local_34[5] = 1;
    (*pSVar13->vtable->GetMessage)(pSVar13,(int)local_34);
    thunk_FUN_0056a500();
    memset(&pSVar13->field_5012, 0, 0x104); /* compiler bulk-zero initialization */
    iVar11 = 0;
    memset(&pSVar13->field_0x521e, 0, 0x129); /* compiler bulk-zero initialization */
    iVar11 = 0;
    puVar14 = (undefined4 *)&pSVar13->field_0x5327;
    for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    memset(&pSVar13->field_0x6ce3, 0, 0x20); /* compiler bulk-zero initialization */
    iVar11 = 0;
    pSVar13->field_6CE1 = 0;
    pSVar13->field_6CE0 = 0;
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,(uint)g_cursorClass_00802A30->field_001C
                 ,0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(PTR_0081163c);
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&pSVar13->field_0038,SOUND_MODE_1,(char *)0x0,0x4b7,
               (SoundPosition *)0x0,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20(DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    g_currentExceptionFrame = local_98.previous;
    pSVar13->field_1195 = 0;
    return;
  }
  g_currentExceptionFrame = local_98.previous;
  iVar11 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x54d,0,iVar11,"%s",
                              "STAppC::StartGame");
  if (iVar11 == 0) {
    pcVar12 = this_04;
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      cMf32::delete((cMf32 *)this_04,g_cMf32_00806754);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      pcVar12 = extraout_ECX_03;
    }
    g_cMf32_00806754 = (cMf32 *)0x0;
    if (g_cLoading_00802A58 != (cLoadingTy *)0x0) {
      cLoadingTy::delete(pcVar12,(uint *)g_cLoading_00802A58);
    }
    pSVar13 = local_c;
    memset(local_54, 0, 0x20); /* compiler bulk-zero initialization */
    g_cLoading_00802A58 = (cLoadingTy *)0x0;
    local_44 = 0x6102;
    (*pSVar13->vtable->GetMessage)(pSVar13,(int)local_54);
    pSVar13->field_1195 = 0;
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

