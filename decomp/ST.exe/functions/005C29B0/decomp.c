
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 215 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005B6730.
   Evidence: incoming_receiver_captures=1; receiver_accesses=151; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=2; single_call_corroborated_by_receiver_family */

void __thiscall
SubmarineTitans::Recovered::HiddenThis::AnonReceiver_005B6730::FUN_005c29b0
          (AnonReceiver_005B6730 *this,char param_1)

{
  SettMapTy_field_1E26State SVar1;
  dword dVar2;
  MMMObjTy *pMVar3;
  CursorClassTy *this_00;
  InternalExceptionFrame *pIVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar7;
  DArrayTy *pDVar8;
  ccFntTy *pcVar9;
  AnonPointee_SettMapTy_1E2B *pAVar10;
  ushort *puVar11;
  uint *puVar12;
  HANDLE hFindFile;
  cMf32 *this_01;
  UINT resourceId;
  BOOL BVar13;
  cMf32 *pcVar14;
  HoloTy *pHVar15;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar16;
  uint uVar17;
  uint uVar18;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  void *pvVar19;
  char *pcVar20;
  SettMapTy *this_02;
  char *pcVar21;
  char *pcVar22;
  void *pvVar23;
  uint *puVar24;
  char cVar25;
  int iVar26;
  int iVar27;
  undefined4 uVar28;
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
  SettMapTy *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;

  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  local_18 = (SettMapTy *)this;
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0);
  this_02 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18->field_1E26;
    if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == 0xf)) || (uVar28 = 0x6947, SVar1 == 0x10))
    {
      uVar28 = 0x694d;
    }
    local_18->field_002D = uVar28;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)local_18->field_0000)(&local_18->field_0x1d);
    return;
  }
  local_18->field_1E26 = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar6 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_02->field_1F43 = puVar6;
  SVar1 = this_02->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar16 = PTR_0080c502, SVar1 == 2)) {
    pAVar16 = DAT_0080c506;
  }
  if (this_02->field_1C5F < (uint)pAVar16->field_000C) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar16 = PTR_0080c502, SVar1 == 2)) {
      pAVar16 = DAT_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar7 = PTR_0080c502, SVar1 == 2)) {
      pAVar7 = DAT_0080c506;
    }
    iVar5 = pAVar7->field_0008 * this_02->field_1C5F + pAVar16->field_001C;
  }
  else {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    DAT_0080995c = 1;
    puVar6 = &DAT_00809960;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar5 = this_02->field_1C63;
    iVar27 = this_02->field_1F43;
    pcVar20 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar5 + 0x90);
    uVar17 = 0xffffffff;
    pcVar20 = (char *)(iVar5 + 0x4c);
    do {
      pcVar21 = pcVar20;
      if (uVar17 == 0) break;
      uVar17 = uVar17 - 1;
      pcVar21 = pcVar20 + 1;
      cVar25 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar25 != '\0');
    uVar17 = ~uVar17;
    pcVar21 = pcVar21 + -uVar17;
    pcVar22 = (char *)&DAT_00809960;
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *(undefined4 *)pcVar22 = *(undefined4 *)pcVar21;
      pcVar21 = pcVar21 + 4;
      pcVar22 = pcVar22 + 4;
    }
    pcVar20 = (char *)(iVar5 + 0x70);
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *pcVar22 = *pcVar21;
      pcVar21 = pcVar21 + 1;
      pcVar22 = pcVar22 + 1;
    }
    iVar5 = this_02->field_1C63;
    iVar27 = this_02->field_1F43;
  }
  StartSystemTy::SetObjectives(PTR_0081176c,iVar27,pcVar20,iVar5);
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  this_02->field_1F84 = pDVar8;
  pcVar9 = (ccFntTy *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
  PTR_0081176c->field_002C = pcVar9;
  this_02->field_005D = PTR_0081176c->field_002C;
  FUN_006bc360((ushort *)PTR_0081176c->field_002C,local_b18,(int *)0x0);
  *(undefined4 *)(this_02->field_1A5B + 0x140) = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,(undefined4 *)(this_02->field_1A5B + 0x144));
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_02->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_02->field_1A7F = 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    this_02->field_1A80 = DAT_008087c4._2_1_;
    this_02->field_1A81 = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,"%08x",DAT_0080995c);
    this_02->field_1A82 = local_28;
    this_02->field_1A86 = local_24;
    Library::MSVCRT::_strncpy(&this_02->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
    this_02->field_1C5E = 0;
  }
  *(undefined4 *)&this_02->field_0x2189 = this_02->field_0008;
  *(undefined4 *)&this_02->field_0x2169 = this_02->field_0008;
  *(undefined4 *)&this_02->field_0x218d = 2;
  *(undefined4 *)&this_02->field_0x216d = 2;
  *(ccFntTy **)&this_02->field_0x21ad = PTR_0081176c->field_002C;
  *(undefined4 *)&this_02->field_0x21c1 = DAT_008032a8;
  *(undefined4 *)&this_02->field_0x21bd = DAT_008032a4;
  *(undefined4 *)&this_02->field_0x21b5 = 0x1f;
  *(undefined4 *)&this_02->field_0x21b9 = 1;
  *(undefined4 *)&this_02->field_0x21b1 = 0x4d;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  this_02->field_1E2F = pDVar8;
  pAVar10 = (AnonPointee_SettMapTy_1E2B *)
            Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,"MM_COMBO",0,1);
  this_02->field_1E2B = pAVar10;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806784,CASE_B,"MAP_GEN",0xffffffff,0,1,0,
                            (undefined4 *)0x0);
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_02->field_1F4F = puVar11;
  puVar11 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806784,CASE_B,"SET_ALLY",0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)&this_02->field_0x1f4b = puVar11;
  SVar1 = this_02->field_1E26;
  if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_02->field_0x21e3 = 1;
    iVar5 = 1;
    puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar17 = FUN_006b4fe0(this_02->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar5 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar17,puVar6,iVar5
                        );
    this_02->field_1C67 = iVar5;
    uVar17 = *(uint *)(iVar5 + 0x14);
    if (uVar17 == 0) {
      uVar17 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar5 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,6,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2344,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x2e,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2345,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x56,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2350,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x7e,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2352,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0xa6,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2351,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0xce,0xea,0x14);
    uVar28 = 2;
    iVar27 = -1;
    iVar5 = 0;
    puVar12 = (uint *)LoadResourceString(0x2353,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar5,iVar27,uVar28);
    uVar17 = this_02->field_1C67;
    FUN_006b2330((uint)DAT_008075a8,&this_02->field_1F80,0x31,0x40407f,*(uint *)(uVar17 + 4),
                 *(uint *)(uVar17 + 8),uVar17);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,this_02->field_1F80,0xffffffff,10,0xb4);
    pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x20c,5);
    this_02->field_1F7C = pDVar8;
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
          this_02 = local_18;
          hFindFile = local_14;
          pIVar4 = local_cc.previous;
          if (iVar5 == 0) {
            wsprintfA((LPSTR)local_3cc,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0)
            ;
            local_1c = this_01;
            iVar5 = cMf32::RecGetLen(this_01,0xc,"TEXTURE_DSCR",0);
            this_02 = local_18;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            pcVar14 = extraout_ECX;
            if (-1 < iVar5) {
              local_c = 0;
              if (iVar5 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar11 = cMf32::RecGet(this_01,0xc,"TEXTURE_DSCR",(int *)&local_10,0);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              pcVar14 = extraout_ECX_00;
              if (puVar11 != (ushort *)0x0) {
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
                pcVar20 = LoadResourceString(resourceId,HINSTANCE_00807618);
                uVar17 = 0xffffffff;
                do {
                  pcVar21 = pcVar20;
                  if (uVar17 == 0) break;
                  uVar17 = uVar17 - 1;
                  pcVar21 = pcVar20 + 1;
                  cVar25 = *pcVar20;
                  pcVar20 = pcVar21;
                } while (cVar25 != '\0');
                uVar17 = ~uVar17;
                pcVar20 = pcVar21 + -uVar17;
                pcVar21 = local_614;
                for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)pcVar21 = *(undefined4 *)pcVar20;
                  pcVar20 = pcVar20 + 4;
                  pcVar21 = pcVar21 + 4;
                }
                pDVar8 = this_02->field_1F7C;
                for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *pcVar21 = *pcVar20;
                  pcVar20 = pcVar20 + 1;
                  pcVar21 = pcVar21 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,(undefined4 *)local_718);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                pcVar14 = extraout_ECX_01;
                this_01 = local_1c;
              }
            }
            cMf32::delete(pcVar14,this_01);
            hFindFile = local_14;
            pIVar4 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar4;
        BVar13 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar13 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    dVar2 = this_02->field_1F7C->count;
    if (1 < (int)dVar2) {
      pcVar14 = (cMf32 *)(dVar2 - 1);
      local_1c = pcVar14;
      do {
        local_10 = (uint *)0x0;
        uVar17 = 0;
        if (0 < (int)pcVar14) {
          do {
            pDVar8 = this_02->field_1F7C;
            if (uVar17 < pDVar8->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar17) (runtime stride) */
              pvVar23 = (void *)(pDVar8->elementSize * uVar17 + (int)pDVar8->data);
            }
            else {
              pvVar23 = (void *)0x0;
            }
            uVar18 = uVar17 + 1;
            if (uVar18 < pDVar8->count) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar8, uVar18) (runtime stride) */
              pvVar19 = (void *)(pDVar8->elementSize * uVar18 + (int)pDVar8->data);
            }
            else {
              pvVar19 = (void *)0x0;
            }
            if (*(uint *)((int)pvVar19 + 0x208) < *(uint *)((int)pvVar23 + 0x208)) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar8,uVar17,uVar18);
              local_10 = (uint *)0x1;
            }
            pcVar14 = local_1c;
            uVar17 = uVar18;
          } while ((int)uVar18 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (this_02->field_1F7C->count == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\sett_obj.cpp",0xd7);
    }
    if ((int)(this_02->field_1F7C->count - 1) < (int)this_02->field_1F58) {
      this_02->field_1F58 = 0;
    }
  }
  SVar1 = this_02->field_1E26;
  this_02->field_0x21e1 = 1;
  this_02->field_0x21e5 = 1;
  if ((((SVar1 == 0xd) || (SVar1 == 0xf)) || ((SVar1 == 0xe || (SVar1 == 0x10)))) &&
     (this_02->field_1E27 == 0x11)) {
    this_02->field_0x21e4 = 1;
    this_02->field_0x21e6 = 1;
    if (SVar1 != 0xe) {
      this_02->field_0x21e2 = 1;
    }
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_02->field_0x1c6b,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)&this_02->field_0x1c6b + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff)
  ;
  this_02->field_1C87 = 0x2fa;
  this_02->field_1C8B = 0x3b;
  *(undefined4 *)&this_02->field_0x1c73 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_02->field_0x1cfc,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)&this_02->field_0x1cfc + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff)
  ;
  this_02->field_1D18 = 0x2fa;
  this_02->field_1D1C = 0x11e;
  *(undefined4 *)&this_02->field_0x1d04 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_02->field_0x1d8d,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)&this_02->field_0x1d8d + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
  this_02->field_1DA9 = 0x2ff;
  this_02->field_1DAD = 0x5b;
  this_02->field_1D95 = 0;
  local_c = 0x41;
  puVar12 = &this_02->field_20F4;
  do {
    iVar5 = 1;
    puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar17 = FUN_006b4fe0(this_02->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar17 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar17,puVar6,
                          iVar5);
    *puVar12 = uVar17;
    local_14 = *(HANDLE *)(uVar17 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar17 + 0xe) * *(int *)(uVar17 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar17 + 8));
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(uVar17);
    for (uVar17 = (uint)local_14 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar17 = (uint)local_14 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar17 = *puVar12;
    FUN_006b2330((uint)DAT_008075a8,puVar12 + -10,0x31,0x40407f,*(uint *)(uVar17 + 4),
                 *(uint *)(uVar17 + 8),uVar17);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,puVar12[-10],0xffffffff,0x113,local_c);
    puVar12 = puVar12 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar5 = 1;
  puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
  uVar17 = FUN_006b4fe0(this_02->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar5 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar17,puVar6,iVar5);
  this_02->field_1E1E = iVar5;
  uVar17 = *(uint *)(iVar5 + 0x14);
  if (uVar17 == 0) {
    uVar17 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar5 + 8);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
  for (uVar18 = uVar17 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar17 = uVar17 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  SVar1 = this_02->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_02->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,5,0xa5,0x14);
    uVar28 = 2;
    iVar26 = -1;
    iVar27 = -3;
    iVar5 = 0xa5;
    puVar24 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x256d,HINSTANCE_00807618);
    puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  }
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4b,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x1b,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4c,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4d,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x31,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4e,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f4f,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x47,0xa5,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa5;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f56,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,10,0x5d,100,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 100;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f51,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x96,0x5d,0x82,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0x82;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f58,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x140,0x5d,0xa0,0x14);
  uVar28 = 2;
  iVar26 = -1;
  iVar27 = -3;
  iVar5 = 0xa0;
  puVar24 = (uint *)&DAT_008016a0;
  puVar12 = (uint *)LoadResourceString(0x1f50,HINSTANCE_00807618);
  puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  SVar1 = this_02->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar28 = 2;
    iVar26 = -1;
    iVar27 = -3;
    iVar5 = 0xe1;
    puVar24 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x1f54,HINSTANCE_00807618);
    puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x73,0xdc,0x14);
    uVar28 = 2;
    iVar26 = -1;
    iVar27 = -3;
    iVar5 = 0xe1;
    puVar24 = (uint *)&DAT_008016a0;
    puVar12 = (uint *)LoadResourceString(0x1f53,HINSTANCE_00807618);
    puVar12 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar12,puVar24,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar12,iVar27,iVar26,uVar28);
  }
  uVar17 = this_02->field_1E1E;
  puVar6 = &this_02->field_1E22;
  FUN_006b2330((uint)DAT_008075a8,puVar6,0x31,0x40407f,*(uint *)(uVar17 + 4),*(uint *)(uVar17 + 8),
               uVar17);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0x112,0x149);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)&this_02->field_0000->field_0x18)(1);
  if (this_02->field_0x21e2 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 (uint)(this_02->field_1A5B + 0x140));
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar15 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar15 == (HoloTy *)0x0) {
      pHVar15 = (HoloTy *)0x0;
    }
    else {
      pHVar15->field_0002 = 1;
      pHVar15->field_0000 = 0;
      pHVar15->field_0003 = -1;
      pHVar15->field_0001 = CASE_2;
      pHVar15->field_0007 = 0;
      pHVar15->field_000B = 0;
      *(undefined4 *)&pHVar15->field_0xf = 0;
      *(undefined4 *)&pHVar15->field_0x1b = 1;
      pHVar15->field_0013 = 1;
      pHVar15->field_0017 = -1;
      pHVar15->field_0027 = 0;
      pHVar15->field_0023 = 0;
      pHVar15->field_002F = 1;
      pHVar15->field_002B = 1;
    }
    this_02->field_21EC = pHVar15;
    if (pHVar15 != (HoloTy *)0x0) {
      uVar18 = 0;
      cVar25 = '\x01';
      uVar17 = 0x10;
      iVar27 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar17 = HoloTy::Init(this_02->field_21EC,CASE_4,10,0xb4,iVar5,iVar27,uVar17,cVar25,uVar18);
      if (uVar17 != 0) {
        pHVar15 = this_02->field_21EC;
        pHVar15->field_0002 = 1;
        pHVar15->field_0017 = pHVar15->field_0013;
        uVar17 = this_02->field_21EC->field_0003;
        if (-1 < (int)uVar17) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar17);
        }
        if (PTR_0081176c->field_0391 != 0xffffffff) {
          FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
        }
        if (PTR_0081176c->field_0422 != 0xffffffff) {
          FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
        }
        if (PTR_0081176c->field_04B3 != 0xffffffff) {
          FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
        }
        FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_02->field_0x21e5 == '\0') {
    FUN_006b3af0(DAT_008075a8,*puVar6);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,
                 (uint)(this_02->field_1A5B + 0x140));
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    pHVar15 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar15 == (HoloTy *)0x0) {
      pHVar15 = (HoloTy *)0x0;
    }
    else {
      pHVar15->field_0002 = 1;
      pHVar15->field_0000 = 0;
      pHVar15->field_0003 = -1;
      pHVar15->field_0001 = CASE_2;
      pHVar15->field_0007 = 0;
      pHVar15->field_000B = 0;
      *(undefined4 *)&pHVar15->field_0xf = 0;
      *(undefined4 *)&pHVar15->field_0x1b = 1;
      pHVar15->field_0013 = 1;
      pHVar15->field_0017 = -1;
      pHVar15->field_0027 = 0;
      pHVar15->field_0023 = 0;
      pHVar15->field_002F = 1;
      pHVar15->field_002B = 1;
    }
    this_02->field_21F4 = pHVar15;
    if (pHVar15 != (HoloTy *)0x0) {
      uVar18 = 0;
      cVar25 = '\x01';
      uVar17 = 0x10;
      iVar27 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar17 = HoloTy::Init(this_02->field_21F4,CASE_2,0x112,0x149,iVar5,iVar27,uVar17,cVar25,uVar18
                           );
      if (uVar17 != 0) {
        pHVar15 = this_02->field_21F4;
        pHVar15->field_0002 = 1;
        pHVar15->field_0017 = pHVar15->field_0013;
        uVar17 = this_02->field_21F4->field_0003;
        if (-1 < (int)uVar17) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar17);
        }
        FUN_006b3af0(DAT_008075a8,*puVar6);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_02->field_0x21e1 == '\0') {
    if (this_02->field_1C6F != 0xffffffff) {
      FUN_006b3af0((int *)this_02->field_1CB3,this_02->field_1C6F);
    }
    if (this_02->field_1D00 != 0xffffffff) {
      FUN_006b3af0((int *)this_02->field_1D44,this_02->field_1D00);
    }
    if (this_02->field_1D91 != 0xffffffff) {
      FUN_006b3af0((int *)this_02->field_1DD5,this_02->field_1D91);
    }
    puVar12 = &this_02->field_20CC;
    iVar5 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar12);
      puVar12 = puVar12 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,
                 (uint)(this_02->field_1A5B + 0x140));
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    pHVar15 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar15 == (HoloTy *)0x0) {
      pHVar15 = (HoloTy *)0x0;
    }
    else {
      pHVar15->field_0002 = 1;
      pHVar15->field_0000 = 0;
      pHVar15->field_0003 = -1;
      pHVar15->field_0001 = CASE_2;
      pHVar15->field_0007 = 0;
      pHVar15->field_000B = 0;
      *(undefined4 *)&pHVar15->field_0xf = 0;
      *(undefined4 *)&pHVar15->field_0x1b = 1;
      pHVar15->field_0013 = 1;
      pHVar15->field_0017 = -1;
      pHVar15->field_0027 = 0;
      pHVar15->field_0023 = 0;
      pHVar15->field_002F = 1;
      pHVar15->field_002B = 1;
    }
    this_02->field_21E8 = pHVar15;
    if (pHVar15 != (HoloTy *)0x0) {
      uVar18 = 0;
      cVar25 = '\x01';
      uVar17 = 0x10;
      iVar27 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar17 = HoloTy::Init(this_02->field_21E8,CASE_2,0x112,0x38,iVar5,iVar27,uVar17,cVar25,uVar18)
      ;
      if (uVar17 != 0) {
        pHVar15 = this_02->field_21E8;
        pHVar15->field_0002 = 1;
        pHVar15->field_0017 = pHVar15->field_0013;
        uVar17 = this_02->field_21E8->field_0003;
        if (-1 < (int)uVar17) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar17);
        }
        if (this_02->field_1C6F != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1CB3,this_02->field_1C6F);
        }
        if (this_02->field_1D00 != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1D44,this_02->field_1D00);
        }
        if (this_02->field_1D91 != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1DD5,this_02->field_1D91);
        }
        puVar12 = &this_02->field_20CC;
        iVar5 = 10;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar12);
          puVar12 = puVar12 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_02->field_0x21e3 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,
                 (uint)(this_02->field_1A5B + 0x140));
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar15 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar15 == (HoloTy *)0x0) {
      pHVar15 = (HoloTy *)0x0;
    }
    else {
      pHVar15->field_0002 = 1;
      pHVar15->field_0000 = 0;
      pHVar15->field_0003 = -1;
      pHVar15->field_0001 = CASE_2;
      pHVar15->field_0007 = 0;
      pHVar15->field_000B = 0;
      *(undefined4 *)&pHVar15->field_0xf = 0;
      *(undefined4 *)&pHVar15->field_0x1b = 1;
      pHVar15->field_0013 = 1;
      pHVar15->field_0017 = -1;
      pHVar15->field_0027 = 0;
      pHVar15->field_0023 = 0;
      pHVar15->field_002F = 1;
      pHVar15->field_002B = 1;
    }
    this_02->field_21F0 = pHVar15;
    if (pHVar15 != (HoloTy *)0x0) {
      uVar18 = 0;
      cVar25 = '\x01';
      uVar17 = 0x10;
      iVar27 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar17 = HoloTy::Init(this_02->field_21F0,CASE_4,10,0xb4,iVar5,iVar27,uVar17,cVar25,uVar18);
      if (uVar17 != 0) {
        pHVar15 = this_02->field_21F0;
        pHVar15->field_0002 = 1;
        pHVar15->field_0017 = pHVar15->field_0013;
        uVar17 = this_02->field_21F0->field_0003;
        if (-1 < (int)uVar17) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar17);
        }
        FUN_006b3af0(DAT_008075a8,this_02->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar6 = &local_2c8;
  for (iVar5 = 0x7e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar28 = this_02->field_0008;
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  SVar1 = this_02->field_1E26;
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == 0x10)) || (SVar1 == 0xf)) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = uVar28;
  }
  pMVar3 = this_02->field_1A5B;
  local_1f8 = uVar28;
  local_1d1 = uVar28;
  if (*(int *)(pMVar3 + 0x2e6) != 0) {
    puVar6 = local_44;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0xffff;
    MMsgTy::ShowSprites(*(MMsgTy **)(pMVar3 + 0x2e6));
    *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    MMsgTy::SetPanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),0,(int)&local_2c8,0,0);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    MMsgTy::StatePanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),(int)local_44);
  }
  SettMapTy::PaintSettMap(this_02,'\x01');
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    iVar5 = PTR_00802a30->field_00C9;
    iVar27 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar27,iVar5);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = 0xffffffff;
  }
  this_02->field_0065 = 3;
  thunk_FUN_005b6730(this_02,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_02->field_0x1a5f);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

