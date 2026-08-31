#include "../../pseudocode_runtime.h"


void __thiscall FUN_0056f250(void *this,char param_1,byte param_2,char *param_3)

{
  byte bVar1;
  void *pvVar2;
  int local_EAX_309;
  int iVar3;
  int uVar4;
  uint uVar3;
  uint uVar5;
  byte *pbVar6;
  cMf32 *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  uint *puVar12;
  char cVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  uint local_19;
  cMf32 *local_14;
  void *local_10;
  AnonShape_006B5050_99986F91 *local_c;
  uint local_8;
  char *pcVar9_mg0;

  local_8 = 0x88000016;
  local_1a8[0] = 0;
  local_10 = this;
  if (param_2 == 0) {
    if (STField<int>(this,0x1178) != 0) {
      /* ST_CALLSITE[0056F2E1]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)local_1a8,"%s%s%s\\%s",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c,
                &CHAR_00h_00807ddd,PTR_s_SAVE_QUICKSAVE_0079b044);
      STField<undefined4>(this,0x1178) = 0;
      goto LAB_0056f325;
    }
    if (param_1 == '\x03') goto LAB_0056f325;
    param_3 = (char *)((int)this + 0x7a02);
  }
  else if (param_3 == nullptr) {
    /* ST_CALLSITE[0056F2AA]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)local_1a8,"%s%s%s\\%sDEBUG%u",(int)this + 0x60,PTR_s_SAVEGAME__0079b02c
              ,&CHAR_00h_00807ddd,PTR_DAT_0079b050,param_2);
    goto LAB_0056f325;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar9_mg0 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9_mg0 = param_3 + 1;
    cVar13 = *param_3;
    param_3 = pcVar9_mg0;
  } while (cVar13 != '\0');
  uVar3 = ~uVar3;
  pbVar6 = (byte *)(pcVar9_mg0 + -uVar3);
  pbVar8 = local_1a8;
  memmove(pbVar8, pbVar6, uVar3); /* compiler REP MOVS byte copy */
  uVar5 = 0;
LAB_0056f325:
  if ((param_1 != '\0') || (local_1a8[0] != 0)) {
    cVar13 = STField<char>(this,0x1163);
    if (cVar13 == '\x01') {
      local_8 = local_8 | 0x100;
    }
    else if (cVar13 == '\x02') {
      local_8 = local_8 | 0x200;
    }
    else if (cVar13 == '\x03') {
      local_8 = local_8 | 0x500;
    }
    local_a4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_a4;

    local_EAX_309 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
    if (local_EAX_309 == 0) {
      if ((param_1 == '\0') || (param_1 == '\x03')) {

        local_14 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_1a8,1,0,0));
      }
      pcVar7 = local_14;
      if ((param_1 == '\0') || (param_1 == '\x03')) {

        Library::Ourlib::MFSTMAP::mfTMapSave(PTR_00806750,(int)local_14,"3D_MAP",'\x01');
        pvVar2 = local_10;

        Library::Ourlib::MFANY::mfAnySave
                  (STField<byte *>(local_10,0x7d12),STField<uint>(local_10,0x7d16),(int)pcVar7,
                   PTR_s_TEXTURE_0079b07c,'\x01');
        /* ST_CALLSITE[0056F40F]: CALL 0x00405849; direct=00405849 STPlaySystemC::Save */
        STPlaySystemC::Save(g_playSystem_00802A38,pcVar7);

        cMf32::RecPut(pcVar7,0xc,PTR_s_RND_INIT_0079b05c,(byte *)((int)pvVar2 + 0x1134),4,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0,PTR_s_DESCRIPTOR_0079b080,(byte *)((int)pvVar2 + 0x1196),0x1999,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0xc,PTR_s_TITLE_MISSION_0079b070,(byte *)((int)pvVar2 + 0x4da3),0x104,
                      nullptr,'\0',nullptr);
        local_60.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_60;

        iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
        pvVar2 = local_10;
        pcVar7 = local_14;
        if ((iVar3 == 0) && (STField<uint *>(local_10,0x4ea7) != nullptr)) {

          Library::Ourlib::MFSARR::mfSarSave
                    (STField<uint *>(local_10,0x4ea7),(int)local_14,PTR_s_DESCRIPTION_0079b074,
                     '\x01');
        }
        g_currentExceptionFrame = local_60.previous;
        if (STField<uint *>(pvVar2,0x4eab) != nullptr) {

          Library::Ourlib::MFSARR::mfSarSave
                    (STField<uint *>(pvVar2,0x4eab),(int)pcVar7,PTR_s_OBJECTIVES_0079b078,'\x01');
        }
        if (g_sT3DSMAPContext_00807598 != nullptr) {
          iVar15 = 1;
          puVar14 = PTR_0080679c + 0x14;

          uVar4 = FUN_006b4fe0(PTR_0080679c);
          local_c = /* ST_CALLSITE[0056F521]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredSourceFamily_dibcopy; source view only; no Ghidra override */
          STPointerBoundaryCast<AnonShape_006B5050_99986F91 *>(FUN_006b50c0(0x8b,0x8b,(uint)PTR_0080679c[7],uVar4,(undefined4 *)puVar14,iVar15));
          if (local_c != nullptr) {
            FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_c,0,0,0,local_c->field_0004,
                         local_c->field_0008,0);
            ST3DSMAPContext::sub_006E6FB0
                      (g_sT3DSMAPContext_00807598,(RecoveredSourceFamily_dibcopy *)local_c,0,0,1);
            puVar16 = nullptr;
            cVar13 = '\0';
            puVar12 = nullptr;
            /* ST_CALLSITE[0056F562]: CALL 0x006b5050; direct=006B5050 FUN_006b5050; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/byte; source view only; no Ghidra override */
            uVar3 = FUN_006b5050(local_c);

            cMf32::RecPut(pcVar7,0xc,PTR_s_SMALL_MAP_0079b084,(byte *)local_c,uVar3,puVar12,cVar13,
                          puVar16);
            FreeAndNull(&local_c);
          }
        }

        cMf32::RecPut(pcVar7,0xc,PTR_s_TYPE_START_0079b08c,(byte *)((int)pvVar2 + 0x1180),1,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0,PTR_s_ORIG_DB_0079b088,(byte *)((int)pvVar2 + 0x78fe),0x104,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0,PTR_s_REPORT_0079b090,(byte *)((int)pvVar2 + 0x4f02),0x27f0,
                      nullptr,'\0',nullptr);
        local_1b = STField<undefined1>(pvVar2,0x112e);
        local_1a = STField<undefined1>(pvVar2,0x112f);
        local_1c = STField<byte>(pvVar2,0x112d);
        local_19 = STField<undefined4>(pvVar2,0x1130);

        cMf32::RecPut(pcVar7,0x80,PTR_s_SAVE_PLAYER_0079b058,&local_1c,7,nullptr,'\0',
                      nullptr);

        cMf32::RecPut(pcVar7,0,PTR_s_RESTART_GAME_0079b060,(byte *)((int)pvVar2 + 0x2b2f),0x2274,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0xc,PTR_s_AUTOSAVETIME_GAME_0079b068,(byte *)((int)pvVar2 + 0x4eaf),4,
                      nullptr,'\0',nullptr);

        cMf32::RecPut(pcVar7,0xc,PTR_s_STATETIMER_GAME_0079b064,(byte *)((int)pvVar2 + 0x4eb3),4,
                      nullptr,'\0',nullptr);
        if (STField<short>(pvVar2,0x4ed7) == 1) {

          cMf32::RecPut(pcVar7,0xc,PTR_s_BRIEFING_GAME_0079b06c,(byte *)((int)pvVar2 + 0x4eb7),0x20,
                        nullptr,'\0',nullptr);
        }

        cMf32::RecPut(pcVar7,0x80,PTR_s_SAVE_DESC_0079b054,(byte *)&local_8,4,nullptr,'\0'
                      ,nullptr);
      }
      cMf32::delete(pcVar7);
      g_currentExceptionFrame = local_a4.previous;
      return;
    }
    g_currentExceptionFrame = local_a4.previous;
    pbVar6 = (byte *)((int)local_10 + 0x7d1a);
    uVar3 = 0xffffffff;
    pbVar8 = local_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar3 = ~uVar3;
    pbVar8 = pbVar11 + -uVar3;
    pbVar11 = pbVar6;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar3 = 0xffffffff;
    pcVar9 = PTR_CHAR___0079b034;
    do {
      pcVar10 = pcVar9;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar3 = ~uVar3;
    iVar15 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar3);
    pbVar11 = pbVar11 + -1;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    /* ST_CALLSITE[0056F74F]: CALL dword ptr [0x0085bce8] */
    DeleteFileA((LPCSTR)pbVar6);
    uVar3 = 0xffffffff;
    pbVar8 = local_1a8;
    do {
      pbVar11 = pbVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    uVar3 = ~uVar3;
    pbVar8 = pbVar11 + -uVar3;
    pbVar11 = pbVar6;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    uVar3 = 0xffffffff;
    pcVar9 = PTR_CHAR___0079b038;
    do {
      pcVar10 = pcVar9;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar9 + 1;
      cVar13 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar13 != '\0');
    uVar3 = ~uVar3;
    iVar15 = -1;
    pbVar8 = pbVar6;
    do {
      pbVar11 = pbVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pbVar11 = pbVar8 + 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar11;
    } while (bVar1 != 0);
    pbVar8 = (byte *)(pcVar10 + -uVar3);
    pbVar11 = pbVar11 + -1;
    memmove(pbVar11, pbVar8, uVar3); /* compiler REP MOVS byte copy */
    /* ST_CALLSITE[0056F7A4]: CALL dword ptr [0x0085bce8] */
    DeleteFileA((LPCSTR)pbVar6);
    if (g_optPanel_008016DC != nullptr) {
      /* ST_CALLSITE[0056F7B8]: CALL 0x00405ef7; direct=00405EF7 OptPanelTy::Notification */
      OptPanelTy::Notification(g_optPanel_008016DC,'\f',0);
    }
  }
  return;
}

