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
  dword dVar2;
  StartSystemTy *pSVar3;
  CursorClassTy *this_00;
  InternalExceptionFrame *pIVar4;
  int local_EAX_44;
  cMf32 *pcVar5;
  DArrayTy *pDVar6;
  SettMapMTy_field_1F84DArray *pSVar7;
  ushort *local_EAX_481;
  SettMapMTy_field_1E2FDArray *pSVar8;
  ushort *puVar9;
  ushort *local_EAX_939;
  ushort *local_EAX_977;
  int uVar22;
  AnonPointee_SettMapMTy_1C67 *pAVar9;
  uint *puVar10;
  char *pcVar24_mg3;
  char *pcVar24_mg4;
  char *pcVar24_mg5;
  char *pcVar24_mg6;
  char *pcVar24_mg7;
  SettMapMTy_field_1F7CDArray *pSVar11;
  HANDLE hFindFile;
  int iVar5;
  cMf32 *pcVar6;
  int local_EAX_1866;
  ushort *local_EAX_1926;
  UINT resourceId;
  char *pcVar24_mg8;
  BOOL BVar12;
  int local_EAX_2693;
  ushort *puVar13;
  int local_EAX_2876;
  AnonPointee_SettMapMTy_1E1E *pAVar14;
  uint *puVar15;
  HoloTy *pHVar16;
  uint uVar20;
  uint local_EAX_4970;
  uint local_EAX_5300;
  uint local_EAX_5811;
  uint uVar17;
  DArrayTy *pDVar18;
  uint uVar19;
  uint uVar21;
  SettMapMTy_field_1F7CElement *element_1f7c;
  void *pvVar23;
  char *pcVar24;
  SettMapMTy *this_01;
  char *pcVar25;
  ushort **ppuVar26;
  char *pcVar27;
  SettMapMTy_field_1F7CElement *element_1f7c_2;
  byte bVar29;
  char cVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined4 local_b18 [256];
  byte local_718 [260];
  char local_614 [260];
  uint local_510;
  _WIN32_FIND_DATAA local_50c;
  uint local_3cc [65];
  undefined4 local_2c8;
  undefined4 local_2a1;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_205;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1de;
  undefined4 local_1d1;
  undefined4 local_1cd;
  int local_1c9;
  InternalExceptionFrame local_cc;
  InternalExceptionFrame local_88;
  undefined4 local_44 [7];
  undefined4 local_28;
  undefined4 local_24;
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
       (uVar17 = 0x6947, SVar1 == CASE_10)) {
      uVar17 = 0x694d;
    }
    local_18->field_002D = uVar17;
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
  pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_01->field_1F43 = pcVar5;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar18 = PTR_0080c502, SVar1 == 2)) {
    pDVar18 = (DArrayTy *)PTR_0080c506;
  }
  if (this_01->field_1C5F < pDVar18->count) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar18 = PTR_0080c502, SVar1 == 2)) {
      pDVar18 = (DArrayTy *)PTR_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar6 = PTR_0080c502, SVar1 == 2)) {
      pDVar6 = (DArrayTy *)PTR_0080c506;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pvVar23 = (void *)(pDVar6->elementSize * this_01->field_1C5F + (int)pDVar18->data);
  }
  else {
    pvVar23 = nullptr;
  }
  if (pvVar23 == nullptr) {
    DAT_0080995c = 1;
    memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
    iVar33 = this_01->field_1C63;
    pcVar5 = this_01->field_1F43;
    pcVar24 = nullptr;
  }
  else {
    DAT_0080995c = STField<undefined4>(pvVar23,0x90);
    uVar19 = 0xffffffff;
    pcVar24 = (char *)((int)pvVar23 + 0x4c);
    do {
      pcVar25 = pcVar24;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar25 = pcVar24 + 1;
      cVar30 = *pcVar24;
      pcVar24 = pcVar25;
    } while (cVar30 != '\0');
    uVar19 = ~uVar19;
    pcVar25 = pcVar25 + -uVar19;
    pcVar27 = &DAT_00809960;
    for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *(undefined4 *)pcVar27 = *(undefined4 *)pcVar25;
      pcVar25 = pcVar25 + 4;
      pcVar27 = pcVar27 + 4;
    }
    pcVar24 = (char *)((int)pvVar23 + 0x70);
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar27 = *pcVar25;
      pcVar25 = pcVar25 + 1;
      pcVar27 = pcVar27 + 1;
    }
    iVar33 = this_01->field_1C63;
    pcVar5 = this_01->field_1F43;
  }
  /* ST_CALLSITE[005C2B69]: CALL 0x00402bf3; direct=00402BF3 StartSystemTy::SetObjectives */
  StartSystemTy::SetObjectives(g_startSystem_0081176C,(int)pcVar5,pcVar24,iVar33);
  pSVar7 = (SettMapMTy_field_1F84DArray *)Library::DKW::TBL::DArrayCreate(nullptr,8,0x60,8);
  this_01->field_1F84 = pSVar7;
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
  pSVar8 = (SettMapMTy_field_1E2FDArray *)
           Library::DKW::TBL::DArrayCreate(nullptr,0xf,0x10c,5);
  this_01->field_1E2F = pSVar8;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,"MM_COMBO",0,1);
  this_01->field_1E2B = puVar9;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
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
    iVar33 = 1;
    puVar13 = (ushort *)this_01->field_005D + 0x14;
    uVar22 = FUN_006b4fe0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar9 = (AnonPointee_SettMapMTy_1C67 *)
             FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar22,
                          (undefined4 *)puVar13,iVar33);
    this_01->field_1C67 = pAVar9;
    uVar19 = pAVar9[1].field_0008;
    if (uVar19 == 0) {
      uVar19 = ((uint)*(ushort *)&pAVar9[1].field_0x2 * pAVar9->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * pAVar9->field_0008;
    }
    puVar10 = (undefined4 *)FUN_006b4fa0((int *)pAVar9);
    for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,6,0xea,0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24 = LoadResourceString(0x2344,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar33,iVar32,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x2e,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg3 = LoadResourceString(0x2345,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg3,iVar33,iVar32,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x56,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg4 = LoadResourceString(0x2350,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg4,iVar33,iVar32,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x7e,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg5 = LoadResourceString(0x2352,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg5,iVar33,iVar32,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xa6,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg6 = LoadResourceString(0x2351,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg6,iVar33,iVar32,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xce,0xea,
                     0x14);
    uVar19 = 2;
    iVar32 = -1;
    iVar33 = 0;
    pcVar24_mg7 = LoadResourceString(0x2353,g_hINSTANCE_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24_mg7,iVar33,iVar32,uVar19);
    pAVar9 = this_01->field_1C67;
    FUN_006b2330(g_ddxContext_008075A8,&this_01->field_1F80,0x31,0x40407f,pAVar9->field_0004,
                 pAVar9->field_0008,(ushort *)pAVar9);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,this_01->field_1F80,0xffffffff,10,0xb4);
    pSVar11 = (SettMapMTy_field_1F7CDArray *)
              Library::DKW::TBL::DArrayCreate(nullptr,5,0x20c,5);
    this_01->field_1F7C = pSVar11;
    /* ST_CALLSITE[005C303D]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)local_3cc,"%s%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
              &CHAR___007c72d8,PTR_CHAR___0079c0f0);
    /* ST_CALLSITE[005C3054]: CALL dword ptr [0x0085bcec] */
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar4 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;
          iVar5 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar4 = local_cc.previous;
          if (iVar5 == 0) {
            /* ST_CALLSITE[005C30CA]: CALL dword ptr [0x0085bde8] */
            wsprintfA((LPSTR)local_3cc,"%s%s%s",&CHAR_00h_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0);
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
                uVar19 = 0xffffffff;
                do {
                  pcVar24 = pcVar24_mg8;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar24 = pcVar24_mg8 + 1;
                  cVar30 = *pcVar24_mg8;
                  pcVar24_mg8 = pcVar24;
                } while (cVar30 != '\0');
                uVar19 = ~uVar19;
                pcVar24 = pcVar24 + -uVar19;
                pcVar25 = local_614;
                for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *(undefined4 *)pcVar25 = *(undefined4 *)pcVar24;
                  pcVar24 = pcVar24 + 4;
                  pcVar25 = pcVar25 + 4;
                }
                pSVar11 = this_01->field_1F7C;
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar25 = *pcVar24;
                  pcVar24 = pcVar24 + 1;
                  pcVar25 = pcVar25 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::DArrayAppend((DArrayTy *)pSVar11,local_718);
                pcVar6 = local_1c;
              }
            }
            cMf32::delete(pcVar6);
            hFindFile = local_14;
            pIVar4 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar4;
        /* ST_CALLSITE[005C3216]: CALL dword ptr [0x0085bcf0] */
        BVar12 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar12 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005C322A]: CALL dword ptr [0x0085bcf4] */
      FindClose(hFindFile);
    }
    dVar2 = this_01->field_1F7C->count;
    if (1 < (int)dVar2) {
      pcVar5 = (cMf32 *)(dVar2 - 1);
      local_1c = pcVar5;
      do {
        local_10 = nullptr;
        uVar19 = 0;
        if (0 < (int)pcVar5) {
          do {
            pSVar11 = this_01->field_1F7C;
            if (uVar19 < pSVar11->count) {
              element_1f7c_2 = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar11, uVar19);
            }
            else {
              element_1f7c_2 = nullptr;
            }
            uVar21 = uVar19 + 1;
            if (uVar21 < pSVar11->count) {
              element_1f7c = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar11, uVar21);
            }
            else {
              element_1f7c = nullptr;
            }
            if (element_1f7c->field_0208 < element_1f7c_2->field_0208) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pSVar11,uVar19,uVar21);
              local_10 = (uint *)0x1;
            }
            pcVar5 = local_1c;
            uVar19 = uVar21;
          } while ((int)uVar21 < (int)local_1c);
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
  /* ST_CALLSITE[005C3362]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1C6B + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1C87 = 0x2fa;
  this_01->field_1C8B = 0x3b;
  this_01->field_1C73 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CFC,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C33B7]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1CFC + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D18 = 0x2fa;
  this_01->field_1D1C = 0x11e;
  this_01->field_1D04 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D8D,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005C3401]: CALL dword ptr [EDX + 0x4] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1D8D + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1DA9 = 0x2ff;
  this_01->field_1DAD = 0x5b;
  this_01->field_1D95 = 0;
  local_c = 0x41;
  ppuVar26 = &this_01->field_20F4;
  do {
    iVar33 = 1;
    puVar13 = (ushort *)this_01->field_005D + 0x14;
    local_EAX_2693 = FUN_006b4fe0((ushort *)this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar13 = (ushort *)
              FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2693,
                           (undefined4 *)puVar13,iVar33);
    *ppuVar26 = puVar13;
    local_14 = *(HANDLE *)(puVar13 + 10);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)puVar13[7] * *(int *)(puVar13 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar13 + 4));
    }
    puVar10 = (undefined4 *)FUN_006b4fa0((int *)puVar13);
    for (uVar19 = (uint)local_14 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    for (uVar19 = (uint)local_14 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *(undefined1 *)puVar10 = 0xff;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    puVar13 = *ppuVar26;
    FUN_006b2330(g_ddxContext_008075A8,(uint *)(ppuVar26 + -10),0x31,0x40407f,*(uint *)(puVar13 + 2)
                 ,*(uint *)(puVar13 + 4),puVar13);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)ppuVar26[-10],0xffffffff,0x113,local_c);
    ppuVar26 = ppuVar26 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar33 = 1;
  puVar13 = (ushort *)this_01->field_005D + 0x14;
  local_EAX_2876 = FUN_006b4fe0((ushort *)this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar14 = (AnonPointee_SettMapMTy_1E1E *)
            FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2876,
                         (undefined4 *)puVar13,iVar33);
  this_01->field_1E1E = pAVar14;
  uVar19 = pAVar14[1].field_0008;
  if (uVar19 == 0) {
    uVar19 = ((uint)*(ushort *)&pAVar14[1].field_0x2 * pAVar14->field_0004 + 0x1f >> 3 & 0x1ffffffc)
             * pAVar14->field_0008;
  }
  puVar10 = (undefined4 *)FUN_006b4fa0((int *)pAVar14);
  for (uVar21 = uVar19 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
    *puVar10 = 0xffffffff;
    puVar10 = puVar10 + 1;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *(undefined1 *)puVar10 = 0xff;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  SVar1 = this_01->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,5,0xa5,0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xa5;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)LoadResourceString(0x256d,g_hINSTANCE_00807618);
    pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  }
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f4b,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x1b,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f4c,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f4d,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x31,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f4e,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f4f,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x47,0xa5,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa5;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f56,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,10,0x5d,100,0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 100;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f51,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x96,0x5d,0x82,0x14
                  );
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0x82;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f58,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x140,0x5d,0xa0,
                   0x14);
  uVar19 = 2;
  iVar31 = -1;
  iVar32 = -3;
  iVar33 = 0xa0;
  pcVar24 = &CHAR_00h_008016a0;
  puVar15 = (uint *)LoadResourceString(0x1f50,g_hINSTANCE_00807618);
  pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                       iVar33);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  SVar1 = this_01->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xe1;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)LoadResourceString(0x1f54,g_hINSTANCE_00807618);
    pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x73,0xdc,
                     0x14);
    uVar19 = 2;
    iVar31 = -1;
    iVar32 = -3;
    iVar33 = 0xe1;
    pcVar24 = &CHAR_00h_008016a0;
    puVar15 = (uint *)LoadResourceString(0x1f53,g_hINSTANCE_00807618);
    pcVar24 = (char *)thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar15,(uint *)pcVar24,
                                         iVar33);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,pcVar24,iVar32,iVar31,uVar19);
  }
  pAVar14 = this_01->field_1E1E;
  puVar15 = &this_01->field_1E22;
  FUN_006b2330(g_ddxContext_008075A8,puVar15,0x31,0x40407f,pAVar14->field_0004,pAVar14->field_0008,
               (ushort *)pAVar14);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0x112,0x149);
  /* ST_CALLSITE[005C3A99]: CALL dword ptr [EAX + 0x18] */
  this_01->CreateCtrls('\x01');
  if (this_01->field_21E2 != '\0') {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar16 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21EC = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005C3B77]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar20 = HoloTy::Init(this_01->field_21EC,CASE_4,10,0xb4,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (uVar20 != 0) {
        pHVar16 = this_01->field_21EC;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21EC->field_0x3;
        if (-1 < (int)uVar19) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
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
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
  }
  else {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x205,0x8c,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x149);
    pHVar16 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21F4 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
      /* ST_CALLSITE[005C3D1A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_4970 =
           HoloTy::Init(this_01->field_21F4,CASE_2,0x112,0x149,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_4970 != 0) {
        pHVar16 = this_01->field_21F4;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21F4->field_0x3;
        if (-1 < (int)uVar19) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
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
    puVar15 = this_01->field_20CC;
    iVar33 = 10;
    do {
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
      puVar15 = puVar15 + 1;
      iVar33 = iVar33 + -1;
    } while (iVar33 != 0);
  }
  else {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x205,0x104,
                 (ushort *)&(this_01->array_00BC[0xc].field_01DB)->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar16 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21E8 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
      /* ST_CALLSITE[005C3E64]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5300 =
           HoloTy::Init(this_01->field_21E8,CASE_2,0x112,0x38,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_5300 != 0) {
        pHVar16 = this_01->field_21E8;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21E8->field_0x3;
        if (-1 < (int)uVar19) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
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
        puVar15 = this_01->field_20CC;
        iVar33 = 10;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
          puVar15 = puVar15 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
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
    pHVar16 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar16 == nullptr) {
      pHVar16 = nullptr;
    }
    else {
      pHVar16->field_0002 = 1;
      pHVar16->field_0000 = 0;
      *(undefined4 *)&pHVar16->field_0x3 = 0xffffffff;
      pHVar16->field_0001 = CASE_2;
      pHVar16->field_0007 = nullptr;
      pHVar16->field_000B = nullptr;
      pHVar16->field_000F = 0;
      *(undefined4 *)&pHVar16->field_0x1b = 1;
      pHVar16->field_0013 = 1;
      pHVar16->field_0017 = -1;
      pHVar16->field_0027 = 0;
      pHVar16->field_0023 = 0;
      pHVar16->field_002F = 1;
      pHVar16->field_002B = 1;
    }
    this_01->field_21F0 = pHVar16;
    if (pHVar16 != nullptr) {
      uVar19 = 0;
      cVar30 = '\x01';
      bVar29 = 0x10;
      iVar32 = 1;
      iVar33 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
      /* ST_CALLSITE[005C4063]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_5811 =
           HoloTy::Init(this_01->field_21F0,CASE_4,10,0xb4,iVar33,iVar32,bVar29,cVar30,uVar19);
      if (local_EAX_5811 != 0) {
        pHVar16 = this_01->field_21F0;
        pHVar16->field_0002 = 1;
        pHVar16->field_0017 = pHVar16->field_0013;
        uVar19 = *(uint *)&this_01->field_21F0->field_0x3;
        if (-1 < (int)uVar19) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar19);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar10 = &local_2c8;
  memset(puVar10, 0, 0x1fb); /* compiler bulk-zero initialization */
  puVar10 = (undefined4 *)((byte *)puVar10 + 0x1f8);
  iVar33 = 0;
  uVar17 = this_01->field_0008;
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
    local_294 = uVar17;
  }
  pSVar3 = this_01->array_00BC[0xc].field_01DB;
  local_1f8 = uVar17;
  local_1d1 = uVar17;
  if (pSVar3->field_02E6 != nullptr) {
    puVar10 = local_44;
    for (iVar33 = 6; iVar33 != 0; iVar33 = iVar33 + -1) {
      *puVar10 = 0xffffffff;
      puVar10 = puVar10 + 1;
    }
    *(undefined2 *)puVar10 = 0xffff;
    /* ST_CALLSITE[005C419D]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
    MMsgTy::ShowSprites(pSVar3->field_02E6);
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
    iVar33 = g_cursorClass_00802A30->field_00C9;
    iVar32 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[005C421B]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar32,iVar33);
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

