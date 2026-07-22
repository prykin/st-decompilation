#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepFiles */

void __thiscall OptPanelTy::PrepFiles(OptPanelTy *this,uint param_1)

{
  uint index;
  char cVar1;
  byte bVar2;
  code *pcVar3;
  InternalExceptionFrame *pIVar4;
  int iVar5;
  DArrayTy *pDVar6;
  HANDLE hFindFile;
  cMf32 *this_00;
  ushort *puVar7;
  char *pcVar8;
  BOOL BVar9;
  LONG LVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  OptPanelTy *this_02;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 uVar19;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_02 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x44f,0,iVar5,
                                "%s","OptPanelTy::PrepFiles");
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x44f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_01E9 != (DArrayTy *)0x0) {
    FUN_006b5570(local_10->field_01E9);
    this_02->field_01E9 = (DArrayTy *)0x0;
  }
  if (this_02->field_01ED != (DArrayTy *)0x0) {
    DArrayDestroy(this_02->field_01ED);
    this_02->field_01ED = (DArrayTy *)0x0;
  }
  pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,0x32,10);
  this_02->field_01E9 = pDVar6;
  pDVar6 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x32,8,10);
  this_02->field_01ED = pDVar6;
  this_02->field_0028 = 0x20;
  *(undefined4 *)&this_02->field_0x2c = 0;
  FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
  uVar12 = 0xffffffff;
  pcVar8 = &DAT_00807680;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = &this_02->field_0x6c;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar8 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_02->field_0x6c;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar8 = (char *)&DAT_00807ddd;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_02->field_0x6c;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  pcVar8 = &this_02->field_0x6c;
  FUN_006b8280(pcVar8,pcVar8);
  uVar12 = 0xffffffff;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = local_3fc;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar8 = PTR_DAT_0079ad00;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_02->field_0x6c;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar8 = &DAT_007c72d8;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_02->field_0x6c;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar8 = PTR_DAT_0079acf4;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_02->field_0x6c;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  hFindFile = FindFirstFileA(&this_02->field_0x6c,&local_1f4);
  local_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar4 = g_currentExceptionFrame;
      if (((byte)local_1f4.dwFileAttributes & 0x10) == 0) {
        local_1c = &local_8;
        local_8 = 0;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)local_1f4.cFileName,(byte *)0x0,(byte *)0x0,local_2f8,(byte *)0x0);
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar5 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
        this_02 = local_10;
        hFindFile = local_18;
        pIVar4 = local_b4.previous;
        if (iVar5 == 0) {
          uVar12 = 0xffffffff;
          pcVar8 = local_3fc;
          do {
            pcVar16 = pcVar8;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar8 = pcVar16 + -uVar12;
          pcVar16 = &local_10->field_0x6c;
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pcVar16 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar12 = 0xffffffff;
          pbVar14 = local_2f8;
          do {
            pbVar17 = pbVar14;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pbVar17 = pbVar14 + 1;
            bVar2 = *pbVar14;
            pbVar14 = pbVar17;
          } while (bVar2 != 0);
          uVar12 = ~uVar12;
          iVar5 = -1;
          pcVar8 = &local_10->field_0x6c;
          do {
            pcVar16 = pcVar8;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          pbVar14 = pbVar17 + -uVar12;
          pbVar17 = (byte *)(pcVar16 + -1);
          for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pbVar17 = *(undefined4 *)pbVar14;
            pbVar14 = pbVar14 + 4;
            pbVar17 = pbVar17 + 4;
          }
          for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pbVar17 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            pbVar17 = pbVar17 + 1;
          }
          this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,&local_10->field_0x6c,0,0,0);
          puVar7 = cMf32::RecGet(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar7 == (ushort *)0x0) {
            local_8 = 0;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            this_01 = extraout_ECX;
          }
          else {
            bVar18 = false;
            if (this_02->field_01A4 == CASE_3) {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar18 = true;
              }
              else {
                bVar18 = false;
              }
            }
            else if (this_02->field_01A4 == CASE_4) {
              bVar18 = local_14 == local_8;
            }
            this_01 = (cMf32 *)0x0;
            if (bVar18) {
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_02->field_01ED->flags,&local_1f4.ftLastWriteTime.dwLowDateTime);
              uVar12 = 0xffffffff;
              pcVar8 = PTR_DAT_0079ad00;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              pcVar8 = FUN_006b8240((char *)local_2f8,~uVar12 - 1);
              Library::DKW::TBL::FUN_006b5aa0(&this_02->field_01E9->flags,pcVar8);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              this_01 = extraout_ECX_00;
            }
          }
          cMf32::delete(this_01,this_00);
          hFindFile = local_18;
          pIVar4 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar4;
      BVar9 = FindNextFileA(hFindFile,&local_1f4);
    } while (BVar9 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar12 = this_02->field_01E9->elementSize;
  local_8 = uVar12;
  if (uVar12 == 0) {
    if (this_02->field_01A4 != CASE_3) goto LAB_0053325d;
    Library::DKW::TBL::FUN_006b6020(&this_02->field_01F1->flags,0,&DAT_008016a0);
    uVar19 = this_02->field_01B9;
    this_02->field_0028 = 0x33;
    *(DArrayTy **)&this_02->field_0x2c = this_02->field_01F1;
  }
  else {
    if (1 < uVar12) {
      do {
        local_c = 0;
        uVar13 = 0;
        if (uVar12 != 1) {
          do {
            DArrayGetElement(this_02->field_01ED,uVar13,&local_2c);
            index = uVar13 + 1;
            DArrayGetElement(this_02->field_01ED,index,&local_24);
            LVar10 = CompareFileTime(&local_2c,&local_24);
            if (LVar10 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_02->field_01ED,uVar13,index);
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_02->field_01E9,uVar13,index);
              local_c = 1;
            }
            uVar13 = index;
            uVar12 = local_8;
          } while (index < local_8 - 1);
        }
      } while (local_c != 0);
    }
    this_02->field_0028 = 0x28;
    *(uint *)&this_02->field_0x2c = uVar12;
    FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
    this_02->field_0028 = 0x20;
    *(undefined4 *)&this_02->field_0x2c = 1;
    FUN_006e6080(this_02,2,this_02->field_01B5,(undefined4 *)&this_02->field_0x18);
    this_02->field_0028 = 0x22;
    if (uVar12 <= param_1) {
      param_1 = uVar12 - 1;
    }
    uVar19 = this_02->field_01B5;
    *(uint *)&this_02->field_0x2c = param_1;
  }
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x18);
LAB_0053325d:
  this_02->field_0028 = 0x20;
  *(uint *)&this_02->field_0x2c = (uint)(uVar12 != 0);
  FUN_006e6080(this_02,2,this_02->field_01C1,(undefined4 *)&this_02->field_0x18);
  if (this_02->field_01A4 == CASE_4) {
    FUN_006e6080(this_02,2,this_02->field_01BD,(undefined4 *)&this_02->field_0x18);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

