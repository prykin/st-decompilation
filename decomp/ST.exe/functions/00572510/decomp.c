
/* WARNING: Removing unreachable block (ram,0x00572660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00572510(void *param_1)

{
  char cVar1;
  byte bVar2;
  void *this;
  HANDLE hFindFile;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  char *pcVar15;
  _WIN32_FIND_DATAA local_29c;
  byte local_15c [260];
  undefined4 *local_58;
  undefined4 local_54 [16];
  undefined4 *local_14;
  void *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)((int)param_1 + 0x785);
  local_c = 0;
  *(undefined1 *)((int)param_1 + 0xdee) = 0;
  if (*(char *)((int)param_1 + 0x785) != '\0') {
    local_10 = param_1;
    wsprintfA((LPSTR)local_15c,s__s_s_s_007c6edc,(int)param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
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
      pbVar13 = local_15c;
      pcVar15 = s__s_s_s__s_007ca1ec;
      wsprintfA((LPSTR)pbVar13,s__s_s_s__s_007ca1ec,(int)param_1 + 0x28,PTR_s_SAVEGAME__0079b0cc,
                local_8,PTR_s_PL_LOG_0079b0d0);
      local_58 = DAT_00858df8;
      DAT_00858df8 = &local_58;
      iVar4 = __setjmp3(local_54,0,pbVar13,pcVar15);
      if (iVar4 == 0) {
        puVar5 = FUN_006f0ec0(0x345,local_15c,0,0,0);
        this = local_10;
        if (puVar5 != (undefined4 *)0x0) {
          local_8 = (undefined4 *)&DAT_008072f8;
          local_14 = puVar5;
          FUN_006f1ce0(0xc,PTR_s_OPTIONS_PLAYER_0079b0d4,(int *)&local_8,1);
          thunk_FUN_005739a0((int)this);
          local_8 = (undefined4 *)((int)this + 0x80e);
          FUN_006f1ce0(0xc,PTR_s_ACCKEYS_PLAYER_0079b0d8,(int *)&local_8,1);
          local_8 = (undefined4 *)((int)this + 0xd86);
          FUN_006f1ce0(0xc,PTR_s_AIKEYS_PLAYER_0079b0dc,(int *)&local_8,1);
          local_8 = (undefined4 *)((int)this + 0x99e);
          FUN_006f1ce0(0xc,PTR_s_SYSKEYS_PLAYER_0079b0e0,(int *)&local_8,1);
          local_8 = (undefined4 *)((int)this + 0xc1e);
          FUN_006f1ce0(0xc,PTR_s_MOUKEYS_PLAYER_0079b0e4,(int *)&local_8,1);
          local_8 = (undefined4 *)((int)this + 0x7c5);
          *(undefined1 *)((int)this + 0xdee) = 1;
          puVar10 = local_8;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)((int)this + 0x805) = 0;
          *(undefined4 *)((int)this + 0x809) = 0;
          *(undefined1 *)((int)this + 0x80d) = 0;
          puVar6 = FUN_006f1ce0(0xc,PTR_s_LASTLOG_0079b0e8,(int *)&local_8,0);
          if (((puVar6 == (ushort *)0x0) && (this != (void *)0xfffff83b)) &&
             ((char *)((int)this + 0x785) != (char *)0x0)) {
            uVar8 = 0xffffffff;
            pcVar15 = (char *)((int)this + 0x785);
            do {
              pcVar11 = pcVar15;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar11 = pcVar15 + 1;
              cVar1 = *pcVar15;
              pcVar15 = pcVar11;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar15 = pcVar11 + -uVar8;
            pcVar11 = (char *)((int)this + 0x7c5);
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar8 = uVar8 & 3; puVar5 = local_14, uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar11 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar11 = pcVar11 + 1;
            }
          }
          iVar12 = 0;
          local_8 = (undefined4 *)((int)this + 0x805);
          FUN_006f1ce0(0xc,PTR_s_LASTPSW_0079b0ec,(int *)&local_8,0);
          iVar4 = _DAT_008072f8;
          _DAT_008072f8 = 0;
          _DAT_008072fc = 0x82;
          uVar8 = 0;
          do {
            iVar12 = iVar12 + (uint)(byte)(&DAT_008072f8)[uVar8];
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x82);
          if (iVar12 != iVar4) {
            thunk_FUN_005734c0(this,0,(HKEY)0x1);
          }
          pbVar7 = &DAT_007ca694;
          pbVar13 = (byte *)((int)this + 0x640);
          do {
            bVar2 = *pbVar13;
            bVar14 = bVar2 < *pbVar7;
            if (bVar2 != *pbVar7) {
LAB_005727ec:
              iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_005727f1;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar13[1];
            bVar14 = bVar2 < pbVar7[1];
            if (bVar2 != pbVar7[1]) goto LAB_005727ec;
            pbVar13 = pbVar13 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005727f1:
          if ((iVar4 == 0) && ((char)DAT_00807300 == '\x02')) {
            DAT_00807300._0_1_ = '\x01';
          }
          thunk_FUN_00573240();
          FUN_006f1170(puVar5);
        }
        DAT_00858df8 = local_58;
        local_10 = this;
      }
      else {
        DAT_00858df8 = local_58;
        local_c = 0;
      }
      param_1 = local_10;
      if (local_c != 0) {
        return;
      }
    }
    *(undefined1 *)((int)param_1 + 0xdee) = 0;
  }
  return;
}

