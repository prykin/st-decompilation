
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall thunk_FUN_00571e40(void *this,uint param_1)

{
  LPBYTE pBVar1;
  uint *lpData;
  char cVar2;
  byte bVar3;
  LSTATUS LVar4;
  UINT UVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  char *pcVar14;
  bool bVar15;
  CHAR aCStack_124 [260];
  undefined4 uStack_20;
  CHAR CStack_1c;
  undefined3 uStack_1b;
  undefined4 uStack_18;
  undefined2 uStack_14;
  undefined1 uStack_11;
  DWORD aDStack_10 [2];
  HKEY pHStack_8;
  
  LVar4 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca434,&pHStack_8);
  pcVar9 = RegQueryValueExA_exref;
  if (LVar4 != 0) goto LAB_0057238d;
  pBVar1 = (LPBYTE)((int)this + 0x28);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_MainPath_007ca4ac,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  uStack_11 = *(undefined1 *)((int)this + 0x2b);
  *(undefined1 *)((int)this + 0x2b) = 0;
  UVar5 = GetDriveTypeA((LPCSTR)pBVar1);
  *(undefined1 *)((int)this + 0x2b) = uStack_11;
  if (UVar5 != 3) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  pBVar1 = (LPBYTE)((int)this + 300);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_VideoPath_007ca4a0,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) goto LAB_0057238d;
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x438);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_DataPath_007ca4b8,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x230);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_SoundPath_007ca4c4,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x334);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_MusicPath_007ca4d0,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) goto LAB_0057238d;
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  pBVar1 = (LPBYTE)((int)this + 0x53c);
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_InstPath_007ca4e4,(LPDWORD)0x0,aDStack_10,pBVar1,
                           aDStack_10 + 1);
  if (LVar4 != 0) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  FUN_006b8280((char *)pBVar1,(char *)pBVar1);
  RegCloseKey(pHStack_8);
  wsprintfA(aCStack_124,&DAT_007c6ee4,(int)this + 0x28,PTR_s_SAVEGAME__0079b0cc);
  CreateDirectoryA(aCStack_124,(LPSECURITY_ATTRIBUTES)0x0);
  LVar4 = RegOpenKeyA((HKEY)0x80000001,s_SOFTWARE_Ellipse_Studios_Submari_007ca46c,&pHStack_8);
  if (LVar4 != 0) {
LAB_00572086:
    RegCloseKey(pHStack_8);
    return 0;
  }
  aDStack_10[1] = 4;
  LVar4 = RegQueryValueExA(pHStack_8,s_Version_007ca4f0,(LPDWORD)0x0,aDStack_10,
                           (LPBYTE)((int)this + 0x77d),aDStack_10 + 1);
  if (LVar4 != 0) goto LAB_00572086;
  lpData = (uint *)((int)this + 0x779);
  aDStack_10[1] = 4;
  LVar4 = RegQueryValueExA(pHStack_8,&DAT_007ca4f8,(LPDWORD)0x0,aDStack_10,(LPBYTE)lpData,
                           aDStack_10 + 1);
  if (LVar4 != 0) goto LAB_0057238d;
  uVar6 = *lpData >> 0x10;
  if (uVar6 < 0xdeb1) {
    if (((uVar6 != 0xdeb0) && (uVar6 != 0xd0dd)) && ((uVar6 < 0xddd1 || (0xddd2 < uVar6)))) {
LAB_005720f0:
      *lpData = *lpData | 0xd0ddffff;
    }
  }
  else if (uVar6 != 0xffff) goto LAB_005720f0;
  aDStack_10[1] = 0x104;
  LVar4 = RegQueryValueExA(pHStack_8,s_Folder_007ca500,(LPDWORD)0x0,aDStack_10,
                           (LPBYTE)((int)this + 0x645),aDStack_10 + 1);
  if (LVar4 != 0) {
    RegCloseKey(pHStack_8);
    return 0;
  }
  aDStack_10[1] = 0x30;
  LVar4 = RegQueryValueExA(pHStack_8,&DAT_007ca508,(LPDWORD)0x0,aDStack_10,
                           (LPBYTE)((int)this + 0x749),aDStack_10 + 1);
  if (LVar4 != 0) {
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_007ca684;
    do {
      pcVar14 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar14 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar14;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar14 + -uVar6;
    pcVar14 = (char *)((int)this + 0x749);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; pcVar9 = RegQueryValueExA_exref, uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar14 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  puVar12 = (undefined4 *)((int)this + 0x785);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  aDStack_10[1] = 0x40;
  iVar8 = (*pcVar9)(pHStack_8,s_LastPlayer_007ca510,0,aDStack_10,(undefined4 *)((int)this + 0x785),
                    aDStack_10 + 1);
  if (iVar8 == 0) {
    aDStack_10[1] = 4;
    iVar8 = (*pcVar9)(pHStack_8,s_CharSet_007ca534,0,aDStack_10,(int)this + 0x781,aDStack_10 + 1);
    if (iVar8 != 0) {
      RegCloseKey(pHStack_8);
      return 0;
    }
    puVar12 = (undefined4 *)((int)this + 0xdae);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    aDStack_10[1] = 0x40;
    iVar8 = (*pcVar9)(pHStack_8,s_Server_007ca53c,0,aDStack_10,(undefined4 *)((int)this + 0xdae),
                      aDStack_10 + 1);
    if (iVar8 == 0) {
      if ((param_1 & 2) != 0) {
        uStack_20 = 0x100;
        iVar8 = (*pcVar9)(pHStack_8,s_Editor_007ca51c,0,aDStack_10,&DAT_008071f8,&uStack_20);
        if (iVar8 != 0) {
          RegCloseKey(pHStack_8);
          return 0;
        }
      }
      if ((param_1 & 1) != 0) {
        param_1 = 5;
        iVar8 = (*pcVar9)(pHStack_8,s_CDAudioDrive_007ca524,0,aDStack_10,(int)this + 0x640,&param_1)
        ;
        if (iVar8 != 0) {
          RegCloseKey(pHStack_8);
          return 0;
        }
        pbVar13 = &DAT_007ca694;
        pbVar10 = (byte *)((int)this + 0x640);
        do {
          bVar3 = *pbVar10;
          bVar15 = bVar3 < *pbVar13;
          if (bVar3 != *pbVar13) {
LAB_005722e8:
            iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_005722ed;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar10[1];
          bVar15 = bVar3 < pbVar13[1];
          if (bVar3 != pbVar13[1]) goto LAB_005722e8;
          pbVar10 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar3 != 0);
        iVar8 = 0;
LAB_005722ed:
        if (iVar8 != 0) {
          uStack_18 = 0;
          uStack_14 = 0;
          _CStack_1c = CONCAT31((int3)((uint)DAT_007ca690 >> 8),*(undefined1 *)((int)this + 0x640));
          UVar5 = GetDriveTypeA(&CStack_1c);
          if (UVar5 == 5) {
            uVar6 = 0xffffffff;
            pcVar11 = &CStack_1c;
            do {
              pcVar14 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar14 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar14;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pcVar11 = pcVar14 + -uVar6;
            pcVar14 = (char *)((int)this + 0x640);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar14 = pcVar14 + 4;
            }
          }
          else {
            uVar6 = 0xffffffff;
            pcVar11 = &DAT_007ca694;
            do {
              pcVar14 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar14 = pcVar11 + 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar14;
            } while (cVar2 != '\0');
            uVar6 = ~uVar6;
            pcVar11 = pcVar14 + -uVar6;
            pcVar14 = (char *)((int)this + 0x640);
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar14 = pcVar14 + 4;
            }
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar14 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar14 = pcVar14 + 1;
          }
          FUN_006b78c0((char *)((int)this + 0x640),(char *)((int)this + 0x640));
        }
        thunk_FUN_00573260();
      }
      RegCloseKey(pHStack_8);
      return 1;
    }
  }
LAB_0057238d:
  RegCloseKey(pHStack_8);
  return 0;
}

