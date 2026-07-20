
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepFiles */

void __thiscall OptPanelTy::PrepFiles(OptPanelTy *this,uint param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  InternalExceptionFrame *pIVar5;
  int iVar6;
  uint *puVar7;
  HANDLE hFindFile;
  cMf32 *this_00;
  ushort *puVar8;
  char *pcVar9;
  BOOL BVar10;
  LONG LVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  OptPanelTy *this_02;
  undefined4 unaff_ESI;
  byte *pbVar15;
  void *unaff_EDI;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  bool bVar19;
  CHAR *pCVar20;
  undefined4 uVar21;
  char local_3fc [260];
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
  iVar6 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f,0,iVar6,
                                &DAT_007a4ccc,s_OptPanelTy__PrepFiles_007c72bc);
    if (iVar12 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x44f);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((byte *)local_10->field_01E9 != (byte *)0x0) {
    FUN_006b5570((byte *)local_10->field_01E9);
    this_02->field_01E9 = 0;
  }
  if ((byte *)this_02->field_01ED != (byte *)0x0) {
    FUN_006ae110((byte *)this_02->field_01ED);
    this_02->field_01ED = 0;
  }
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,0x32,10);
  this_02->field_01E9 = puVar7;
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x32,8,10);
  this_02->field_01ED = puVar7;
  this_02->field_0028 = 0x20;
  *(undefined4 *)&this_02->field_0x2c = 0;
  FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
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
  pcVar17 = &this_02->field_0x6c;
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
  iVar6 = -1;
  pcVar9 = &this_02->field_0x6c;
  do {
    pcVar16 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
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
  iVar6 = -1;
  pcVar9 = &this_02->field_0x6c;
  do {
    pcVar16 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
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
  pcVar9 = &this_02->field_0x6c;
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
  pcVar17 = local_3fc;
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
  iVar6 = -1;
  pcVar9 = &this_02->field_0x6c;
  do {
    pcVar16 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
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
  iVar6 = -1;
  pcVar9 = &this_02->field_0x6c;
  do {
    pcVar16 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
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
  iVar6 = -1;
  pcVar9 = &this_02->field_0x6c;
  do {
    pcVar16 = pcVar9;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
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
  hFindFile = FindFirstFileA(&this_02->field_0x6c,&local_1f4);
  local_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar5 = g_currentExceptionFrame;
      if (((byte)local_1f4.dwFileAttributes & 0x10) == 0) {
        pCVar20 = local_1f4.cFileName;
        local_1c = &local_8;
        uVar21 = 0;
        local_8 = 0;
        Library::MSVCRT::FUN_0072e730((byte *)pCVar20,(byte *)0x0,(byte *)0x0,local_2f8,(byte *)0x0)
        ;
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar6 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0,pCVar20,uVar21);
        this_02 = local_10;
        hFindFile = local_18;
        pIVar5 = local_b4.previous;
        if (iVar6 == 0) {
          uVar13 = 0xffffffff;
          pcVar9 = local_3fc;
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
          pcVar17 = &local_10->field_0x6c;
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
          pbVar15 = local_2f8;
          do {
            pbVar18 = pbVar15;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pbVar18 = pbVar15 + 1;
            bVar3 = *pbVar15;
            pbVar15 = pbVar18;
          } while (bVar3 != 0);
          uVar13 = ~uVar13;
          iVar6 = -1;
          pcVar9 = &local_10->field_0x6c;
          do {
            pcVar17 = pcVar9;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
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
          this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,&local_10->field_0x6c,0,0,0);
          puVar8 = cMf32::RecGet(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar8 == (ushort *)0x0) {
            local_8 = 0;
            this_01 = extraout_ECX;
          }
          else {
            bVar19 = false;
            if (this_02->field_01A4 == '\x03') {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar19 = true;
              }
              else {
                bVar19 = false;
              }
            }
            else if (this_02->field_01A4 == '\x04') {
              bVar19 = local_14 == local_8;
            }
            this_01 = (cMf32 *)0x0;
            if (bVar19) {
              Library::DKW::TBL::FUN_006ae1c0
                        ((uint *)this_02->field_01ED,&local_1f4.ftLastWriteTime.dwLowDateTime);
              uVar13 = 0xffffffff;
              pcVar9 = PTR_DAT_0079ad00;
              do {
                if (uVar13 == 0) break;
                uVar13 = uVar13 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              pcVar9 = FUN_006b8240((char *)local_2f8,~uVar13 - 1);
              Library::DKW::TBL::FUN_006b5aa0((uint *)this_02->field_01E9,pcVar9);
              this_01 = extraout_ECX_00;
            }
          }
          cMf32::delete(this_01,this_00);
          hFindFile = local_18;
          pIVar5 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar5;
      BVar10 = FindNextFileA(hFindFile,&local_1f4);
    } while (BVar10 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar13 = *(uint *)(this_02->field_01E9 + 8);
  local_8 = uVar13;
  if (uVar13 == 0) {
    if (this_02->field_01A4 != '\x03') goto LAB_0053325d;
    Library::DKW::TBL::FUN_006b6020((uint *)this_02->field_01F1,0,&DAT_008016a0);
    uVar21 = this_02->field_01B9;
    this_02->field_0028 = 0x33;
    *(undefined4 *)&this_02->field_0x2c = this_02->field_01F1;
  }
  else {
    if (1 < uVar13) {
      do {
        local_c = 0;
        uVar14 = 0;
        if (uVar13 != 1) {
          do {
            FUN_006acc70(this_02->field_01ED,uVar14,&local_2c.dwLowDateTime);
            uVar1 = uVar14 + 1;
            FUN_006acc70(this_02->field_01ED,uVar1,&local_24.dwLowDateTime);
            LVar11 = CompareFileTime(&local_2c,&local_24);
            if (LVar11 < 0) {
              FUN_006b0cd0(this_02->field_01ED,uVar14,uVar1);
              FUN_006b8200(this_02->field_01E9,uVar14,uVar1);
              local_c = 1;
            }
            uVar14 = uVar1;
            uVar13 = local_8;
          } while (uVar1 < local_8 - 1);
        }
      } while (local_c != 0);
    }
    this_02->field_0028 = 0x28;
    *(uint *)&this_02->field_0x2c = uVar13;
    FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
    this_02->field_0028 = 0x20;
    *(undefined4 *)&this_02->field_0x2c = 1;
    FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
    this_02->field_0028 = 0x22;
    if (uVar13 <= param_1) {
      param_1 = uVar13 - 1;
    }
    uVar21 = this_02->field_01B5;
    *(uint *)&this_02->field_0x2c = param_1;
  }
  FUN_006e6080(this_02,2,uVar21,(undefined4 *)&this_02->field_0x18);
LAB_0053325d:
  this_02->field_0028 = 0x20;
  *(uint *)&this_02->field_0x2c = (uint)(uVar13 != 0);
  FUN_006e6080(this_02,2,this_02->field_01C1,(undefined4 *)&this_02->field_0x18);
  if (this_02->field_01A4 == '\x04') {
    FUN_006e6080(this_02,2,this_02->field_01BD,(undefined4 *)&this_02->field_0x18);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

