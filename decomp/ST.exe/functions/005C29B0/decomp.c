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
  int iVar5;
  undefined4 *puVar6;
  DArrayTy *pDVar7;
  SettMapMTy_field_1F84DArray *pSVar8;
  ushort *puVar9;
  SettMapMTy_field_1E2FDArray *pSVar10;
  int uVar22;
  AnonPointee_SettMapMTy_1C67 *pAVar11;
  uint *puVar12;
  SettMapMTy_field_1F7CDArray *pSVar13;
  HANDLE hFindFile;
  cMf32 *pcVar14;
  UINT resourceId;
  BOOL BVar15;
  int local_EAX_2693;
  int *piVar16;
  undefined4 *puVar17;
  int local_EAX_2876;
  AnonPointee_SettMapMTy_1E1E *pAVar18;
  HoloTy *pHVar19;
  undefined4 uVar20;
  DArrayTy *pDVar21;
  uint uVar23;
  uint uVar24;
  SettMapMTy_field_1F7CElement *element_1f7c;
  void *pvVar25;
  char *pcVar26;
  SettMapMTy *this_01;
  char *pcVar27;
  char *pcVar28;
  SettMapMTy_field_1F7CElement *element_1f7c_2;
  uint *puVar30;
  byte bVar31;
  char cVar32;
  int iVar33;
  int iVar34;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_01 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18->field_1E26;
    if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == CASE_F)) ||
       (uVar20 = 0x6947, SVar1 == CASE_10)) {
      uVar20 = 0x694d;
    }
    local_18->field_002D = uVar20;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)local_18->field_0000->field_0000)(&local_18->field_0x1d);
    return;
  }
  local_18->field_1E26 = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                   (uint)g_cursorClass_00802A30->field_001C);
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar6 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_01->field_1F43 = puVar6;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar21 = PTR_0080c502, SVar1 == 2)) {
    pDVar21 = DAT_0080c506;
  }
  if (this_01->field_1C5F < pDVar21->count) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar21 = PTR_0080c502, SVar1 == 2)) {
      pDVar21 = DAT_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pDVar7 = PTR_0080c502, SVar1 == 2)) {
      pDVar7 = DAT_0080c506;
    }
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pvVar25 = (void *)(pDVar7->elementSize * this_01->field_1C5F + (int)pDVar21->data);
  }
  else {
    pvVar25 = (void *)0x0;
  }
  if (pvVar25 == (void *)0x0) {
    DAT_0080995c = 1;
    memset(&DAT_00809960, 0, 0x20); /* compiler bulk-zero initialization */
    iVar5 = this_01->field_1C63;
    pvVar25 = this_01->field_1F43;
    pcVar26 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)((int)pvVar25 + 0x90);
    uVar23 = 0xffffffff;
    pcVar26 = (char *)((int)pvVar25 + 0x4c);
    do {
      pcVar27 = pcVar26;
      if (uVar23 == 0) break;
      uVar23 = uVar23 - 1;
      pcVar27 = pcVar26 + 1;
      cVar32 = *pcVar26;
      pcVar26 = pcVar27;
    } while (cVar32 != '\0');
    uVar23 = ~uVar23;
    pcVar27 = pcVar27 + -uVar23;
    pcVar28 = (char *)&DAT_00809960;
    for (uVar24 = uVar23 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *(undefined4 *)pcVar28 = *(undefined4 *)pcVar27;
      pcVar27 = pcVar27 + 4;
      pcVar28 = pcVar28 + 4;
    }
    pcVar26 = (char *)((int)pvVar25 + 0x70);
    for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *pcVar28 = *pcVar27;
      pcVar27 = pcVar27 + 1;
      pcVar28 = pcVar28 + 1;
    }
    iVar5 = this_01->field_1C63;
    pvVar25 = this_01->field_1F43;
  }
  StartSystemTy::SetObjectives(g_startSystem_0081176C,(int)pvVar25,pcVar26,iVar5);
  pSVar8 = (SettMapMTy_field_1F84DArray *)Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,8,0x60,8);
  this_01->field_1F84 = pSVar8;
  puVar9 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
  g_startSystem_0081176C->field_002C = puVar9;
  this_01->field_005D = g_startSystem_0081176C->field_002C;
  FUN_006bc360(g_startSystem_0081176C->field_002C,local_b18,(int *)0x0);
  this_01->field_1A5B->field_0140 = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_01->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_01->field_1A7F = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_01->field_1A80 = DAT_008087c4._2_1_;
    this_01->field_1A81 = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,"%08x",DAT_0080995c);
    this_01->field_1A82 = local_28;
    this_01->field_1A86 = local_24;
    Library::MSVCRT::_strncpy(&this_01->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
    this_01->field_1C5E = 0;
  }
  this_01->field_2189 = this_01->field_0008;
  this_01->field_2169 = this_01->field_0008;
  this_01->field_218D = 2;
  this_01->field_216D = 2;
  this_01->field_21AD = g_startSystem_0081176C->field_002C;
  this_01->field_21C1 = DAT_008032a8;
  this_01->field_21BD = DAT_008032a4;
  this_01->field_21B5 = 0x1f;
  this_01->field_21B9 = 1;
  this_01->field_21B1 = 0x4d;
  pSVar10 = (SettMapMTy_field_1E2FDArray *)
            Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0xf,0x10c,5);
  this_01->field_1E2F = pSVar10;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,"MM_COMBO",0,1);
  this_01->field_1E2B = puVar9;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806784,CASE_B,"MAP_GEN",0xffffffff,0,1,0,
                            (undefined4 *)0x0);
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1F4F = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"SET_ALLY",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1F4B = puVar9;
  SVar1 = this_01->field_1E26;
  if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_01->field_21E3 = 1;
    iVar5 = 1;
    puVar6 = (undefined4 *)(this_01->field_005D + 0x28);
    uVar22 = FUN_006b4fe0(this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar11 = (AnonPointee_SettMapMTy_1C67 *)
              FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar22,puVar6,
                           iVar5);
    this_01->field_1C67 = pAVar11;
    uVar23 = pAVar11[1].field_0008;
    if (uVar23 == 0) {
      uVar23 = ((uint)*(ushort *)&pAVar11[1].field_0x2 * pAVar11->field_0004 + 0x1f >> 3 &
               0x1ffffffc) * pAVar11->field_0008;
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int *)pAVar11);
    for (uVar24 = uVar23 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,6,0xea,0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2344,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x2e,0xea,
                     0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2345,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x56,0xea,
                     0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2350,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0x7e,0xea,
                     0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2352,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xa6,0xea,
                     0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2351,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1C67,0,0x10,0xce,0xea,
                     0x14);
    uVar23 = 2;
    iVar34 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2353,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar5,iVar34,uVar23);
    pAVar11 = this_01->field_1C67;
    FUN_006b2330(g_ddxContext_008075A8,&this_01->field_1F80,0x31,0x40407f,pAVar11->field_0004,
                 pAVar11->field_0008,(ushort *)pAVar11);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,this_01->field_1F80,0xffffffff,10,0xb4);
    pSVar13 = (SettMapMTy_field_1F7CDArray *)
              Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,5,0x20c,5);
    this_01->field_1F7C = pSVar13;
    wsprintfA((LPSTR)local_3cc,"%s%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
              &DAT_007c72d8,PTR_DAT_0079c0f0);
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
            wsprintfA((LPSTR)local_3cc,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            pcVar14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0);
            local_1c = pcVar14;
            iVar5 = cMf32::RecGetLen(pcVar14,0xc,"TEXTURE_DSCR",0);
            this_01 = local_18;
            if (-1 < iVar5) {
              local_c = 0;
              if (iVar5 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar9 = cMf32::RecGet(pcVar14,0xc,"TEXTURE_DSCR",(int *)&local_10,0);
              if (puVar9 != (ushort *)0x0) {
                Library::MSVCRT::FUN_0072e730
                          ((byte *)local_50c.cFileName,(byte *)0x0,(byte *)0x0,local_718,(byte *)0x0
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
                pcVar26 = LoadResourceString(resourceId,g_module_00807618);
                uVar23 = 0xffffffff;
                do {
                  pcVar27 = pcVar26;
                  if (uVar23 == 0) break;
                  uVar23 = uVar23 - 1;
                  pcVar27 = pcVar26 + 1;
                  cVar32 = *pcVar26;
                  pcVar26 = pcVar27;
                } while (cVar32 != '\0');
                uVar23 = ~uVar23;
                pcVar26 = pcVar27 + -uVar23;
                pcVar27 = local_614;
                for (uVar24 = uVar23 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
                  *(undefined4 *)pcVar27 = *(undefined4 *)pcVar26;
                  pcVar26 = pcVar26 + 4;
                  pcVar27 = pcVar27 + 4;
                }
                pSVar13 = this_01->field_1F7C;
                for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                  *pcVar27 = *pcVar26;
                  pcVar26 = pcVar26 + 1;
                  pcVar27 = pcVar27 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::FUN_006ae1c0(&pSVar13->flags,(undefined4 *)local_718);
                pcVar14 = local_1c;
              }
            }
            cMf32::delete(pcVar14);
            hFindFile = local_14;
            pIVar4 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar4;
        BVar15 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar15 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    dVar2 = this_01->field_1F7C->count;
    if (1 < (int)dVar2) {
      pcVar14 = (cMf32 *)(dVar2 - 1);
      local_1c = pcVar14;
      do {
        local_10 = (uint *)0x0;
        uVar23 = 0;
        if (0 < (int)pcVar14) {
          do {
            pSVar13 = this_01->field_1F7C;
            if (uVar23 < pSVar13->count) {
              element_1f7c_2 = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar13, uVar23);
            }
            else {
              element_1f7c_2 = (SettMapMTy_field_1F7CElement *)0x0;
            }
            uVar24 = uVar23 + 1;
            if (uVar24 < pSVar13->count) {
              element_1f7c = DArrayAt<SettMapMTy_field_1F7CElement>(pSVar13, uVar24);
            }
            else {
              element_1f7c = (SettMapMTy_field_1F7CElement *)0x0;
            }
            if (element_1f7c->field_0208 < element_1f7c_2->field_0208) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pSVar13,uVar23,uVar24);
              local_10 = (uint *)0x1;
            }
            pcVar14 = local_1c;
            uVar23 = uVar24;
          } while ((int)uVar24 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
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
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1C6B + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1C87 = 0x2fa;
  this_01->field_1C8B = 0x3b;
  this_01->field_1C73 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CFC,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1CFC + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D18 = 0x2fa;
  this_01->field_1D1C = 0x11e;
  this_01->field_1D04 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D8D,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1D8D + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1DA9 = 0x2ff;
  this_01->field_1DAD = 0x5b;
  this_01->field_1D95 = 0;
  local_c = 0x41;
  puVar6 = &this_01->field_20F4;
  do {
    iVar5 = 1;
    puVar17 = (undefined4 *)(this_01->field_005D + 0x28);
    local_EAX_2693 = FUN_006b4fe0(this_01->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar16 = (int *)FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_01->field_005D + 0xe),
                                  local_EAX_2693,puVar17,iVar5);
    *puVar6 = piVar16;
    local_14 = (HANDLE)piVar16[5];
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)((int)piVar16 + 0xe) * piVar16[1] + 0x1f >> 3 &
                          0x1ffffffc) * piVar16[2]);
    }
    puVar17 = (undefined4 *)FUN_006b4fa0(piVar16);
    for (uVar23 = (uint)local_14 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
      *puVar17 = 0xffffffff;
      puVar17 = puVar17 + 1;
    }
    for (uVar23 = (uint)local_14 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
      *(undefined1 *)puVar17 = 0xff;
      puVar17 = (undefined4 *)((int)puVar17 + 1);
    }
    puVar9 = (ushort *)*puVar6;
    FUN_006b2330(g_ddxContext_008075A8,puVar6 + -10,0x31,0x40407f,*(uint *)(puVar9 + 2),
                 *(uint *)(puVar9 + 4),puVar9);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,puVar6[-10],0xffffffff,0x113,local_c);
    puVar6 = puVar6 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar5 = 1;
  puVar6 = (undefined4 *)(this_01->field_005D + 0x28);
  local_EAX_2876 = FUN_006b4fe0(this_01->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar18 = (AnonPointee_SettMapMTy_1E1E *)
            FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_01->field_005D + 0xe),local_EAX_2876,
                         puVar6,iVar5);
  this_01->field_1E1E = pAVar18;
  uVar23 = pAVar18[1].field_0008;
  if (uVar23 == 0) {
    uVar23 = ((uint)*(ushort *)&pAVar18[1].field_0x2 * pAVar18->field_0004 + 0x1f >> 3 & 0x1ffffffc)
             * pAVar18->field_0008;
  }
  puVar6 = (undefined4 *)FUN_006b4fa0((int *)pAVar18);
  for (uVar24 = uVar23 >> 2; uVar24 != 0; uVar24 = uVar24 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  SVar1 = this_01->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,5,0xa5,0x14);
    uVar23 = 2;
    iVar33 = -1;
    iVar34 = -3;
    iVar5 = 0xa5;
    puVar30 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x256d,g_module_00807618);
    puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  }
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4b,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x1b,0xa5,
                   0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4c,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4d,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x31,0xa5,
                   0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4e,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4f,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x47,0xa5,
                   0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa5;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f56,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,10,0x5d,100,0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 100;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f51,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x96,0x5d,0x82,0x14
                  );
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0x82;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f58,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x140,0x5d,0xa0,
                   0x14);
  uVar23 = 2;
  iVar33 = -1;
  iVar34 = -3;
  iVar5 = 0xa0;
  puVar30 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f50,g_module_00807618);
  puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
  ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  SVar1 = this_01->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar23 = 2;
    iVar33 = -1;
    iVar34 = -3;
    iVar5 = 0xe1;
    puVar30 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x1f54,g_module_00807618);
    puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_01->field_1E1E,0,0x104,0x73,0xdc,
                     0x14);
    uVar23 = 2;
    iVar33 = -1;
    iVar34 = -3;
    iVar5 = 0xe1;
    puVar30 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x1f53,g_module_00807618);
    puVar12 = thunk_FUN_00540c40(g_startSystem_0081176C->field_0034,puVar12,puVar30,iVar5);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar12,iVar34,iVar33,uVar23);
  }
  pAVar18 = this_01->field_1E1E;
  puVar6 = &this_01->field_1E22;
  FUN_006b2330(g_ddxContext_008075A8,puVar6,0x31,0x40407f,pAVar18->field_0004,pAVar18->field_0008,
               (ushort *)pAVar18);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,0x112,0x149);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this_01->field_0000->field_0018)(1);
  if (this_01->field_21E2 != '\0') {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 (ushort *)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar19 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar19 == (HoloTy *)0x0) {
      pHVar19 = (HoloTy *)0x0;
    }
    else {
      pHVar19->field_0002 = 1;
      pHVar19->field_0000 = 0;
      pHVar19->field_0003 = -1;
      pHVar19->field_0001 = CASE_2;
      pHVar19->field_0007 = 0;
      pHVar19->field_000B = (void *)0x0;
      pHVar19->field_000F = 0;
      pHVar19->field_001B = 1;
      pHVar19->field_0013 = 1;
      pHVar19->field_0017 = -1;
      pHVar19->field_0027 = 0;
      pHVar19->field_0023 = 0;
      pHVar19->field_002F = 1;
      pHVar19->field_002B = 1;
    }
    this_01->field_21EC = pHVar19;
    if (pHVar19 != (HoloTy *)0x0) {
      uVar23 = 0;
      cVar32 = '\x01';
      bVar31 = 0x10;
      iVar34 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      uVar23 = HoloTy::Init(this_01->field_21EC,CASE_4,10,0xb4,iVar5,iVar34,bVar31,cVar32,uVar23);
      if (uVar23 != 0) {
        pHVar19 = this_01->field_21EC;
        pHVar19->field_0002 = 1;
        pHVar19->field_0017 = pHVar19->field_0013;
        uVar23 = this_01->field_21EC->field_0003;
        if (-1 < (int)uVar23) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar23);
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
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
  }
  else {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x205,0x8c,
                 (ushort *)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x149);
    pHVar19 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar19 == (HoloTy *)0x0) {
      pHVar19 = (HoloTy *)0x0;
    }
    else {
      pHVar19->field_0002 = 1;
      pHVar19->field_0000 = 0;
      pHVar19->field_0003 = -1;
      pHVar19->field_0001 = CASE_2;
      pHVar19->field_0007 = 0;
      pHVar19->field_000B = (void *)0x0;
      pHVar19->field_000F = 0;
      pHVar19->field_001B = 1;
      pHVar19->field_0013 = 1;
      pHVar19->field_0017 = -1;
      pHVar19->field_0027 = 0;
      pHVar19->field_0023 = 0;
      pHVar19->field_002F = 1;
      pHVar19->field_002B = 1;
    }
    this_01->field_21F4 = pHVar19;
    if (pHVar19 != (HoloTy *)0x0) {
      uVar23 = 0;
      cVar32 = '\x01';
      bVar31 = 0x10;
      iVar34 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x149,0x205,0x8c);
      uVar23 = HoloTy::Init(this_01->field_21F4,CASE_2,0x112,0x149,iVar5,iVar34,bVar31,cVar32,uVar23
                           );
      if (uVar23 != 0) {
        pHVar19 = this_01->field_21F4;
        pHVar19->field_0002 = 1;
        pHVar19->field_0017 = pHVar19->field_0013;
        uVar23 = this_01->field_21F4->field_0003;
        if (-1 < (int)uVar23) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar23);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
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
    puVar12 = this_01->field_20CC;
    iVar5 = 10;
    do {
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
      puVar12 = puVar12 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x205,0x104,
                 (ushort *)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar19 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar19 == (HoloTy *)0x0) {
      pHVar19 = (HoloTy *)0x0;
    }
    else {
      pHVar19->field_0002 = 1;
      pHVar19->field_0000 = 0;
      pHVar19->field_0003 = -1;
      pHVar19->field_0001 = CASE_2;
      pHVar19->field_0007 = 0;
      pHVar19->field_000B = (void *)0x0;
      pHVar19->field_000F = 0;
      pHVar19->field_001B = 1;
      pHVar19->field_0013 = 1;
      pHVar19->field_0017 = -1;
      pHVar19->field_0027 = 0;
      pHVar19->field_0023 = 0;
      pHVar19->field_002F = 1;
      pHVar19->field_002B = 1;
    }
    this_01->field_21E8 = pHVar19;
    if (pHVar19 != (HoloTy *)0x0) {
      uVar23 = 0;
      cVar32 = '\x01';
      bVar31 = 0x10;
      iVar34 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x205,0x104);
      uVar23 = HoloTy::Init(this_01->field_21E8,CASE_2,0x112,0x38,iVar5,iVar34,bVar31,cVar32,uVar23);
      if (uVar23 != 0) {
        pHVar19 = this_01->field_21E8;
        pHVar19->field_0002 = 1;
        pHVar19->field_0017 = pHVar19->field_0013;
        uVar23 = this_01->field_21E8->field_0003;
        if (-1 < (int)uVar23) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar23);
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
        puVar12 = this_01->field_20CC;
        iVar5 = 10;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
          puVar12 = puVar12 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_21E3 != '\0') {
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0xf9,0x123,
                 (ushort *)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
    pHVar19 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar19 == (HoloTy *)0x0) {
      pHVar19 = (HoloTy *)0x0;
    }
    else {
      pHVar19->field_0002 = 1;
      pHVar19->field_0000 = 0;
      pHVar19->field_0003 = -1;
      pHVar19->field_0001 = CASE_2;
      pHVar19->field_0007 = 0;
      pHVar19->field_000B = (void *)0x0;
      pHVar19->field_000F = 0;
      pHVar19->field_001B = 1;
      pHVar19->field_0013 = 1;
      pHVar19->field_0017 = -1;
      pHVar19->field_0027 = 0;
      pHVar19->field_0023 = 0;
      pHVar19->field_002F = 1;
      pHVar19->field_002B = 1;
    }
    this_01->field_21F0 = pHVar19;
    if (pHVar19 != (HoloTy *)0x0) {
      uVar23 = 0;
      cVar32 = '\x01';
      bVar31 = 0x10;
      iVar34 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x123);
      uVar23 = HoloTy::Init(this_01->field_21F0,CASE_4,10,0xb4,iVar5,iVar34,bVar31,cVar32,uVar23);
      if (uVar23 != 0) {
        pHVar19 = this_01->field_21F0;
        pHVar19->field_0002 = 1;
        pHVar19->field_0017 = pHVar19->field_0013;
        uVar23 = this_01->field_21F0->field_0003;
        if (-1 < (int)uVar23) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar23);
        }
        FUN_006b3af0((int *)g_ddxContext_008075A8,this_01->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar6 = &local_2c8;
  memset(puVar6, 0, 0x1f8); /* compiler bulk-zero initialization */
  puVar6 = (undefined4 *)((byte *)puVar6 + 0x1f8);
  iVar5 = 0;
  uVar20 = this_01->field_0008;
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
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
    local_294 = uVar20;
  }
  pSVar3 = this_01->field_1A5B;
  local_1f8 = uVar20;
  local_1d1 = uVar20;
  if (pSVar3->field_02E6 != (MMsgTy *)0x0) {
    puVar6 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0xffff;
    MMsgTy::ShowSprites(pSVar3->field_02E6);
    this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
    MMsgTy::SetPanel(this_01->field_1A5B->field_02E6,0,(int)&local_2c8,0,0);
    MMsgTy::StatePanel(this_01->field_1A5B->field_02E6,(int)local_44);
  }
  SettMapTy::PaintSettMap((SettMapTy *)this_01,'\x01');
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    iVar5 = g_cursorClass_00802A30->field_00C9;
    iVar34 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar34,iVar5);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_01->field_0x1a5f);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

