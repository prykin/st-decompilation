
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c29b0(char param_1)

{
  undefined4 uVar1;
  CursorClassTy *this;
  InternalExceptionFrame *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  HANDLE hFindFile;
  cMf32 *this_00;
  UINT UVar8;
  BOOL BVar9;
  cMf32 *pcVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  int iVar15;
  char *pcVar16;
  SettMapTy *this_01;
  undefined4 unaff_ESI;
  char *pcVar17;
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
  cMf32 *local_1c;
  SettMapTy *local_18;
  HANDLE local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_88.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_88;
  iVar3 = Library::MSVCRT::__setjmp3(local_88.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_88.previous;
    cVar20 = local_18[0x4c].field_0x2a;
    if ((((cVar20 == '\r') || (cVar20 == '\x0e')) || (cVar20 == '\x0f')) ||
       (uVar6 = 0x6947, cVar20 == '\x10')) {
      uVar6 = 0x694d;
    }
    *(undefined4 *)&local_18->field_0x2d = uVar6;
    (*(code *)**(undefined4 **)local_18)(&local_18->field_0x1d);
    return;
  }
  local_18[0x4c].field_0x2a = param_1;
  if (((param_1 == '\x06') || (param_1 == '\x01')) || (DAT_00811750 = 1, param_1 == '\x02')) {
    DAT_00811750 = 0;
  }
  if (DAT_0080877e == '\0') {
    _DAT_0080f32e = 0;
  }
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
            PTR_s_STRATEGS_0079c100);
  puVar4 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  *(undefined4 **)&this_01[0x4f].field_0x18 = puVar4;
  cVar20 = this_01[0x4c].field_0x2a;
  if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (iVar3 = DAT_0080c502, cVar20 == '\x02')) {
    iVar3 = DAT_0080c506;
  }
  if (*(uint *)&this_01[0x47].field_0x5c < *(uint *)(iVar3 + 0xc)) {
    if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (iVar3 = DAT_0080c502, cVar20 == '\x02')) {
      iVar3 = DAT_0080c506;
    }
    if (((cVar20 == '\x06') || (cVar20 == '\x01')) || (iVar21 = DAT_0080c502, cVar20 == '\x02')) {
      iVar21 = DAT_0080c506;
    }
    iVar3 = *(int *)(iVar21 + 8) * *(uint *)&this_01[0x47].field_0x5c + *(int *)(iVar3 + 0x1c);
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
    iVar3 = *(int *)&this_01[0x47].field_0x60;
    iVar21 = *(int *)&this_01[0x4f].field_0x18;
    pcVar16 = (char *)0x0;
  }
  else {
    DAT_0080995c = *(undefined4 *)(iVar3 + 0x90);
    uVar13 = 0xffffffff;
    pcVar16 = (char *)(iVar3 + 0x4c);
    do {
      pcVar17 = pcVar16;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar17 = pcVar16 + 1;
      cVar20 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar20 != '\0');
    uVar13 = ~uVar13;
    pcVar17 = pcVar17 + -uVar13;
    pcVar18 = (char *)&DAT_00809960;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar18 = pcVar18 + 4;
    }
    pcVar16 = (char *)(iVar3 + 0x70);
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar18 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar18 = pcVar18 + 1;
    }
    iVar3 = *(int *)&this_01[0x47].field_0x60;
    iVar21 = *(int *)&this_01[0x4f].field_0x18;
  }
  StartSystemTy::SetObjectives(DAT_0081176c,iVar21,pcVar16,iVar3);
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,8,0x60,8);
  *(uint **)&this_01[0x4f].field_0x59 = puVar5;
  uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
  DAT_0081176c->field_002C = uVar6;
  *(undefined4 *)&this_01->field_0x5d = DAT_0081176c->field_002C;
  FUN_006bc360(DAT_0081176c->field_002C,local_b18,(int *)0x0);
  *(undefined4 *)(*(int *)&this_01[0x42].field_0x51 + 0x140) = 0x1f;
  FUN_00718780((int)local_b18,0,0x100,0x8b,0x15,
               (undefined4 *)(*(int *)&this_01[0x42].field_0x51 + 0x144));
  if ((DAT_008067a0 != '\0') && (DAT_00811764 != 0)) {
    FUN_006b6160(&this_01[0x42].field_0x55,DAT_00811764 + 0x18);
    *(undefined1 *)&this_01[0x43].field_0010 = 1;
    *(undefined1 *)((int)&this_01[0x43].field_0010 + 1) = DAT_008087c4._2_1_;
    *(char *)((int)&this_01[0x43].field_0010 + 2) = (char)(DAT_008087c2 >> 1);
    wsprintfA((LPSTR)&local_28,&DAT_007cc584,DAT_0080995c);
    *(undefined4 *)((int)&this_01[0x43].field_0010 + 3) = local_28;
    *(undefined4 *)&this_01[0x43].field_0x17 = local_24;
    Library::MSVCRT::_strncpy(&this_01[0x43].field_0x1b,(char *)&DAT_0080c3c3,0x1d5);
    this_01[0x47].field_0x5b = 0;
  }
  *(undefined4 *)(this_01 + 0x55) = *(undefined4 *)&this_01->field_0x8;
  *(undefined4 *)&this_01[0x54].field_0x45 = *(undefined4 *)&this_01->field_0x8;
  *(undefined4 *)&this_01[0x55].field_0x4 = 2;
  *(undefined4 *)&this_01[0x54].field_0x49 = 2;
  *(undefined4 *)&this_01[0x55].field_0x24 = DAT_0081176c->field_002C;
  *(undefined4 *)&this_01[0x55].field_0x38 = DAT_008032a8;
  *(undefined4 *)&this_01[0x55].field_0x34 = DAT_008032a4;
  *(undefined4 *)&this_01[0x55].field_0x2c = 0x1f;
  *(undefined4 *)&this_01[0x55].field_0x30 = 1;
  *(undefined4 *)&this_01[0x55].field_0x28 = 0x4d;
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0xf,0x10c,5);
  *(uint **)&this_01[0x4c].field_0x33 = puVar5;
  puVar7 = FUN_0070a5a0(DAT_00806780,6,s_MM_COMBO_007cd164,0,1);
  *(ushort **)&this_01[0x4c].field_0x2f = puVar7;
  DAT_0081175c = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_MAP_GEN_007cd158,0xffffffff,0,1,0,
                              (undefined4 *)0x0);
  puVar7 = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_SET_ACC_007cc090,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)&this_01[0x4f].field_0x24 = puVar7;
  puVar7 = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_SET_ALLY_007cd14c,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)&this_01[0x4f].field_0x20 = puVar7;
  cVar20 = this_01[0x4c].field_0x2a;
  if (((cVar20 == '\x06') || (cVar20 == '\a')) || (cVar20 == '\x0e')) {
    this_01[0x55].field_0x5a = 1;
    iVar3 = 1;
    puVar4 = (undefined4 *)(*(int *)&this_01->field_0x5d + 0x28);
    uVar13 = FUN_006b4fe0(*(int *)&this_01->field_0x5d);
    iVar3 = FUN_006b50c0(0xf9,0x123,(uint)*(ushort *)(*(int *)&this_01->field_0x5d + 0xe),uVar13,
                         puVar4,iVar3);
    *(int *)((int)&this_01[0x47].field_0061 + 3) = iVar3;
    uVar13 = *(uint *)(iVar3 + 0x14);
    if (uVar13 == 0) {
      uVar13 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar3 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,6,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2344,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,0x2e,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2345,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,0x56,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2350,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,0x7e,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2352,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,0xa6,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2351,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,
                     *(int *)((int)&this_01[0x47].field_0061 + 3),0,0x10,0xce,0xea,0x14);
    uVar6 = 2;
    iVar21 = -1;
    iVar3 = 0;
    puVar5 = (uint *)FUN_006b0140(0x2353,DAT_00807618);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar3,iVar21,uVar6);
    uVar13 = *(uint *)((int)&this_01[0x47].field_0061 + 3);
    FUN_006b2330((uint)DAT_008075a8,(uint *)&this_01[0x4f].field_0x55,0x31,0x40407f,
                 *(uint *)(uVar13 + 4),*(uint *)(uVar13 + 8),uVar13);
    Library::DKW::DDX::FUN_006b3640
              (DAT_008075a8,*(uint *)&this_01[0x4f].field_0x55,0xffffffff,10,0xb4);
    puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x20c,5);
    *(uint **)&this_01[0x4f].field_0x51 = puVar5;
    wsprintfA((LPSTR)local_3cc,s__s_s_s_s_007cd140,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
              &DAT_007c72d8,PTR_DAT_0079c0f0);
    hFindFile = FindFirstFileA((LPCSTR)local_3cc,&local_50c);
    local_14 = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        pIVar2 = g_currentExceptionFrame;
        if (((byte)local_50c.dwFileAttributes & 0x10) == 0) {
          local_cc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_cc;
          iVar3 = Library::MSVCRT::__setjmp3(local_cc.jumpBuffer,0,unaff_EDI,unaff_ESI);
          this_01 = local_18;
          hFindFile = local_14;
          pIVar2 = local_cc.previous;
          if (iVar3 == 0) {
            wsprintfA((LPSTR)local_3cc,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079c0ec,
                      local_50c.cFileName);
            this_00 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)local_3cc,0,0,0);
            local_1c = this_00;
            iVar3 = cMf32::RecGetLen(this_00,0xc,s_TEXTURE_DSCR_007cd130,0);
            this_01 = local_18;
            pcVar10 = extraout_ECX;
            if (-1 < iVar3) {
              local_c = 0;
              if (iVar3 == 4) {
                local_10 = &local_c;
              }
              else {
                local_10 = local_3cc;
              }
              puVar7 = cMf32::RecGet(this_00,0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_10,0);
              pcVar10 = extraout_ECX_00;
              if (puVar7 != (ushort *)0x0) {
                Library::MSVCRT::FUN_0072e730
                          ((byte *)local_50c.cFileName,(byte *)0x0,(byte *)0x0,local_718,(byte *)0x0
                          );
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
                pcVar16 = (char *)FUN_006b0140(UVar8,DAT_00807618);
                uVar13 = 0xffffffff;
                do {
                  pcVar17 = pcVar16;
                  if (uVar13 == 0) break;
                  uVar13 = uVar13 - 1;
                  pcVar17 = pcVar16 + 1;
                  cVar20 = *pcVar16;
                  pcVar16 = pcVar17;
                } while (cVar20 != '\0');
                uVar13 = ~uVar13;
                pcVar16 = pcVar17 + -uVar13;
                pcVar17 = local_614;
                for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
                  pcVar16 = pcVar16 + 4;
                  pcVar17 = pcVar17 + 4;
                }
                puVar5 = *(uint **)&this_01[0x4f].field_0x51;
                for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *pcVar17 = *pcVar16;
                  pcVar16 = pcVar16 + 1;
                  pcVar17 = pcVar17 + 1;
                }
                local_510 = local_c;
                Library::DKW::TBL::FUN_006ae1c0(puVar5,(undefined4 *)local_718);
                pcVar10 = extraout_ECX_01;
                this_00 = local_1c;
              }
            }
            cMf32::delete(pcVar10,(undefined4 *)this_00);
            hFindFile = local_14;
            pIVar2 = local_cc.previous;
          }
        }
        g_currentExceptionFrame = pIVar2;
        BVar9 = FindNextFileA(hFindFile,&local_50c);
      } while (BVar9 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    iVar3 = *(int *)(*(int *)&this_01[0x4f].field_0x51 + 0xc);
    if (1 < iVar3) {
      pcVar10 = (cMf32 *)(iVar3 + -1);
      local_1c = pcVar10;
      do {
        local_10 = (uint *)0x0;
        uVar13 = 0;
        if (0 < (int)pcVar10) {
          do {
            iVar3 = *(int *)&this_01[0x4f].field_0x51;
            if (uVar13 < *(uint *)(iVar3 + 0xc)) {
              iVar21 = *(int *)(iVar3 + 8) * uVar13 + *(int *)(iVar3 + 0x1c);
            }
            else {
              iVar21 = 0;
            }
            uVar14 = uVar13 + 1;
            if (uVar14 < *(uint *)(iVar3 + 0xc)) {
              iVar15 = *(int *)(iVar3 + 8) * uVar14 + *(int *)(iVar3 + 0x1c);
            }
            else {
              iVar15 = 0;
            }
            if (*(uint *)(iVar15 + 0x208) < *(uint *)(iVar21 + 0x208)) {
              FUN_006b0cd0(iVar3,uVar13,uVar14);
              local_10 = (uint *)0x1;
            }
            pcVar10 = local_1c;
            uVar13 = uVar14;
          } while ((int)uVar14 < (int)local_1c);
        }
      } while (local_10 != (uint *)0x0);
    }
    if (*(int *)(*(int *)&this_01[0x4f].field_0x51 + 0xc) == 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_Start_sett_obj_cpp_007cd0e8,0xd7);
    }
    if (*(int *)(*(int *)&this_01[0x4f].field_0x51 + 0xc) + -1 < *(int *)&this_01[0x4f].field_0x2d)
    {
      *(undefined4 *)&this_01[0x4f].field_0x2d = 0;
    }
  }
  cVar20 = this_01[0x4c].field_0x2a;
  this_01[0x55].field_0x58 = 1;
  this_01[0x55].field_0x5c = 1;
  if ((((cVar20 == '\r') || (cVar20 == '\x0f')) || ((cVar20 == '\x0e' || (cVar20 == '\x10')))) &&
     (*(int *)&this_01[0x4c].field_0x2b == 0x11)) {
    this_01[0x55].field_0x5b = 1;
    this_01[0x55].field_0x5d = 1;
    if (cVar20 != '\x0e') {
      this_01[0x55].field_0x59 = 1;
    }
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01[0x48].field_0x3,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
  ;
  (**(code **)(*(int *)&this_01[0x48].field_0x3 + 4))
            (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)&this_01[0x48].field_0x1f = 0x2fa;
  *(undefined4 *)&this_01[0x48].field_0x23 = 0x3b;
  *(undefined4 *)&this_01[0x48].field_0xb = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01[0x49].field_0x2f,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0
            );
  (**(code **)(*(int *)&this_01[0x49].field_0x2f + 4))
            (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)&this_01[0x49].field_0x4b = 0x2fa;
  *(undefined4 *)&this_01[0x49].field_0x4f = 0x11e;
  *(undefined4 *)&this_01[0x49].field_0x37 = 0;
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01[0x4a].field_0x5b,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0
            );
  (**(code **)(*(int *)&this_01[0x4a].field_0x5b + 4))
            (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)((int)&this_01[0x4b].field_0010 + 2) = 0x2ff;
  *(undefined4 *)&this_01[0x4b].field_0x16 = 0x5b;
  *(undefined4 *)((int)&this_01[0x4a].field_0061 + 2) = 0;
  local_c = 0x41;
  puVar5 = (uint *)&this_01[0x53].field_0x35;
  do {
    iVar3 = 1;
    puVar4 = (undefined4 *)(*(int *)&this_01->field_0x5d + 0x28);
    uVar13 = FUN_006b4fe0(*(int *)&this_01->field_0x5d);
    uVar13 = FUN_006b50c0(0x1e5,0x14,(uint)*(ushort *)(*(int *)&this_01->field_0x5d + 0xe),uVar13,
                          puVar4,iVar3);
    *puVar5 = uVar13;
    local_14 = *(HANDLE *)(uVar13 + 0x14);
    if (local_14 == (HANDLE)0x0) {
      local_14 = (HANDLE)(((uint)*(ushort *)(uVar13 + 0xe) * *(int *)(uVar13 + 4) + 0x1f >> 3 &
                          0x1ffffffc) * *(int *)(uVar13 + 8));
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(uVar13);
    for (uVar13 = (uint)local_14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar13 = (uint)local_14 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    uVar13 = *puVar5;
    FUN_006b2330((uint)DAT_008075a8,puVar5 + -10,0x31,0x40407f,*(uint *)(uVar13 + 4),
                 *(uint *)(uVar13 + 8),uVar13);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,puVar5[-10],0xffffffff,0x113,local_c);
    puVar5 = puVar5 + 1;
    local_c = local_c + 0x19;
  } while ((int)local_c < 0x13b);
  iVar3 = 1;
  puVar4 = (undefined4 *)(*(int *)&this_01->field_0x5d + 0x28);
  uVar13 = FUN_006b4fe0(*(int *)&this_01->field_0x5d);
  iVar3 = FUN_006b50c0(0x205,0x8c,(uint)*(ushort *)(*(int *)&this_01->field_0x5d + 0xe),uVar13,
                       puVar4,iVar3);
  *(int *)&this_01[0x4c].field_0x22 = iVar3;
  uVar13 = *(uint *)(iVar3 + 0x14);
  if (uVar13 == 0) {
    uVar13 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(iVar3 + 8);
  }
  puVar4 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar4 = 0xff;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  cVar20 = this_01[0x4c].field_0x2a;
  if ((((cVar20 == '\x06') || (cVar20 == '\x01')) ||
      ((cVar20 == '\x04' || (((cVar20 == '\a' || (cVar20 == '\r')) || (cVar20 == '\x0e')))))) &&
     ((*(int *)&this_01[0x4c].field_0x2b != 0x13 ||
      ((DAT_00803400 != '\x14' && (DAT_00803400 != '\x15')))))) {
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,8,5,
                     0xa5,0x14);
    uVar6 = 2;
    iVar15 = -1;
    iVar21 = -3;
    iVar3 = 0xa5;
    puVar19 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x256d,DAT_00807618);
    puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  }
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,8,0x1b,
                   0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4b,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x104,
                   0x1b,0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4c,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,8,0x31,
                   0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4d,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x104,
                   0x31,0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4e,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,8,0x47,
                   0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f4f,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x104,
                   0x47,0xa5,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa5;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f56,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,10,0x5d,
                   100,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 100;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f51,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x96,0x5d
                   ,0x82,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0x82;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f58,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x140,
                   0x5d,0xa0,0x14);
  uVar6 = 2;
  iVar15 = -1;
  iVar21 = -3;
  iVar3 = 0xa0;
  puVar19 = (uint *)&DAT_008016a0;
  puVar5 = (uint *)FUN_006b0140(0x1f50,DAT_00807618);
  puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
  ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  cVar20 = this_01[0x4c].field_0x2a;
  if (((cVar20 != '\x06') && (cVar20 != '\x01')) && (cVar20 != '\x02')) {
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,8,0x73,
                     0xe1,0x14);
    uVar6 = 2;
    iVar15 = -1;
    iVar21 = -3;
    iVar3 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x1f54,DAT_00807618);
    puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
    ccFntTy::SetSurf((ccFntTy *)DAT_0081176c->field_0034,*(int *)&this_01[0x4c].field_0x22,0,0x104,
                     0x73,0xdc,0x14);
    uVar6 = 2;
    iVar15 = -1;
    iVar21 = -3;
    iVar3 = 0xe1;
    puVar19 = (uint *)&DAT_008016a0;
    puVar5 = (uint *)FUN_006b0140(0x1f53,DAT_00807618);
    puVar5 = thunk_FUN_00540c40((void *)DAT_0081176c->field_0034,puVar5,puVar19,iVar3);
    ccFntTy::WrStr((ccFntTy *)DAT_0081176c->field_0034,puVar5,iVar21,iVar15,uVar6);
  }
  uVar13 = *(uint *)&this_01[0x4c].field_0x22;
  puVar12 = &this_01[0x4c].field_0x26;
  FUN_006b2330((uint)DAT_008075a8,(uint *)puVar12,0x31,0x40407f,*(uint *)(uVar13 + 4),
               *(uint *)(uVar13 + 8),uVar13);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar12,0xffffffff,0x112,0x149);
  (**(code **)(*(int *)this_01 + 0x18))(1);
  if (this_01[0x55].field_0x59 != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                 *(int *)&this_01[0x42].field_0x51 + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar11 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
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
    *(undefined1 **)((int)&this_01[0x55].field_0061 + 2) = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar20 = '\x01';
      uVar13 = 0x10;
      iVar21 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar13 = HoloTy::Init(*(HoloTy **)((int)&this_01[0x55].field_0061 + 2),4,10,0xb4,iVar3,iVar21,
                            uVar13,cVar20,uVar14);
      if (uVar13 != 0) {
        iVar3 = *(int *)((int)&this_01[0x55].field_0061 + 2);
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        uVar13 = *(uint *)(*(int *)((int)&this_01[0x55].field_0061 + 2) + 3);
        if (-1 < (int)uVar13) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar13);
        }
        if (*(uint *)&DAT_0081176c->field_0x391 != 0xffffffff) {
          FUN_006b3af0(*(int **)&DAT_0081176c->field_0x3d5,*(uint *)&DAT_0081176c->field_0x391);
        }
        if (*(uint *)&DAT_0081176c->field_0x422 != 0xffffffff) {
          FUN_006b3af0(*(int **)&DAT_0081176c->field_0x466,*(uint *)&DAT_0081176c->field_0x422);
        }
        if (*(uint *)&DAT_0081176c->field_0x4b3 != 0xffffffff) {
          FUN_006b3af0(*(int **)&DAT_0081176c->field_0x4f7,*(uint *)&DAT_0081176c->field_0x4b3);
        }
        FUN_006b3af0(DAT_008075a8,DAT_0081176c->field_0540);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01[0x55].field_0x5c == '\0') {
    FUN_006b3af0(DAT_008075a8,*(uint *)puVar12);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x205,0x8c,
                 *(int *)&this_01[0x42].field_0x51 + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x149);
    puVar11 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
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
    *(undefined1 **)&this_01[0x56].field_0x6 = puVar11;
    if (puVar11 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar20 = '\x01';
      uVar13 = 0x10;
      iVar21 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
      uVar13 = HoloTy::Init(*(HoloTy **)&this_01[0x56].field_0x6,2,0x112,0x149,iVar3,iVar21,uVar13,
                            cVar20,uVar14);
      if (uVar13 != 0) {
        iVar3 = *(int *)&this_01[0x56].field_0x6;
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        uVar13 = *(uint *)(*(int *)&this_01[0x56].field_0x6 + 3);
        if (-1 < (int)uVar13) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar13);
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)puVar12);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
  }
  if (this_01[0x55].field_0x58 == '\0') {
    if (*(uint *)&this_01[0x48].field_0x7 != 0xffffffff) {
      FUN_006b3af0(*(int **)&this_01[0x48].field_0x4b,*(uint *)&this_01[0x48].field_0x7);
    }
    if (*(uint *)&this_01[0x49].field_0x33 != 0xffffffff) {
      FUN_006b3af0(*(int **)((int)&this_01[0x4a].field_0010 + 2),*(uint *)&this_01[0x49].field_0x33)
      ;
    }
    if (*(uint *)&this_01[0x4a].field_0x5f != 0xffffffff) {
      FUN_006b3af0(*(int **)&this_01[0x4b].field_0x3e,*(uint *)&this_01[0x4a].field_0x5f);
    }
    puVar5 = (uint *)&this_01[0x53].field_0xd;
    iVar3 = 10;
    do {
      FUN_006b3af0(DAT_008075a8,*puVar5);
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x205,0x104,
                 *(int *)&this_01[0x42].field_0x51 + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    puVar12 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      puVar12[2] = 1;
      *puVar12 = 0;
      *(undefined4 *)(puVar12 + 3) = 0xffffffff;
      puVar12[1] = 2;
      *(undefined4 *)(puVar12 + 7) = 0;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      *(undefined4 *)(puVar12 + 0x1b) = 1;
      *(undefined4 *)(puVar12 + 0x13) = 1;
      *(undefined4 *)(puVar12 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x27) = 0;
      *(undefined4 *)(puVar12 + 0x23) = 0;
      *(undefined4 *)(puVar12 + 0x2f) = 1;
      *(undefined4 *)(puVar12 + 0x2b) = 1;
    }
    *(undefined1 **)&this_01[0x55].field_0x5f = puVar12;
    if (puVar12 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar20 = '\x01';
      uVar13 = 0x10;
      iVar21 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
      uVar13 = HoloTy::Init(*(HoloTy **)&this_01[0x55].field_0x5f,2,0x112,0x38,iVar3,iVar21,uVar13,
                            cVar20,uVar14);
      if (uVar13 != 0) {
        iVar3 = *(int *)&this_01[0x55].field_0x5f;
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        uVar13 = *(uint *)(*(int *)&this_01[0x55].field_0x5f + 3);
        if (-1 < (int)uVar13) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar13);
        }
        if (*(uint *)&this_01[0x48].field_0x7 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_01[0x48].field_0x4b,*(uint *)&this_01[0x48].field_0x7);
        }
        if (*(uint *)&this_01[0x49].field_0x33 != 0xffffffff) {
          FUN_006b3af0(*(int **)((int)&this_01[0x4a].field_0010 + 2),
                       *(uint *)&this_01[0x49].field_0x33);
        }
        if (*(uint *)&this_01[0x4a].field_0x5f != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_01[0x4b].field_0x3e,*(uint *)&this_01[0x4a].field_0x5f);
        }
        puVar5 = (uint *)&this_01[0x53].field_0xd;
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
  if (this_01[0x55].field_0x5a != '\0') {
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0xf9,0x123,
                 *(int *)&this_01[0x42].field_0x51 + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
    puVar12 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      puVar12[2] = 1;
      *puVar12 = 0;
      *(undefined4 *)(puVar12 + 3) = 0xffffffff;
      puVar12[1] = 2;
      *(undefined4 *)(puVar12 + 7) = 0;
      *(undefined4 *)(puVar12 + 0xb) = 0;
      *(undefined4 *)(puVar12 + 0xf) = 0;
      *(undefined4 *)(puVar12 + 0x1b) = 1;
      *(undefined4 *)(puVar12 + 0x13) = 1;
      *(undefined4 *)(puVar12 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar12 + 0x27) = 0;
      *(undefined4 *)(puVar12 + 0x23) = 0;
      *(undefined4 *)(puVar12 + 0x2f) = 1;
      *(undefined4 *)(puVar12 + 0x2b) = 1;
    }
    *(undefined1 **)&this_01[0x56].field_0x2 = puVar12;
    if (puVar12 != (undefined1 *)0x0) {
      uVar14 = 0;
      cVar20 = '\x01';
      uVar13 = 0x10;
      iVar21 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar13 = HoloTy::Init(*(HoloTy **)&this_01[0x56].field_0x2,4,10,0xb4,iVar3,iVar21,uVar13,
                            cVar20,uVar14);
      if (uVar13 != 0) {
        iVar3 = *(int *)&this_01[0x56].field_0x2;
        *(undefined1 *)(iVar3 + 2) = 1;
        *(undefined4 *)(iVar3 + 0x17) = *(undefined4 *)(iVar3 + 0x13);
        uVar13 = *(uint *)(*(int *)&this_01[0x56].field_0x2 + 3);
        if (-1 < (int)uVar13) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar13);
        }
        FUN_006b3af0(DAT_008075a8,*(uint *)&this_01[0x4f].field_0x55);
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
  uVar6 = *(undefined4 *)&this_01->field_0x8;
  *(undefined2 *)puVar4 = 0;
  *(undefined1 *)((int)puVar4 + 2) = 0;
  cVar20 = this_01[0x4c].field_0x2a;
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
    local_294 = uVar6;
  }
  iVar3 = *(int *)&this_01[0x42].field_0x51;
  local_1f8 = uVar6;
  local_1d1 = uVar6;
  if (*(int *)(iVar3 + 0x2e6) != 0) {
    puVar4 = local_44;
    for (iVar21 = 6; iVar21 != 0; iVar21 = iVar21 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0xffff;
    MMsgTy::ShowSprites(*(MMsgTy **)(iVar3 + 0x2e6));
    *(undefined4 *)(*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x2e6) + 0x1cab) =
         *(undefined4 *)&this_01->field_0x8;
    MMsgTy::SetPanel(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),0,(int)&local_2c8,0,0);
    MMsgTy::StatePanel(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),(int)local_44);
  }
  SettMapTy::PaintSettMap(this_01,'\x01');
  this = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar6 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
    uVar1 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
    DAT_00802a30[0xb].field_0x47 = 1;
    *(undefined2 *)&this[0xb].field_0x48 = 0xffff;
    CursorClassTy::SetGCType(this,CASE_0,uVar1,uVar6);
    CursorClassTy::DrawSprite
              (this,*(int *)((int)&this[1].field_0060 + 1),*(int *)&this[2].field_0x1);
    this[2].field_0xa = 0;
    *(undefined4 *)&this[0xc].field_0x2f = 0xffffffff;
  }
  *(undefined1 *)(this_01 + 1) = 3;
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  if (DAT_008067a0 != '\0') {
    CFsgsConnection::UpdateGame((CFsgsConnection *)&DAT_00802a90,4,&this_01[0x42].field_0x55);
  }
  g_currentExceptionFrame = local_88.previous;
  return;
}

