
void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  char cVar1;
  SIDTy SVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  HANDLE hFindFile;
  undefined4 *puVar7;
  BOOL BVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_00;
  int iVar13;
  SIDTy *pSVar14;
  undefined4 unaff_ESI;
  SIDTy *pSVar15;
  CHAR *pCVar16;
  void *unaff_EDI;
  SIDTy *pSVar17;
  byte *pbVar18;
  byte *pbVar19;
  bool bVar20;
  char *pcVar21;
  undefined4 uVar22;
  _WIN32_FIND_DATAA _Stack_21c;
  byte abStack_dc [64];
  InternalExceptionFrame IStack_9c;
  InternalExceptionFrame IStack_58;
  HANDLE pvStack_14;
  int iStack_10;
  SIDTy *pSStack_c;
  int iStack_8;
  
  iStack_10 = 0;
  IStack_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_58;
  pSStack_c = this;
  iVar5 = __setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar14 = pSStack_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_58.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167,0,iVar5,&DAT_007a4ccc
                                ,s_SIDTy__PrepFiles_007cd694);
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(byte **)(pSStack_c + 0x1ccc) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(pSStack_c + 0x1ccc));
    *(undefined4 *)(pSVar14 + 0x1ccc) = 0;
  }
  puVar6 = FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)(pSVar14 + 0x1ccc) = puVar6;
  *(undefined4 *)(pSVar14 + 0x2d) = 0x20;
  *(undefined4 *)(pSVar14 + 0x31) = 0;
  FUN_006e6080(pSVar14,2,*(undefined4 *)(pSVar14 + 0x1af1),(undefined4 *)(pSVar14 + 0x1d));
  *(undefined4 *)(pSVar14 + 0x2d) = 0x29;
  *(undefined4 *)(pSVar14 + 0x31) = 0x19;
  FUN_006e6080(pSVar14,2,*(undefined4 *)(pSVar14 + 0x1af5),(undefined4 *)(pSVar14 + 0x1d));
  FUN_006b4170(*(int *)(pSVar14 + 0x1cb8),0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar14 + 0x1cb4));
  wsprintfA((LPSTR)(pSVar14 + 0x1cd4),&DAT_007c6ee4,&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar11 = 0xffffffff;
  pcVar21 = &DAT_007cc8bc;
  do {
    pcVar9 = pcVar21;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar9 = pcVar21 + 1;
    cVar1 = *pcVar21;
    pcVar21 = pcVar9;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  iVar5 = -1;
  pSVar15 = pSVar14 + 0x1cd4;
  do {
    pSVar17 = pSVar15;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pSVar17 = pSVar15 + 1;
    SVar2 = *pSVar15;
    pSVar15 = pSVar17;
  } while (SVar2 != (SIDTy)0x0);
  pSVar15 = (SIDTy *)(pcVar9 + -uVar11);
  pSVar17 = pSVar17 + -1;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pSVar17 = *(undefined4 *)pSVar15;
    pSVar15 = pSVar15 + 4;
    pSVar17 = pSVar17 + 4;
  }
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pSVar17 = *pSVar15;
    pSVar15 = pSVar15 + 1;
    pSVar17 = pSVar17 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)(pSVar14 + 0x1cd4),&_Stack_21c);
  pvStack_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)_Stack_21c.dwFileAttributes & 0x10) != 0) {
        pbVar18 = &DAT_007cc8b8;
        pCVar16 = _Stack_21c.cFileName;
        do {
          bVar3 = *pCVar16;
          bVar20 = bVar3 < *pbVar18;
          if (bVar3 != *pbVar18) {
LAB_005d8d7a:
            iVar5 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar3 == 0) break;
          bVar3 = pCVar16[1];
          bVar20 = bVar3 < pbVar18[1];
          if (bVar3 != pbVar18[1]) goto LAB_005d8d7a;
          pCVar16 = pCVar16 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_005d8d7f:
        if (iVar5 != 0) {
          pbVar18 = &DAT_007cc8b4;
          pCVar16 = _Stack_21c.cFileName;
          do {
            bVar3 = *pCVar16;
            bVar20 = bVar3 < *pbVar18;
            if (bVar3 != *pbVar18) {
LAB_005d8dba:
              iVar5 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar16[1];
            bVar20 = bVar3 < pbVar18[1];
            if (bVar3 != pbVar18[1]) goto LAB_005d8dba;
            pCVar16 = pCVar16 + 2;
            pbVar18 = pbVar18 + 2;
          } while (bVar3 != 0);
          iVar5 = 0;
LAB_005d8dbf:
          if (iVar5 != 0) {
            uVar11 = 0xffffffff;
            pCVar16 = _Stack_21c.cFileName;
            do {
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              cVar1 = *pCVar16;
              pCVar16 = pCVar16 + 1;
            } while (cVar1 != '\0');
            if (~uVar11 - 1 < 0x40) {
              pSVar14 = pSVar14 + 0x1cd4;
              pcVar21 = s__s_s_s__s_007ca1ec;
              wsprintfA((LPSTR)pSVar14,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                        _Stack_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              IStack_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &IStack_9c;
              iVar5 = __setjmp3(IStack_9c.jumpBuffer,0,pSVar14,pcVar21);
              pSVar14 = pSStack_c;
              if (iVar5 == 0) {
                puVar7 = FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x1cd4),0,0,0);
                if (puVar7 != (undefined4 *)0x0) {
                  iVar5 = FUN_006f21c0(0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  this_00 = extraout_ECX;
                  if (iVar5 == 0) {
                    FUN_006b5aa0(*(int *)(pSVar14 + 0x1ccc),_Stack_21c.cFileName);
                    this_00 = extraout_ECX_00;
                  }
                  cMf32::delete(this_00,puVar7);
                }
                g_currentExceptionFrame = IStack_9c.previous;
              }
              else {
                g_currentExceptionFrame = IStack_9c.previous;
              }
            }
          }
        }
      }
      hFindFile = pvStack_14;
      BVar8 = FindNextFileA(pvStack_14,&_Stack_21c);
    } while (BVar8 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar11 = 0xffffffff;
  pcVar21 = (char *)&DAT_00807ddd;
  do {
    pcVar9 = pcVar21;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar9 = pcVar21 + 1;
    cVar1 = *pcVar21;
    pcVar21 = pcVar9;
  } while (cVar1 != '\0');
  uVar11 = ~uVar11;
  pbVar18 = (byte *)(pcVar9 + -uVar11);
  pbVar19 = abStack_dc;
  for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pbVar19 = *(undefined4 *)pbVar18;
    pbVar18 = pbVar18 + 4;
    pbVar19 = pbVar19 + 4;
  }
  uVar22 = *(undefined4 *)(pSVar14 + 0x1af1);
  for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *pbVar19 = *pbVar18;
    pbVar18 = pbVar18 + 1;
    pbVar19 = pbVar19 + 1;
  }
  *(undefined4 *)(pSVar14 + 0x2d) = 0x28;
  *(undefined4 *)(pSVar14 + 0x31) = *(undefined4 *)(*(int *)(pSVar14 + 0x1ccc) + 8);
  FUN_006e6080(pSVar14,2,uVar22,(undefined4 *)(pSVar14 + 0x1d));
  iVar5 = *(int *)(pSVar14 + 0x1ccc);
  iVar13 = *(int *)(iVar5 + 8);
  if (iVar13 < 1) {
    *(undefined4 *)(pSVar14 + 0x2d) = 0x22;
    *(undefined4 *)(pSVar14 + 0x31) = 0;
    FUN_006e6080(pSVar14,2,*(undefined4 *)(pSVar14 + 0x1af1),(undefined4 *)(pSVar14 + 0x1d));
    uVar22 = *(undefined4 *)(pSVar14 + 0x1af1);
    *(undefined4 *)(pSVar14 + 0x2d) = 5;
  }
  else {
    if (1 < iVar13) {
      do {
        iStack_8 = 0;
        uVar11 = 0;
        if (0 < iVar13 + -1) {
          do {
            uVar12 = uVar11 + 1;
            if ((int)uVar12 < iVar13) {
              pcVar21 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar11 * 4);
            }
            else {
              pcVar21 = (char *)0x0;
            }
            if ((int)uVar11 < iVar13) {
              pcVar9 = *(char **)(*(int *)(iVar5 + 0x14) + uVar11 * 4);
            }
            else {
              pcVar9 = (char *)0x0;
            }
            iVar5 = __strcmpi(pcVar9,pcVar21);
            if (0 < iVar5) {
              FUN_006b8200(*(int *)(pSVar14 + 0x1ccc),uVar11,uVar12);
              iStack_8 = 1;
            }
            iVar5 = *(int *)(pSVar14 + 0x1ccc);
            iVar13 = *(int *)(iVar5 + 8);
            uVar11 = uVar12;
          } while ((int)uVar12 < iVar13 + -1);
        }
      } while (iStack_8 != 0);
    }
    *(undefined4 *)(pSVar14 + 0x2d) = 0x20;
    *(undefined4 *)(pSVar14 + 0x31) = 1;
    FUN_006e6080(pSVar14,2,*(undefined4 *)(pSVar14 + 0x1af1),(undefined4 *)(pSVar14 + 0x1d));
    iVar13 = 0;
    iStack_8 = *(int *)(*(int *)(pSVar14 + 0x1ccc) + 8);
    iVar5 = iStack_10;
    if (0 < iStack_8) {
      if (iStack_8 < 1) {
        pbVar18 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar18 = *(byte **)(*(int *)(*(int *)(pSVar14 + 0x1ccc) + 0x14) + iVar13 * 4);
LAB_005d8fe2:
        pbVar19 = abStack_dc;
        do {
          bVar3 = *pbVar18;
          bVar20 = bVar3 < *pbVar19;
          if (bVar3 != *pbVar19) {
LAB_005d900c:
            iVar10 = (1 - (uint)bVar20) - (uint)(bVar20 != 0);
            goto LAB_005d9011;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar18[1];
          bVar20 = bVar3 < pbVar19[1];
          if (bVar3 != pbVar19[1]) goto LAB_005d900c;
          pbVar18 = pbVar18 + 2;
          pbVar19 = pbVar19 + 2;
        } while (bVar3 != 0);
        iVar10 = 0;
LAB_005d9011:
        iVar5 = iVar13;
      } while ((iVar10 != 0) && (iVar13 = iVar13 + 1, iVar5 = iStack_10, iVar13 < iStack_8));
    }
    iStack_10 = iVar5;
    uVar22 = *(undefined4 *)(pSVar14 + 0x1af1);
    *(undefined4 *)(pSVar14 + 0x2d) = 0x22;
    *(int *)(pSVar14 + 0x31) = iStack_10;
  }
  FUN_006e6080(pSVar14,2,uVar22,(undefined4 *)(pSVar14 + 0x1d));
  *(undefined4 *)(pSVar14 + 0x2d) = 0x29;
  *(undefined4 *)(pSVar14 + 0x31) = 9;
  FUN_006e6080(pSVar14,2,*(undefined4 *)(pSVar14 + 0x1af5),(undefined4 *)(pSVar14 + 0x1d));
  FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar14 + 0x1cb4));
  g_currentExceptionFrame = IStack_58.previous;
  return;
}

