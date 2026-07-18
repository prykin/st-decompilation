
void thunk_FUN_005d8bf0(void)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  HANDLE hFindFile;
  undefined4 *puVar6;
  BOOL BVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  LPSTR pCVar13;
  void *this;
  undefined4 unaff_ESI;
  CHAR *pCVar14;
  void *unaff_EDI;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  char *pcVar19;
  undefined4 uVar20;
  _WIN32_FIND_DATAA _Stack_21c;
  byte abStack_dc [64];
  undefined4 **ppuStack_9c;
  undefined4 auStack_98 [16];
  undefined4 **ppuStack_58;
  undefined4 auStack_54 [16];
  HANDLE pvStack_14;
  int iStack_10;
  void *pvStack_c;
  int iStack_8;
  
  iStack_10 = 0;
  ppuStack_58 = DAT_00858df8;
  DAT_00858df8 = &ppuStack_58;
  iVar4 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  this = pvStack_c;
  if (iVar4 != 0) {
    DAT_00858df8 = ppuStack_58;
    iVar12 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167,0,iVar4,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar4,0,0x7cd5c4,0x167);
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(byte **)((int)pvStack_c + 0x1ccc) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)pvStack_c + 0x1ccc));
    *(undefined4 *)((int)this + 0x1ccc) = 0;
  }
  puVar5 = FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)((int)this + 0x1ccc) = puVar5;
  *(undefined4 *)((int)this + 0x2d) = 0x20;
  *(undefined4 *)((int)this + 0x31) = 0;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1af1),(undefined4 *)((int)this + 0x1d));
  *(undefined4 *)((int)this + 0x2d) = 0x29;
  *(undefined4 *)((int)this + 0x31) = 0x19;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1af5),(undefined4 *)((int)this + 0x1d));
  FUN_006b4170(*(int *)((int)this + 0x1cb8),0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0(DAT_008075a8,*(uint *)((int)this + 0x1cb4));
  wsprintfA((LPSTR)((int)this + 0x1cd4),&DAT_007c6ee4,&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar10 = 0xffffffff;
  pcVar19 = &DAT_007cc8bc;
  do {
    pcVar8 = pcVar19;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar4 = -1;
  pcVar19 = (char *)((int)this + 0x1cd4);
  do {
    pcVar15 = pcVar19;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar15 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar15;
  } while (cVar1 != '\0');
  pcVar19 = pcVar8 + -uVar10;
  pcVar8 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar19;
    pcVar19 = pcVar19 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar8 = *pcVar19;
    pcVar19 = pcVar19 + 1;
    pcVar8 = pcVar8 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)((int)this + 0x1cd4),&_Stack_21c);
  pvStack_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)_Stack_21c.dwFileAttributes & 0x10) != 0) {
        pbVar16 = &DAT_007cc8b8;
        pCVar14 = _Stack_21c.cFileName;
        do {
          bVar2 = *pCVar14;
          bVar18 = bVar2 < *pbVar16;
          if (bVar2 != *pbVar16) {
LAB_005d8d7a:
            iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar14[1];
          bVar18 = bVar2 < pbVar16[1];
          if (bVar2 != pbVar16[1]) goto LAB_005d8d7a;
          pCVar14 = pCVar14 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005d8d7f:
        if (iVar4 != 0) {
          pbVar16 = &DAT_007cc8b4;
          pCVar14 = _Stack_21c.cFileName;
          do {
            bVar2 = *pCVar14;
            bVar18 = bVar2 < *pbVar16;
            if (bVar2 != *pbVar16) {
LAB_005d8dba:
              iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar14[1];
            bVar18 = bVar2 < pbVar16[1];
            if (bVar2 != pbVar16[1]) goto LAB_005d8dba;
            pCVar14 = pCVar14 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005d8dbf:
          if (iVar4 != 0) {
            uVar10 = 0xffffffff;
            pCVar14 = _Stack_21c.cFileName;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar1 = *pCVar14;
              pCVar14 = pCVar14 + 1;
            } while (cVar1 != '\0');
            if (~uVar10 - 1 < 0x40) {
              pCVar13 = (LPSTR)((int)this + 0x1cd4);
              pcVar19 = s__s_s_s__s_007ca1ec;
              wsprintfA(pCVar13,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                        _Stack_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              ppuStack_9c = DAT_00858df8;
              DAT_00858df8 = &ppuStack_9c;
              iVar4 = __setjmp3(auStack_98,0,pCVar13,pcVar19);
              this = pvStack_c;
              if (iVar4 == 0) {
                puVar6 = FUN_006f0ec0(0x345,(byte *)((int)pvStack_c + 0x1cd4),0,0,0);
                if (puVar6 != (undefined4 *)0x0) {
                  iVar4 = FUN_006f21c0(0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  if (iVar4 == 0) {
                    FUN_006b5aa0(*(int *)((int)this + 0x1ccc),_Stack_21c.cFileName);
                  }
                  FUN_006f1170(puVar6);
                }
                DAT_00858df8 = ppuStack_9c;
              }
              else {
                DAT_00858df8 = ppuStack_9c;
              }
            }
          }
        }
      }
      hFindFile = pvStack_14;
      BVar7 = FindNextFileA(pvStack_14,&_Stack_21c);
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar10 = 0xffffffff;
  pcVar19 = (char *)&DAT_00807ddd;
  do {
    pcVar8 = pcVar19;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar19 + 1;
    cVar1 = *pcVar19;
    pcVar19 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pbVar16 = (byte *)(pcVar8 + -uVar10);
  pbVar17 = abStack_dc;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar16;
    pbVar16 = pbVar16 + 4;
    pbVar17 = pbVar17 + 4;
  }
  uVar20 = *(undefined4 *)((int)this + 0x1af1);
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar17 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    pbVar17 = pbVar17 + 1;
  }
  *(undefined4 *)((int)this + 0x2d) = 0x28;
  *(undefined4 *)((int)this + 0x31) = *(undefined4 *)(*(int *)((int)this + 0x1ccc) + 8);
  FUN_006e6080(this,2,uVar20,(undefined4 *)((int)this + 0x1d));
  iVar4 = *(int *)((int)this + 0x1ccc);
  iVar12 = *(int *)(iVar4 + 8);
  if (iVar12 < 1) {
    *(undefined4 *)((int)this + 0x2d) = 0x22;
    *(undefined4 *)((int)this + 0x31) = 0;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1af1),(undefined4 *)((int)this + 0x1d));
    uVar20 = *(undefined4 *)((int)this + 0x1af1);
    *(undefined4 *)((int)this + 0x2d) = 5;
  }
  else {
    if (1 < iVar12) {
      do {
        iStack_8 = 0;
        uVar10 = 0;
        if (0 < iVar12 + -1) {
          do {
            uVar11 = uVar10 + 1;
            if ((int)uVar11 < iVar12) {
              pcVar19 = *(char **)(*(int *)(iVar4 + 0x14) + 4 + uVar10 * 4);
            }
            else {
              pcVar19 = (char *)0x0;
            }
            if ((int)uVar10 < iVar12) {
              pcVar8 = *(char **)(*(int *)(iVar4 + 0x14) + uVar10 * 4);
            }
            else {
              pcVar8 = (char *)0x0;
            }
            iVar4 = __strcmpi(pcVar8,pcVar19);
            if (0 < iVar4) {
              FUN_006b8200(*(int *)((int)this + 0x1ccc),uVar10,uVar11);
              iStack_8 = 1;
            }
            iVar4 = *(int *)((int)this + 0x1ccc);
            iVar12 = *(int *)(iVar4 + 8);
            uVar10 = uVar11;
          } while ((int)uVar11 < iVar12 + -1);
        }
      } while (iStack_8 != 0);
    }
    *(undefined4 *)((int)this + 0x2d) = 0x20;
    *(undefined4 *)((int)this + 0x31) = 1;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1af1),(undefined4 *)((int)this + 0x1d));
    iVar12 = 0;
    iStack_8 = *(int *)(*(int *)((int)this + 0x1ccc) + 8);
    iVar4 = iStack_10;
    if (0 < iStack_8) {
      if (iStack_8 < 1) {
        pbVar16 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar16 = *(byte **)(*(int *)(*(int *)((int)this + 0x1ccc) + 0x14) + iVar12 * 4);
LAB_005d8fe2:
        pbVar17 = abStack_dc;
        do {
          bVar2 = *pbVar16;
          bVar18 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_005d900c:
            iVar9 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar16[1];
          bVar18 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_005d900c;
          pbVar16 = pbVar16 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_005d9011:
        iVar4 = iVar12;
      } while ((iVar9 != 0) && (iVar12 = iVar12 + 1, iVar4 = iStack_10, iVar12 < iStack_8));
    }
    iStack_10 = iVar4;
    uVar20 = *(undefined4 *)((int)this + 0x1af1);
    *(undefined4 *)((int)this + 0x2d) = 0x22;
    *(int *)((int)this + 0x31) = iStack_10;
  }
  FUN_006e6080(this,2,uVar20,(undefined4 *)((int)this + 0x1d));
  *(undefined4 *)((int)this + 0x2d) = 0x29;
  *(undefined4 *)((int)this + 0x31) = 9;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1af5),(undefined4 *)((int)this + 0x1d));
  FUN_006b35d0(DAT_008075a8,*(uint *)((int)this + 0x1cb4));
  DAT_00858df8 = ppuStack_58;
  return;
}

