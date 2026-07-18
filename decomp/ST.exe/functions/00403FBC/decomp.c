
void thunk_FUN_00532d50(uint param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint *puVar6;
  HANDLE hFindFile;
  undefined4 *puVar7;
  ushort *puVar8;
  char *pcVar9;
  BOOL BVar10;
  LONG LVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  void *this;
  undefined4 unaff_ESI;
  byte *pbVar15;
  void *unaff_EDI;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  CHAR *pCVar20;
  undefined4 uVar21;
  char acStack_3fc [260];
  byte abStack_2f8 [260];
  _WIN32_FIND_DATAA _Stack_1f4;
  undefined4 *puStack_b4;
  undefined4 auStack_b0 [16];
  undefined4 uStack_70;
  undefined4 auStack_6c [16];
  FILETIME FStack_2c;
  FILETIME FStack_24;
  uint *puStack_1c;
  HANDLE pvStack_18;
  uint uStack_14;
  void *pvStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_14 = 0x88000016;
  if (DAT_00808783 == '\x01') {
    uStack_14 = 0x88000116;
  }
  else if (DAT_00808783 == '\x02') {
    uStack_14 = 0x88000216;
  }
  uStack_70 = DAT_00858df8;
  DAT_00858df8 = (undefined4 **)&uStack_70;
  iVar5 = __setjmp3(auStack_6c,0,unaff_EDI,unaff_ESI);
  this = pvStack_10;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 **)uStack_70;
    iVar12 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f,0,iVar5,&DAT_007a4ccc);
    if (iVar12 == 0) {
      FUN_006a5e40(iVar5,0,0x7c70a0,0x44f);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(byte **)((int)pvStack_10 + 0x1e9) != (byte *)0x0) {
    FUN_006b5570(*(byte **)((int)pvStack_10 + 0x1e9));
    *(undefined4 *)((int)this + 0x1e9) = 0;
  }
  if (*(byte **)((int)this + 0x1ed) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)this + 0x1ed));
    *(undefined4 *)((int)this + 0x1ed) = 0;
  }
  puVar6 = FUN_006b54f0((uint *)0x0,0x32,10);
  *(uint **)((int)this + 0x1e9) = puVar6;
  puVar6 = FUN_006ae290((uint *)0x0,0x32,8,10);
  *(uint **)((int)this + 0x1ed) = puVar6;
  *(undefined4 *)((int)this + 0x28) = 0x20;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1b5),(undefined4 *)((int)this + 0x18));
  uVar13 = 0xffffffff;
  pcVar9 = &DAT_00807680;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = (char *)((int)this + 0x6c);
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar9 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar5 = -1;
  pcVar9 = (char *)((int)this + 0x6c);
  do {
    pcVar16 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar9 = (char *)&DAT_00807ddd;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar5 = -1;
  pcVar9 = (char *)((int)this + 0x6c);
  do {
    pcVar16 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  pcVar9 = (char *)((int)this + 0x6c);
  FUN_006b8280(pcVar9,pcVar9);
  uVar13 = 0xffffffff;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = acStack_3fc;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar9 = PTR_DAT_0079ad00;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar5 = -1;
  pcVar9 = (char *)((int)this + 0x6c);
  do {
    pcVar16 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar9 = &DAT_007c72d8;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar5 = -1;
  pcVar9 = (char *)((int)this + 0x6c);
  do {
    pcVar16 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  uVar13 = 0xffffffff;
  pcVar9 = PTR_DAT_0079acf4;
  do {
    pcVar17 = pcVar9;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar17 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar17;
  } while (cVar2 != '\0');
  uVar13 = ~uVar13;
  iVar5 = -1;
  pcVar9 = (char *)((int)this + 0x6c);
  do {
    pcVar16 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar9 + 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar16;
  } while (cVar2 != '\0');
  pcVar9 = pcVar17 + -uVar13;
  pcVar17 = pcVar16 + -1;
  for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar17 = pcVar17 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar17 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar17 = pcVar17 + 1;
  }
  hFindFile = FindFirstFileA((LPCSTR)((int)this + 0x6c),&_Stack_1f4);
  pvStack_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      puVar7 = DAT_00858df8;
      if (((byte)_Stack_1f4.dwFileAttributes & 0x10) == 0) {
        pCVar20 = _Stack_1f4.cFileName;
        puStack_1c = &uStack_8;
        uVar21 = 0;
        uStack_8 = 0;
        FUN_0072e730((byte *)pCVar20,(byte *)0x0,(byte *)0x0,abStack_2f8,(byte *)0x0);
        puStack_b4 = DAT_00858df8;
        DAT_00858df8 = &puStack_b4;
        iVar5 = __setjmp3(auStack_b0,0,pCVar20,uVar21);
        this = pvStack_10;
        hFindFile = pvStack_18;
        puVar7 = puStack_b4;
        if (iVar5 == 0) {
          uVar13 = 0xffffffff;
          pcVar9 = acStack_3fc;
          do {
            pcVar17 = pcVar9;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar17 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar17;
          } while (cVar2 != '\0');
          uVar13 = ~uVar13;
          pcVar9 = pcVar17 + -uVar13;
          pcVar17 = (char *)((int)pvStack_10 + 0x6c);
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pcVar17 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar17 = pcVar17 + 1;
          }
          uVar13 = 0xffffffff;
          pbVar15 = abStack_2f8;
          do {
            pbVar18 = pbVar15;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pbVar18 = pbVar15 + 1;
            bVar3 = *pbVar15;
            pbVar15 = pbVar18;
          } while (bVar3 != 0);
          uVar13 = ~uVar13;
          iVar5 = -1;
          pcVar9 = (char *)((int)pvStack_10 + 0x6c);
          do {
            pcVar17 = pcVar9;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar17 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar17;
          } while (cVar2 != '\0');
          pbVar15 = pbVar18 + -uVar13;
          pbVar18 = (byte *)(pcVar17 + -1);
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pbVar18 = *(undefined4 *)pbVar15;
            pbVar15 = pbVar15 + 4;
            pbVar18 = pbVar18 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar18 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            pbVar18 = pbVar18 + 1;
          }
          puVar7 = FUN_006f0ec0(0x345,(byte *)((int)pvStack_10 + 0x6c),0,0,0);
          puVar8 = FUN_006f1ce0(0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&puStack_1c,0);
          if (puVar8 == (ushort *)0x0) {
            uStack_8 = 0;
          }
          else {
            bVar19 = false;
            if (*(char *)((int)this + 0x1a4) == '\x03') {
              if (((char)(uStack_8 >> 0x18) == -0x78) && ((char)uStack_8 == '\x16')) {
                bVar19 = true;
              }
              else {
                bVar19 = false;
              }
            }
            else if (*(char *)((int)this + 0x1a4) == '\x04') {
              bVar19 = uStack_14 == uStack_8;
            }
            if (bVar19) {
              FUN_006ae1c0(*(uint **)((int)this + 0x1ed),&_Stack_1f4.ftLastWriteTime.dwLowDateTime);
              uVar13 = 0xffffffff;
              pcVar9 = PTR_DAT_0079ad00;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              pcVar9 = FUN_006b8240((char *)abStack_2f8,~uVar13 - 1);
              FUN_006b5aa0(*(int *)((int)this + 0x1e9),pcVar9);
            }
          }
          FUN_006f1170(puVar7);
          hFindFile = pvStack_18;
          puVar7 = puStack_b4;
        }
      }
      DAT_00858df8 = (undefined4 **)puVar7;
      BVar10 = FindNextFileA(hFindFile,&_Stack_1f4);
    } while (BVar10 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar13 = *(uint *)(*(int *)((int)this + 0x1e9) + 8);
  uStack_8 = uVar13;
  if (uVar13 == 0) {
    if (*(char *)((int)this + 0x1a4) != '\x03') goto LAB_0053325d;
    FUN_006b6020(*(int *)((int)this + 0x1f1),0,&DAT_008016a0);
    uVar21 = *(undefined4 *)((int)this + 0x1b9);
    *(undefined4 *)((int)this + 0x28) = 0x33;
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x1f1);
  }
  else {
    if (1 < uVar13) {
      do {
        iStack_c = 0;
        uVar14 = 0;
        if (uVar13 != 1) {
          do {
            FUN_006acc70(*(int *)((int)this + 0x1ed),uVar14,&FStack_2c.dwLowDateTime);
            uVar1 = uVar14 + 1;
            FUN_006acc70(*(int *)((int)this + 0x1ed),uVar1,&FStack_24.dwLowDateTime);
            LVar11 = CompareFileTime(&FStack_2c,&FStack_24);
            if (LVar11 < 0) {
              FUN_006b0cd0(*(int *)((int)this + 0x1ed),uVar14,uVar1);
              FUN_006b8200(*(int *)((int)this + 0x1e9),uVar14,uVar1);
              iStack_c = 1;
            }
            uVar14 = uVar1;
            uVar13 = uStack_8;
          } while (uVar1 < uStack_8 - 1);
        }
      } while (iStack_c != 0);
    }
    *(undefined4 *)((int)this + 0x28) = 0x28;
    *(uint *)((int)this + 0x2c) = uVar13;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1b5),(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x28) = 0x20;
    *(undefined4 *)((int)this + 0x2c) = 1;
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1b5),(undefined4 *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x28) = 0x22;
    if (uVar13 <= param_1) {
      param_1 = uVar13 - 1;
    }
    uVar21 = *(undefined4 *)((int)this + 0x1b5);
    *(uint *)((int)this + 0x2c) = param_1;
  }
  FUN_006e6080(this,2,uVar21,(undefined4 *)((int)this + 0x18));
LAB_0053325d:
  *(undefined4 *)((int)this + 0x28) = 0x20;
  *(uint *)((int)this + 0x2c) = (uint)(uVar13 != 0);
  FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1c1),(undefined4 *)((int)this + 0x18));
  if (*(char *)((int)this + 0x1a4) == '\x04') {
    FUN_006e6080(this,2,*(undefined4 *)((int)this + 0x1bd),(undefined4 *)((int)this + 0x18));
  }
  DAT_00858df8 = (undefined4 **)uStack_70;
  return;
}

