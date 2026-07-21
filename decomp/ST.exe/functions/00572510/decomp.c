
/* WARNING: Removing unreachable block (ram,0x00572660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00572510(AnonShape_00572510_F06DC155 *param_1)

{
  char cVar1;
  byte bVar2;
  AnonShape_00572510_F06DC155 *this;
  HANDLE hFindFile;
  BOOL BVar3;
  int iVar4;
  cMf32 *this_00;
  ushort *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  cMf32 *this_01;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  _WIN32_FIND_DATAA local_29c;
  byte local_15c [260];
  InternalExceptionFrame local_58;
  cMf32 *local_14;
  AnonShape_00572510_F06DC155 *local_10;
  int local_c;
  char *local_8;

  local_8 = &param_1->field_0785;
  local_c = 0;
  param_1->field_0DEE = 0;
  if (param_1->field_0785 != '\0') {
    local_10 = param_1;
    wsprintfA((LPSTR)local_15c,"%s%s%s",&param_1->field_0x28,PTR_s_SAVEGAME__0079b0cc,
              local_8);
    hFindFile = FindFirstFileA((LPCSTR)local_15c,&local_29c);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_29c.dwFileAttributes & 0x10) != 0) {
          local_c = 1;
          break;
        }
        BVar3 = FindNextFileA(hFindFile,&local_29c);
      } while (BVar3 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    if (local_c != 0) {
      wsprintfA((LPSTR)local_15c,"%s%s%s\\%s",&param_1->field_0x28,PTR_s_SAVEGAME__0079b0cc,
                local_8,PTR_s_PL_LOG_0079b0d0);
      local_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_58;
      iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
      if (iVar4 == 0) {
        this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,local_15c,0,0,0);
        this = local_10;
        if (this_00 != (cMf32 *)0x0) {
          local_8 = &DAT_008072f8;
          local_14 = this_00;
          cMf32::RecGet(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,(int *)&local_8,1);
          thunk_FUN_005739a0((AnonShape_005739A0_A4724D00 *)this);
          local_8 = &this->field_0x80e;
          cMf32::RecGet(this_00,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(int *)&local_8,1);
          local_8 = &this->field_0xd86;
          cMf32::RecGet(this_00,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(int *)&local_8,1);
          local_8 = &this->field_0x99e;
          cMf32::RecGet(this_00,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(int *)&local_8,1);
          local_8 = &this->field_0xc1e;
          cMf32::RecGet(this_00,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(int *)&local_8,1);
          local_8 = &this->field_0x7c5;
          this->field_0DEE = 1;
          puVar10 = (undefined4 *)local_8;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)&this->field_0x805 = 0;
          *(undefined4 *)&this->field_0x809 = 0;
          this->field_0x80d = 0;
          puVar5 = cMf32::RecGet(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(int *)&local_8,0);
          if (((puVar5 == (ushort *)0x0) && (this != (AnonShape_00572510_F06DC155 *)0xfffff83b)) &&
             (&this->field_0785 != (char *)0x0)) {
            uVar7 = 0xffffffff;
            pcVar9 = &this->field_0785;
            do {
              pcVar11 = pcVar9;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar11 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar11;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar9 = pcVar11 + -uVar7;
            pcVar11 = &this->field_0x7c5;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar7 = uVar7 & 3; this_00 = local_14, uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar11 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
          iVar12 = 0;
          local_8 = &this->field_0x805;
          cMf32::RecGet(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(int *)&local_8,0);
          iVar4 = _DAT_008072f8;
          _DAT_008072f8 = 0;
          _DAT_008072fc = 0x82;
          uVar7 = 0;
          do {
            iVar12 = iVar12 + (uint)(byte)(&DAT_008072f8)[uVar7];
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x82);
          if (iVar12 != iVar4) {
            thunk_FUN_005734c0(this,(LPDWORD)0x0,(PHKEY)0x1);
          }
          pbVar6 = &DAT_007ca694;
          pbVar13 = &this->field_0x640;
          do {
            bVar2 = *pbVar13;
            bVar14 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_005727ec:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_005727f1;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            bVar14 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_005727ec;
            pbVar13 = pbVar13 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005727f1:
          if ((iVar4 == 0) && ((char)DAT_00807300 == '\x02')) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            DAT_00807300._0_1_ = '\x01';
          }
          thunk_FUN_00573240();
          cMf32::delete(this_01,this_00);
        }
        g_currentExceptionFrame = local_58.previous;
        local_10 = this;
      }
      else {
        g_currentExceptionFrame = local_58.previous;
        local_c = 0;
      }
      param_1 = local_10;
      if (local_c != 0) {
        return;
      }
    }
    param_1->field_0DEE = 0;
  }
  return;
}

