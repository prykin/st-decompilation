
void __thiscall thunk_FUN_0056f250(void *this,char param_1,byte param_2,char *param_3)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *this_00;
  uint uVar5;
  undefined4 unaff_ESI;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  void *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  char cVar13;
  uint *puVar14;
  byte abStack_1a8 [260];
  InternalExceptionFrame IStack_a4;
  InternalExceptionFrame IStack_60;
  byte bStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined4 uStack_19;
  undefined4 *puStack_14;
  void *pvStack_10;
  byte *pbStack_c;
  uint uStack_8;
  
  uStack_8 = 0x88000016;
  abStack_1a8[0] = 0;
  pvStack_10 = this;
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x1178) != 0) {
      wsprintfA((LPSTR)abStack_1a8,s__s_s_s__s_007ca1ec,(int)this + 0x60,PTR_s_SAVEGAME__0079b02c,
                &DAT_00807ddd,PTR_s_SAVE_QUICKSAVE_0079b044);
      *(undefined4 *)((int)this + 0x1178) = 0;
      goto LAB_0056f325;
    }
    if (param_1 == '\x03') goto LAB_0056f325;
    param_3 = (char *)((int)this + 0x7a02);
  }
  else if (param_3 == (char *)0x0) {
    wsprintfA((LPSTR)abStack_1a8,s__s_s_s__sDEBUG_u_007ca1f8,(int)this + 0x60,
              PTR_s_SAVEGAME__0079b02c,&DAT_00807ddd,PTR_DAT_0079b050,param_2);
    goto LAB_0056f325;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar9 = param_3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = param_3 + 1;
    cVar13 = *param_3;
    param_3 = pcVar9;
  } while (cVar13 != '\0');
  uVar4 = ~uVar4;
  pbVar6 = (byte *)(pcVar9 + -uVar4);
  pbVar8 = abStack_1a8;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar8 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  }
LAB_0056f325:
  if ((param_1 != '\0') || (abStack_1a8[0] != 0)) {
    cVar13 = *(char *)((int)this + 0x1163);
    if (cVar13 == '\x01') {
      uStack_8 = uStack_8 | 0x100;
    }
    else if (cVar13 == '\x02') {
      uStack_8 = uStack_8 | 0x200;
    }
    else if (cVar13 == '\x03') {
      uStack_8 = uStack_8 | 0x500;
    }
    IStack_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_a4;
    iVar3 = __setjmp3(IStack_a4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      if ((param_1 == '\0') || (this_00 = extraout_ECX, param_1 == '\x03')) {
        puStack_14 = FUN_006f0ec0(0x345,abStack_1a8,1,0,0);
        this_00 = extraout_ECX_00;
      }
      puVar7 = puStack_14;
      if ((param_1 == '\0') || (param_1 == '\x03')) {
        FUN_006efdb0(DAT_00806750,(int)puStack_14,s_3D_MAP_007ca1e4,'\x01');
        pvVar2 = pvStack_10;
        FUN_0071adb0(*(byte **)((int)pvStack_10 + 0x7d12),*(uint *)((int)pvStack_10 + 0x7d16),
                     (int)puVar7,PTR_s_TEXTURE_0079b07c,'\x01');
        STPlaySystemC::Save(DAT_00802a38,puVar7);
        FUN_006f13f0(0xc,PTR_s_RND_INIT_0079b05c,(byte *)((int)pvVar2 + 0x1134),4,(undefined4 *)0x0,
                     '\0',(uint *)0x0);
        FUN_006f13f0(0,PTR_s_DESCRIPTOR_0079b080,(byte *)((int)pvVar2 + 0x1196),0x1999,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f13f0(0xc,PTR_s_TITLE_MISSION_0079b070,(byte *)((int)pvVar2 + 0x4da3),0x104,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        IStack_60.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &IStack_60;
        iVar3 = __setjmp3(IStack_60.jumpBuffer,0,unaff_EDI,unaff_ESI);
        pvVar2 = pvStack_10;
        puVar7 = puStack_14;
        if ((iVar3 == 0) && (*(uint **)((int)pvStack_10 + 0x4ea7) != (uint *)0x0)) {
          FUN_0071ab30(*(uint **)((int)pvStack_10 + 0x4ea7),(int)puStack_14,
                       PTR_s_DESCRIPTION_0079b074,'\x01');
        }
        g_currentExceptionFrame = IStack_60.previous;
        if (*(uint **)((int)pvVar2 + 0x4eab) != (uint *)0x0) {
          FUN_0071ab30(*(uint **)((int)pvVar2 + 0x4eab),(int)puVar7,PTR_s_OBJECTIVES_0079b078,'\x01'
                      );
        }
        if (DAT_00807598 != (void *)0x0) {
          iVar3 = 1;
          puVar12 = (undefined4 *)(DAT_0080679c + 0x28);
          uVar4 = FUN_006b4fe0(DAT_0080679c);
          pbStack_c = (byte *)FUN_006b50c0(0x8b,0x8b,(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,
                                           puVar12,iVar3);
          if (pbStack_c != (byte *)0x0) {
            FUN_006b4170((int)pbStack_c,0,0,0,*(int *)(pbStack_c + 4),*(int *)(pbStack_c + 8),0);
            FUN_006e6fb0(DAT_00807598,(int)pbStack_c,0,0,1);
            puVar14 = (uint *)0x0;
            cVar13 = '\0';
            puVar12 = (undefined4 *)0x0;
            uVar4 = FUN_006b5050((int)pbStack_c);
            FUN_006f13f0(0xc,PTR_s_SMALL_MAP_0079b084,pbStack_c,uVar4,puVar12,cVar13,puVar14);
            FUN_006ab060(&pbStack_c);
          }
        }
        FUN_006f13f0(0xc,PTR_s_TYPE_START_0079b08c,(byte *)((int)pvVar2 + 0x1180),1,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f13f0(0,PTR_s_ORIG_DB_0079b088,(byte *)((int)pvVar2 + 0x78fe),0x104,(undefined4 *)0x0
                     ,'\0',(uint *)0x0);
        FUN_006f13f0(0,PTR_s_REPORT_0079b090,(byte *)((int)pvVar2 + 0x4f02),0x27f0,(undefined4 *)0x0
                     ,'\0',(uint *)0x0);
        uStack_1b = *(undefined1 *)((int)pvVar2 + 0x112e);
        uStack_1a = *(undefined1 *)((int)pvVar2 + 0x112f);
        bStack_1c = *(byte *)((int)pvVar2 + 0x112d);
        uStack_19 = *(undefined4 *)((int)pvVar2 + 0x1130);
        FUN_006f13f0(0x80,PTR_s_SAVE_PLAYER_0079b058,&bStack_1c,7,(undefined4 *)0x0,'\0',(uint *)0x0
                    );
        FUN_006f13f0(0,PTR_s_RESTART_GAME_0079b060,(byte *)((int)pvVar2 + 0x2b2f),0x2274,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f13f0(0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(byte *)((int)pvVar2 + 0x4eaf),4,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        FUN_006f13f0(0xc,PTR_s_STATETIMER_GAME_0079b064,(byte *)((int)pvVar2 + 0x4eb3),4,
                     (undefined4 *)0x0,'\0',(uint *)0x0);
        if (*(short *)((int)pvVar2 + 0x4ed7) == 1) {
          FUN_006f13f0(0xc,PTR_s_BRIEFING_GAME_0079b06c,(byte *)((int)pvVar2 + 0x4eb7),0x20,
                       (undefined4 *)0x0,'\0',(uint *)0x0);
        }
        FUN_006f13f0(0x80,PTR_s_SAVE_DESC_0079b054,(byte *)&uStack_8,4,(undefined4 *)0x0,'\0',
                     (uint *)0x0);
        this_00 = extraout_ECX_01;
      }
      cMf32::delete(this_00,puVar7);
      g_currentExceptionFrame = IStack_a4.previous;
      return;
    }
    g_currentExceptionFrame = IStack_a4.previous;
    pbVar6 = (byte *)((int)pvStack_10 + 0x7d1a);
    uVar4 = 0xffffffff;
    pbVar8 = abStack_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
    pbVar8 = pbVar11 + -uVar4;
    pbVar11 = pbVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = PTR_DAT_0079b034;
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar4);
    pbVar11 = pbVar11 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    DeleteFileA((LPCSTR)pbVar6);
    uVar4 = 0xffffffff;
    pbVar8 = abStack_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
    pbVar8 = pbVar11 + -uVar4;
    pbVar11 = pbVar6;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = PTR_DAT_0079b038;
    do {
      pcVar10 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar4);
    pbVar11 = pbVar11 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar11 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar11 = pbVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar11 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar11 = pbVar11 + 1;
    }
    DeleteFileA((LPCSTR)pbVar6);
    if (DAT_008016dc != (OptPanelTy *)0x0) {
      OptPanelTy::Notification(DAT_008016dc,'\f',0);
    }
  }
  return;
}

