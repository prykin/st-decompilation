
undefined4 __thiscall FUN_00572d30(void *this,int param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  LSTATUS LVar3;
  uint uVar4;
  UINT UVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  undefined4 local_1c [2];
  undefined2 local_14;
  char *local_10;
  char *local_c;
  HKEY local_8;
  
  LVar3 = RegCreateKeyA((HKEY)0x80000002,s_SOFTWARE_Ellipse_Studios_Submari_007ca46c,&local_8);
  pcVar10 = RegSetValueExA_exref;
  if (LVar3 == 0) {
    LVar3 = RegSetValueExA(local_8,&DAT_007ca4f8,0,4,(BYTE *)((int)this + 0x779),4);
    if ((((LVar3 == 0) &&
         (LVar3 = RegSetValueExA(local_8,s_Version_007ca4f0,0,4,(BYTE *)((int)this + 0x77d),4),
         LVar3 == 0)) &&
        (LVar3 = RegSetValueExA(local_8,s_Folder_007ca500,0,1,(BYTE *)((int)this + 0x645),0x104),
        LVar3 == 0)) &&
       ((LVar3 = RegSetValueExA(local_8,&DAT_007ca508,0,1,(BYTE *)((int)this + 0x749),0x30),
        LVar3 == 0 &&
        (LVar3 = RegSetValueExA(local_8,s_LastPlayer_007ca510,0,1,(BYTE *)((int)this + 0x785),0x40),
        LVar3 == 0)))) {
      if (param_1 != 0) {
        local_1c[0] = DAT_007ca690;
        local_1c[1] = 0;
        local_14 = 0;
        uVar4 = thunk_FUN_00571dc0();
        local_1c[0] = CONCAT31(local_1c[0]._1_3_,(char)uVar4);
        UVar5 = GetDriveTypeA((LPCSTR)local_1c);
        if (UVar5 != 5) {
          uVar4 = 0xffffffff;
          pcVar9 = &DAT_007ca694;
          do {
            pcVar11 = pcVar9;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            pcVar11 = pcVar9 + 1;
            cVar2 = *pcVar9;
            pcVar9 = pcVar11;
          } while (cVar2 != '\0');
          uVar4 = ~uVar4;
          pcVar9 = pcVar11 + -uVar4;
          pcVar11 = (char *)local_1c;
          for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar11 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar11 = pcVar11 + 1;
          }
        }
        FUN_006b78c0((char *)local_1c,(char *)local_1c);
        uVar4 = 0xffffffff;
        pcVar9 = (char *)local_1c;
        do {
          pcVar11 = pcVar9;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar9 = pcVar11 + -uVar4;
        pcVar11 = (char *)((int)this + 0x640);
        for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar4 = uVar4 & 3; pcVar10 = RegSetValueExA_exref, uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
      (*pcVar10)(local_8,s_CDAudioDrive_007ca524,0,1,(int)this + 0x640,5);
      iVar6 = (*pcVar10)(local_8,s_CharSet_007ca534,0,4,(int)this + 0x781,4);
      if (iVar6 != 0) {
        RegCloseKey(local_8);
        return 0;
      }
      iVar6 = (*pcVar10)(local_8,s_Server_007ca53c,0,1,(int)this + 0xdae,0x40);
      if (iVar6 != 0) {
        RegCloseKey(local_8);
        return 0;
      }
      if (((param_2 & 2) != 0) &&
         (iVar6 = (*pcVar10)(local_8,s_Editor_007ca51c,0,3,&DAT_008071f8,0x100), iVar6 != 0)) {
        RegCloseKey(local_8);
        return 0;
      }
      RegCloseKey(local_8);
      pcVar9 = (char *)((int)this + 0x28);
      FUN_006b8280(pcVar9,pcVar9);
      local_c = (char *)((int)this + 300);
      FUN_006b8280(local_c,local_c);
      local_10 = (char *)((int)this + 0x438);
      FUN_006b8280(local_10,local_10);
      pcVar11 = (char *)((int)this + 0x230);
      FUN_006b8280(pcVar11,pcVar11);
      pcVar1 = (char *)((int)this + 0x334);
      FUN_006b8280(pcVar1,pcVar1);
      pcVar8 = (char *)((int)this + 0x53c);
      FUN_006b8280(pcVar8,pcVar8);
      LVar3 = RegCreateKeyA((HKEY)0x80000002,s_SOFTWARE_Ellipse_Studios_Submari_007ca434,&local_8);
      if (LVar3 == 0) {
        iVar6 = (*pcVar10)(local_8,s_MainPath_007ca4ac,0,1,pcVar9,0x104);
        if (iVar6 != 0) {
          RegCloseKey(local_8);
          return 0;
        }
        iVar6 = (*pcVar10)(local_8,s_SoundPath_007ca4c4,0,1,pcVar11,0x104);
        if (iVar6 != 0) {
          RegCloseKey(local_8);
          return 0;
        }
        iVar6 = (*pcVar10)(local_8,s_MusicPath_007ca4d0,0,1,pcVar1,0x104);
        if (iVar6 != 0) {
          RegCloseKey(local_8);
          return 0;
        }
        iVar6 = (*pcVar10)(local_8,s_VideoPath_007ca4a0,0,1,local_c,0x104);
        if (iVar6 == 0) {
          iVar6 = (*pcVar10)(local_8,s_DataPath_007ca4b8,0,1,local_10,0x104);
          if (iVar6 != 0) {
            RegCloseKey(local_8);
            return 0;
          }
          iVar6 = (*pcVar10)(local_8,s_InstPath_007ca4e4,0,1,pcVar8,0x104);
          if (iVar6 == 0) {
            RegCloseKey(local_8);
            return 1;
          }
          RegCloseKey(local_8);
          return 0;
        }
        RegCloseKey(local_8);
        return 0;
      }
    }
    else {
      RegCloseKey(local_8);
    }
  }
  return 0;
}

