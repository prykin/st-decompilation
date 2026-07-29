
void __thiscall FUN_0056f250(void *this,char param_1,byte param_2,char *param_3)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  int uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  cMf32 *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  char cVar14;
  uint *puVar15;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  byte local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined4 local_19;
  cMf32 *local_14;
  void *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  uint local_8;

  local_8 = 0x88000016;
  local_1a8[0] = 0;
  local_10 = this;
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x1178) != 0) {
      wsprintfA((LPSTR)local_1a8,"%s%s%s\\%s",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c,
                &DAT_00807ddd,PTR_s_SAVE_QUICKSAVE_0079b044);
      *(undefined4 *)((int)this + 0x1178) = 0;
      goto LAB_0056f325;
    }
    if (param_1 == '\x03') goto LAB_0056f325;
    param_3 = (char *)((int)this + 0x7a02);
  }
  else if (param_3 == (char *)0x0) {
    wsprintfA((LPSTR)local_1a8,"%s%s%s\\%sDEBUG%u",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c
              ,&DAT_00807ddd,PTR_DAT_0079b050,param_2);
    goto LAB_0056f325;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_3 + 1;
    cVar14 = *param_3;
    param_3 = pcVar10;
  } while (cVar14 != '\0');
  uVar5 = ~uVar5;
  pbVar7 = (byte *)(pcVar10 + -uVar5);
  pbVar9 = local_1a8;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar9 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    pbVar9 = pbVar9 + 1;
  }
LAB_0056f325:
  if ((param_1 != '\0') || (local_1a8[0] != 0)) {
    cVar14 = *(char *)((int)this + 0x1163);
    if (cVar14 == '\x01') {
      local_8 = local_8 | 0x100;
    }
    else if (cVar14 == '\x02') {
      local_8 = local_8 | 0x200;
    }
    else if (cVar14 == '\x03') {
      local_8 = local_8 | 0x500;
    }
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;
    iVar3 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
    if (iVar3 == 0) {
      if ((param_1 == '\0') || (param_1 == '\x03')) {
        local_14 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_1a8,1,0,0);
      }
      pcVar8 = local_14;
      if ((param_1 == '\0') || (param_1 == '\x03')) {
        Library::Ourlib::MFSTMAP::mfTMapSave(DAT_00806750,(int)local_14,"3D_MAP",'\x01');
        pvVar2 = local_10;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        Library::Ourlib::MFANY::mfAnySave
                  (*(byte **)((int)local_10 + 0x7d12),*(uint *)((int)local_10 + 0x7d16),(int)pcVar8,
                   PTR_s_TEXTURE_0079b07c,'\x01');
        STPlaySystemC::Save(g_playSystem_00802A38,pcVar8);
        cMf32::RecPut(pcVar8,0xc,PTR_s_RND_INIT_0079b05c,(byte *)((int)pvVar2 + 0x1134),4,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0,PTR_s_DESCRIPTOR_0079b080,(byte *)((int)pvVar2 + 0x1196),0x1999,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0xc,PTR_s_TITLE_MISSION_0079b070,(byte *)((int)pvVar2 + 0x4da3),0x104,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        local_60.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_60;
        iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
        pvVar2 = local_10;
        pcVar8 = local_14;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar3 == 0) && (*(uint **)((int)local_10 + 0x4ea7) != (uint *)0x0)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          Library::Ourlib::MFSARR::mfSarSave
                    (*(uint **)((int)local_10 + 0x4ea7),(int)local_14,PTR_s_DESCRIPTION_0079b074,
                     '\x01');
        }
        g_currentExceptionFrame = local_60.previous;
        if (*(uint **)((int)pvVar2 + 0x4eab) != (uint *)0x0) {
          Library::Ourlib::MFSARR::mfSarSave
                    (*(uint **)((int)pvVar2 + 0x4eab),(int)pcVar8,PTR_s_OBJECTIVES_0079b078,'\x01');
        }
        if (g_sT3DSMAPContext_00807598 != (ST3DSMAPContext *)0x0) {
          iVar3 = 1;
          puVar13 = (undefined4 *)(DAT_0080679c + 0x28);
          uVar4 = FUN_006b4fe0(DAT_0080679c);
          local_c = (AnonShape_006B5050_99986F91 *)
                    FUN_006b50c0(0x8b,0x8b,(uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar13,iVar3
                                );
          if (local_c != (AnonShape_006B5050_99986F91 *)0x0) {
            FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_c,0,0,0,local_c->field_0004,
                         local_c->field_0008,0);
            ST3DSMAPContext::sub_006E6FB0
                      (g_sT3DSMAPContext_00807598,(AnonShape_006B5B10_E0D06CF1 *)local_c,0,0,1);
            puVar15 = (uint *)0x0;
            cVar14 = '\0';
            puVar13 = (undefined4 *)0x0;
            uVar5 = FUN_006b5050(local_c);
            cMf32::RecPut(pcVar8,0xc,PTR_s_SMALL_MAP_0079b084,(byte *)local_c,uVar5,puVar13,cVar14,
                          puVar15);
            FreeAndNull(&local_c);
          }
        }
        cMf32::RecPut(pcVar8,0xc,PTR_s_TYPE_START_0079b08c,(byte *)((int)pvVar2 + 0x1180),1,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0,PTR_s_ORIG_DB_0079b088,(byte *)((int)pvVar2 + 0x78fe),0x104,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0,PTR_s_REPORT_0079b090,(byte *)((int)pvVar2 + 0x4f02),0x27f0,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        local_1b = *(undefined1 *)((int)pvVar2 + 0x112e);
        local_1a = *(undefined1 *)((int)pvVar2 + 0x112f);
        local_1c = *(byte *)((int)pvVar2 + 0x112d);
        local_19 = *(undefined4 *)((int)pvVar2 + 0x1130);
        cMf32::RecPut(pcVar8,0x80,PTR_s_SAVE_PLAYER_0079b058,&local_1c,7,(undefined4 *)0x0,'\0',
                      (uint *)0x0);
        cMf32::RecPut(pcVar8,0,PTR_s_RESTART_GAME_0079b060,(byte *)((int)pvVar2 + 0x2b2f),0x2274,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(byte *)((int)pvVar2 + 0x4eaf),4,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        cMf32::RecPut(pcVar8,0xc,PTR_s_STATETIMER_GAME_0079b064,(byte *)((int)pvVar2 + 0x4eb3),4,
                      (undefined4 *)0x0,'\0',(uint *)0x0);
        if (*(short *)((int)pvVar2 + 0x4ed7) == 1) {
          cMf32::RecPut(pcVar8,0xc,PTR_s_BRIEFING_GAME_0079b06c,(byte *)((int)pvVar2 + 0x4eb7),0x20,
                        (undefined4 *)0x0,'\0',(uint *)0x0);
        }
        cMf32::RecPut(pcVar8,0x80,PTR_s_SAVE_DESC_0079b054,(byte *)&local_8,4,(undefined4 *)0x0,'\0'
                      ,(uint *)0x0);
      }
      cMf32::delete(pcVar8);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    pbVar7 = (byte *)((int)local_10 + 0x7d1a);
    uVar5 = 0xffffffff;
    pbVar9 = local_1a8;
    do {
      pbVar12 = pbVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar12 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar9 = pbVar12 + -uVar5;
    pbVar12 = pbVar7;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = PTR_DAT_0079b034;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar14 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar14 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pbVar9 = pbVar7;
    do {
      pbVar12 = pbVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar12 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar1 != 0);
    pbVar9 = (byte *)(pcVar11 + -uVar5);
    pbVar12 = pbVar12 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    DeleteFileA((LPCSTR)pbVar7);
    uVar5 = 0xffffffff;
    pbVar9 = local_1a8;
    do {
      pbVar12 = pbVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pbVar12 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar1 != 0);
    uVar5 = ~uVar5;
    pbVar9 = pbVar12 + -uVar5;
    pbVar12 = pbVar7;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar10 = PTR_DAT_0079b038;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar14 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar14 != '\0');
    uVar5 = ~uVar5;
    iVar3 = -1;
    pbVar9 = pbVar7;
    do {
      pbVar12 = pbVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pbVar12 = pbVar9 + 1;
      bVar1 = *pbVar9;
      pbVar9 = pbVar12;
    } while (bVar1 != 0);
    pbVar9 = (byte *)(pcVar11 + -uVar5);
    pbVar12 = pbVar12 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar12 = *(undefined4 *)pbVar9;
      pbVar9 = pbVar9 + 4;
      pbVar12 = pbVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar12 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    }
    DeleteFileA((LPCSTR)pbVar7);
    if (g_optPanel_008016DC != (OptPanelTy *)0x0) {
      OptPanelTy::Notification(g_optPanel_008016DC,'\f',0);
    }
  }
  return;
}

