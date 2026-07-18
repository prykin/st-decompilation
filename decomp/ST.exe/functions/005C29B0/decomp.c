
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c29b0(char param_1)

{
  undefined4 uVar1;
  void *this;
  undefined4 **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  HANDLE hFindFile;
  UINT UVar8;
  BOOL BVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int *this_00;
  undefined4 unaff_ESI;
  char *pcVar15;
  void *unaff_EDI;
  char *pcVar16;
  uint *puVar17;
  char cVar18;
  int iVar19;
  undefined4 local_b18 [256];
  byte local_718 [260];
  char local_614 [260];
  uint local_510;
  _WIN32_FIND_DATAA local_50c;
  uint local_3cc [65];
  undefined4 local_2c8;
  undefined4 local_2a1;
  int local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_205;
  int local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1de;
  int local_1d1;
  undefined4 local_1cd;
  int local_1c9;
  undefined4 **local_cc;
  undefined4 local_c8 [16];
  undefined4 **local_88;
  undefined4 local_84 [16];
  undefined4 local_44 [7];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  int *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_88 = DAT_00858df8;
  DAT_00858df8 = &local_88;
  iVar3 = __setjmp3(local_84,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar3 != 0) {
    DAT_00858df8 = local_88;
    cVar18 = *(char *)((int)local_18 + 0x1e26);
    if ((((cVar18 == '\r') || (cVar18 == '\x0e')) || (cVar18 == '\x0f')) ||
       (uVar6 = 0x6947, cVar18 == '\x10')) {
      uVar6 = 0x694d;
    }
    *(undefined4 *)((int)local_18 + 0x2d) = uVar6;
    (**(code **)*local_18)((int)local_18 + 0x1d);
    return;
  }
  *(char *)((int)local_18 + 0x1e26) = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (DAT_00802a30 != (void *)0x0) {
    if (*(int *)((int)DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)((int)DAT_00802a30 + 0xad));
    }
    else if (*(uint *)((int)DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)DAT_00802a30 + 0x60),*(uint *)((int)DAT_00802a30 + 0x1c));
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar4 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  *(undefined4 **)((int)this_00 + 0x1f43) = puVar4;
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  if (((cVar18 == '\x06') || (cVar18 == '\x01')) || (iVar3 = DAT_0080c502, cVar18 == '\x02')) {
    iVar3 = DAT_0080c506;
  }
  if (*(uint *)((int)this_00 + 0x1c5f) < *(uint *)(iVar3 + 0xc)) {
    if (((cVar18 == '\x06') || (cVar18 == '\x01')) || (iVar3 = DAT_0080c502, cVar18 == '\x02')) {
      iVar3 = DAT_0080c506;
    }
    if (((cVar18 == '\x06') || (cVar18 == '\x01')) || (iVar19 = DAT_0080c502, cVar18 == '\x02')) {
      iVar19 = DAT_0080c506;
    }
    iVar3 = *(int *)(iVar19 + 8) * *(uint *)((int)this_00 + 0x1c5f) + *(int *)(iVar3 + 0x1c);
  }
  else {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    DAT_0080995c = 1;
    puVar4 = &DAT_00809960;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = *(int *)((int)this_00 + 0x1c63);
    iVar19 = *(int *)((int)this_00 + 0x1f43);
    pcVar14 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar3 + 0x90);
    uVar11 = 0xffffffff;
    pcVar14 = (char *)(iVar3 + 0x4c);
    do {
      pcVar15 = pcVar14;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar14 + 1;
      cVar18 = *pcVar14;
      pcVar14 = pcVar15;
    } while (cVar18 != '\0');
    uVar11 = ~uVar11;
    pcVar15 = pcVar15 + -uVar11;
    pcVar16 = (char *)&DAT_00809960;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar16 = pcVar16 + 4;
    }
    pcVar14 = (char *)(iVar3 + 0x70);
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar16 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar16 = pcVar16 + 1;
    }
    iVar3 = *(int *)((int)this_00 + 0x1c63);
    iVar19 = *(int *)((int)this_00 + 0x1f43);
  }
  thunk_FUN_005dc730(iVar19,pcVar14,iVar3);
  puVar5 = FUN_006ae290((uint *)0x0,8,0x60,8);
  this_00[0x7e1] = (int)puVar5;
  uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
  *(undefined4 *)((int)this_00 + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  FUN_006bc360(*(int *)(DAT_0081176c + 0x2c),local_b18,(int *)0x0);
  *(undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x140) = 0x1f;
  FUN_00718780((int)local_b18,0,0x100,0x8b,0x15,
               (undefined4 *)(*(int *)((int)this_00 + 0x1a5b) + 0x144));
  if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
    FUN_006b6160((char *)((int)this_00 + 0x1a5f),DAT_00811764 + 0x18);
    *(undefined1 *)((int)this_00 + 0x1a7f) = 1;
    *(undefined1 *)(this_00 + 0x6a0) = DAT_008087c4._2_1_;
    *(char *)((int)this_00 + 0x1a81) = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,&DAT_007cc584,DAT_0080995c);
    *(undefined4 *)((int)this_00 + 0x1a82) = local_28;
    *(undefined4 *)((int)this_00 + 0x1a86) = local_24;
    _strncpy((char *)((int)this_00 + 0x1a8a),(char *)&DAT_0080c3c3,0x1d5);
    *(undefined1 *)((int)this_00 + 0x1c5e) = 0;
  }
  *(int *)((int)this_00 + 0x2189) = this_00[2];
  *(int *)((int)this_00 + 0x2169) = this_00[2];
  *(undefined4 *)((int)this_00 + 0x218d) = 2;
  *(undefined4 *)((int)this_00 + 0x216d) = 2;
  *(undefined4 *)((int)this_00 + 0x21ad) = *(undefined4 *)(DAT_0081176c + 0x2c);
  *(undefined4 *)((int)this_00 + 0x21c1) = DAT_008032a8;
  *(undefined4 *)((int)this_00 + 0x21bd) = DAT_008032a4;
  *(undefined4 *)((int)this_00 + 0x21b5) = 0x1f;
  *(undefined4 *)((int)this_00 + 0x21b9) = 1;
  *(undefined4 *)((int)this_00 + 0x21b1) = 0x4d;
  puVar5 = FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  *(uint **)((int)this_00 + 0x1e2f) = puVar5;
  puVar7 = FUN_0070a5a0(DAT_00806780,6,s_MM_COMBO_007cd164,0,1);
  *(ushort **)((int)this_00 + 0x1e2b) = puVar7;
  DAT_0081175c = FUN_00709af0(DAT_00806784,0xb,(byte *)s_MAP_GEN_007cd158,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
  puVar7 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ACC_007cc090,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)this_00 + 0x1f4f) = puVar7;
  puVar7 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ALLY_007cd14c,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)((int)this_00 + 0x1f4b) = puVar7;
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  if (((cVar18 == '\x06') || (cVar18 == '\a')) || (cVar18 == '\x0e')) {
    *(undefined1 *)((int)this_00 + 0x21e3) = 1;
    iVar3 = 1;
    puVar4 = (undefined4 *)(*(int *)((int)this_00 + 0x5d) + 0x28);
    uVar11 = FUN_006b4fe0(*(int *)((int)this_00 + 0x5d));
    iVar3 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(*(int *)((int)this_00 + 0x5d) + 0xe),uVar11,
                         puVar4,iVar3);
    *(int *)((int)this_00 + 0x1c67) = iVar3;
    uVar11 = *(uint *)(iVar3 + 0x14);
    if (uVar11 == 0) {
      uVar11 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,6,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,0x2e,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,0x56,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2350,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,0x7e,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2352,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,0xa6,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2351,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1c67),0,0x10,0xce,0xea,0x14);
    uVar6 = 2;
    iVar19 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2353,DAT_00807618);
    FUN_007119c0(puVar5,iVar3,iVar19,uVar6);
    uVar11 = *(uint *)((int)this_00 + 0x1c67);
    FUN_006b2330((uint)DAT_008075a8,(uint *)(this_00 + 0x7e0),0x31,0x40407f,*(uint *)(uVar11 + 4),
                 *(uint *)(uVar11 + 8),uVar11);
    FUN_006b3640(DAT_008075a8,this_00[0x7e0],0xffffffff,10,0xb4);
    puVar5 = FUN_006ae290((uint *)0x0,5,0x20c,5);
    this_00[0x7df] = (int)puVar5;
    wsprintfA((LPSTR)local_3cc,s__s_s_s_s_007cd140,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
              &DAT_007c72d8,PTR_DAT_0079c0f0);
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        ppuVar2 = DAT_00858df8;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc = DAT_00858df8;
          DAT_00858df8 = &local_cc;
          iVar3 = __setjmp3(local_c8,0,unaff_EDI,unaff_ESI);
          this_00 = local_18;
          hFindFile = local_14;
          ppuVar2 = local_cc;
          if (iVar3 == 0) {
            wsprintfA((LPSTR)local_3cc,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            puVar4 = FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0);
            local_1c = puVar4;
            iVar3 = FUN_006f24a0(0xc,s_TEXTURE_DSCR_007cd130,0);
            this_00 = local_18;
            if (-1 < iVar3) {
              local_c = 0;
              if (iVar3 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar7 = FUN_006f1ce0(0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_10,0);
              if (puVar7 != (ushort *)0x0) {
                FUN_0072e730((byte *)local_50c.cFileName,(byte *)0x0,(byte *)0x0,local_718,
                             (byte *)0x0);
                switch(local_c & 0xff) {
                case 0:
                  UVar8 = 0x4a42;
                  break;
                case 1:
                  UVar8 = 0x4a43;
                  break;
                case 2:
                  UVar8 = 0x4a44;
                  break;
                case 3:
                  UVar8 = 0x4a45;
                  break;
                default:
                  UVar8 = 0x4a46;
                }
                pcVar14 = (char *)FUN_006b0140(UVar8,DAT_00807618);
                uVar11 = 0xffffffff;
                do {
                  pcVar15 = pcVar14;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar15 = pcVar14 + 1;
                  cVar18 = *pcVar14;
                  pcVar14 = pcVar15;
                } while (cVar18 != '\0');
                uVar11 = ~uVar11;
                pcVar14 = pcVar15 + -uVar11;
                pcVar15 = local_614;
                for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
                  pcVar14 = pcVar14 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                puVar5 = (uint *)this_00[0x7df];
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar15 = *pcVar14;
                  pcVar14 = pcVar14 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                local_510 = local_c;
                FUN_006ae1c0(puVar5,(undefined4 *)local_718);
                puVar4 = local_1c;
              }
            }
            FUN_006f1170(puVar4);
            hFindFile = local_14;
            ppuVar2 = local_cc;
          }
        }
        DAT_00858df8 = ppuVar2;
        BVar9 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar9 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    if (1 < *(int *)(this_00[0x7df] + 0xc)) {
      puVar4 = (undefined4 *)(*(int *)(this_00[0x7df] + 0xc) + -1);
      local_1c = puVar4;
      do {
        local_10 = (uint *)0x0;
        uVar11 = 0;
        if (0 < (int)puVar4) {
          do {
            iVar3 = this_00[0x7df];
            if (uVar11 < *(uint *)(iVar3 + 0xc)) {
              iVar19 = *(int *)(iVar3 + 8) * uVar11 + *(int *)(iVar3 + 0x1c);
            }
            else {
              iVar19 = 0;
            }
            uVar12 = uVar11 + 1;
            if (uVar12 < *(uint *)(iVar3 + 0xc)) {
              iVar13 = *(int *)(iVar3 + 8) * uVar12 + *(int *)(iVar3 + 0x1c);
            }
            else {
              iVar13 = 0;
            }
            if (*(uint *)(iVar13 + 0x208) < *(uint *)(iVar19 + 0x208)) {
              FUN_006b0cd0(iVar3,uVar11,uVar12);
              local_10 = (uint *)0x1;
            }
            puVar4 = local_1c;
            uVar11 = uVar12;
          } while ((int)uVar12 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (*(int *)(this_00[0x7df] + 0xc) == 0) {
      FUN_006a5e40(-1,DAT_007ed77c,0x7cd0e8,0xd7);
    }
    if (*(int *)(this_00[0x7df] + 0xc) + -1 < this_00[0x7d6]) {
      this_00[0x7d6] = 0;
    }
  }
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  *(undefined1 *)((int)this_00 + 0x21e1) = 1;
  *(undefined1 *)((int)this_00 + 0x21e5) = 1;
  if ((((cVar18 == '\r') || (cVar18 == '\x0f')) || ((cVar18 == '\x0e' || (cVar18 == '\x10')))) &&
     (*(int *)((int)this_00 + 0x1e27) == 0x11)) {
    *(undefined1 *)(this_00 + 0x879) = 1;
    *(undefined1 *)((int)this_00 + 0x21e6) = 1;
    if (cVar18 != '\x0e') {
      *(undefined1 *)((int)this_00 + 0x21e2) = 1;
    }
  }
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)this_00 + 0x1c6b) + 4))
            (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)((int)this_00 + 0x1c87) = 0x2fa;
  *(undefined4 *)((int)this_00 + 0x1c8b) = 0x3b;
  *(undefined4 *)((int)this_00 + 0x1c73) = 0;
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_00[0x73f] + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  this_00[0x746] = 0x2fa;
  this_00[0x747] = 0x11e;
  this_00[0x741] = 0;
  FUN_007158a0(DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)((int)this_00 + 0x1d8d) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff)
  ;
  *(undefined4 *)((int)this_00 + 0x1da9) = 0x2ff;
  *(undefined4 *)((int)this_00 + 0x1dad) = 0x5b;
  *(undefined4 *)((int)this_00 + 0x1d95) = 0;
  local_c = 0x41;
  puVar5 = (uint *)(this_00 + 0x83d);
  do {
    iVar3 = 1;
    puVar4 = (undefined4 *)(*(int *)((int)this_00 + 0x5d) + 0x28);
    uVar11 = FUN_006b4fe0(*(int *)((int)this_00 + 0x5d));
    uVar11 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(*(int *)((int)this_00 + 0x5d) + 0xe),uVar11,
                          puVar4,iVar3);
    *puVar5 = uVar11;
    local_14 = *(HANDLE *)(uVar11 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar11 + 0xe) * *(int *)(uVar11 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar11 + 8));
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(uVar11);
    for (uVar11 = (uint)local_14 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar11 = (uint)local_14 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    uVar11 = *puVar5;
    FUN_006b2330((uint)DAT_008075a8,puVar5 + -10,0x31,0x40407f,*(uint *)(uVar11 + 4),
                 *(uint *)(uVar11 + 8),uVar11);
    FUN_006b3640(DAT_008075a8,puVar5[-10],0xffffffff,0x113,local_c);
    puVar5 = puVar5 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar3 = 1;
  puVar4 = (undefined4 *)(*(int *)((int)this_00 + 0x5d) + 0x28);
  uVar11 = FUN_006b4fe0(*(int *)((int)this_00 + 0x5d));
  iVar3 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(*(int *)((int)this_00 + 0x5d) + 0xe),uVar11,
                       puVar4,iVar3);
  *(int *)((int)this_00 + 0x1e1e) = iVar3;
  uVar11 = *(uint *)(iVar3 + 0x14);
  if (uVar11 == 0) {
    uVar11 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar3 + 8);
  }
  puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar4 = 0xff;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  if ((((cVar18 == '\x06') || (cVar18 == '\x01')) ||
      ((cVar18 == '\x04' || (((cVar18 == '\a' || (cVar18 == '\r')) || (cVar18 == '\x0e')))))) &&
     ((*(int *)((int)this_00 + 0x1e27) != 0x13 ||
      ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,8,5,0xa5,0x14);
    uVar6 = 2;
    iVar13 = -1;
    iVar19 = -3;
    iVar3 = 0xa5;
    puVar17 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
    puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
    FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  }
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,8,0x1b,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4b,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x104,0x1b,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4c,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,8,0x31,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4d,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x104,0x31,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4e,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,8,0x47,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4f,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x104,0x47,0xa5,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa5;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f56,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,10,0x5d,100,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 100;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f51,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x96,0x5d,0x82,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0x82;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f58,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x140,0x5d,0xa0,0x14);
  uVar6 = 2;
  iVar13 = -1;
  iVar19 = -3;
  iVar3 = 0xa0;
  puVar17 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f50,DAT_00807618);
  puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
  FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  if (((cVar18 != '\x06') && (cVar18 != '\x01')) && (cVar18 != '\x02')) {
    FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,8,0x73,0xe1,0x14);
    uVar6 = 2;
    iVar13 = -1;
    iVar19 = -3;
    iVar3 = 0xe1;
    puVar17 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x1f54,DAT_00807618);
    puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
    FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
    FUN_00710a90(*(int *)((int)this_00 + 0x1e1e),0,0x104,0x73,0xdc,0x14);
    uVar6 = 2;
    iVar13 = -1;
    iVar19 = -3;
    iVar3 = 0xe1;
    puVar17 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x1f53,DAT_00807618);
    puVar5 = thunk_FUN_00540c40(*(void **)(DAT_0081176c + 0x34),puVar5,puVar17,iVar3);
    FUN_007119c0(puVar5,iVar19,iVar13,uVar6);
  }
  uVar11 = *(uint *)((int)this_00 + 0x1e1e);
  puVar5 = (uint *)((int)this_00 + 0x1e22);
  FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x40407f,*(uint *)(uVar11 + 4),*(uint *)(uVar11 + 8),
               uVar11);
  FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x112,0x149);
  (**(code **)(*this_00 + 0x18))(1);
  if (*(char *)((int)this_00 + 0x21e2) != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 *(int *)((int)this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar10 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10[2] = 1;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      puVar10[1] = 2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      *(undefined4 *)(puVar10 + 0x13) = 1;
      *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x27) = 0;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 1;
      *(undefined4 *)(puVar10 + 0x2b) = 1;
    }
    this_00[0x87b] = (int)puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar12 = 0;
      cVar18 = '\x01';
      uVar11 = 0x10;
      iVar19 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar11 = thunk_FUN_005aacb0(4,10,0xb4,iVar3,iVar19,uVar11,cVar18,uVar12);
      if (uVar11 != 0) {
        iVar3 = this_00[0x87b];
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        if (-1 < (int)*(uint *)(this_00[0x87b] + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(this_00[0x87b] + 3));
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
  if (*(char *)((int)this_00 + 0x21e5) == '\0') {
    FUN_006b3af0(DAT_008075a8,*puVar5);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,
                 *(int *)((int)this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    puVar10 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10[2] = 1;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      puVar10[1] = 2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      *(undefined4 *)(puVar10 + 0x13) = 1;
      *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x27) = 0;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 1;
      *(undefined4 *)(puVar10 + 0x2b) = 1;
    }
    this_00[0x87d] = (int)puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar12 = 0;
      cVar18 = '\x01';
      uVar11 = 0x10;
      iVar19 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar11 = thunk_FUN_005aacb0(2,0x112,0x149,iVar3,iVar19,uVar11,cVar18,uVar12);
      if (uVar11 != 0) {
        iVar3 = this_00[0x87d];
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        if (-1 < (int)*(uint *)(this_00[0x87d] + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(this_00[0x87d] + 3));
        }
        FUN_006b3af0(DAT_008075a8,*puVar5);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (*(char *)((int)this_00 + 0x21e1) == '\0') {
    if (*(uint *)((int)this_00 + 0x1c6f) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)this_00 + 0x1cb3),*(uint *)((int)this_00 + 0x1c6f));
    }
    if (this_00[0x740] != 0xffffffff) {
      FUN_006b3af0((int *)this_00[0x751],this_00[0x740]);
    }
    if (*(uint *)((int)this_00 + 0x1d91) != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)this_00 + 0x1dd5),*(uint *)((int)this_00 + 0x1d91));
    }
    puVar5 = (uint *)(this_00 + 0x833);
    iVar3 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar5);
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,
                 *(int *)((int)this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    puVar10 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10[2] = 1;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      puVar10[1] = 2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      *(undefined4 *)(puVar10 + 0x13) = 1;
      *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x27) = 0;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 1;
      *(undefined4 *)(puVar10 + 0x2b) = 1;
    }
    this_00[0x87a] = (int)puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar12 = 0;
      cVar18 = '\x01';
      uVar11 = 0x10;
      iVar19 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar11 = thunk_FUN_005aacb0(2,0x112,0x38,iVar3,iVar19,uVar11,cVar18,uVar12);
      if (uVar11 != 0) {
        iVar3 = this_00[0x87a];
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        if (-1 < (int)*(uint *)(this_00[0x87a] + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(this_00[0x87a] + 3));
        }
        if (*(uint *)((int)this_00 + 0x1c6f) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x1cb3),*(uint *)((int)this_00 + 0x1c6f));
        }
        if (this_00[0x740] != 0xffffffff) {
          FUN_006b3af0((int *)this_00[0x751],this_00[0x740]);
        }
        if (*(uint *)((int)this_00 + 0x1d91) != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)this_00 + 0x1dd5),*(uint *)((int)this_00 + 0x1d91));
        }
        puVar5 = (uint *)(this_00 + 0x833);
        iVar3 = 10;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar5);
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (*(char *)((int)this_00 + 0x21e3) != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,
                 *(int *)((int)this_00 + 0x1a5b) + 0x140);
    FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar10 = (undefined1 *)FUN_0072e530(0x33);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10[2] = 1;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      puVar10[1] = 2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      *(undefined4 *)(puVar10 + 0x13) = 1;
      *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x27) = 0;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 1;
      *(undefined4 *)(puVar10 + 0x2b) = 1;
    }
    this_00[0x87c] = (int)puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar12 = 0;
      cVar18 = '\x01';
      uVar11 = 0x10;
      iVar19 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar11 = thunk_FUN_005aacb0(4,10,0xb4,iVar3,iVar19,uVar11,cVar18,uVar12);
      if (uVar11 != 0) {
        iVar3 = this_00[0x87c];
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        if (-1 < (int)*(uint *)(this_00[0x87c] + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(this_00[0x87c] + 3));
        }
        FUN_006b3af0(DAT_008075a8,this_00[0x7e0]);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  puVar4 = &local_2c8;
  for (iVar3 = 0x7e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = this_00[2];
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  cVar18 = *(char *)((int)this_00 + 0x1e26);
  local_205 = 0x2340;
  local_1f4 = 2;
  local_1f0 = 0x6943;
  local_1de = 0x24bc;
  local_1cd = 2;
  if ((((cVar18 == '\r') || (cVar18 == '\x0e')) || (cVar18 == '\x10')) || (cVar18 == '\x0f')) {
    local_1c9 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
  }
  else {
    local_1c9 = 0x6947;
  }
  if (DAT_0080877e != '\0') {
    local_2a1 = 0x2343;
    local_290 = 2;
    local_28c = 0x694a;
    local_294 = iVar3;
  }
  local_1f8 = iVar3;
  local_1d1 = iVar3;
  if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) != 0) {
    puVar4 = local_44;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0xffff;
    thunk_FUN_005b7210();
    *(int *)(*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) + 0x1cab) = this_00[2];
    thunk_FUN_005b87d0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),0,(int)&local_2c8,0,0);
    thunk_FUN_005b9010(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),(int)local_44);
  }
  thunk_FUN_005c4e20('\x01');
  this = DAT_00802a30;
  if (DAT_00802a30 != (void *)0x0) {
    uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
    uVar1 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
    *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
    *(undefined2 *)((int)this + 0x494) = 0xffff;
    thunk_FUN_0054bf40(0,uVar1,uVar6);
    thunk_FUN_00543c90(this,*(int *)((int)this + 0xc5),*(int *)((int)this + 0xc9));
    *(undefined1 *)((int)this + 0xd2) = 0;
    *(undefined4 *)((int)this + 0x4df) = 0xffffffff;
  }
  *(undefined1 *)((int)this_00 + 0x65) = 3;
  thunk_FUN_005b6730(this_00,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,(char *)((int)this_00 + 0x1a5f));
  }
  DAT_00858df8 = local_88;
  return;
}

