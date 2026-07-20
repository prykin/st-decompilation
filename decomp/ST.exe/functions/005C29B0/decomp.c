
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\sett_obj.cpp
   Diagnostic line evidence: 215 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void FUN_005c29b0(char param_1)

{
  AnonShape_006B0CD0_C8D121FA *pAVar1;
  undefined4 uVar2;
  CursorClassTy *this;
  InternalExceptionFrame *pIVar3;
  int iVar4;
  undefined4 *puVar5;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar6;
  uint *puVar7;
  undefined4 uVar8;
  ushort *puVar9;
  HANDLE hFindFile;
  cMf32 *this_00;
  UINT uID;
  BOOL BVar10;
  cMf32 *pcVar11;
  HoloTy *pHVar12;
  AnonShape_GLOBAL_0080C502_B8708D85 *pAVar13;
  uint uVar14;
  uint uVar15;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  char *pcVar16;
  SettMapTy *this_01;
  undefined4 unaff_ESI;
  char *pcVar17;
  void *unaff_EDI;
  char *pcVar18;
  uint *puVar19;
  char cVar20;
  int iVar21;
  int iVar22;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_88.previous;
    cVar20 = local_18->field_1E26;
    if ((((cVar20 == '\r') || (cVar20 == '\x0e')) || (cVar20 == '\x0f')) ||
       (uVar8 = 0x6947, cVar20 == '\x10')) {
      uVar8 = 0x694d;
    }
    local_18->field_002D = uVar8;
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
  puVar5 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  this_01->field_1F43 = puVar5;
  cVar20 = this_01->field_1E26;
  if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (pAVar13 = PTR_0080c502, cVar20 == '\x02')) {
    pAVar13 = DAT_0080c506;
  }
  if ((uint)this_01->field_1C5F < (uint)pAVar13->field_000C) {
    if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (pAVar13 = PTR_0080c502, cVar20 == '\x02')) {
      pAVar13 = DAT_0080c506;
    }
    if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (pAVar6 = PTR_0080c502, cVar20 == '\x02')) {
      pAVar6 = DAT_0080c506;
    }
    iVar4 = pAVar6->field_0008 * this_01->field_1C5F + pAVar13->field_001C;
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 == 0) {
    DAT_0080995c = 1;
    puVar5 = &DAT_00809960;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar4 = this_01->field_1C63;
    iVar22 = this_01->field_1F43;
    pcVar16 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar4 + 0x90);
    uVar14 = 0xffffffff;
    pcVar16 = (char *)(iVar4 + 0x4c);
    do {
      pcVar17 = pcVar16;
      if (uVar14 == 0) break;
      uVar14 = uVar14 - 1;
      pcVar17 = pcVar16 + 1;
      cVar20 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar20 != '\0');
    uVar14 = ~uVar14;
    pcVar17 = pcVar17 + -uVar14;
    pcVar18 = (char *)&DAT_00809960;
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar18 = pcVar18 + 4;
    }
    pcVar16 = (char *)(iVar4 + 0x70);
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *pcVar18 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar18 = pcVar18 + 1;
    }
    iVar4 = this_01->field_1C63;
    iVar22 = this_01->field_1F43;
  }
  StartSystemTy::SetObjectives(PTR_0081176c,iVar22,pcVar16,iVar4);
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  this_01->field_1F84 = puVar7;
  uVar8 = FUN_0070a9f0(g_cMf32_00806780,s_LOADSINGLE_007cc79c,0,1);
  PTR_0081176c->field_002C = uVar8;
  this_01->field_005D = PTR_0081176c->field_002C;
  FUN_006bc360((ushort *)PTR_0081176c->field_002C,local_b18,(int *)0x0);
  *(undefined4 *)(this_01->field_1A5B + 0x140) = 0x1f;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_b18,0,0x100,0x8b,0x15,(undefined4 *)(this_01->field_1A5B + 0x144));
  if ((DAT_008067a0 != '\0') && (g_int_00811764 != (int *)0x0)) {
    FUN_006b6160(&this_01->field_0x1a5f,(int)(g_int_00811764 + 6));
    this_01->field_1A7F = 1;
    this_01->field_1A80 = DAT_008087c4._2_1_;
    this_01->field_1A81 = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,&DAT_007cc584,DAT_0080995c);
    this_01->field_1A82 = local_28;
    this_01->field_1A86 = local_24;
    Library::MSVCRT::_strncpy(&this_01->field_0x1a8a,(char *)&DAT_0080c3c3,0x1d5);
    this_01->field_1C5E = 0;
  }
  *(undefined4 *)&this_01->field_0x2189 = this_01->field_0008;
  *(undefined4 *)&this_01->field_0x2169 = this_01->field_0008;
  *(undefined4 *)&this_01->field_0x218d = 2;
  *(undefined4 *)&this_01->field_0x216d = 2;
  *(undefined4 *)&this_01->field_0x21ad = PTR_0081176c->field_002C;
  *(undefined4 *)&this_01->field_0x21c1 = DAT_008032a8;
  *(undefined4 *)&this_01->field_0x21bd = DAT_008032a4;
  *(undefined4 *)&this_01->field_0x21b5 = 0x1f;
  *(undefined4 *)&this_01->field_0x21b9 = 1;
  *(undefined4 *)&this_01->field_0x21b1 = 0x4d;
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  this_01->field_1E2F = puVar7;
  puVar9 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,s_MM_COMBO_007cd164,0,1);
  this_01->field_1E2B = puVar9;
  PTR_0081175c = (AnonShape_GLOBAL_0081175C_57F682DD *)
                 Library::Ourlib::MFRLOAD::mfRLoad
                           (DAT_00806784,CASE_B,s_MAP_GEN_007cd158,0xffffffff,0,1,0,
                            (undefined4 *)0x0);
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_SET_ACC_007cc090,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1F4F = puVar9;
  puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_SET_ALLY_007cd14c,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)&this_01->field_0x1f4b = puVar9;
  cVar20 = this_01->field_1E26;
  if (((cVar20 == '\x06') || (cVar20 == '\a')) || (cVar20 == '\x0e')) {
    this_01->field_0x21e3 = 1;
    iVar4 = 1;
    puVar5 = (undefined4 *)(this_01->field_005D + 0x28);
    uVar14 = FUN_006b4fe0(this_01->field_005D);
    iVar4 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar14,puVar5,iVar4
                        );
    this_01->field_1C67 = iVar4;
    uVar14 = *(uint *)(iVar4 + 0x14);
    if (uVar14 == 0) {
      uVar14 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar4 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,6,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2344,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,0x2e,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2345,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,0x56,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2350,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,0x7e,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2352,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,0xa6,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2351,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1C67,0,0x10,0xce,0xea,0x14);
    uVar8 = 2;
    iVar22 = -1;
    iVar4 = 0;
    puVar7 = (uint *)FUN_006b0140(0x2353,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar4,iVar22,uVar8);
    uVar14 = this_01->field_1C67;
    FUN_006b2330((uint)DAT_008075a8,&this_01->field_1F80,0x31,0x40407f,*(uint *)(uVar14 + 4),
                 *(uint *)(uVar14 + 8),uVar14);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,this_01->field_1F80,0xffffffff,10,0xb4);
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x20c,5);
    this_01->field_1F7C = puVar7;
    wsprintfA((LPSTR)local_3cc,s__s_s_s_s_007cd140,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
              &DAT_007c72d8,PTR_DAT_0079c0f0);
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar3 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;
          iVar4 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar3 = local_cc.previous;
          if (iVar4 == 0) {
            wsprintfA((LPSTR)local_3cc,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0)
            ;
            local_1c = this_00;
            iVar4 = cMf32::RecGetLen(this_00,0xc,s_TEXTURE_DSCR_007cd130,0);
            this_01 = local_18;
            pcVar11 = extraout_ECX;
            if (-1 < iVar4) {
              local_c = 0;
              if (iVar4 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar9 = cMf32::RecGet(this_00,0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_10,0);
              pcVar11 = extraout_ECX_00;
              if (puVar9 != (ushort *)0x0) {
                Library::MSVCRT::FUN_0072e730
                          ((byte *)local_50c.cFileName,(byte *)0x0,(byte *)0x0,local_718,(byte *)0x0
                          );
                switch(local_c & 0xff) {
                case 0:
                  uID = 0x4a42;
                  break;
                case 1:
                  uID = 0x4a43;
                  break;
                case 2:
                  uID = 0x4a44;
                  break;
                case 3:
                  uID = 0x4a45;
                  break;
                default:
                  uID = 0x4a46;
                }
                pcVar16 = (char *)FUN_006b0140(uID,HINSTANCE_00807618);
                uVar14 = 0xffffffff;
                do {
                  pcVar17 = pcVar16;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar17 = pcVar16 + 1;
                  cVar20 = *pcVar16;
                  pcVar16 = pcVar17;
                } while (cVar20 != '\0');
                uVar14 = ~uVar14;
                pcVar16 = pcVar17 + -uVar14;
                pcVar17 = local_614;
                for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                puVar7 = (uint *)this_01->field_1F7C;
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar17 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  pcVar17 = pcVar17 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::FUN_006ae1c0(puVar7,(undefined4 *)local_718);
                pcVar11 = extraout_ECX_01;
                this_00 = local_1c;
              }
            }
            cMf32::delete(pcVar11,this_00);
            hFindFile = local_14;
            pIVar3 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar3;
        BVar10 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar10 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    iVar4 = *(int *)(this_01->field_1F7C + 0xc);
    if (1 < iVar4) {
      pcVar11 = (cMf32 *)(iVar4 + -1);
      local_1c = pcVar11;
      do {
        local_10 = (uint *)0x0;
        uVar14 = 0;
        if (0 < (int)pcVar11) {
          do {
            pAVar1 = (AnonShape_006B0CD0_C8D121FA *)this_01->field_1F7C;
            if (uVar14 < pAVar1->field_000C) {
              iVar4 = pAVar1->field_0008 * uVar14 + pAVar1->field_001C;
            }
            else {
              iVar4 = 0;
            }
            uVar15 = uVar14 + 1;
            if (uVar15 < pAVar1->field_000C) {
              iVar22 = pAVar1->field_0008 * uVar15 + pAVar1->field_001C;
            }
            else {
              iVar22 = 0;
            }
            if (*(uint *)(iVar22 + 0x208) < *(uint *)(iVar4 + 0x208)) {
              FUN_006b0cd0(pAVar1,uVar14,uVar15);
              local_10 = (uint *)0x1;
            }
            pcVar11 = local_1c;
            uVar14 = uVar15;
          } while ((int)uVar15 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (*(int *)(this_01->field_1F7C + 0xc) == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_Start_sett_obj_cpp_007cd0e8,0xd7);
    }
    if (*(int *)(this_01->field_1F7C + 0xc) + -1 < (int)this_01->field_1F58) {
      this_01->field_1F58 = 0;
    }
  }
  cVar20 = this_01->field_1E26;
  this_01->field_0x21e1 = 1;
  this_01->field_0x21e5 = 1;
  if ((((cVar20 == '\r') || (cVar20 == '\x0f')) || ((cVar20 == '\x0e' || (cVar20 == '\x10')))) &&
     (this_01->field_1E27 == 0x11)) {
    this_01->field_0x21e4 = 1;
    this_01->field_0x21e6 = 1;
    if (cVar20 != '\x0e') {
      this_01->field_0x21e2 = 1;
    }
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_0x1c6b,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&this_01->field_0x1c6b + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff)
  ;
  this_01->field_1C87 = 0x2fa;
  this_01->field_1C8B = 0x3b;
  *(undefined4 *)&this_01->field_0x1c73 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_0x1cfc,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&this_01->field_0x1cfc + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff)
  ;
  this_01->field_1D18 = 0x2fa;
  this_01->field_1D1C = 0x11e;
  *(undefined4 *)&this_01->field_0x1d04 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_0x1d8d,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&this_01->field_0x1d8d + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  this_01->field_1DA9 = 0x2ff;
  this_01->field_1DAD = 0x5b;
  this_01->field_1D95 = 0;
  local_c = 0x41;
  puVar7 = &this_01->field_20F4;
  do {
    iVar4 = 1;
    puVar5 = (undefined4 *)(this_01->field_005D + 0x28);
    uVar14 = FUN_006b4fe0(this_01->field_005D);
    uVar14 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar14,puVar5,
                          iVar4);
    *puVar7 = uVar14;
    local_14 = *(HANDLE *)(uVar14 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar14 + 0xe) * *(int *)(uVar14 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar14 + 8));
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(uVar14);
    for (uVar14 = (uint)local_14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar14 = (uint)local_14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar14 = *puVar7;
    FUN_006b2330((uint)DAT_008075a8,puVar7 + -10,0x31,0x40407f,*(uint *)(uVar14 + 4),
                 *(uint *)(uVar14 + 8),uVar14);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,puVar7[-10],0xffffffff,0x113,local_c);
    puVar7 = puVar7 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar4 = 1;
  puVar5 = (undefined4 *)(this_01->field_005D + 0x28);
  uVar14 = FUN_006b4fe0(this_01->field_005D);
  iVar4 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar14,puVar5,iVar4);
  this_01->field_1E1E = iVar4;
  uVar14 = *(uint *)(iVar4 + 0x14);
  if (uVar14 == 0) {
    uVar14 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar4 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  cVar20 = this_01->field_1E26;
  if ((((cVar20 == '\x06') || (cVar20 == '\x01')) ||
      ((cVar20 == '\x04' || (((cVar20 == '\a' || (cVar20 == '\r')) || (cVar20 == '\x0e')))))) &&
     ((this_01->field_1E27 != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,8,5,0xa5,0x14);
    uVar8 = 2;
    iVar21 = -1;
    iVar22 = -3;
    iVar4 = 0xa5;
    puVar19 = (uint *)&DAT_008016a0;
    puVar7 = (uint *)FUN_006b0140(0x256d,HINSTANCE_00807618);
    puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  }
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,8,0x1b,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f4b,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x104,0x1b,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f4c,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,8,0x31,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f4d,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x104,0x31,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f4e,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,8,0x47,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f4f,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x104,0x47,0xa5,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f56,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,10,0x5d,100,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 100;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f51,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x96,0x5d,0x82,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0x82;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f58,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x140,0x5d,0xa0,0x14);
  uVar8 = 2;
  iVar21 = -1;
  iVar22 = -3;
  iVar4 = 0xa0;
  puVar19 = (uint *)&DAT_008016a0;
  puVar7 = (uint *)FUN_006b0140(0x1f50,HINSTANCE_00807618);
  puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
  ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  cVar20 = this_01->field_1E26;
  if (((cVar20 != '\x06') && (cVar20 != '\x01')) && (cVar20 != '\x02')) {
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,8,0x73,0xe1,0x14);
    uVar8 = 2;
    iVar21 = -1;
    iVar22 = -3;
    iVar4 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar7 = (uint *)FUN_006b0140(0x1f54,HINSTANCE_00807618);
    puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_01->field_1E1E,0,0x104,0x73,0xdc,0x14);
    uVar8 = 2;
    iVar21 = -1;
    iVar22 = -3;
    iVar4 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar7 = (uint *)FUN_006b0140(0x1f53,HINSTANCE_00807618);
    puVar7 = thunk_FUN_00540c40(PTR_0081176c->field_0034,puVar7,puVar19,iVar4);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar7,iVar22,iVar21,uVar8);
  }
  uVar14 = this_01->field_1E1E;
  puVar5 = &this_01->field_1E22;
  FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x40407f,*(uint *)(uVar14 + 4),*(uint *)(uVar14 + 8),
               uVar14);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x112,0x149);
  (**(code **)(this_01->field_0000 + 0x18))(1);
  if (this_01->field_0x21e2 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,this_01->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar12 == (HoloTy *)0x0) {
      pHVar12 = (HoloTy *)0x0;
    }
    else {
      pHVar12->field_0002 = 1;
      pHVar12->field_0000 = 0;
      pHVar12->field_0003 = 0xffffffff;
      pHVar12->field_0001 = CASE_2;
      pHVar12->field_0007 = 0;
      pHVar12->field_000B = 0;
      *(undefined4 *)&pHVar12->field_0xf = 0;
      *(undefined4 *)&pHVar12->field_0x1b = 1;
      pHVar12->field_0013 = 1;
      pHVar12->field_0017 = 0xffffffff;
      pHVar12->field_0027 = 0;
      pHVar12->field_0023 = 0;
      pHVar12->field_002F = 1;
      pHVar12->field_002B = 1;
    }
    this_01->field_21EC = pHVar12;
    if (pHVar12 != (HoloTy *)0x0) {
      uVar15 = 0;
      cVar20 = '\x01';
      uVar14 = 0x10;
      iVar22 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar14 = HoloTy::Init(this_01->field_21EC,CASE_4,10,0xb4,iVar4,iVar22,uVar14,cVar20,uVar15);
      if (uVar14 != 0) {
        pHVar12 = this_01->field_21EC;
        pHVar12->field_0002 = 1;
        pHVar12->field_0017 = pHVar12->field_0013;
        uVar14 = this_01->field_21EC->field_0003;
        if (-1 < (int)uVar14) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar14);
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
  if (this_01->field_0x21e5 == '\0') {
    FUN_006b3af0(DAT_008075a8,*puVar5);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,this_01->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar12 == (HoloTy *)0x0) {
      pHVar12 = (HoloTy *)0x0;
    }
    else {
      pHVar12->field_0002 = 1;
      pHVar12->field_0000 = 0;
      pHVar12->field_0003 = 0xffffffff;
      pHVar12->field_0001 = CASE_2;
      pHVar12->field_0007 = 0;
      pHVar12->field_000B = 0;
      *(undefined4 *)&pHVar12->field_0xf = 0;
      *(undefined4 *)&pHVar12->field_0x1b = 1;
      pHVar12->field_0013 = 1;
      pHVar12->field_0017 = 0xffffffff;
      pHVar12->field_0027 = 0;
      pHVar12->field_0023 = 0;
      pHVar12->field_002F = 1;
      pHVar12->field_002B = 1;
    }
    this_01->field_21F4 = pHVar12;
    if (pHVar12 != (HoloTy *)0x0) {
      uVar15 = 0;
      cVar20 = '\x01';
      uVar14 = 0x10;
      iVar22 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar14 = HoloTy::Init(this_01->field_21F4,CASE_2,0x112,0x149,iVar4,iVar22,uVar14,cVar20,uVar15
                           );
      if (uVar14 != 0) {
        pHVar12 = this_01->field_21F4;
        pHVar12->field_0002 = 1;
        pHVar12->field_0017 = pHVar12->field_0013;
        uVar14 = this_01->field_21F4->field_0003;
        if (-1 < (int)uVar14) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar14);
        }
        FUN_006b3af0(DAT_008075a8,*puVar5);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_0x21e1 == '\0') {
    if (this_01->field_1C6F != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1CB3,this_01->field_1C6F);
    }
    if (this_01->field_1D00 != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1D44,this_01->field_1D00);
    }
    if (this_01->field_1D91 != 0xffffffff) {
      FUN_006b3af0((int *)this_01->field_1DD5,this_01->field_1D91);
    }
    puVar7 = &this_01->field_20CC;
    iVar4 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar7);
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,this_01->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar12 == (HoloTy *)0x0) {
      pHVar12 = (HoloTy *)0x0;
    }
    else {
      pHVar12->field_0002 = 1;
      pHVar12->field_0000 = 0;
      pHVar12->field_0003 = 0xffffffff;
      pHVar12->field_0001 = CASE_2;
      pHVar12->field_0007 = 0;
      pHVar12->field_000B = 0;
      *(undefined4 *)&pHVar12->field_0xf = 0;
      *(undefined4 *)&pHVar12->field_0x1b = 1;
      pHVar12->field_0013 = 1;
      pHVar12->field_0017 = 0xffffffff;
      pHVar12->field_0027 = 0;
      pHVar12->field_0023 = 0;
      pHVar12->field_002F = 1;
      pHVar12->field_002B = 1;
    }
    this_01->field_21E8 = pHVar12;
    if (pHVar12 != (HoloTy *)0x0) {
      uVar15 = 0;
      cVar20 = '\x01';
      uVar14 = 0x10;
      iVar22 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar14 = HoloTy::Init(this_01->field_21E8,CASE_2,0x112,0x38,iVar4,iVar22,uVar14,cVar20,uVar15)
      ;
      if (uVar14 != 0) {
        pHVar12 = this_01->field_21E8;
        pHVar12->field_0002 = 1;
        pHVar12->field_0017 = pHVar12->field_0013;
        uVar14 = this_01->field_21E8->field_0003;
        if (-1 < (int)uVar14) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar14);
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
        puVar7 = &this_01->field_20CC;
        iVar4 = 10;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar7);
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01->field_0x21e3 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,this_01->field_1A5B + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar12 == (HoloTy *)0x0) {
      pHVar12 = (HoloTy *)0x0;
    }
    else {
      pHVar12->field_0002 = 1;
      pHVar12->field_0000 = 0;
      pHVar12->field_0003 = 0xffffffff;
      pHVar12->field_0001 = CASE_2;
      pHVar12->field_0007 = 0;
      pHVar12->field_000B = 0;
      *(undefined4 *)&pHVar12->field_0xf = 0;
      *(undefined4 *)&pHVar12->field_0x1b = 1;
      pHVar12->field_0013 = 1;
      pHVar12->field_0017 = 0xffffffff;
      pHVar12->field_0027 = 0;
      pHVar12->field_0023 = 0;
      pHVar12->field_002F = 1;
      pHVar12->field_002B = 1;
    }
    this_01->field_21F0 = pHVar12;
    if (pHVar12 != (HoloTy *)0x0) {
      uVar15 = 0;
      cVar20 = '\x01';
      uVar14 = 0x10;
      iVar22 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar14 = HoloTy::Init(this_01->field_21F0,CASE_4,10,0xb4,iVar4,iVar22,uVar14,cVar20,uVar15);
      if (uVar14 != 0) {
        pHVar12 = this_01->field_21F0;
        pHVar12->field_0002 = 1;
        pHVar12->field_0017 = pHVar12->field_0013;
        uVar14 = this_01->field_21F0->field_0003;
        if (-1 < (int)uVar14) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar14);
        }
        FUN_006b3af0(DAT_008075a8,this_01->field_1F80);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar5 = &local_2c8;
  for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar8 = this_01->field_0008;
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  cVar20 = this_01->field_1E26;
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((cVar20 == '\r') || (cVar20 == '\x0e')) || (cVar20 == '\x10')) || (cVar20 == '\x0f')) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = uVar8;
  }
  iVar4 = this_01->field_1A5B;
  local_1f8 = uVar8;
  local_1d1 = uVar8;
  if (*(int *)(iVar4 + 0x2e6) != 0) {
    puVar5 = local_44;
    for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0xffff;
    MMsgTy::ShowSprites(*(MMsgTy **)(iVar4 + 0x2e6));
    *(undefined4 *)(*(int *)(this_01->field_1A5B + 0x2e6) + 0x1cab) = this_01->field_0008;
    MMsgTy::SetPanel(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),0,(int)&local_2c8,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(this_01->field_1A5B + 0x2e6),(int)local_44);
  }
  SettMapTy::PaintSettMap(this_01,'\x01');
  this = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar8 = PTR_00802a30->field_00C9;
    uVar2 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this,CASE_0,uVar2,uVar8);
    CursorClassTy::DrawSprite(this,this->field_00C5,this->field_00C9);
    this->field_0xd2 = 0;
    *(undefined4 *)&this->field_0x4df = 0xffffffff;
  }
  this_01->field_0065 = 3;
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_01->field_0x1a5f);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

