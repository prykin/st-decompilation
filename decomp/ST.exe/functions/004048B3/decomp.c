
/* WARNING: Removing unreachable block (ram,0x00572660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_00572510(void *param_1)

{
  char cVar1;
  byte bVar2;
  void *this;
  HANDLE hFindFile;
  BOOL BVar3;
  int iVar4;
  cMf32 *this_00;
  ushort *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  cMf32 *this_01;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  char *pcVar14;
  _WIN32_FIND_DATAA _Stack_29c;
  byte abStack_15c [260];
  InternalExceptionFrame IStack_58;
  cMf32 *pcStack_14;
  void *pvStack_10;
  int iStack_c;
  undefined4 *puStack_8;
  
  puStack_8 = (undefined4 *)((int)param_1 + 0x785);
  iStack_c = 0;
  *(undefined1 *)((int)param_1 + 0xdee) = 0;
  if (*(char *)((int)param_1 + 0x785) != '\0') {
    pvStack_10 = param_1;
    wsprintfA((LPSTR)abStack_15c,s__s_s_s_007c6edc,(int)param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
              puStack_8);
    hFindFile = FindFirstFileA((LPCSTR)abStack_15c,&_Stack_29c);
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        if (((byte)_Stack_29c.dwFileAttributes & 0x10) != 0) {
          iStack_c = 1;
          break;
        }
        BVar3 = FindNextFileA(hFindFile,&_Stack_29c);
      } while (BVar3 != 0);
    }
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
    }
    if (iStack_c != 0) {
      pbVar12 = abStack_15c;
      pcVar14 = s__s_s_s__s_007ca1ec;
      wsprintfA((LPSTR)pbVar12,s__s_s_s__s_007ca1ec,(int)param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
                puStack_8,PTR_s_PL_LOG_0079b0d0);
      IStack_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &IStack_58;
      iVar4 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,pbVar12,pcVar14);
      if (iVar4 == 0) {
        this_00 = (cMf32 *)FUN_006f0ec0(0x345,abStack_15c,0,0,0);
        this = pvStack_10;
        if (this_00 != (cMf32 *)0x0) {
          puStack_8 = (undefined4 *)&DAT_008072f8;
          pcStack_14 = this_00;
          cMf32::RecGet(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,(int *)&puStack_8,1);
          thunk_FUN_005739a0((int)this);
          puStack_8 = (undefined4 *)((int)this + 0x80e);
          cMf32::RecGet(this_00,0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(int *)&puStack_8,1);
          puStack_8 = (undefined4 *)((int)this + 0xd86);
          cMf32::RecGet(this_00,0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(int *)&puStack_8,1);
          puStack_8 = (undefined4 *)((int)this + 0x99e);
          cMf32::RecGet(this_00,0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(int *)&puStack_8,1);
          puStack_8 = (undefined4 *)((int)this + 0xc1e);
          cMf32::RecGet(this_00,0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(int *)&puStack_8,1);
          puStack_8 = (undefined4 *)((int)this + 0x7c5);
          *(undefined1 *)((int)this + 0xdee) = 1;
          puVar9 = puStack_8;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          *(undefined4 *)((int)this + 0x805) = 0;
          *(undefined4 *)((int)this + 0x809) = 0;
          *(undefined1 *)((int)this + 0x80d) = 0;
          puVar5 = cMf32::RecGet(this_00,0xc,PTR_s_LASTLOG_0079b0e8,(int *)&puStack_8,0);
          if (((puVar5 == (ushort *)0x0) && (this != (void *)0xfffff83b)) &&
             ((char *)((int)this + 0x785) != (char *)0x0)) {
            uVar7 = 0xffffffff;
            pcVar14 = (char *)((int)this + 0x785);
            do {
              pcVar10 = pcVar14;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar10 = pcVar14 + 1;
              cVar1 = *pcVar14;
              pcVar14 = pcVar10;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar14 = pcVar10 + -uVar7;
            pcVar10 = (char *)((int)this + 0x7c5);
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = uVar7 & 3; this_00 = pcStack_14, uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          iVar11 = 0;
          puStack_8 = (undefined4 *)((int)this + 0x805);
          cMf32::RecGet(this_00,0xc,PTR_s_LASTPSW_0079b0ec,(int *)&puStack_8,0);
          iVar4 = _DAT_008072f8;
          _DAT_008072f8 = 0;
          _DAT_008072fc = 0x82;
          uVar7 = 0;
          do {
            iVar11 = iVar11 + (uint)(byte)(&DAT_008072f8)[uVar7];
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x82);
          if (iVar11 != iVar4) {
            thunk_FUN_005734c0(this,0,(HKEY)0x1);
          }
          pbVar6 = &DAT_007ca694;
          pbVar12 = (byte *)((int)this + 0x640);
          do {
            bVar2 = *pbVar12;
            bVar13 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_005727ec:
              iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_005727f1;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar13 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_005727ec;
            pbVar12 = pbVar12 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005727f1:
          if ((iVar4 == 0) && ((char)DAT_00807300 == '\x02')) {
            DAT_00807300._0_1_ = '\x01';
          }
          thunk_FUN_00573240();
          cMf32::delete(this_01,(undefined4 *)this_00);
        }
        g_currentExceptionFrame = IStack_58.previous;
        pvStack_10 = this;
      }
      else {
        g_currentExceptionFrame = IStack_58.previous;
        iStack_c = 0;
      }
      param_1 = pvStack_10;
      if (iStack_c != 0) {
        return;
      }
    }
    *(undefined1 *)((int)param_1 + 0xdee) = 0;
  }
  return;
}

