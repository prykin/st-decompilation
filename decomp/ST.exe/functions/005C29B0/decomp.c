
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
  undefined4 uVar3;
  CursorClassTy *this_00;
  InternalExceptionFrame *pIVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar7;
  DArrayTy *pDVar8;
  undefined4 uVar9;
  ushort *puVar10;
  uint *extraout_EAX;
  uint *extraout_EAX_00;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  HANDLE hFindFile;
  cMf32 *this_01;
  UINT resourceId;
  char *extraout_EAX_05;
  BOOL BVar11;
  cMf32 *pcVar12;
  uint *extraout_EAX_06;
  uint *extraout_EAX_07;
  uint *extraout_EAX_08;
  uint *extraout_EAX_09;
  uint *extraout_EAX_10;
  uint *extraout_EAX_11;
  uint *extraout_EAX_12;
  uint *extraout_EAX_13;
  uint *extraout_EAX_14;
  uint *extraout_EAX_15;
  uint *extraout_EAX_16;
  uint *extraout_EAX_17;
  HoloTy *pHVar13;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar14;
  uint uVar15;
  uint uVar16;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  void *pvVar17;
  char *pcVar18;
  SettMapTy *this_02;
  undefined4 unaff_ESI;
  char *pcVar19;
  void *unaff_EDI;
  char *pcVar20;
  void *pvVar21;
  uint *puVar22;
  char cVar23;
  int iVar24;
  int iVar25;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18->field_1E26;
    if ((((SVar1 == 0xd) || (SVar1 == 0xe)) || (SVar1 == 0xf)) || (uVar9 = 0x6947, SVar1 == 0x10)) {
      uVar9 = 0x694d;
    }
    local_18->field_002D = uVar9;
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
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar6 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_02->field_1F43 = puVar6;
  SVar1 = this_02->field_1E26;
  if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar14 = PTR_0080c502, SVar1 == 2)) {
    pAVar14 = DAT_0080c506;
  }
  if ((uint)this_02->field_1C5F < (uint)pAVar14->field_000C) {
    if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar14 = PTR_0080c502, SVar1 == 2)) {
      pAVar14 = DAT_0080c506;
    }
    if (((SVar1 == 6) || (SVar1 == 1)) || (pAVar7 = PTR_0080c502, SVar1 == 2)) {
      pAVar7 = DAT_0080c506;
    }
    iVar5 = pAVar7->field_0008 * this_02->field_1C5F + pAVar14->field_001C;
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
    iVar25 = this_02->field_1F43;
    pcVar18 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar5 + 0x90);
    uVar15 = 0xffffffff;
    pcVar18 = (char *)(iVar5 + 0x4c);
    do {
      pcVar19 = pcVar18;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar19 = pcVar18 + 1;
      cVar23 = *pcVar18;
      pcVar18 = pcVar19;
    } while (cVar23 != '\0');
    uVar15 = ~uVar15;
    pcVar19 = pcVar19 + -uVar15;
    pcVar20 = (char *)&DAT_00809960;
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar19;
      pcVar19 = pcVar19 + 4;
      pcVar20 = pcVar20 + 4;
    }
    pcVar18 = (char *)(iVar5 + 0x70);
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *pcVar20 = *pcVar19;
      pcVar19 = pcVar19 + 1;
      pcVar20 = pcVar20 + 1;
    }
    iVar5 = this_02->field_1C63;
    iVar25 = this_02->field_1F43;
  }
  StartSystemTy::SetObjectives(PTR_0081176c,iVar25,pcVar18,iVar5);
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  this_02->field_1F84 = pDVar8;
  uVar9 = FUN_0070a9f0(g_cMf32_00806780,s_LOADSINGLE_007cc79c,0,1);
  PTR_0081176c->field_002C = uVar9;
  this_02->field_005D = PTR_0081176c->field_002C;
  FUN_006bc360((ushort *)PTR_0081176c->field_002C,local_b18,(int *)0x0);
  *(undefined4 *)(this_02->field_1A5B + 0x140) = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,(undefined4 *)(this_02->field_1A5B + 0x144));
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_02->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_02->field_1A7F = 1;
    this_02->field_1A80 = DAT_008087c4._2_1_;
    this_02->field_1A81 = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,&DAT_007cc584,DAT_0080995c);
    this_02->field_1A82 = local_28;
    this_02->field_1A86 = local_24;
    Library::MSVCRT::_strncpy(&this_02->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
    this_02->field_1C5E = 0;
  }
  *(undefined4 *)&this_02->field_0x2189 = this_02->field_0008;
  *(undefined4 *)&this_02->field_0x2169 = this_02->field_0008;
  *(undefined4 *)&this_02->field_0x218d = 2;
  *(undefined4 *)&this_02->field_0x216d = 2;
  *(undefined4 *)&this_02->field_0x21ad = PTR_0081176c->field_002C;
  *(undefined4 *)&this_02->field_0x21c1 = DAT_008032a8;
  *(undefined4 *)&this_02->field_0x21bd = DAT_008032a4;
  *(undefined4 *)&this_02->field_0x21b5 = 0x1f;
  *(undefined4 *)&this_02->field_0x21b9 = 1;
  *(undefined4 *)&this_02->field_0x21b1 = 0x4d;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  this_02->field_1E2F = pDVar8;
  puVar10 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,s_MM_COMBO_007cd164,0,1);
  this_02->field_1E2B = puVar10;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806784,CASE_B,s_MAP_GEN_007cd158,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806784,CASE_B,s_SET_ACC_007cc090,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_02->field_1F4F = puVar10;
  puVar10 = Library::Ourlib::MFRLOAD::mfRLoad
                      (DAT_00806784,CASE_B,s_SET_ALLY_007cd14c,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)&this_02->field_0x1f4b = puVar10;
  SVar1 = this_02->field_1E26;
  if (((SVar1 == 6) || (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_02->field_0x21e3 = 1;
    iVar5 = 1;
    puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar15 = FUN_006b4fe0(this_02->field_005D);
    iVar5 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar15,puVar6,iVar5
                        );
    this_02->field_1C67 = iVar5;
    uVar15 = *(uint *)(iVar5 + 0x14);
    if (uVar15 == 0) {
      uVar15 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar5 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,6,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2344,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX,iVar5,iVar25,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x2e,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2345,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX_00,iVar5,iVar25,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x56,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2350,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX_01,iVar5,iVar25,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0x7e,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2352,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX_02,iVar5,iVar25,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0xa6,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2351,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX_03,iVar5,iVar25,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C67,0,0x10,0xce,0xea,0x14);
    uVar9 = 2;
    iVar25 = -1;
    iVar5 = 0;
    LoadResourceString(0x2353,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,extraout_EAX_04,iVar5,iVar25,uVar9);
    uVar15 = this_02->field_1C67;
    FUN_006b2330((uint)DAT_008075a8,&this_02->field_1F80,0x31,0x40407f,*(uint *)(uVar15 + 4),
                 *(uint *)(uVar15 + 8),uVar15);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,this_02->field_1F80,0xffffffff,10,0xb4);
    pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x20c,5);
    this_02->field_1F7C = pDVar8;
    wsprintfA((LPSTR)local_3cc,s__s_s_s_s_007cd140,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
              &DAT_007c72d8,PTR_DAT_0079c0f0);
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar4 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;
          iVar5 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          this_02 = local_18;
          hFindFile = local_14;
          pIVar4 = local_cc.previous;
          if (iVar5 == 0) {
            wsprintfA((LPSTR)local_3cc,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            this_01 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0)
            ;
            local_1c = this_01;
            iVar5 = cMf32::RecGetLen(this_01,0xc,s_TEXTURE_DSCR_007cd130,0);
            this_02 = local_18;
            pcVar12 = extraout_ECX;
            if (-1 < iVar5) {
              local_c = 0;
              if (iVar5 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar10 = cMf32::RecGet(this_01,0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_10,0);
              pcVar12 = extraout_ECX_00;
              if (puVar10 != (ushort *)0x0) {
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
                LoadResourceString(resourceId,HINSTANCE_00807618);
                uVar15 = 0xffffffff;
                pcVar18 = extraout_EAX_05;
                do {
                  pcVar19 = pcVar18;
                  if (uVar15 == 0) break;
                  uVar15 = uVar15 - 1;
                  pcVar19 = pcVar18 + 1;
                  cVar23 = *pcVar18;
                  pcVar18 = pcVar19;
                } while (cVar23 != '\0');
                uVar15 = ~uVar15;
                pcVar18 = pcVar19 + -uVar15;
                pcVar19 = local_614;
                for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar19 = *(undefined4 *)pcVar18;
                  pcVar18 = pcVar18 + 4;
                  pcVar19 = pcVar19 + 4;
                }
                pDVar8 = this_02->field_1F7C;
                for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *pcVar19 = *pcVar18;
                  pcVar18 = pcVar18 + 1;
                  pcVar19 = pcVar19 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,(undefined4 *)local_718);
                pcVar12 = extraout_ECX_01;
                this_01 = local_1c;
              }
            }
            cMf32::delete(pcVar12,this_01);
            hFindFile = local_14;
            pIVar4 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar4;
        BVar11 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar11 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    dVar2 = this_02->field_1F7C->count;
    if (1 < (int)dVar2) {
      pcVar12 = (cMf32 *)(dVar2 - 1);
      local_1c = pcVar12;
      do {
        local_10 = (uint *)0x0;
        uVar15 = 0;
        if (0 < (int)pcVar12) {
          do {
            pDVar8 = this_02->field_1F7C;
            if (uVar15 < pDVar8->count) {
              pvVar21 = (void *)(pDVar8->elementSize * uVar15 + (int)pDVar8->data);
            }
            else {
              pvVar21 = (void *)0x0;
            }
            uVar16 = uVar15 + 1;
            if (uVar16 < pDVar8->count) {
              pvVar17 = (void *)(pDVar8->elementSize * uVar16 + (int)pDVar8->data);
            }
            else {
              pvVar17 = (void *)0x0;
            }
            if (*(uint *)((int)pvVar17 + 0x208) < *(uint *)((int)pvVar21 + 0x208)) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)pDVar8,uVar15,uVar16);
              local_10 = (uint *)0x1;
            }
            pcVar12 = local_1c;
            uVar15 = uVar16;
          } while ((int)uVar16 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (this_02->field_1F7C->count == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_Start_sett_obj_cpp_007cd0e8,0xd7);
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
  (**(code **)(*(int *)&this_02->field_0x1c6b + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff)
  ;
  this_02->field_1C87 = 0x2fa;
  this_02->field_1C8B = 0x3b;
  *(undefined4 *)&this_02->field_0x1c73 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_02->field_0x1cfc,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&this_02->field_0x1cfc + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff)
  ;
  this_02->field_1D18 = 0x2fa;
  this_02->field_1D1C = 0x11e;
  *(undefined4 *)&this_02->field_0x1d04 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_02->field_0x1d8d,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&this_02->field_0x1d8d + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  this_02->field_1DA9 = 0x2ff;
  this_02->field_1DAD = 0x5b;
  this_02->field_1D95 = 0;
  local_c = 0x41;
  puVar22 = &this_02->field_20F4;
  do {
    iVar5 = 1;
    puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar15 = FUN_006b4fe0(this_02->field_005D);
    uVar15 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar15,puVar6,
                          iVar5);
    *puVar22 = uVar15;
    local_14 = *(HANDLE *)(uVar15 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar15 + 0xe) * *(int *)(uVar15 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar15 + 8));
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(uVar15);
    for (uVar15 = (uint)local_14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar15 = (uint)local_14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar15 = *puVar22;
    FUN_006b2330((uint)DAT_008075a8,puVar22 + -10,0x31,0x40407f,*(uint *)(uVar15 + 4),
                 *(uint *)(uVar15 + 8),uVar15);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,puVar22[-10],0xffffffff,0x113,local_c);
    puVar22 = puVar22 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar5 = 1;
  puVar6 = (undefined4 *)(this_02->field_005D + 0x28);
  uVar15 = FUN_006b4fe0(this_02->field_005D);
  iVar5 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar15,puVar6,iVar5);
  this_02->field_1E1E = iVar5;
  uVar15 = *(uint *)(iVar5 + 0x14);
  if (uVar15 == 0) {
    uVar15 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar5 + 8);
  }
  puVar6 = (undefined4 *)FUN_006b4fa0(iVar5);
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  SVar1 = this_02->field_1E26;
  if ((((SVar1 == 6) || (SVar1 == 1)) ||
      ((SVar1 == CASE_4 || (((SVar1 == CASE_7 || (SVar1 == 0xd)) || (SVar1 == 0xe)))))) &&
     ((this_02->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,5,0xa5,0x14);
    uVar9 = 2;
    iVar24 = -1;
    iVar25 = -3;
    iVar5 = 0xa5;
    puVar22 = (uint *)&DAT_008016a0;
    LoadResourceString(0x256d,HINSTANCE_00807618);
    puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_06,puVar22,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  }
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f4b,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_07,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x1b,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f4c,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_08,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f4d,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_09,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x31,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f4e,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_10,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f4f,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_11,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x47,0xa5,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa5;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f56,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_12,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,10,0x5d,100,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 100;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f51,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_13,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x96,0x5d,0x82,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0x82;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f58,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_14,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x140,0x5d,0xa0,0x14);
  uVar9 = 2;
  iVar24 = -1;
  iVar25 = -3;
  iVar5 = 0xa0;
  puVar22 = (uint *)&DAT_008016a0;
  LoadResourceString(0x1f50,HINSTANCE_00807618);
  puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_15,puVar22,iVar5);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  SVar1 = this_02->field_1E26;
  if (((SVar1 != 6) && (SVar1 != 1)) && (SVar1 != 2)) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar9 = 2;
    iVar24 = -1;
    iVar25 = -3;
    iVar5 = 0xe1;
    puVar22 = (uint *)&DAT_008016a0;
    LoadResourceString(0x1f54,HINSTANCE_00807618);
    puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_16,puVar22,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1E1E,0,0x104,0x73,0xdc,0x14);
    uVar9 = 2;
    iVar24 = -1;
    iVar25 = -3;
    iVar5 = 0xe1;
    puVar22 = (uint *)&DAT_008016a0;
    LoadResourceString(0x1f53,HINSTANCE_00807618);
    puVar22 = thunk_FUN_00540c40(PTR_0081176c->field_0034,extraout_EAX_17,puVar22,iVar5);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar22,iVar25,iVar24,uVar9);
  }
  uVar15 = this_02->field_1E1E;
  puVar6 = &this_02->field_1E22;
  FUN_006b2330((uint)DAT_008075a8,puVar6,0x31,0x40407f,*(uint *)(uVar15 + 4),*(uint *)(uVar15 + 8),
               uVar15);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0x112,0x149);
  (**(code **)&this_02->field_0000->field_0x18)(1);
  if (this_02->field_0x21e2 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,this_02->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == (HoloTy *)0x0) {
      pHVar13 = (HoloTy *)0x0;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      pHVar13->field_0003 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = 0;
      pHVar13->field_000B = 0;
      *(undefined4 *)&pHVar13->field_0xf = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = 0xffffffff;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_02->field_21EC = pHVar13;
    if (pHVar13 != (HoloTy *)0x0) {
      uVar16 = 0;
      cVar23 = '\x01';
      uVar15 = 0x10;
      iVar25 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar15 = HoloTy::Init(this_02->field_21EC,CASE_4,10,0xb4,iVar5,iVar25,uVar15,cVar23,uVar16);
      if (uVar15 != 0) {
        pHVar13 = this_02->field_21EC;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar15 = this_02->field_21EC->field_0003;
        if (-1 < (int)uVar15) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar15);
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
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,this_02->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == (HoloTy *)0x0) {
      pHVar13 = (HoloTy *)0x0;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      pHVar13->field_0003 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = 0;
      pHVar13->field_000B = 0;
      *(undefined4 *)&pHVar13->field_0xf = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = 0xffffffff;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_02->field_21F4 = pHVar13;
    if (pHVar13 != (HoloTy *)0x0) {
      uVar16 = 0;
      cVar23 = '\x01';
      uVar15 = 0x10;
      iVar25 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar15 = HoloTy::Init(this_02->field_21F4,CASE_2,0x112,0x149,iVar5,iVar25,uVar15,cVar23,uVar16
                           );
      if (uVar15 != 0) {
        pHVar13 = this_02->field_21F4;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar15 = this_02->field_21F4->field_0003;
        if (-1 < (int)uVar15) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar15);
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
    puVar22 = &this_02->field_20CC;
    iVar5 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar22);
      puVar22 = puVar22 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,this_02->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == (HoloTy *)0x0) {
      pHVar13 = (HoloTy *)0x0;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      pHVar13->field_0003 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = 0;
      pHVar13->field_000B = 0;
      *(undefined4 *)&pHVar13->field_0xf = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = 0xffffffff;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_02->field_21E8 = pHVar13;
    if (pHVar13 != (HoloTy *)0x0) {
      uVar16 = 0;
      cVar23 = '\x01';
      uVar15 = 0x10;
      iVar25 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar15 = HoloTy::Init(this_02->field_21E8,CASE_2,0x112,0x38,iVar5,iVar25,uVar15,cVar23,uVar16)
      ;
      if (uVar15 != 0) {
        pHVar13 = this_02->field_21E8;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar15 = this_02->field_21E8->field_0003;
        if (-1 < (int)uVar15) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar15);
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
        puVar22 = &this_02->field_20CC;
        iVar5 = 10;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar22);
          puVar22 = puVar22 + 1;
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
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,this_02->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar13 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar13 == (HoloTy *)0x0) {
      pHVar13 = (HoloTy *)0x0;
    }
    else {
      pHVar13->field_0002 = 1;
      pHVar13->field_0000 = 0;
      pHVar13->field_0003 = 0xffffffff;
      pHVar13->field_0001 = CASE_2;
      pHVar13->field_0007 = 0;
      pHVar13->field_000B = 0;
      *(undefined4 *)&pHVar13->field_0xf = 0;
      *(undefined4 *)&pHVar13->field_0x1b = 1;
      pHVar13->field_0013 = 1;
      pHVar13->field_0017 = 0xffffffff;
      pHVar13->field_0027 = 0;
      pHVar13->field_0023 = 0;
      pHVar13->field_002F = 1;
      pHVar13->field_002B = 1;
    }
    this_02->field_21F0 = pHVar13;
    if (pHVar13 != (HoloTy *)0x0) {
      uVar16 = 0;
      cVar23 = '\x01';
      uVar15 = 0x10;
      iVar25 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar15 = HoloTy::Init(this_02->field_21F0,CASE_4,10,0xb4,iVar5,iVar25,uVar15,cVar23,uVar16);
      if (uVar15 != 0) {
        pHVar13 = this_02->field_21F0;
        pHVar13->field_0002 = 1;
        pHVar13->field_0017 = pHVar13->field_0013;
        uVar15 = this_02->field_21F0->field_0003;
        if (-1 < (int)uVar15) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar15);
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
  uVar9 = this_02->field_0008;
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
    local_294 = uVar9;
  }
  iVar5 = this_02->field_1A5B;
  local_1f8 = uVar9;
  local_1d1 = uVar9;
  if (*(int *)(iVar5 + 0x2e6) != 0) {
    puVar6 = local_44;
    for (iVar25 = 6; iVar25 != 0; iVar25 = iVar25 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = 0xffff;
    MMsgTy::ShowSprites(*(MMsgTy **)(iVar5 + 0x2e6));
    *(undefined4 *)(*(int *)(this_02->field_1A5B + 0x2e6) + 0x1cab) = this_02->field_0008;
    MMsgTy::SetPanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),0,(int)&local_2c8,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(this_02->field_1A5B + 0x2e6),(int)local_44);
  }
  SettMapTy::PaintSettMap(this_02,'\x01');
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar9 = PTR_00802a30->field_00C9;
    uVar3 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar3,uVar9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  this_02->field_0065 = 3;
  thunk_FUN_005b6730(this_02,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_02->field_0x1a5f);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

