
void FUN_0056db80(void)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  undefined4 **ppuVar4;
  uint *puVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  int *piVar9;
  void *unaff_EDI;
  int *piVar10;
  undefined4 *puVar11;
  LPSTR pCVar12;
  undefined *puVar13;
  byte *pbVar14;
  byte local_328 [260];
  byte local_224;
  undefined4 local_223;
  undefined4 **local_120;
  undefined4 local_11c [16];
  undefined4 **local_dc;
  undefined4 local_d8 [16];
  undefined4 **local_98;
  undefined4 local_94 [16];
  undefined4 local_54 [4];
  undefined4 local_44;
  undefined4 local_34 [8];
  LPSTR local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_224 = DAT_008016a0;
  puVar11 = &local_223;
  for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined2 *)puVar11 = 0;
  *(undefined1 *)((int)puVar11 + 2) = 0;
  local_98 = DAT_00858df8;
  DAT_00858df8 = &local_98;
  iVar8 = __setjmp3(local_94,0,unaff_EDI,unaff_ESI);
  piVar9 = local_c;
  if (iVar8 == 0) {
    *(undefined4 *)((int)local_c + 0x4eee) = 0;
    *(undefined4 *)((int)local_c + 0x4eea) = 0;
    *(undefined4 *)((int)local_c + 0x4ef2) = 0;
    *(undefined4 *)((int)local_c + 0x4efe) = 0;
    if (*(char *)((int)local_c + 0x1195) == '\0') {
      *(undefined4 *)((int)local_c + 0x1181) = 0;
    }
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    if (DAT_00811764 != 0) {
      FUN_006b6500(DAT_00811764,DAT_0080733c);
    }
    *(undefined2 *)((int)piVar9 + 0x4ed7) = 2;
    *(undefined4 *)((int)piVar9 + 0x4eb3) = 2;
    *(int *)((int)piVar9 + 0x4eaf) = 0;
    thunk_FUN_005b8c70(*(void **)(DAT_0081176c + 0x2e6),0,0,1);
    DAT_00807327 = DAT_00807327 | 1;
    if ((DAT_0080733b == 0) || (3 < DAT_0080733b)) {
      DAT_0080733b = 2;
    }
    iVar8 = *(int *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 8);
    piVar9[0x45a] = 0;
    piVar9[0xd] = iVar8;
    piVar9[0x459] = 0;
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
    puVar5 = thunk_FUN_005540e0(0x5c,0x7ca1d4,1);
    if (puVar5 == (uint *)0x0) {
      DAT_00802a58 = (uint *)0x0;
    }
    else {
      DAT_00802a58 = (uint *)thunk_FUN_005545c0((int *)puVar5);
    }
    if ((DAT_00802a58 != (uint *)0x0) && (thunk_FUN_00554660(10,1), DAT_00802a58 != (uint *)0x0)) {
      thunk_FUN_00554800(0x14,10,0x316,0x244,0,1,2,0x4021c6,0);
    }
    DAT_00806720 = timeGetTime();
    DAT_00806754 = FUN_006f0ec0(0x345,(byte *)((int)piVar9 + 0x76f6),0,0,0);
    local_8 = (int *)((int)piVar9 + 0x4eaf);
    FUN_006f1ce0(0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(int *)&local_8,0);
    local_8 = (int *)((int)piVar9 + 0x4eb3);
    FUN_006f1ce0(0xc,PTR_s_STATETIMER_GAME_0079b064,(int *)&local_8,0);
    local_8 = (int *)((int)piVar9 + 0x4eb7);
    puVar6 = FUN_006f1ce0(0xc,PTR_s_BRIEFING_GAME_0079b06c,(int *)&local_8,0);
    local_8 = piVar9 + 0x460;
    *(bool *)((int)piVar9 + 0x4ed9) = puVar6 != (ushort *)0x0;
    if (((char)*local_8 != '\f') && ((char)*local_8 != '\x10')) {
      FUN_006f1ce0(0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
    }
    local_8 = (int *)((int)piVar9 + 0x2b2f);
    FUN_006f1ce0(0,PTR_s_RESTART_GAME_0079b060,(int *)&local_8,0);
    if (DAT_00806758 != (undefined4 *)0x0) {
      FUN_006f1170(DAT_00806758);
    }
    local_8 = (int *)((int)piVar9 + 0x7d1a);
    DAT_00806758 = (undefined4 *)0x0;
    piVar10 = local_8;
    for (iVar8 = 0x20d; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar10 = 0;
      piVar10 = piVar10 + 1;
    }
    puVar6 = FUN_006f1ce0(0,PTR_s_ORIG_DB_0079b088,(int *)&local_8,0);
    if ((puVar6 == (ushort *)0x0) ||
       (local_14 = (LPSTR)((int)piVar9 + 0x7d1a), *(char *)((int)piVar9 + 0x7d1a) == '\0')) {
      local_dc = DAT_00858df8;
      DAT_00858df8 = &local_dc;
      iVar8 = __setjmp3(local_d8,0,unaff_EDI,unaff_ESI);
      piVar9 = local_c;
      ppuVar4 = local_dc;
      if (iVar8 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,(byte *)((int)local_c + 0x76f6),0,0,0);
        DAT_00858df8 = local_dc;
        ppuVar4 = DAT_00858df8;
      }
    }
    else {
      _strncpy((char *)((int)piVar9 + 0x78fe),local_14,0x103);
      *(undefined1 *)((int)piVar9 + 0x7a01) = 0;
      puVar13 = &DAT_007c6ee4;
      pCVar12 = local_14;
      wsprintfA(local_14,&DAT_007c6ee4,piVar9 + 0x18,(char *)((int)piVar9 + 0x78fe));
      local_120 = DAT_00858df8;
      DAT_00858df8 = &local_120;
      iVar8 = __setjmp3(local_11c,0,pCVar12,puVar13);
      piVar9 = local_c;
      ppuVar4 = local_120;
      if (iVar8 == 0) {
        DAT_00806758 = FUN_006f0ec0(0x345,(byte *)((int)local_c + 0x7d1a),0,0,0);
        DAT_00858df8 = local_120;
        ppuVar4 = DAT_00858df8;
      }
    }
    DAT_00858df8 = ppuVar4;
    puVar11 = (undefined4 *)((int)piVar9 + 0x7d12);
    if (*(int *)((int)piVar9 + 0x7d12) != 0) {
      FUN_006ab060(puVar11);
    }
    puVar6 = FUN_0071ad00(DAT_00806754,PTR_s_TEXTURE_0079b07c,4,1);
    *puVar11 = puVar6;
    iVar8 = FUN_006f2600(0,PTR_s_TEXTURE_0079b07c,(undefined1 *)0x0,1);
    *(int *)((int)piVar9 + 0x7d16) = iVar8;
    wsprintfA((LPSTR)&local_224,s__s_s_s_007c6edc,piVar9 + 0x18,PTR_s_SYSTEM__0079b030,*puVar11);
    if (DAT_00806760 != (undefined4 *)0x0) {
      thunk_FUN_0055d910();
      FUN_006f20e0(&DAT_0080679c);
      if (DAT_00806764 != (int *)0x0) {
        FUN_0070a300((int *)&DAT_00806764);
      }
      FUN_006f1170(DAT_00806760);
      DAT_00806760 = (undefined4 *)0x0;
    }
    DAT_00806760 = FUN_006f0ec0(0x345,&local_224,0,0,0);
    DAT_00806764 = FUN_007097c0((int)DAT_00806760);
    DAT_0080679c = FUN_0070a9f0(DAT_00806760,s_PALETTE_007ca1c8,2,1);
    thunk_FUN_0055d730((int)DAT_00806760,0);
    if (*(int *)((int)piVar9 + 0x7d0e) == 0) {
      iVar8 = (int)piVar9 + 0x4da3;
      uVar7 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA((LPSTR)((int)piVar9 + 0x7d1a),s__s__s_007c411c,uVar7,iVar8);
      if (DAT_00802a58 != (uint *)0x0) {
        thunk_FUN_00554c80(DAT_00802a58,(uint *)((int)piVar9 + 0x7d1a));
      }
      if (((char)piVar9[0x460] == '\x03') || ((char)piVar9[0x460] == '\b')) {
        puVar11 = (undefined4 *)((int)piVar9 + 0x5012);
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x5116);
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x6ce3);
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x6d03);
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x521e);
        for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = 0;
        puVar11 = (undefined4 *)((int)piVar9 + 0x5347);
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = 0;
        *(undefined1 *)((int)piVar9 + 0x6ce2) = 0;
        *(undefined1 *)(piVar9 + 0x1b38) = 0;
        *(undefined1 *)((int)piVar9 + 0x6ce1) = 0;
        *(undefined4 *)((int)piVar9 + 0x521a) = 0;
      }
      else {
        puVar11 = (undefined4 *)((int)piVar9 + 0x4f02);
        for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
      }
    }
    else {
      local_8 = (int *)((int)piVar9 + 0x4da3);
      piVar10 = local_8;
      for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar10 = 0;
        piVar10 = piVar10 + 1;
      }
      puVar6 = FUN_006f1ce0(0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_8,0);
      if ((puVar6 == (ushort *)0x0) ||
         (pbVar14 = (byte *)((int)piVar9 + 0x4da3), *(char *)((int)piVar9 + 0x4da3) == '\0')) {
        FUN_0072e730((byte *)((int)piVar9 + 0x76f6),(byte *)0x0,(byte *)0x0,local_328,(byte *)0x0);
        pbVar14 = local_328;
      }
      uVar7 = FUN_006b0140(0x267f,DAT_00807618);
      wsprintfA((LPSTR)((int)piVar9 + 0x7d1a),s__s__s_007c411c,uVar7,pbVar14);
      if (DAT_00802a58 != (uint *)0x0) {
        thunk_FUN_00554c80(DAT_00802a58,(uint *)((int)piVar9 + 0x7d1a));
      }
      if (((char)piVar9[0x460] == '\f') || ((char)piVar9[0x460] == '\x10')) {
        local_8 = piVar9 + 0x460;
        FUN_006f1ce0(0xc,PTR_s_TYPE_START_0079b08c,(int *)&local_8,0);
      }
      else {
        local_10 = (undefined4 *)((int)piVar9 + 0x1196);
        FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079b080,(int *)&local_10,0);
        thunk_FUN_0056ef50((int)piVar9);
        thunk_FUN_0056f040((int)piVar9);
      }
      if (*(byte **)((int)piVar9 + 0x4ea7) != (byte *)0x0) {
        FUN_006b5570(*(byte **)((int)piVar9 + 0x4ea7));
      }
      puVar5 = FUN_0071aa10((int)DAT_00806754,PTR_s_DESCRIPTION_0079b074,0);
      *(uint **)((int)piVar9 + 0x4ea7) = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)((int)piVar9 + 0x4ea7) = puVar5;
      }
      if (*(byte **)((int)piVar9 + 0x4eab) != (byte *)0x0) {
        FUN_006b5570(*(byte **)((int)piVar9 + 0x4eab));
      }
      puVar5 = FUN_0071aa10((int)DAT_00806754,PTR_s_OBJECTIVES_0079b078,0);
      *(uint **)((int)piVar9 + 0x4eab) = puVar5;
      if (puVar5 == (uint *)0x0) {
        puVar5 = FUN_006b54f0((uint *)0x0,10,10);
        *(uint **)((int)piVar9 + 0x4eab) = puVar5;
      }
      if ((piVar9[0x45f] == 0) &&
         ((cVar1 = (char)piVar9[0x460], cVar1 == '\b' || (cVar1 == '\x03')))) {
        puVar11 = (undefined4 *)((int)piVar9 + 0x5012);
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x5116);
        for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x6ce3);
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x6d03);
        for (iVar8 = 0x46; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        puVar11 = (undefined4 *)((int)piVar9 + 0x521e);
        for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = 0;
        puVar11 = (undefined4 *)((int)piVar9 + 0x5347);
        for (iVar8 = 0x666; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
        *(undefined1 *)puVar11 = 0;
        *(undefined1 *)((int)piVar9 + 0x6ce2) = 0;
        *(undefined1 *)(piVar9 + 0x1b38) = 0;
        *(undefined1 *)((int)piVar9 + 0x6ce1) = 0;
        *(undefined4 *)((int)piVar9 + 0x521a) = 0;
        *(undefined4 *)((int)piVar9 + 0x7d0e) = 0;
      }
      else {
        local_10 = (undefined4 *)((int)piVar9 + 0x4f02);
        puVar6 = FUN_006f1ce0(0,PTR_s_REPORT_0079b090,(int *)&local_10,0);
        if (puVar6 == (ushort *)0x0) {
          puVar11 = (undefined4 *)((int)piVar9 + 0x4f02);
          for (iVar8 = 0x9fc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
        }
        *(undefined4 *)((int)piVar9 + 0x7d0e) = 0;
      }
    }
    *(undefined4 *)((int)piVar9 + 0x4f02) = 0;
    if (((*(int *)((int)piVar9 + 0x1185) == 0) && (*(int *)((int)piVar9 + 0x1181) == 0)) &&
       (*(char *)((int)piVar9 + 0x1163) != '\x03')) {
      iVar8 = FUN_006e51b0((int)piVar9);
      piVar9[0x44d] = iVar8;
    }
    local_8 = piVar9 + 0x44d;
    FUN_006f1ce0(0xc,PTR_s_RND_INIT_0079b05c,(int *)&local_8,0);
    thunk_FUN_00577280();
    FUN_006e8640(DAT_00807598,
                 *(undefined4 *)
                  (s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 0x10),
                 *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + (uint)DAT_0080733b * 0x18 + 4))
    ;
    FUN_006dda90(DAT_00807598,0.7,0.95);
    FUN_006ddae0(DAT_00807598,0x10,4,4,DAT_008032c8);
    if (DAT_00807328 == 0) {
      FUN_006ddbb0((int)DAT_00807598);
    }
    pvVar3 = DAT_00807598;
    uVar7 = DAT_008032c0;
    *(undefined4 *)((int)DAT_00807598 + 0x278) = 0x10;
    *(undefined4 *)((int)pvVar3 + 0x27c) = uVar7;
    FUN_006e8630(DAT_00807598,DAT_0080732c);
    thunk_FUN_005782d0();
    thunk_FUN_0054c740();
    FUN_006f1170(DAT_00806754);
    DAT_00806754 = (undefined4 *)0x0;
    if (DAT_00802a58 != (uint *)0x0) {
      puVar5 = (uint *)FUN_006b0140(0x2680,DAT_00807618);
      thunk_FUN_00554c80(DAT_00802a58,puVar5);
      if ((*(char *)((int)piVar9 + 0x115e) != '\0') && (*(char *)((int)piVar9 + 0x1163) == '\x03'))
      {
        Sleep(2000);
      }
      thunk_FUN_005547d0(10,1);
      thunk_FUN_005544e0(DAT_00802a58);
      DAT_00802a58 = (uint *)0x0;
    }
    thunk_FUN_0056a500();
    puVar11 = local_34;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_34[4] = 0x6107;
    local_34[5] = 1;
    (**(code **)(*piVar9 + 0x18))(local_34);
    thunk_FUN_0056a500();
    puVar11 = (undefined4 *)((int)piVar9 + 0x5012);
    for (iVar8 = 0x41; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    puVar11 = (undefined4 *)((int)piVar9 + 0x521e);
    for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)piVar9 + 0x5327);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0xffffffff;
      puVar11 = puVar11 + 1;
    }
    puVar11 = (undefined4 *)((int)piVar9 + 0x6ce3);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined1 *)((int)piVar9 + 0x6ce1) = 0;
    *(undefined1 *)(piVar9 + 0x1b38) = 0;
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
    }
    thunk_FUN_00440700((uint)DAT_00807326);
    thunk_FUN_0056a500();
    puVar11 = local_34;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_34[3] = 0xf;
    local_34[4] = 5;
    FUN_006e3db0((int)local_34);
    thunk_FUN_0056a500();
    thunk_FUN_00577690(DAT_0081163c);
    thunk_FUN_00568dd0(piVar9 + 0xe,1,(char *)0x0,0x4b7,(int *)0x0,0);
    DAT_0080674c = 2;
    ShowCursor(0);
    DAT_00856d7c = 0;
    FUN_006bbb20((int)DAT_0080759c,0);
    FUN_006ba780((int)DAT_0080759c,0);
    DAT_00858df8 = local_98;
    *(undefined1 *)((int)piVar9 + 0x1195) = 0;
    return;
  }
  DAT_00858df8 = local_98;
  iVar8 = FUN_006ad4d0(s_E____titans_tapp_cpp_007ca0c8,0x54d,0,iVar8,&DAT_007a4ccc);
  if (iVar8 == 0) {
    if (DAT_00806754 != (undefined4 *)0x0) {
      FUN_006f1170(DAT_00806754);
    }
    DAT_00806754 = (undefined4 *)0x0;
    if (DAT_00802a58 != (uint *)0x0) {
      thunk_FUN_005544e0(DAT_00802a58);
    }
    puVar11 = local_54;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    DAT_00802a58 = (uint *)0x0;
    local_44 = 0x6102;
    (**(code **)(*local_c + 0x18))(local_54);
    *(undefined1 *)((int)local_c + 0x1195) = 0;
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

