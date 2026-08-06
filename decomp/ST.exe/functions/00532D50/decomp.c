#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepFiles

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall OptPanelTy::PrepFiles(OptPanelTy *this,uint param_1)

{
  uint index;
  char cVar1;
  byte bVar2;
  InternalExceptionFrame *pIVar4;
  int local_EAX_75;
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  int iVar5;
  cMf32 *this_00;
  ushort *puVar6;
  char *pcVar7_mg17;
  BOOL BVar7;
  LONG LVar8;
  int iVar12;
  uint uVar9;
  uint uVar10;
  int iVar11;
  OptPanelTy *this_01;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
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
  char *pcVar7_mg2;

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
  local_EAX_75 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
  this_01 = local_10;
  if (local_EAX_75 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\optpanel.cpp",0x44f,0,local_EAX_75,
                                "%s","OptPanelTy::PrepFiles");
    if (iVar12 == 0) {
      RaiseInternalException(local_EAX_75,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x44f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_01E9 != nullptr) {
    FUN_006b5570(local_10->field_01E9);
    this_01->field_01E9 = nullptr;
  }
  if (this_01->field_01ED != nullptr) {
    DArrayDestroy(this_01->field_01ED);
    this_01->field_01ED = nullptr;
  }
  pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,0x32,10);
  this_01->field_01E9 = pDVar5;
  pDVar5 = Library::DKW::TBL::DArrayCreate(nullptr,0x32,8,10);
  this_01->field_01ED = pDVar5;
  this_01->field_0028 = 0x20;
  *(undefined4 *)&this_01->field_0x2c = 0;
  FUN_006e6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_00807680;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = &this_01->field_006C;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar7_mg2 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar12 = pcVar7_mg2;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar7_mg2 + 1;
    cVar1 = *pcVar7_mg2;
    pcVar7_mg2 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar15 = &this_01->field_006C;
  do {
    pcVar14 = pcVar15;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = (char *)&DAT_00807ddd;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  pcVar12 = &this_01->field_006C;
  FUN_006b8280(pcVar12,pcVar12);
  uVar9 = 0xffffffff;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = local_3fc;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = PTR_DAT_0079ad00;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_007c72d8;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = PTR_DAT_0079acf4;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  hFindFile = FindFirstFileA(&this_01->field_006C,&local_1f4);
  local_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar4 = g_currentExceptionFrame;
      if (((byte)local_1f4.dwFileAttributes & 0x10) == 0) {
        local_1c = &local_8;
        local_8 = 0;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)local_1f4.cFileName,nullptr,nullptr,local_2f8,nullptr);
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar5 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0);
        this_01 = local_10;
        hFindFile = local_18;
        pIVar4 = local_b4.previous;
        if (iVar5 == 0) {
          uVar9 = 0xffffffff;
          pcVar12 = local_3fc;
          do {
            pcVar15 = pcVar12;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar15;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar12 = pcVar15 + -uVar9;
          pcVar15 = &local_10->field_006C;
          memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
          uVar10 = 0;
          uVar9 = 0xffffffff;
          pbVar13 = local_2f8;
          do {
            pbVar16 = pbVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pbVar16 = pbVar13 + 1;
            bVar2 = *pbVar13;
            pbVar13 = pbVar16;
          } while (bVar2 != 0);
          uVar9 = ~uVar9;
          iVar11 = -1;
          pcVar12 = &local_10->field_006C;
          do {
            pcVar15 = pcVar12;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar15 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar15;
          } while (cVar1 != '\0');
          pbVar13 = pbVar16 + -uVar9;
          pbVar16 = (byte *)(pcVar15 + -1);
          memmove(pbVar16, pbVar13, uVar9); /* compiler REP MOVS byte copy */
          this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                       (0x345,&local_10->field_006C,0,0,0);
          puVar6 = cMf32::RecGet(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar6 == nullptr) {
            local_8 = 0;
          }
          else {
            bVar17 = false;
            if (this_01->field_01A4 == CASE_3) {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
            }
            else if (this_01->field_01A4 == CASE_4) {
              bVar17 = local_14 == local_8;
            }
            if (bVar17) {
              Library::DKW::TBL::DArrayAppend(this_01->field_01ED,&local_1f4.ftLastWriteTime);
              uVar9 = 0xffffffff;
              pcVar12 = PTR_DAT_0079ad00;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              pcVar7_mg17 = FUN_006b8240((char *)local_2f8,~uVar9 - 1);
              Library::DKW::TBL::FUN_006b5aa0(this_01->field_01E9,pcVar7_mg17);
            }
          }
          cMf32::delete(this_00);
          hFindFile = local_18;
          pIVar4 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar4;
      BVar7 = FindNextFileA(hFindFile,&local_1f4);
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar9 = this_01->field_01E9->elementSize;
  local_8 = uVar9;
  if (uVar9 == 0) {
    if (this_01->field_01A4 != CASE_3) goto LAB_0053325d;
    Library::DKW::TBL::FUN_006b6020(this_01->field_01F1,0,&DAT_008016a0);
    uVar10 = this_01->field_01B5[1];
    this_01->field_0028 = 0x33;
    *(DArrayTy **)&this_01->field_0x2c = this_01->field_01F1;
  }
  else {
    if (1 < uVar9) {
      do {
        local_c = 0;
        uVar10 = 0;
        if (uVar9 != 1) {
          do {
            DArrayGetElement(this_01->field_01ED,uVar10,&local_2c);
            index = uVar10 + 1;
            DArrayGetElement(this_01->field_01ED,index,&local_24);
            LVar8 = CompareFileTime(&local_2c,&local_24);
            if (LVar8 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_01ED,uVar10,index);
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_01->field_01E9,uVar10,index);
              local_c = 1;
            }
            uVar10 = index;
            uVar9 = local_8;
          } while (index < local_8 - 1);
        }
      } while (local_c != 0);
    }
    this_01->field_0028 = 0x28;
    *(uint *)&this_01->field_0x2c = uVar9;
    FUN_006e6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x20;
    *(undefined4 *)&this_01->field_0x2c = 1;
    FUN_006e6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x22;
    if (uVar9 <= param_1) {
      param_1 = uVar9 - 1;
    }
    uVar10 = this_01->field_01B5[0];
    *(uint *)&this_01->field_0x2c = param_1;
  }
  FUN_006e6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x18);
LAB_0053325d:
  uVar10 = this_01->field_01B5[3];
  this_01->field_0028 = 0x20;
  *(uint *)&this_01->field_0x2c = (uint)(uVar9 != 0);
  FUN_006e6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x18);
  if (this_01->field_01A4 == CASE_4) {
    FUN_006e6080(this_01,2,this_01->field_01B5[2],(undefined4 *)&this_01->field_0x18);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

