
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepFiles */

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
  cMf32 *this_00;
  ushort *puVar9;
  char *pcVar10;
  BOOL BVar11;
  LONG LVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  OptPanelTy *this_02;
  undefined4 unaff_ESI;
  OptPanelTy *pOVar16;
  void *unaff_EDI;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  OptPanelTy *pOVar20;
  bool bVar21;
  CHAR *pCVar22;
  undefined4 uVar23;
  OptPanelTy local_3fc [260];
  byte local_2f8 [260];
  _WIN32_FIND_DATAA local_1f4;
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  FILETIME local_2c;
  FILETIME local_24;
  uint *local_1c;
  HANDLE local_18;
  uint local_14;
  OptPanelTy *local_10;
  int local_c;
  uint local_8;
  
  local_14 = 0x88000016;
  if (DAT_00808783 == '\x01') {
    local_14 = 0x88000116;
  }
  else if (DAT_00808783 == '\x02') {
    local_14 = 0x88000216;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_10 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f,0,iVar7,
                                &DAT_007a4ccc,s_OptPanelTy__PrepFiles_007c72bc);
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(byte **)(local_10 + 0x1e9) != (byte *)0x0) {
    FUN_006b5570(*(byte **)(local_10 + 0x1e9));
    *(undefined4 *)(this_02 + 0x1e9) = 0;
  }
  if (*(byte **)(this_02 + 0x1ed) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(this_02 + 0x1ed));
    *(undefined4 *)(this_02 + 0x1ed) = 0;
  }
  puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)(this_02 + 0x1e9) = puVar8;
  puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)(this_02 + 0x1ed) = puVar8;
  *(undefined4 *)(this_02 + 0x28) = 0x20;
  *(undefined4 *)(this_02 + 0x2c) = 0;
  FUN_006e6080(this_02,2,*(undefined4 *)(this_02 + 0x1b5),(undefined4 *)(this_02 + 0x18));
  uVar14 = 0xffffffff;
  pcVar10 = &DAT_00807680;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = this_02 + 0x6c;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  uVar14 = 0xffffffff;
  pcVar10 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  iVar7 = -1;
  pOVar16 = this_02 + 0x6c;
  do {
    pOVar20 = pOVar16;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = pOVar20 + -1;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  uVar14 = 0xffffffff;
  pcVar10 = (char *)&DAT_00807ddd;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  iVar7 = -1;
  pOVar16 = this_02 + 0x6c;
  do {
    pOVar20 = pOVar16;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = pOVar20 + -1;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  pOVar16 = this_02 + 0x6c;
  FUN_006b8280((char *)pOVar16,(char *)pOVar16);
  uVar14 = 0xffffffff;
  do {
    pOVar20 = pOVar16;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  uVar14 = ~uVar14;
  pOVar16 = pOVar20 + -uVar14;
  pOVar20 = local_3fc;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  uVar14 = 0xffffffff;
  pcVar10 = PTR_DAT_0079ad00;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  iVar7 = -1;
  pOVar16 = this_02 + 0x6c;
  do {
    pOVar20 = pOVar16;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = pOVar20 + -1;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  uVar14 = 0xffffffff;
  pcVar10 = &DAT_007c72d8;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  iVar7 = -1;
  pOVar16 = this_02 + 0x6c;
  do {
    pOVar20 = pOVar16;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = pOVar20 + -1;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  uVar14 = 0xffffffff;
  pcVar10 = PTR_DAT_0079acf4;
  do {
    pcVar17 = pcVar10;
    if (uVar14 == 0) break;
    uVar14 = uVar14 - 1;
    pcVar17 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar17;
  } while (cVar2 != '\0');
  uVar14 = ~uVar14;
  iVar7 = -1;
  pOVar16 = this_02 + 0x6c;
  do {
    pOVar20 = pOVar16;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pOVar20 = pOVar16 + 1;
    OVar3 = *pOVar16;
    pOVar16 = pOVar20;
  } while (OVar3 != (OptPanelTy)0x0);
  pOVar16 = (OptPanelTy *)(pcVar17 + -uVar14);
  pOVar20 = pOVar20 + -1;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
    pOVar16 = pOVar16 + 4;
    pOVar20 = pOVar20 + 4;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *pOVar20 = *pOVar16;
    pOVar16 = pOVar16 + 1;
    pOVar20 = pOVar20 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)(this_02 + 0x6c),&local_1f4);
  local_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar6 = g_currentExceptionFrame;
      if (((byte)local_1f4.dwFileAttributes & 0x10) == 0) {
        pCVar22 = local_1f4.cFileName;
        local_1c = &local_8;
        uVar23 = 0;
        local_8 = 0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar22,(byte *)0x0,(byte *)0x0,local_2f8,(byte *)0x0)
        ;
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar7 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0,pCVar22,uVar23);
        this_02 = local_10;
        hFindFile = local_18;
        pIVar6 = local_b4.previous;
        if (iVar7 == 0) {
          uVar14 = 0xffffffff;
          pOVar16 = local_3fc;
          do {
            pOVar20 = pOVar16;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pOVar20 = pOVar16 + 1;
            OVar3 = *pOVar16;
            pOVar16 = pOVar20;
          } while (OVar3 != (OptPanelTy)0x0);
          uVar14 = ~uVar14;
          pOVar16 = pOVar20 + -uVar14;
          pOVar20 = local_10 + 0x6c;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
            pOVar16 = pOVar16 + 4;
            pOVar20 = pOVar20 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pOVar20 = *pOVar16;
            pOVar16 = pOVar16 + 1;
            pOVar20 = pOVar20 + 1;
          }
          uVar14 = 0xffffffff;
          pbVar18 = local_2f8;
          do {
            pbVar19 = pbVar18;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            pbVar19 = pbVar18 + 1;
            bVar4 = *pbVar18;
            pbVar18 = pbVar19;
          } while (bVar4 != 0);
          uVar14 = ~uVar14;
          iVar7 = -1;
          pOVar16 = local_10 + 0x6c;
          do {
            pOVar20 = pOVar16;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pOVar20 = pOVar16 + 1;
            OVar3 = *pOVar16;
            pOVar16 = pOVar20;
          } while (OVar3 != (OptPanelTy)0x0);
          pOVar16 = (OptPanelTy *)(pbVar19 + -uVar14);
          pOVar20 = pOVar20 + -1;
          for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pOVar20 = *(undefined4 *)pOVar16;
            pOVar16 = pOVar16 + 4;
            pOVar20 = pOVar20 + 4;
          }
          for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pOVar20 = *pOVar16;
            pOVar16 = pOVar16 + 1;
            pOVar20 = pOVar20 + 1;
          }
          this_00 = (cMf32 *)FUN_006f0ec0(0x345,(byte *)(local_10 + 0x6c),0,0,0);
          puVar9 = cMf32::RecGet(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar9 == (ushort *)0x0) {
            local_8 = 0;
            this_01 = extraout_ECX;
          }
          else {
            bVar21 = false;
            if (this_02[0x1a4] == (OptPanelTy)0x3) {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar21 = true;
              }
              else {
                bVar21 = false;
              }
            }
            else if (this_02[0x1a4] == (OptPanelTy)0x4) {
              bVar21 = local_14 == local_8;
            }
            this_01 = (cMf32 *)0x0;
            if (bVar21) {
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)(this_02 + 0x1ed),&local_1f4.ftLastWriteTime.dwLowDateTime);
              uVar14 = 0xffffffff;
              pcVar10 = PTR_DAT_0079ad00;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              pcVar10 = FUN_006b8240((char *)local_2f8,~uVar14 - 1);
              Library::DKW::TBL::FUN_006b5aa0(*(int *)(this_02 + 0x1e9),pcVar10);
              this_01 = extraout_ECX_00;
            }
          }
          cMf32::delete(this_01,(undefined4 *)this_00);
          hFindFile = local_18;
          pIVar6 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar6;
      BVar11 = FindNextFileA(hFindFile,&local_1f4);
    } while (BVar11 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar14 = *(uint *)(*(int *)(this_02 + 0x1e9) + 8);
  local_8 = uVar14;
  if (uVar14 == 0) {
    if (this_02[0x1a4] != (OptPanelTy)0x3) goto LAB_0053325d;
    Library::DKW::TBL::FUN_006b6020(*(int *)(this_02 + 0x1f1),0,&DAT_008016a0);
    uVar23 = *(undefined4 *)(this_02 + 0x1b9);
    *(undefined4 *)(this_02 + 0x28) = 0x33;
    *(undefined4 *)(this_02 + 0x2c) = *(undefined4 *)(this_02 + 0x1f1);
  }
  else {
    if (1 < uVar14) {
      do {
        local_c = 0;
        uVar15 = 0;
        if (uVar14 != 1) {
          do {
            FUN_006acc70(*(int *)(this_02 + 0x1ed),uVar15,&local_2c.dwLowDateTime);
            uVar1 = uVar15 + 1;
            FUN_006acc70(*(int *)(this_02 + 0x1ed),uVar1,&local_24.dwLowDateTime);
            LVar12 = CompareFileTime(&local_2c,&local_24);
            if (LVar12 < 0) {
              FUN_006b0cd0(*(int *)(this_02 + 0x1ed),uVar15,uVar1);
              FUN_006b8200(*(int *)(this_02 + 0x1e9),uVar15,uVar1);
              local_c = 1;
            }
            uVar15 = uVar1;
            uVar14 = local_8;
          } while (uVar1 < local_8 - 1);
        }
      } while (local_c != 0);
    }
    *(undefined4 *)(this_02 + 0x28) = 0x28;
    *(uint *)(this_02 + 0x2c) = uVar14;
    FUN_006e6080(this_02,2,*(undefined4 *)(this_02 + 0x1b5),(undefined4 *)(this_02 + 0x18));
    *(undefined4 *)(this_02 + 0x28) = 0x20;
    *(undefined4 *)(this_02 + 0x2c) = 1;
    FUN_006e6080(this_02,2,*(undefined4 *)(this_02 + 0x1b5),(undefined4 *)(this_02 + 0x18));
    *(undefined4 *)(this_02 + 0x28) = 0x22;
    if (uVar14 <= param_1) {
      param_1 = uVar14 - 1;
    }
    uVar23 = *(undefined4 *)(this_02 + 0x1b5);
    *(uint *)(this_02 + 0x2c) = param_1;
  }
  FUN_006e6080(this_02,2,uVar23,(undefined4 *)(this_02 + 0x18));
LAB_0053325d:
  *(undefined4 *)(this_02 + 0x28) = 0x20;
  *(uint *)(this_02 + 0x2c) = (uint)(uVar14 != 0);
  FUN_006e6080(this_02,2,*(undefined4 *)(this_02 + 0x1c1),(undefined4 *)(this_02 + 0x18));
  if (this_02[0x1a4] == (OptPanelTy)0x4) {
    FUN_006e6080(this_02,2,*(undefined4 *)(this_02 + 0x1bd),(undefined4 *)(this_02 + 0x18));
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

