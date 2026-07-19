
void __thiscall OptPanelTy::PrepFiles(OptPanelTy *this,uint param_1)

{
  uint uVar1;
  char cVar2;
  OptPanelTy OVar3;
  byte bVar4;
  code *pcVar5;
  InternalExceptionFrame *pIVar6;
  int iVar7;
  uint *puVar8;
  HANDLE hFindFile;
  undefined4 *puVar9;
  ushort *puVar10;
  char *pcVar11;
  BOOL BVar12;
  LONG LVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_00;
  OptPanelTy *this_01;
  undefined4 unaff_ESI;
  OptPanelTy *pOVar17;
  void *unaff_EDI;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  OptPanelTy *pOVar21;
  bool bVar22;
  CHAR *pCVar23;
  undefined4 uVar24;
  OptPanelTy aOStack_3fc [260];
  byte abStack_2f8 [260];
  _WIN32_FIND_DATAA _Stack_1f4;
  InternalExceptionFrame IStack_b4;
  InternalExceptionFrame IStack_70;
  FILETIME FStack_2c;
  FILETIME FStack_24;
  uint *puStack_1c;
  HANDLE pvStack_18;
  uint uStack_14;
  OptPanelTy *pOStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_14 = 0x88000016;
  if (DAT_00808783 == '\x01') {
    uStack_14 = 0x88000116;
  }
  else if (DAT_00808783 == '\x02') {
    uStack_14 = 0x88000216;
  }
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  pOStack_10 = this;
  iVar7 = __setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pOStack_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    iVar14 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f,0,iVar7,
                                &DAT_007a4ccc,s_OptPanelTy__PrepFiles_007c72bc);
    if (iVar14 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(byte **)(pOStack_10 + 0x1e9) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(pOStack_10 + 0x1e9));
    *(undefined4 *)(this_01 + 0x1e9) = 0;
  }
  if (*(byte **)(this_01 + 0x1ed) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this_01 + 0x1ed));
    *(undefined4 *)(this_01 + 0x1ed) = 0;
  }
  puVar8 = FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)(this_01 + 0x1e9) = puVar8;
  puVar8 = FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)(this_01 + 0x1ed) = puVar8;
  *(undefined4 *)(this_01 + 0x28) = 0x20;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b5),(undefined4 *)(this_01 + 0x18));
  uVar15 = 0xffffffff;
  pcVar11 = &DAT_00807680;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = this_01 + 0x6c;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar11 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  iVar7 = -1;
  pOVar17 = this_01 + 0x6c;
  do {
    pOVar21 = pOVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = pOVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar11 = (char *)&DAT_00807ddd;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  iVar7 = -1;
  pOVar17 = this_01 + 0x6c;
  do {
    pOVar21 = pOVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = pOVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  pOVar17 = this_01 + 0x6c;
  FUN_006b8280((char *)pOVar17,(char *)pOVar17);
  uVar15 = 0xffffffff;
  do {
    pOVar21 = pOVar17;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  uVar15 = ~uVar15;
  pOVar17 = pOVar21 + -uVar15;
  pOVar21 = aOStack_3fc;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar11 = PTR_DAT_0079ad00;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  iVar7 = -1;
  pOVar17 = this_01 + 0x6c;
  do {
    pOVar21 = pOVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = pOVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar11 = &DAT_007c72d8;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  iVar7 = -1;
  pOVar17 = this_01 + 0x6c;
  do {
    pOVar21 = pOVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = pOVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  uVar15 = 0xffffffff;
  pcVar11 = PTR_DAT_0079acf4;
  do {
    pcVar18 = pcVar11;
    if (uVar15 == 0) break;
    uVar15 = uVar15 - 1;
    pcVar18 = pcVar11 + 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar18;
  } while (cVar2 != '\0');
  uVar15 = ~uVar15;
  iVar7 = -1;
  pOVar17 = this_01 + 0x6c;
  do {
    pOVar21 = pOVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar21 = pOVar17 + 1;
    OVar3 = *pOVar17;
    pOVar17 = pOVar21;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar17 = (OptPanelTy *)(pcVar18 + -uVar15);
  pOVar21 = pOVar21 + -1;
  for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
    pOVar17 = pOVar17 + 4;
    pOVar21 = pOVar21 + 4;
  }
  for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *pOVar21 = *pOVar17;
    pOVar17 = pOVar17 + 1;
    pOVar21 = pOVar21 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)(this_01 + 0x6c),&_Stack_1f4);
  pvStack_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar6 = g_currentExceptionFrame;
      if (((byte)_Stack_1f4.dwFileAttributes & 0x10) == 0) {
        pCVar23 = _Stack_1f4.cFileName;
        puStack_1c = &uStack_8;
        uVar24 = 0;
        uStack_8 = 0;
        FUN_0072e730((byte *)pCVar23,(byte *)0x0,(byte *)0x0,abStack_2f8,(byte *)0x0);
        IStack_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &IStack_b4;
        iVar7 = __setjmp3(IStack_b4.jumpBuffer,0,pCVar23,uVar24);
        this_01 = pOStack_10;
        hFindFile = pvStack_18;
        pIVar6 = IStack_b4.previous;
        if (iVar7 == 0) {
          uVar15 = 0xffffffff;
          pOVar17 = aOStack_3fc;
          do {
            pOVar21 = pOVar17;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pOVar21 = pOVar17 + 1;
            OVar3 = *pOVar17;
            pOVar17 = pOVar21;
          } while (OVar3 != (OptPanelTy)0x0);
          uVar15 = ~uVar15;
          pOVar17 = pOVar21 + -uVar15;
          pOVar21 = pOStack_10 + 0x6c;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
            pOVar17 = pOVar17 + 4;
            pOVar21 = pOVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pOVar21 = *pOVar17;
            pOVar17 = pOVar17 + 1;
            pOVar21 = pOVar21 + 1;
          }
          uVar15 = 0xffffffff;
          pbVar19 = abStack_2f8;
          do {
            pbVar20 = pbVar19;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1;
            pbVar20 = pbVar19 + 1;
            bVar4 = *pbVar19;
            pbVar19 = pbVar20;
          } while (bVar4 != 0);
          uVar15 = ~uVar15;
          iVar7 = -1;
          pOVar17 = pOStack_10 + 0x6c;
          do {
            pOVar21 = pOVar17;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pOVar21 = pOVar17 + 1;
            OVar3 = *pOVar17;
            pOVar17 = pOVar21;
          } while (OVar3 != (OptPanelTy)0x0);
          pOVar17 = (OptPanelTy *)(pbVar20 + -uVar15);
          pOVar21 = pOVar21 + -1;
          for (uVar16 = uVar15 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pOVar21 = *(undefined4 *)pOVar17;
            pOVar17 = pOVar17 + 4;
            pOVar21 = pOVar21 + 4;
          }
          for (uVar15 = uVar15 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *pOVar21 = *pOVar17;
            pOVar17 = pOVar17 + 1;
            pOVar21 = pOVar21 + 1;
          }
          puVar9 = FUN_006f0ec0(0x345,(byte *)(pOStack_10 + 0x6c),0,0,0);
          puVar10 = FUN_006f1ce0(0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&puStack_1c,0);
          if (puVar10 == (ushort *)0x0) {
            uStack_8 = 0;
            this_00 = extraout_ECX;
          }
          else {
            bVar22 = false;
            if (this_01[0x1a4] == (OptPanelTy)0x3) {
              if (((char)(uStack_8 >> 0x18) == -0x78) && ((char)uStack_8 == '\x16')) {
                bVar22 = true;
              }
              else {
                bVar22 = false;
              }
            }
            else if (this_01[0x1a4] == (OptPanelTy)0x4) {
              bVar22 = uStack_14 == uStack_8;
            }
            this_00 = (cMf32 *)0x0;
            if (bVar22) {
              FUN_006ae1c0(*(uint **)(this_01 + 0x1ed),&_Stack_1f4.ftLastWriteTime.dwLowDateTime);
              uVar15 = 0xffffffff;
              pcVar11 = PTR_DAT_0079ad00;
              do {
                if (uVar15 == 0) break;
                uVar15 = uVar15 - 1;
                cVar2 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar2 != '\0');
              pcVar11 = FUN_006b8240((char *)abStack_2f8,~uVar15 - 1);
              FUN_006b5aa0(*(int *)(this_01 + 0x1e9),pcVar11);
              this_00 = extraout_ECX_00;
            }
          }
          cMf32::delete(this_00,puVar9);
          hFindFile = pvStack_18;
          pIVar6 = IStack_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar6;
      BVar12 = FindNextFileA(hFindFile,&_Stack_1f4);
    } while (BVar12 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar15 = *(uint *)(*(int *)(this_01 + 0x1e9) + 8);
  uStack_8 = uVar15;
  if (uVar15 == 0) {
    if (this_01[0x1a4] != (OptPanelTy)0x3) goto LAB_0053325d;
    FUN_006b6020(*(int *)(this_01 + 0x1f1),0,&DAT_008016a0);
    uVar24 = *(undefined4 *)(this_01 + 0x1b9);
    *(undefined4 *)(this_01 + 0x28) = 0x33;
    *(undefined4 *)(this_01 + 0x2c) = *(undefined4 *)(this_01 + 0x1f1);
  }
  else {
    if (1 < uVar15) {
      do {
        iStack_c = 0;
        uVar16 = 0;
        if (uVar15 != 1) {
          do {
            FUN_006acc70(*(int *)(this_01 + 0x1ed),uVar16,&FStack_2c.dwLowDateTime);
            uVar1 = uVar16 + 1;
            FUN_006acc70(*(int *)(this_01 + 0x1ed),uVar1,&FStack_24.dwLowDateTime);
            LVar13 = CompareFileTime(&FStack_2c,&FStack_24);
            if (LVar13 < 0) {
              FUN_006b0cd0(*(int *)(this_01 + 0x1ed),uVar16,uVar1);
              FUN_006b8200(*(int *)(this_01 + 0x1e9),uVar16,uVar1);
              iStack_c = 1;
            }
            uVar16 = uVar1;
            uVar15 = uStack_8;
          } while (uVar1 < uStack_8 - 1);
        }
      } while (iStack_c != 0);
    }
    *(undefined4 *)(this_01 + 0x28) = 0x28;
    *(uint *)(this_01 + 0x2c) = uVar15;
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b5),(undefined4 *)(this_01 + 0x18));
    *(undefined4 *)(this_01 + 0x28) = 0x20;
    *(undefined4 *)(this_01 + 0x2c) = 1;
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1b5),(undefined4 *)(this_01 + 0x18));
    *(undefined4 *)(this_01 + 0x28) = 0x22;
    if (uVar15 <= param_1) {
      param_1 = uVar15 - 1;
    }
    uVar24 = *(undefined4 *)(this_01 + 0x1b5);
    *(uint *)(this_01 + 0x2c) = param_1;
  }
  FUN_006e6080(this_01,2,uVar24,(undefined4 *)(this_01 + 0x18));
LAB_0053325d:
  *(undefined4 *)(this_01 + 0x28) = 0x20;
  *(uint *)(this_01 + 0x2c) = (uint)(uVar15 != 0);
  FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1c1),(undefined4 *)(this_01 + 0x18));
  if (this_01[0x1a4] == (OptPanelTy)0x4) {
    FUN_006e6080(this_01,2,*(undefined4 *)(this_01 + 0x1bd),(undefined4 *)(this_01 + 0x18));
  }
  g_currentExceptionFrame = IStack_70.previous;
  return;
}

