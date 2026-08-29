#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 215 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005B6730.
   Evidence: incoming_receiver_captures=1; receiver_accesses=151; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; single_call_corroborated_by_receiver_family

   [STMethodOwnerApplier] Structural method owner recovered as SettMapMTy.
   Evidence: this_call_owners=[SettMapMTy]; agreed_this_calls=1; incoming_this_accesses=151;
   incoming_edx_uses=0; incoming_stack_parameter_uses=41; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall SettMapMTy::sub_005C29B0(SettMapMTy *this,char param_1)

{
  SettMapMTy_field_1E26State SVar1;
  AnonPointee_SettMapMTy_1C67 *pAVar2;
  SettMapMTy_field_1F7CDArray *pSVar3;
  dword dVar4;
  AnonPointee_SettMapMTy_1E1E *pAVar5;
  StartSystemTy *pSVar6;
  CursorClassTy *this_00;
  InternalExceptionFrame *pIVar7;
  int local_EAX_44;
  cMf32 *pcVar8;
  DArrayTy *pDVar9;
  DArrayTy *pSVar7;
  ushort *local_EAX_481;
  DArrayTy *pSVar8;
  ushort *puVar9;
  ushort *local_EAX_939;
  ushort *local_EAX_977;
  int uVar22;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar10;
  uint *puVar11;
  char *pcVar24_mg3;
  char *pcVar24_mg4;
  char *pcVar24_mg5;
  char *pcVar24_mg6;
  char *pcVar24_mg7;
  DArrayTy *pSVar11_mg0;
  HANDLE hFindFile;
  int iVar5;
  cMf32 *pcVar6;
  int local_EAX_1866;
  ushort *local_EAX_1926;
  UINT resourceId;
  char *pcVar24_mg8;
  BOOL BVar12;
  int local_EAX_2693;
  int local_EAX_2876;
  char *puVar15_mg0;
  char *puVar15_mg1;
  char *puVar15_mg2;
  char *puVar15_mg3;
  char *puVar15_mg4;
  char *puVar15_mg5;
  char *puVar15_mg6;
  char *puVar15_mg7;
  char *puVar15_mg8;
  char *puVar15_mg9;
  char *puVar15_mgA;
  char *puVar15_mgB;
  HoloTy *pHVar13;
  RecoveredRecord_005AACB0_2533FD69 *pRVar14;
  uint uVar20;
  uint local_EAX_4970;
  uint local_EAX_5300;
  uint local_EAX_5811;
  uint uVar15;
  DArrayTy *pDVar16;
  uint uVar17;
  uint uVar18;
  SettMapMTy_field_1F7CElement *element_1f7c;
  void *pvVar20;
  char *pcVar21;
  SettMapMTy *this_01;
  char *pcVar22;
  ushort **ppuVar23;
  char *pcVar24;
  SettMapMTy_field_1F7CElement *element_1f7c_2;
  uint *puVar26;
  byte bVar27;
  char cVar28;
  ushort *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_b18 [256];
  byte local_718 [260];
  char local_614 [260];
  uint local_510;
  _WIN32_FIND_DATAA local_50c;
  uint local_3cc [65];
  uint local_2c8;
  uint local_2a1;
  uint local_294;
  uint local_290;
  uint local_28c;
  uint local_205;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1de;
  uint local_1d1;
  uint local_1cd;
  int local_1c9;
  InternalExceptionFrame local_cc;
  InternalExceptionFrame local_88;
  uint local_44 [7];
  uint local_28;
  uint local_24;
  cMf32 *local_1c;
  SettMapMTy *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_18 = this;

  local_EAX_44 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_01 = local_18;
  if (local_EAX_44 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18->field_1E26;
    if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == CASE_F)) ||
       (uVar15 = 0x6947, SVar1 == CASE_10)) {
      uVar15 = 0x694d;
    }
    local_18->field_002D = uVar15;
    /* ST_CALLSITE[005C42BF]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/SettMapMTy;pointer:/SubmarineTitans/Recovered/STMessage */
    local_18->GetMessage((STMessage *)&local_18->field_0x1d);
    return;
  }
  local_18->field_1E26 = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  /* ST_CALLSITE[005C2A74]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  /* ST_CALLSITE[005C2A8A]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/cMf32; source view only; no Ghidra override */
  pcVar8 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0));
  this_01->field_1F43 = pcVar8;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar16 = PTR_0080c502, SVar1 == 2)) {
    pDVar16 = (DArrayTy *)PTR_0080c506;
  }
  if (this_01->field_1C5F < pDVar16->count) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar16 = PTR_0080c502, SVar1 == 2)) {
      pDVar16 = (DArrayTy *)PTR_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar9 = PTR_0080c502, SVar1 == 2)) {
      pDVar9 = (DArrayTy *)PTR_0080c506;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pvVar20 = (void *)(pDVar9->elementSize * this_01->field_1C5F + (int)pDVar16->data);
  }
  else {
    pvVar20 = nullptr;
  }
  if (pvVar20 == nullptr) {
    DAT_0080995c = 1;
    memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
    iVar32 = this_01->field_1C63;
    pcVar8 = this_01->field_1F43;
    pcVar21 = nullptr;
  }
  else {
    DAT_0080995c = STField<undefined4>(pvVar20,0x90);
    uVar17 = 0xffffffff;
    pcVar21 = (char *)((int)pvVar20 + 0x4c);
    do {
      pcVar22 = pcVar21;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar22 = pcVar21 + 1;
      cVar28 = *pcVar21;
      pcVar21 = pcVar22;
    } while (cVar28 != '\0');
    uVar17 = ~uVar17;
    pcVar22 = pcVar22 + -uVar17;
    pcVar24 = &DAT_00809960;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar24 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar24 = pcVar24 + 4;
    }
    pcVar21 = (char *)((int)pvVar20 + 0x70);
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar24 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar24 = pcVar24 + 1;
    }
    iVar32 = this_01->field_1C63;
    pcVar8 = this_01->field_1F43;
  }
  /* ST_CALLSITE[005C2B69]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
  StartSystemTy::SetObjectives(g_startSystem_0081176C,(int)pcVar8,pcVar21,iVar32);
  /* ST_CALLSITE[005C2B76]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/SettMapMTy_field_1F84DArray; source view only; no Ghidra override */
  pSVar7 = Library::DKW::TBL::DArrayCreate(nullptr,8,0x60,8);
  this_01->field_1F84 = (SettMapMTy_field_1F84DArray *)pSVar7;
  local_EAX_481 = FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
  g_startSystem_0081176C->field_002C = local_EAX_481;
  this_01->field_005D = g_startSystem_0081176C->field_002C;

  FUN_006bc360(g_startSystem_0081176C->field_002C,local_b18,nullptr);
  (this_01->array_00BC[0xc].field_01DB)->field_0140 = 0x1f;

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,
             (undefined4 *)&(this_01->array_00BC[0xc].field_01DB)->field_0x144);
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
    FUN_006b6160(&this_01->array_00BC[0xc].field_0x1df,(int)(g_int_00811764 + 6));
    this_01->field_1A7F = 1;
    this_01->field_1A80 = DAT_008087c6;
    this_01->field_1A81 = (char)(DAT_008087c2 >> 1);
    /* ST_CALLSITE[005C2C58]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&local_28,"%08x",DAT_0080995c);
    this_01->field_1A82 = local_28;
    this_01->field_1A86 = local_24;
    Library::MSVCRT::_strncpy(&this_01->field_1A8A,&CHAR_00h_0080c3c3,0x1d5);
    this_01->field_1C5E = 0;
  }
  this_01->field_2189 = this_01->field_0008;
  this_01->field_2169 = this_01->field_0008;
  this_01->field_218D = 2;
  this_01->field_216D = 2;
  this_01->field_21AD = g_startSystem_0081176C->field_002C;
  this_01->field_21C1 = PTR_008032a8;
  this_01->field_21BD = PTR_008032a4;
  this_01->field_21B5 = 0x1f;
  this_01->field_21B9 = 1;
  this_01->field_21B1 = 0x4d;
  /* ST_CALLSITE[005C2CFA]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/SettMapMTy_field_1E2FDArray; source view only; no Ghidra override */
  pSVar8 = Library::DKW::TBL::DArrayCreate(nullptr,0xf,0x10c,5);
  this_01->field_1E2F = (SettMapMTy_field_1E2FDArray *)pSVar8;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,"MM_COMBO",0,1);
  this_01->field_1E2B = puVar9;
  PTR_0081175c = (RecoveredGlobalRecordView_0081175C *)
                 /* ST_CALLSITE[005C2D39]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C; source view only; no Ghidra override */
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (PTR_00806784,CASE_B,"MAP_GEN",0xffffffff,0,1,0,
                            nullptr);
  local_EAX_939 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,nullptr);
  this_01->field_1F4F = local_EAX_939;
  local_EAX_977 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806784,CASE_B,"SET_ALLY",0xffffffff,0,1,0,nullptr);
  this_01->field_1F4B = local_EAX_977;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_01->field_21E3 = 1;
    iVar32 = 1;
    puVar29 = (ushort *)this_01->field_005D + 0x14;

    uVar22 = FUN_006b4fe0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar10 = (RecoveredRecord_006B4FA0_DAC3A217 *)

              FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar22,
                           (undefined4 *)puVar29,iVar32);
    this_01->field_1C67 = (AnonPointee_SettMapMTy_1C67 *)pRVar10;
    uVar17 = *(uint *)&pRVar10[1].field_0x4;
    if (uVar17 == 0) {
      uVar17 = ((uint)pRVar10->field_000E * *(int *)&pRVar10->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)&pRVar10->field_0x8;
    }

    puVar11 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar10));
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar11 = 0xff;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,6,0xea,0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2E48]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar21 = LoadResourceString(0x2344,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar32,iVar31,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x2e,0xea,
                     0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2E8E]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar24_mg3 = LoadResourceString(0x2345,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg3,iVar32,iVar31,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x56,0xea,
                     0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2ED5]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar24_mg4 = LoadResourceString(0x2350,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg4,iVar32,iVar31,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x7e,0xea,
                     0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2F1D]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar24_mg5 = LoadResourceString(0x2352,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg5,iVar32,iVar31,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xa6,0xea,
                     0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2F66]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar24_mg6 = LoadResourceString(0x2351,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg6,iVar32,iVar31,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xce,0xea,
                     0x14);
    uVar17 = 2;
    iVar31 = -1;
    iVar32 = 0;
    /* ST_CALLSITE[005C2FB0]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar24_mg7 = LoadResourceString(0x2353,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg7,iVar32,iVar31,uVar17);
    pAVar2 = this_01->field_1C67;

    FUN_006b2330(g_ddxContext_008075A8,&this_01->field_1F80,0x31,0x40407f,pAVar2->field_0004,
                 pAVar2->field_0008,(ushort *)pAVar2);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,this_01->field_1F80,0xffffffff,10,0xb4);
    /* ST_CALLSITE[005C300F]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/SettMapMTy_field_1F7CDArray; source view only; no Ghidra override */
    pSVar11_mg0 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x20c,5);
    this_01->field_1F7C = (SettMapMTy_field_1F7CDArray *)pSVar11_mg0;
    /* ST_CALLSITE[005C303D]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)local_3cc,"%s%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
              &CHAR___007c72d8,PTR_CHAR___0079c0f0);
    /* ST_CALLSITE[005C3054]: CALL dword ptr [0x0085bcec] */
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar7 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;

          iVar5 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar7 = local_cc.previous;
          if (iVar5 == 0) {
            /* ST_CALLSITE[005C30CA]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_3cc,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            /* ST_CALLSITE[005C30E2]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/cMf32; source view only; no Ghidra override */
            pcVar6 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0));
            local_1c = pcVar6;

            local_EAX_1866 = cMf32::RecGetLen(pcVar6,0xc,"TEXTURE_DSCR",0);
            this_01 = local_18;
            if (-1 < local_EAX_1866) {
              local_c = 0;
              if (local_EAX_1866 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              local_EAX_1926 = cMf32::RecGet(pcVar6,0xc,"TEXTURE_DSCR",(int *)&local_10,0);
              if (local_EAX_1926 != nullptr) {
                Library::MSVCRT::FUN_0072e730
                          ((byte *)local_50c.cFileName,nullptr,nullptr,local_718,nullptr
                          );
                switch(local_c & 0xff) {
                case 0:
                  resourceId = 0x4a42;
                  break;
                case 1:
                  resourceId = 0x4a43;
                  break;
                case 2:
                  resourceId = 0x4a44;
                  break;
                case 3:
                  resourceId = 0x4a45;
                  break;
                default:
                  resourceId = 0x4a46;
                }
                pcVar24_mg8 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
                uVar17 = 0xffffffff;
                do {
                  pcVar21 = pcVar24_mg8;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  pcVar21 = pcVar24_mg8 + 1;
                  cVar28 = *pcVar24_mg8;
                  pcVar24_mg8 = pcVar21;
                } while (cVar28 != '\0');
                uVar17 = ~uVar17;
                pcVar21 = pcVar21 + -uVar17;
                pcVar22 = local_614;
                for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar22 = *(undefined4 *)pcVar21;
                  pcVar21 = pcVar21 + 4;
                  pcVar22 = pcVar22 + 4;
                }
                pSVar3 = this_01->field_1F7C;
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *pcVar22 = *pcVar21;
                  pcVar21 = pcVar21 + 1;
                  pcVar22 = pcVar22 + 1;
                }
                local_510 = local_c;

                Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar3,local_718);
                pcVar6 = local_1c;
              }
            }
            cMf32::delete(pcVar6);
            hFindFile = local_14;
            pIVar7 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar7;
        /* ST_CALLSITE[005C3216]: CALL dword ptr [0x0085bcf0] */
        BVar12 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar12 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005C322A]: CALL dword ptr [0x0085bcf4] */
      FindClose(hFindFile);
    }
    dVar4 = this_01->field_1F7C->count;
    if (1 < (int)dVar4) {
      pcVar8 = (cMf32 *)(dVar4 - 1);
      local_1c = pcVar8;
      do {
        local_10 = nullptr;
        uVar17 = 0;
        if (0 < (int)pcVar8) {
          do {
            pSVar3 = this_01->field_1F7C;
            if (uVar17 < pSVar3->count) {
              element_1f7c_2 = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar3, uVar17);
            }
            else {
              element_1f7c_2 = nullptr;
            }
            uVar18 = uVar17 + 1;
            if (uVar18 < pSVar3->count) {
              element_1f7c = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar3, uVar18);
            }
            else {
              element_1f7c = nullptr;
            }
            if (element_1f7c->field_0208 < element_1f7c_2->field_0208) {

              FUN_006b0cd0((RecoveredRecordView_00413AF0_B98DB3AE *)pSVar3,uVar17,uVar18);
              local_10 = (uint *)0x1;
            }
            pcVar8 = local_1c;
            uVar17 = uVar18;
          } while ((int)uVar18 < (int)local_1c);
        }
      } while (local_10 != nullptr);
    }
    if (this_01->field_1F7C->count == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\sett_obj.cpp",0xd7);
    }
    if ((int)(this_01->field_1F7C->count - 1) < *(int *)&this_01->field_0x1f58) {
      *(undefined4 *)&this_01->field_0x1f58 = 0;
    }
  }
  SVar1 = this_01->field_1E26;
  this_01->field_21E1 = 1;
  this_01->field_21E5 = 1;
  if ((((SVar1 == 0xd) || (SVar1 == CASE_F)) || ((SVar1 == 0xe || (SVar1 == CASE_10)))) &&
     (this_01->field_1E27 == 0x11)) {
    this_01->field_21E4 = 1;
    this_01->field_21E6 = 1;
    if (SVar1 != 0xe) {
      this_01->field_21E2 = 1;
    }
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1C6B,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C3362]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1C6B + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1C87 = 0x2fa;
  this_01->field_1C8B = 0x3b;
  this_01->field_1C73 = 0;

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CFC,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C33B7]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1CFC + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D18 = 0x2fa;
  this_01->field_1D1C = 0x11e;
  this_01->field_1D04 = 0;

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D8D,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C3401]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1D8D + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1DA9 = 0x2ff;
  this_01->field_1DAD = 0x5b;
  this_01->field_1D95 = 0;
  local_c = 0x41;
  ppuVar23 = &this_01->field_20F4;
  do {
    iVar32 = 1;
    puVar29 = (ushort *)this_01->field_005D + 0x14;

    local_EAX_2693 = FUN_006b4fe0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pRVar10 = (RecoveredRecord_006B4FA0_DAC3A217 *)

              FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2693,
                           (undefined4 *)puVar29,iVar32);
    *ppuVar23 = (ushort *)pRVar10;
    local_14 = *(HANDLE *)&pRVar10[1].field_0x4;
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)pRVar10->field_000E * *(int *)&pRVar10->field_0x4 + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)&pRVar10->field_0x8);
    }

    puVar11 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar10));
    for (uVar17 = (uint)local_14 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    for (uVar17 = (uint)local_14 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar11 = 0xff;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    puVar29 = *ppuVar23;

    FUN_006b2330(g_ddxContext_008075A8,(uint *)(ppuVar23 + -10),0x31,0x40407f,*(uint *)(puVar29 + 2)
                 ,*(uint *)(puVar29 + 4),puVar29);

    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)ppuVar23[-10],0xffffffff,0x113,local_c);
    ppuVar23 = ppuVar23 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar32 = 1;
  puVar29 = (ushort *)this_01->field_005D + 0x14;

  local_EAX_2876 = FUN_006b4fe0((ushort *)this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pRVar10 = (RecoveredRecord_006B4FA0_DAC3A217 *)

            FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2876,
                         (undefined4 *)puVar29,iVar32);
  this_01->field_1E1E = (AnonPointee_SettMapMTy_1E1E *)pRVar10;
  uVar17 = *(uint *)&pRVar10[1].field_0x4;
  if (uVar17 == 0) {
    uVar17 = ((uint)pRVar10->field_000E * *(int *)&pRVar10->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)&pRVar10->field_0x8;
  }

  puVar11 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar10));
  for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar11 = 0xffffffff;
    puVar11 = puVar11 + 1;
  }
  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined1 *)puVar11 = 0xff;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  SVar1 = this_01->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,5,0xa5,0x14);
    uVar17 = 2;
    iVar30 = -1;
    iVar31 = -3;
    iVar32 = 0xa5;
    pcVar21 = &CHAR_00h_008016a0;
    /* ST_CALLSITE[005C35BD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    puVar15_mg0 = LoadResourceString(0x256d,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005C35CC]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                         g_startSystem_0081176C->field_0034,(uint *)puVar15_mg0,
                                         (uint *)pcVar21,iVar32));

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);
  }

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C3622]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg1 = LoadResourceString(0x1f4b,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3631]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg1,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x1b,0xa5,
                   0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C3688]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg2 = LoadResourceString(0x1f4c,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3697]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg2,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C36EB]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg3 = LoadResourceString(0x1f4d,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C36FA]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg3,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x31,0xa5,
                   0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C3751]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg4 = LoadResourceString(0x1f4e,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3760]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg4,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C37B4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg5 = LoadResourceString(0x1f4f,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C37C3]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg5,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x47,0xa5,
                   0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa5;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C381A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg6 = LoadResourceString(0x1f56,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3829]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg6,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,10,0x5d,100,0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 100;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C3877]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg7 = LoadResourceString(0x1f51,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3886]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg7,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x96,0x5d,0x82,0x14
                  );
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0x82;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C38DD]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg8 = LoadResourceString(0x1f58,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C38EC]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg8,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x140,0x5d,0xa0,
                   0x14);
  uVar17 = 2;
  iVar30 = -1;
  iVar31 = -3;
  iVar32 = 0xa0;
  pcVar21 = &CHAR_00h_008016a0;
  /* ST_CALLSITE[005C3943]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
  puVar15_mg9 = LoadResourceString(0x1f50,g_hINSTANCE_00807618);
  /* ST_CALLSITE[005C3952]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                       g_startSystem_0081176C->field_0034,(uint *)puVar15_mg9,
                                       (uint *)pcVar21,iVar32));

  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);
  SVar1 = this_01->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar17 = 2;
    iVar30 = -1;
    iVar31 = -3;
    iVar32 = 0xe1;
    pcVar21 = &CHAR_00h_008016a0;
    /* ST_CALLSITE[005C39C4]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    puVar15_mgA = LoadResourceString(0x1f54,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005C39D3]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                         g_startSystem_0081176C->field_0034,(uint *)puVar15_mgA,
                                         (uint *)pcVar21,iVar32));

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x73,0xdc,
                     0x14);
    uVar17 = 2;
    iVar30 = -1;
    iVar31 = -3;
    iVar32 = 0xe1;
    pcVar21 = &CHAR_00h_008016a0;
    /* ST_CALLSITE[005C3A2A]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    puVar15_mgB = LoadResourceString(0x1f53,g_hINSTANCE_00807618);
    /* ST_CALLSITE[005C3A39]: CALL 0x0040326f; direct=0040326F thunk_FUN_00540c40; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
    pcVar21 = STPointerBoundaryCast<char *>(thunk_FUN_00540c40((RecoveredRecord_00540C40_D825DD02 *)
                                         g_startSystem_0081176C->field_0034,(uint *)puVar15_mgB,
                                         (uint *)pcVar21,iVar32));

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar21,iVar31,iVar30,uVar17);
  }
  pAVar5 = this_01->field_1E1E;
  puVar26 = &this_01->field_1E22;

  FUN_006b2330(g_ddxContext_008075A8,puVar26,0x31,0x40407f,pAVar5->field_0004,pAVar5->field_0008,
               (ushort *)pAVar5);

  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar26,0xffffffff,0x112,0x149);
  /* ST_CALLSITE[005C3A99]: CALL dword ptr [EAX + 0x18] */
  this_01->CreateCtrls('\x01');
  if (this_01->field_21E2 != '\0') {

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == nullptr) {
      pHVar13 = nullptr;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = nullptr;
      pHVar13->field_000B = nullptr;
      pHVar13->field_000F = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = -1;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_01->field_21EC = pHVar13;
    if (pHVar13 != nullptr) {
      uVar17 = 0;
      cVar28 = '\x01';
      bVar27 = 0x10;
      iVar32 = 1;
      pRVar14 = (RecoveredRecord_005AACB0_2533FD69 *)
                /* ST_CALLSITE[005C3B62]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; source view only; no Ghidra override */
                Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C3B77]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar20 = HoloTy::Init(this_01->field_21EC,CASE_4,10,0xb4,pRVar14,iVar32,bVar27,cVar28,uVar17);
      if (uVar20 != 0) {
        pHVar13 = this_01->field_21EC;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar17 = *(uint *)&this_01->field_21EC->field_0x3;
        if (-1 < (int)uVar17) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar17);
        }
        if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
        }
        if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
        }
        if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E5 == '\0') {
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar26);
  }
  else {

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x205,0x8c,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x149);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == nullptr) {
      pHVar13 = nullptr;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = nullptr;
      pHVar13->field_000B = nullptr;
      pHVar13->field_000F = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = -1;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_01->field_21F4 = pHVar13;
    if (pHVar13 != nullptr) {
      uVar17 = 0;
      cVar28 = '\x01';
      bVar27 = 0x10;
      iVar32 = 1;
      pRVar14 = (RecoveredRecord_005AACB0_2533FD69 *)
                /* ST_CALLSITE[005C3D02]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; source view only; no Ghidra override */
                Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
      /* ST_CALLSITE[005C3D1A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_4970 =
           HoloTy::Init(this_01->field_21F4,CASE_2,0x112,0x149,pRVar14,iVar32,bVar27,cVar28,uVar17);
      if (local_EAX_4970 != 0) {
        pHVar13 = this_01->field_21F4;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar17 = *(uint *)&this_01->field_21F4->field_0x3;
        if (-1 < (int)uVar17) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar17);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar26);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E1 == '\0') {
    if (this_01->field_1C6F != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1CB3,this_01->field_1C6F);
    }
    if (this_01->field_1D00 != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1D44,this_01->field_1D00);
    }
    if (this_01->field_1D91 != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1DD5,this_01->field_1D91);
    }
    puVar26 = this_01->field_20CC;
    iVar32 = 10;
    do {
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar26);
      puVar26 = puVar26 + 1;
      iVar32 = iVar32 + -1;
    } while (iVar32 != 0);
  }
  else {

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x205,0x104,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == nullptr) {
      pHVar13 = nullptr;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = nullptr;
      pHVar13->field_000B = nullptr;
      pHVar13->field_000F = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = -1;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_01->field_21E8 = pHVar13;
    if (pHVar13 != nullptr) {
      uVar17 = 0;
      cVar28 = '\x01';
      bVar27 = 0x10;
      iVar32 = 1;
      pRVar14 = (RecoveredRecord_005AACB0_2533FD69 *)
                /* ST_CALLSITE[005C3E4F]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; source view only; no Ghidra override */
                Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
      /* ST_CALLSITE[005C3E64]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5300 =
           HoloTy::Init(this_01->field_21E8,CASE_2,0x112,0x38,pRVar14,iVar32,bVar27,cVar28,uVar17);
      if (local_EAX_5300 != 0) {
        pHVar13 = this_01->field_21E8;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar17 = *(uint *)&this_01->field_21E8->field_0x3;
        if (-1 < (int)uVar17) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar17);
        }
        if (this_01->field_1C6F != 0xffffffff) {
          FUN_006b3af0((int *)this_01->field_1CB3,this_01->field_1C6F);
        }
        if (this_01->field_1D00 != 0xffffffff) {
          FUN_006b3af0((int *)this_01->field_1D44,this_01->field_1D00);
        }
        if (this_01->field_1D91 != 0xffffffff) {
          FUN_006b3af0((int *)this_01->field_1DD5,this_01->field_1D91);
        }
        puVar26 = this_01->field_20CC;
        iVar32 = 10;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar26);
          puVar26 = puVar26 + 1;
          iVar32 = iVar32 + -1;
        } while (iVar32 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E3 != '\0') {

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == nullptr) {
      pHVar13 = nullptr;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      *(undefined4 *)&pHVar13->field_0x3 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = nullptr;
      pHVar13->field_000B = nullptr;
      pHVar13->field_000F = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = -1;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_01->field_21F0 = pHVar13;
    if (pHVar13 != nullptr) {
      uVar17 = 0;
      cVar28 = '\x01';
      bVar27 = 0x10;
      iVar32 = 1;
      pRVar14 = (RecoveredRecord_005AACB0_2533FD69 *)
                /* ST_CALLSITE[005C404E]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; source view only; no Ghidra override */
                Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
      /* ST_CALLSITE[005C4063]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5811 =
           HoloTy::Init(this_01->field_21F0,CASE_4,10,0xb4,pRVar14,iVar32,bVar27,cVar28,uVar17);
      if (local_EAX_5811 != 0) {
        pHVar13 = this_01->field_21F0;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar17 = *(uint *)&this_01->field_21F0->field_0x3;
        if (-1 < (int)uVar17) {

          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar17);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar11 = &local_2c8;
  memset(puVar11, 0, 0x1fb); /* compiler bulk-zero initialization */
  puVar11 = (undefined4 *)((byte *)puVar11 + 0x1f8);
  iVar32 = 0;
  uVar15 = this_01->field_0008;
  SVar1 = this_01->field_1E26;
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == CASE_10)) || (SVar1 == CASE_F)) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = uVar15;
  }
  pSVar6 = this_01->array_00BC[0xc].field_01DB;
  local_1f8 = uVar15;
  local_1d1 = uVar15;
  if (pSVar6->field_02E6 != nullptr) {
    puVar11 = local_44;
    for (iVar32 = 6; iVar32 != 0; iVar32 = iVar32 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0xffff;
    /* ST_CALLSITE[005C419D]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
    MMsgTy::ShowSprites(pSVar6->field_02E6);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = this_01->field_0008;
    /* ST_CALLSITE[005C41CD]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
    MMsgTy::SetPanel((this_01->array_00BC[0xc].field_01DB)->field_02E6,0,(int)&local_2c8,0,0);
    /* ST_CALLSITE[005C41E2]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel((this_01->array_00BC[0xc].field_01DB)->field_02E6,(int)local_44);
  }
  /* ST_CALLSITE[005C41EB]: CALL 0x004049d5; direct=004049D5 SettMapTy::PaintSettMap */
  SettMapTy::PaintSettMap((SettMapTy *)this_01,'\x01');
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar32 = g_cursorClass_00802A30->field_00C9;
    iVar31 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005C421B]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar31,iVar32);
    /* ST_CALLSITE[005C4230]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    /* ST_CALLSITE[005C426D]: CALL dword ptr [0x0085c070] */
    CFsgsConnection::UpdateGame
              ((CFsgsConnection *)&DAT_00802a90,4,&this_01->array_00BC[0xc].field_0x1df);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

