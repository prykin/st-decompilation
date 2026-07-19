
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c29b0(char param_1)

{
  SettMapTy SVar1;
  undefined4 uVar2;
  CursorClassTy *this;
  InternalExceptionFrame *pIVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  ushort *puVar8;
  HANDLE hFindFile;
  UINT UVar9;
  BOOL BVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *this_00;
  int iVar14;
  char *pcVar15;
  SettMapTy *this_01;
  undefined4 unaff_ESI;
  char *pcVar16;
  SettMapTy *pSVar17;
  void *unaff_EDI;
  char *pcVar18;
  uint *puVar19;
  char cVar20;
  int iVar21;
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
  undefined4 *local_1c;
  SettMapTy *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar4 = __setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_88.previous;
    SVar1 = local_18[0x1e26];
    if ((((SVar1 == (SettMapTy)0xd) || (SVar1 == (SettMapTy)0xe)) || (SVar1 == (SettMapTy)0xf)) ||
       (uVar7 = 0x6947, SVar1 == (SettMapTy)0x10)) {
      uVar7 = 0x694d;
    }
    *(undefined4 *)(local_18 + 0x2d) = uVar7;
    (*(code *)**(undefined4 **)local_18)(local_18 + 0x1d);
    return;
  }
  local_18[0x1e26] = (SettMapTy)param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar5 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  *(undefined4 **)(this_01 + 0x1f43) = puVar5;
  SVar1 = this_01[0x1e26];
  if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
     (iVar4 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
    iVar4 = DAT_0080c506;
  }
  if (*(uint *)(this_01 + 0x1c5f) < *(uint *)(iVar4 + 0xc)) {
    if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
       (iVar4 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
      iVar4 = DAT_0080c506;
    }
    if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
       (iVar21 = DAT_0080c502, SVar1 == (SettMapTy)0x2)) {
      iVar21 = DAT_0080c506;
    }
    iVar4 = *(int *)(iVar21 + 8) * *(uint *)(this_01 + 0x1c5f) + *(int *)(iVar4 + 0x1c);
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
    iVar4 = *(int *)(this_01 + 0x1c63);
    iVar21 = *(int *)(this_01 + 0x1f43);
    pcVar15 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar4 + 0x90);
    uVar12 = 0xffffffff;
    pcVar15 = (char *)(iVar4 + 0x4c);
    do {
      pcVar16 = pcVar15;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar16 = pcVar15 + 1;
      cVar20 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar20 != '\0');
    uVar12 = ~uVar12;
    pcVar16 = pcVar16 + -uVar12;
    pcVar18 = (char *)&DAT_00809960;
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar18 = pcVar18 + 4;
    }
    pcVar15 = (char *)(iVar4 + 0x70);
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar18 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar18 = pcVar18 + 1;
    }
    iVar4 = *(int *)(this_01 + 0x1c63);
    iVar21 = *(int *)(this_01 + 0x1f43);
  }
  StartSystemTy::SetObjectives(DAT_0081176c,iVar21,pcVar15,iVar4);
  puVar6 = FUN_006ae290((uint *)0x0,8,0x60,8);
  *(uint **)(this_01 + 0x1f84) = puVar6;
  uVar7 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar7;
  *(undefined4 *)(this_01 + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),local_b18,(int *)0x0);
  *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140) = 0x1f;
  FUN_00718780((int)local_b18,0,0x100,0x8b,0x15,(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x144));
  if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
    FUN_006b6160((char *)(this_01 + 0x1a5f),DAT_00811764 + 0x18);
    this_01[0x1a7f] = (SettMapTy)0x1;
    this_01[0x1a80] = DAT_008087c4._2_1_;
    this_01[0x1a81] = SUB21(DAT_008087c2 >> 1,0);
    wsprintfA((LPSTR)&local_28,&DAT_007cc584,DAT_0080995c);
    *(undefined4 *)(this_01 + 0x1a82) = local_28;
    *(undefined4 *)(this_01 + 0x1a86) = local_24;
    _strncpy((char *)(this_01 + 0x1a8a),(char *)&DAT_0080c3c3,0x1d5);
    this_01[0x1c5e] = (SettMapTy)0x0;
  }
  *(undefined4 *)(this_01 + 0x2189) = *(undefined4 *)(this_01 + 8);
  *(undefined4 *)(this_01 + 0x2169) = *(undefined4 *)(this_01 + 8);
  *(undefined4 *)(this_01 + 0x218d) = 2;
  *(undefined4 *)(this_01 + 0x216d) = 2;
  *(undefined4 *)(this_01 + 0x21ad) = *(undefined4 *)(DAT_0081176c + 0x2c);
  *(undefined4 *)(this_01 + 0x21c1) = DAT_008032a8;
  *(undefined4 *)(this_01 + 0x21bd) = DAT_008032a4;
  *(undefined4 *)(this_01 + 0x21b5) = 0x1f;
  *(undefined4 *)(this_01 + 0x21b9) = 1;
  *(undefined4 *)(this_01 + 0x21b1) = 0x4d;
  puVar6 = FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  *(uint **)(this_01 + 0x1e2f) = puVar6;
  puVar8 = FUN_0070a5a0(DAT_00806780,6,s_MM_COMBO_007cd164,0,1);
  *(ushort **)(this_01 + 0x1e2b) = puVar8;
  DAT_0081175c = FUN_00709af0(DAT_00806784,0xb,(byte *)s_MAP_GEN_007cd158,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
  puVar8 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ACC_007cc090,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1f4f) = puVar8;
  puVar8 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ALLY_007cd14c,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1f4b) = puVar8;
  SVar1 = this_01[0x1e26];
  if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) {
    this_01[0x21e3] = (SettMapTy)0x1;
    iVar4 = 1;
    puVar5 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
    uVar12 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
    iVar4 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar12,puVar5,
                         iVar4);
    *(int *)(this_01 + 0x1c67) = iVar4;
    uVar12 = *(uint *)(iVar4 + 0x14);
    if (uVar12 == 0) {
      uVar12 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar4 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,6,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,0x2e,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,0x56,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2350,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,0x7e,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2352,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,0xa6,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2351,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1c67),0,0x10,0xce,0xea,
                     0x14);
    uVar7 = 2;
    iVar21 = -1;
    iVar4 = 0;
    puVar6 = (uint *)FUN_006b0140(0x2353,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar4,iVar21,uVar7);
    uVar12 = *(uint *)(this_01 + 0x1c67);
    FUN_006b2330((uint)DAT_008075a8,(uint *)(this_01 + 0x1f80),0x31,0x40407f,*(uint *)(uVar12 + 4),
                 *(uint *)(uVar12 + 8),uVar12);
    FUN_006b3640(DAT_008075a8,*(uint *)(this_01 + 0x1f80),0xffffffff,10,0xb4);
    puVar6 = FUN_006ae290((uint *)0x0,5,0x20c,5);
    *(uint **)(this_01 + 0x1f7c) = puVar6;
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
          iVar4 = __setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar3 = local_cc.previous;
          if (iVar4 == 0) {
            wsprintfA((LPSTR)local_3cc,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            puVar5 = FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0);
            local_1c = puVar5;
            iVar4 = FUN_006f24a0(0xc,s_TEXTURE_DSCR_007cd130,0);
            this_01 = local_18;
            this_00 = extraout_ECX;
            if (-1 < iVar4) {
              local_c = 0;
              if (iVar4 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar8 = FUN_006f1ce0(0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_10,0);
              this_00 = extraout_ECX_00;
              if (puVar8 != (ushort *)0x0) {
                FUN_0072e730((byte *)local_50c.cFileName,(byte *)0x0,(byte *)0x0,local_718,
                             (byte *)0x0);
                switch(local_c & 0xff) {
                case 0:
                  UVar9 = 0x4a42;
                  break;
                case 1:
                  UVar9 = 0x4a43;
                  break;
                case 2:
                  UVar9 = 0x4a44;
                  break;
                case 3:
                  UVar9 = 0x4a45;
                  break;
                default:
                  UVar9 = 0x4a46;
                }
                pcVar15 = (char *)FUN_006b0140(UVar9,DAT_00807618);
                uVar12 = 0xffffffff;
                do {
                  pcVar16 = pcVar15;
                  if (uVar12 == 0) break;
                  uVar12 = uVar12 - 1;
                  pcVar16 = pcVar15 + 1;
                  cVar20 = *pcVar15;
                  pcVar15 = pcVar16;
                } while (cVar20 != '\0');
                uVar12 = ~uVar12;
                pcVar15 = pcVar16 + -uVar12;
                pcVar16 = local_614;
                for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
                  pcVar15 = pcVar15 + 4;
                  pcVar16 = pcVar16 + 4;
                }
                puVar6 = *(uint **)(this_01 + 0x1f7c);
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *pcVar16 = *pcVar15;
                  pcVar15 = pcVar15 + 1;
                  pcVar16 = pcVar16 + 1;
                }
                local_510 = local_c;
                FUN_006ae1c0(puVar6,(undefined4 *)local_718);
                this_00 = extraout_ECX_01;
                puVar5 = local_1c;
              }
            }
            cMf32::delete(this_00,puVar5);
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
    if (1 < *(int *)(*(int *)(this_01 + 0x1f7c) + 0xc)) {
      puVar5 = (undefined4 *)(*(int *)(*(int *)(this_01 + 0x1f7c) + 0xc) + -1);
      local_1c = puVar5;
      do {
        local_10 = (uint *)0x0;
        uVar12 = 0;
        if (0 < (int)puVar5) {
          do {
            iVar4 = *(int *)(this_01 + 0x1f7c);
            if (uVar12 < *(uint *)(iVar4 + 0xc)) {
              iVar21 = *(int *)(iVar4 + 8) * uVar12 + *(int *)(iVar4 + 0x1c);
            }
            else {
              iVar21 = 0;
            }
            uVar13 = uVar12 + 1;
            if (uVar13 < *(uint *)(iVar4 + 0xc)) {
              iVar14 = *(int *)(iVar4 + 8) * uVar13 + *(int *)(iVar4 + 0x1c);
            }
            else {
              iVar14 = 0;
            }
            if (*(uint *)(iVar14 + 0x208) < *(uint *)(iVar21 + 0x208)) {
              FUN_006b0cd0(iVar4,uVar12,uVar13);
              local_10 = (uint *)0x1;
            }
            puVar5 = local_1c;
            uVar12 = uVar13;
          } while ((int)uVar13 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (*(int *)(*(int *)(this_01 + 0x1f7c) + 0xc) == 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_sett_obj_cpp_007cd0e8,0xd7);
    }
    if (*(int *)(*(int *)(this_01 + 0x1f7c) + 0xc) + -1 < *(int *)(this_01 + 0x1f58)) {
      *(undefined4 *)(this_01 + 0x1f58) = 0;
    }
  }
  SVar1 = this_01[0x1e26];
  this_01[0x21e1] = (SettMapTy)0x1;
  this_01[0x21e5] = (SettMapTy)0x1;
  if ((((SVar1 == (SettMapTy)0xd) || (SVar1 == (SettMapTy)0xf)) ||
      ((SVar1 == (SettMapTy)0xe || (SVar1 == (SettMapTy)0x10)))) &&
     (*(int *)(this_01 + 0x1e27) == 0x11)) {
    this_01[0x21e4] = (SettMapTy)0x1;
    this_01[0x21e6] = (SettMapTy)0x1;
    if (SVar1 != (SettMapTy)0xe) {
      this_01[0x21e2] = (SettMapTy)0x1;
    }
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1c6b),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1c6b) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)(this_01 + 0x1c87) = 0x2fa;
  *(undefined4 *)(this_01 + 0x1c8b) = 0x3b;
  *(undefined4 *)(this_01 + 0x1c73) = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1cfc),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1cfc) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)(this_01 + 0x1d18) = 0x2fa;
  *(undefined4 *)(this_01 + 0x1d1c) = 0x11e;
  *(undefined4 *)(this_01 + 0x1d04) = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1d8d),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1d8d) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)(this_01 + 0x1da9) = 0x2ff;
  *(undefined4 *)(this_01 + 0x1dad) = 0x5b;
  *(undefined4 *)(this_01 + 0x1d95) = 0;
  local_c = 0x41;
  pSVar17 = this_01 + 0x20f4;
  do {
    iVar4 = 1;
    puVar5 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
    uVar12 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
    uVar12 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar12,puVar5
                          ,iVar4);
    *(uint *)pSVar17 = uVar12;
    local_14 = *(HANDLE *)(uVar12 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar12 + 0xe) * *(int *)(uVar12 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar12 + 8));
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(uVar12);
    for (uVar12 = (uint)local_14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar12 = (uint)local_14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar12 = *(uint *)pSVar17;
    FUN_006b2330((uint)DAT_008075a8,(uint *)(pSVar17 + -0x28),0x31,0x40407f,*(uint *)(uVar12 + 4),
                 *(uint *)(uVar12 + 8),uVar12);
    FUN_006b3640(DAT_008075a8,*(uint *)(pSVar17 + -0x28),0xffffffff,0x113,local_c);
    pSVar17 = pSVar17 + 4;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar4 = 1;
  puVar5 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
  uVar12 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
  iVar4 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar12,puVar5,
                       iVar4);
  *(int *)(this_01 + 0x1e1e) = iVar4;
  uVar12 = *(uint *)(iVar4 + 0x14);
  if (uVar12 == 0) {
    uVar12 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar4 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  SVar1 = this_01[0x1e26];
  if ((((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x1)) ||
      ((SVar1 == (SettMapTy)0x4 ||
       (((SVar1 == (SettMapTy)0x7 || (SVar1 == (SettMapTy)0xd)) || (SVar1 == (SettMapTy)0xe)))))) &&
     ((*(int *)(this_01 + 0x1e27) != 0x13 || ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15'))))
     )) {
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,8,5,0xa5,0x14);
    uVar7 = 2;
    iVar14 = -1;
    iVar21 = -3;
    iVar4 = 0xa5;
    puVar19 = (uint *)&DAT_008016a0;
    puVar6 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
    puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  }
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,8,0x1b,0xa5,0x14)
  ;
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f4b,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x104,0x1b,0xa5,
                   0x14);
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f4c,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,8,0x31,0xa5,0x14)
  ;
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f4d,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x104,0x31,0xa5,
                   0x14);
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f4e,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,8,0x47,0xa5,0x14)
  ;
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f4f,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x104,0x47,0xa5,
                   0x14);
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f56,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,10,0x5d,100,0x14)
  ;
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 100;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f51,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x96,0x5d,0x82,
                   0x14);
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0x82;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f58,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x140,0x5d,0xa0,
                   0x14);
  uVar7 = 2;
  iVar14 = -1;
  iVar21 = -3;
  iVar4 = 0xa0;
  puVar19 = (uint *)&DAT_008016a0;
  puVar6 = (uint *)FUN_006b0140(0x1f50,DAT_00807618);
  puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
  ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  SVar1 = this_01[0x1e26];
  if (((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x1)) && (SVar1 != (SettMapTy)0x2)) {
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,8,0x73,0xe1,
                     0x14);
    uVar7 = 2;
    iVar14 = -1;
    iVar21 = -3;
    iVar4 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar6 = (uint *)FUN_006b0140(0x1f54,DAT_00807618);
    puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)(this_01 + 0x1e1e),0,0x104,0x73,0xdc
                     ,0x14);
    uVar7 = 2;
    iVar14 = -1;
    iVar21 = -3;
    iVar4 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar6 = (uint *)FUN_006b0140(0x1f53,DAT_00807618);
    puVar6 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar6,puVar19,iVar4);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar21,iVar14,uVar7);
  }
  uVar12 = *(uint *)(this_01 + 0x1e1e);
  pSVar17 = this_01 + 0x1e22;
  FUN_006b2330((uint)DAT_008075a8,(uint *)pSVar17,0x31,0x40407f,*(uint *)(uVar12 + 4),
               *(uint *)(uVar12 + 8),uVar12);
  FUN_006b3640(DAT_008075a8,*(uint *)pSVar17,0xffffffff,0x112,0x149);
  (**(code **)(*(int *)this_01 + 0x18))(1);
  if (this_01[0x21e2] != (SettMapTy)0x0) {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 *(int *)(this_01 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar11 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11[2] = 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 3) = 0xffffffff;
      puVar11[1] = 2;
      *(undefined4 *)(puVar11 + 7) = 0;
      *(undefined4 *)(puVar11 + 0xb) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)(puVar11 + 0x1b) = 1;
      *(undefined4 *)(puVar11 + 0x13) = 1;
      *(undefined4 *)(puVar11 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x27) = 0;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      *(undefined4 *)(puVar11 + 0x2f) = 1;
      *(undefined4 *)(puVar11 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x21ec) = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar20 = '\x01';
      uVar12 = 0x10;
      iVar21 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar12 = HoloTy::Init(*(HoloTy **)(this_01 + 0x21ec),4,10,0xb4,iVar4,iVar21,uVar12,cVar20,
                            uVar13);
      if (uVar12 != 0) {
        iVar4 = *(int *)(this_01 + 0x21ec);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x21ec) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x21ec) + 3));
        }
        if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
        }
        if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
        }
        if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01[0x21e5] == (SettMapTy)0x0) {
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar17);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,
                 *(int *)(this_01 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    puVar11 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11[2] = 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 3) = 0xffffffff;
      puVar11[1] = 2;
      *(undefined4 *)(puVar11 + 7) = 0;
      *(undefined4 *)(puVar11 + 0xb) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)(puVar11 + 0x1b) = 1;
      *(undefined4 *)(puVar11 + 0x13) = 1;
      *(undefined4 *)(puVar11 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x27) = 0;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      *(undefined4 *)(puVar11 + 0x2f) = 1;
      *(undefined4 *)(puVar11 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x21f4) = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar20 = '\x01';
      uVar12 = 0x10;
      iVar21 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar12 = HoloTy::Init(*(HoloTy **)(this_01 + 0x21f4),2,0x112,0x149,iVar4,iVar21,uVar12,cVar20,
                            uVar13);
      if (uVar12 != 0) {
        iVar4 = *(int *)(this_01 + 0x21f4);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x21f4) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x21f4) + 3));
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)pSVar17);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01[0x21e1] == (SettMapTy)0x0) {
    if (*(uint *)(this_01 + 0x1c6f) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1cb3),*(uint *)(this_01 + 0x1c6f));
    }
    if (*(uint *)(this_01 + 0x1d00) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1d44),*(uint *)(this_01 + 0x1d00));
    }
    if (*(uint *)(this_01 + 0x1d91) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1dd5),*(uint *)(this_01 + 0x1d91));
    }
    pSVar17 = this_01 + 0x20cc;
    iVar4 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*(uint *)pSVar17);
      pSVar17 = pSVar17 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,
                 *(int *)(this_01 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    puVar11 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11[2] = 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 3) = 0xffffffff;
      puVar11[1] = 2;
      *(undefined4 *)(puVar11 + 7) = 0;
      *(undefined4 *)(puVar11 + 0xb) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)(puVar11 + 0x1b) = 1;
      *(undefined4 *)(puVar11 + 0x13) = 1;
      *(undefined4 *)(puVar11 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x27) = 0;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      *(undefined4 *)(puVar11 + 0x2f) = 1;
      *(undefined4 *)(puVar11 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x21e8) = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar20 = '\x01';
      uVar12 = 0x10;
      iVar21 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar12 = HoloTy::Init(*(HoloTy **)(this_01 + 0x21e8),2,0x112,0x38,iVar4,iVar21,uVar12,cVar20,
                            uVar13);
      if (uVar12 != 0) {
        iVar4 = *(int *)(this_01 + 0x21e8);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x21e8) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x21e8) + 3));
        }
        if (*(uint *)(this_01 + 0x1c6f) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1cb3),*(uint *)(this_01 + 0x1c6f));
        }
        if (*(uint *)(this_01 + 0x1d00) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1d44),*(uint *)(this_01 + 0x1d00));
        }
        if (*(uint *)(this_01 + 0x1d91) != 0xffffffff) {
          FUN_006b3af0(*(int **)(this_01 + 0x1dd5),*(uint *)(this_01 + 0x1d91));
        }
        pSVar17 = this_01 + 0x20cc;
        iVar4 = 10;
        do {
          FUN_006b3af0(DAT_008075a8,*(uint *)pSVar17);
          pSVar17 = pSVar17 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01[0x21e3] != (SettMapTy)0x0) {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,
                 *(int *)(this_01 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar11 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)0x0;
    }
    else {
      puVar11[2] = 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 3) = 0xffffffff;
      puVar11[1] = 2;
      *(undefined4 *)(puVar11 + 7) = 0;
      *(undefined4 *)(puVar11 + 0xb) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)(puVar11 + 0x1b) = 1;
      *(undefined4 *)(puVar11 + 0x13) = 1;
      *(undefined4 *)(puVar11 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar11 + 0x27) = 0;
      *(undefined4 *)(puVar11 + 0x23) = 0;
      *(undefined4 *)(puVar11 + 0x2f) = 1;
      *(undefined4 *)(puVar11 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x21f0) = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar13 = 0;
      cVar20 = '\x01';
      uVar12 = 0x10;
      iVar21 = 1;
      iVar4 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar12 = HoloTy::Init(*(HoloTy **)(this_01 + 0x21f0),4,10,0xb4,iVar4,iVar21,uVar12,cVar20,
                            uVar13);
      if (uVar12 != 0) {
        iVar4 = *(int *)(this_01 + 0x21f0);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x21f0) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x21f0) + 3));
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)(this_01 + 0x1f80));
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
  uVar7 = *(undefined4 *)(this_01 + 8);
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  SVar1 = this_01[0x1e26];
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((SVar1 == (SettMapTy)0xd) || (SVar1 == (SettMapTy)0xe)) || (SVar1 == (SettMapTy)0x10)) ||
     (SVar1 == (SettMapTy)0xf)) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = uVar7;
  }
  iVar4 = *(int *)(this_01 + 0x1a5b);
  local_1f8 = uVar7;
  local_1d1 = uVar7;
  if (*(int *)(iVar4 + 0x2e6) != 0) {
    puVar5 = local_44;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0xffff;
    MMsgTy::ShowSprites(*(MMsgTy **)(iVar4 + 0x2e6));
    *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
         *(undefined4 *)(this_01 + 8);
    MMsgTy::SetPanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0,(int)&local_2c8,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_44);
  }
  SettMapTy::PaintSettMap(this_01,'\x01');
  this = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar7 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x1;
    *(undefined2 *)(this + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this,0,uVar2,uVar7);
    CursorClassTy::DrawSprite(this,*(int *)(this + 0xc5),*(int *)(this + 0xc9));
    this[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this + 0x4df) = 0xffffffff;
  }
  this_01[0x65] = (SettMapTy)0x3;
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,(char *)(this_01 + 0x1a5f));
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

