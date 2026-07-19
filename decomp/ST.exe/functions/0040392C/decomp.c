
void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  char cVar1;
  SIDTy SVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  int iVar12;
  SIDTy *pSVar13;
  undefined4 unaff_ESI;
  SIDTy *pSVar14;
  CHAR *pCVar15;
  void *unaff_EDI;
  SIDTy *pSVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  char *pcVar20;
  undefined4 uVar21;
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
  iVar5 = Library::MSVCRT::__setjmp3(IStack_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar13 = pSStack_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_58.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167,0,iVar5,&DAT_007a4ccc
                                ,s_SIDTy__PrepFiles_007cd694);
    if (iVar12 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(byte **)(pSStack_c + 0x1ccc) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(pSStack_c + 0x1ccc));
    *(undefined4 *)(pSVar13 + 0x1ccc) = 0;
  }
  puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)(pSVar13 + 0x1ccc) = puVar6;
  *(undefined4 *)(pSVar13 + 0x2d) = 0x20;
  *(undefined4 *)(pSVar13 + 0x31) = 0;
  FUN_006e6080(pSVar13,2,*(undefined4 *)(pSVar13 + 0x1af1),(undefined4 *)(pSVar13 + 0x1d));
  *(undefined4 *)(pSVar13 + 0x2d) = 0x29;
  *(undefined4 *)(pSVar13 + 0x31) = 0x19;
  FUN_006e6080(pSVar13,2,*(undefined4 *)(pSVar13 + 0x1af5),(undefined4 *)(pSVar13 + 0x1d));
  FUN_006b4170(*(int *)(pSVar13 + 0x1cb8),0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar13 + 0x1cb4));
  wsprintfA((LPSTR)(pSVar13 + 0x1cd4),&DAT_007c6ee4,&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar10 = 0xffffffff;
  pcVar20 = &DAT_007cc8bc;
  do {
    pcVar8 = pcVar20;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar20 + 1;
    cVar1 = *pcVar20;
    pcVar20 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar5 = -1;
  pSVar14 = pSVar13 + 0x1cd4;
  do {
    pSVar16 = pSVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pSVar16 = pSVar14 + 1;
    SVar2 = *pSVar14;
    pSVar14 = pSVar16;
  } while (SVar2 != (SIDTy)0x0);
  pSVar14 = (SIDTy *)(pcVar8 + -uVar10);
  pSVar16 = pSVar16 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pSVar16 = *(undefined4 *)pSVar14;
    pSVar14 = pSVar14 + 4;
    pSVar16 = pSVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pSVar16 = *pSVar14;
    pSVar14 = pSVar14 + 1;
    pSVar16 = pSVar16 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)(pSVar13 + 0x1cd4),&_Stack_21c);
  pvStack_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)_Stack_21c.dwFileAttributes & 0x10) != 0) {
        pbVar17 = &DAT_007cc8b8;
        pCVar15 = _Stack_21c.cFileName;
        do {
          bVar3 = *pCVar15;
          bVar19 = bVar3 < *pbVar17;
          if (bVar3 != *pbVar17) {
LAB_005d8d7a:
            iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar3 == 0) break;
          bVar3 = pCVar15[1];
          bVar19 = bVar3 < pbVar17[1];
          if (bVar3 != pbVar17[1]) goto LAB_005d8d7a;
          pCVar15 = pCVar15 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_005d8d7f:
        if (iVar5 != 0) {
          pbVar17 = &DAT_007cc8b4;
          pCVar15 = _Stack_21c.cFileName;
          do {
            bVar3 = *pCVar15;
            bVar19 = bVar3 < *pbVar17;
            if (bVar3 != *pbVar17) {
LAB_005d8dba:
              iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar15[1];
            bVar19 = bVar3 < pbVar17[1];
            if (bVar3 != pbVar17[1]) goto LAB_005d8dba;
            pCVar15 = pCVar15 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar3 != 0);
          iVar5 = 0;
LAB_005d8dbf:
          if (iVar5 != 0) {
            uVar10 = 0xffffffff;
            pCVar15 = _Stack_21c.cFileName;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar1 = *pCVar15;
              pCVar15 = pCVar15 + 1;
            } while (cVar1 != '\0');
            if (~uVar10 - 1 < 0x40) {
              pSVar13 = pSVar13 + 0x1cd4;
              pcVar20 = s__s_s_s__s_007ca1ec;
              wsprintfA((LPSTR)pSVar13,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                        _Stack_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              IStack_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &IStack_9c;
              iVar5 = Library::MSVCRT::__setjmp3(IStack_9c.jumpBuffer,0,pSVar13,pcVar20);
              pSVar13 = pSStack_c;
              if (iVar5 == 0) {
                this_00 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(pSStack_c + 0x1cd4),0,0,0);
                if (this_00 != (cMf32 *)0x0) {
                  iVar5 = cMf32::RecChk(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  this_01 = extraout_ECX;
                  if (iVar5 == 0) {
                    Library::DKW::TBL::FUN_006b5aa0(*(int *)(pSVar13 + 0x1ccc),_Stack_21c.cFileName)
                    ;
                    this_01 = extraout_ECX_00;
                  }
                  cMf32::delete(this_01,(undefined4 *)this_00);
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
      BVar7 = FindNextFileA(pvStack_14,&_Stack_21c);
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar10 = 0xffffffff;
  pcVar20 = (char *)&DAT_00807ddd;
  do {
    pcVar8 = pcVar20;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar20 + 1;
    cVar1 = *pcVar20;
    pcVar20 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pbVar17 = (byte *)(pcVar8 + -uVar10);
  pbVar18 = abStack_dc;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar18 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar18 = pbVar18 + 4;
  }
  uVar21 = *(undefined4 *)(pSVar13 + 0x1af1);
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar18 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar18 = pbVar18 + 1;
  }
  *(undefined4 *)(pSVar13 + 0x2d) = 0x28;
  *(undefined4 *)(pSVar13 + 0x31) = *(undefined4 *)(*(int *)(pSVar13 + 0x1ccc) + 8);
  FUN_006e6080(pSVar13,2,uVar21,(undefined4 *)(pSVar13 + 0x1d));
  iVar5 = *(int *)(pSVar13 + 0x1ccc);
  iVar12 = *(int *)(iVar5 + 8);
  if (iVar12 < 1) {
    *(undefined4 *)(pSVar13 + 0x2d) = 0x22;
    *(undefined4 *)(pSVar13 + 0x31) = 0;
    FUN_006e6080(pSVar13,2,*(undefined4 *)(pSVar13 + 0x1af1),(undefined4 *)(pSVar13 + 0x1d));
    uVar21 = *(undefined4 *)(pSVar13 + 0x1af1);
    *(undefined4 *)(pSVar13 + 0x2d) = 5;
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
              pcVar20 = *(char **)(*(int *)(iVar5 + 0x14) + 4 + uVar10 * 4);
            }
            else {
              pcVar20 = (char *)0x0;
            }
            if ((int)uVar10 < iVar12) {
              pcVar8 = *(char **)(*(int *)(iVar5 + 0x14) + uVar10 * 4);
            }
            else {
              pcVar8 = (char *)0x0;
            }
            iVar5 = Library::MSVCRT::__strcmpi(pcVar8,pcVar20);
            if (0 < iVar5) {
              FUN_006b8200(*(int *)(pSVar13 + 0x1ccc),uVar10,uVar11);
              iStack_8 = 1;
            }
            iVar5 = *(int *)(pSVar13 + 0x1ccc);
            iVar12 = *(int *)(iVar5 + 8);
            uVar10 = uVar11;
          } while ((int)uVar11 < iVar12 + -1);
        }
      } while (iStack_8 != 0);
    }
    *(undefined4 *)(pSVar13 + 0x2d) = 0x20;
    *(undefined4 *)(pSVar13 + 0x31) = 1;
    FUN_006e6080(pSVar13,2,*(undefined4 *)(pSVar13 + 0x1af1),(undefined4 *)(pSVar13 + 0x1d));
    iVar12 = 0;
    iStack_8 = *(int *)(*(int *)(pSVar13 + 0x1ccc) + 8);
    iVar5 = iStack_10;
    if (0 < iStack_8) {
      if (iStack_8 < 1) {
        pbVar17 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar17 = *(byte **)(*(int *)(*(int *)(pSVar13 + 0x1ccc) + 0x14) + iVar12 * 4);
LAB_005d8fe2:
        pbVar18 = abStack_dc;
        do {
          bVar3 = *pbVar17;
          bVar19 = bVar3 < *pbVar18;
          if (bVar3 != *pbVar18) {
LAB_005d900c:
            iVar9 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d9011;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar17[1];
          bVar19 = bVar3 < pbVar18[1];
          if (bVar3 != pbVar18[1]) goto LAB_005d900c;
          pbVar17 = pbVar17 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_005d9011:
        iVar5 = iVar12;
      } while ((iVar9 != 0) && (iVar12 = iVar12 + 1, iVar5 = iStack_10, iVar12 < iStack_8));
    }
    iStack_10 = iVar5;
    uVar21 = *(undefined4 *)(pSVar13 + 0x1af1);
    *(undefined4 *)(pSVar13 + 0x2d) = 0x22;
    *(int *)(pSVar13 + 0x31) = iStack_10;
  }
  FUN_006e6080(pSVar13,2,uVar21,(undefined4 *)(pSVar13 + 0x1d));
  *(undefined4 *)(pSVar13 + 0x2d) = 0x29;
  *(undefined4 *)(pSVar13 + 0x31) = 9;
  FUN_006e6080(pSVar13,2,*(undefined4 *)(pSVar13 + 0x1af5),(undefined4 *)(pSVar13 + 0x1d));
  FUN_006b35d0(DAT_008075a8,*(uint *)(pSVar13 + 0x1cb4));
  g_currentExceptionFrame = IStack_58.previous;
  return;
}

