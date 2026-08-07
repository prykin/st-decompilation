#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  char cVar1;
  byte bVar2;
  int local_EAX_42;
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  int iVar4;
  cMf32 *this_00;
  int local_EAX_626;
  BOOL BVar4;
  dword dVar5;
  char *pcVar6;
  int local_EAX_880;
  int iVar7;
  int iVar9;
  uint uVar8;
  int iVar10;
  uint uVar11;
  DArrayTy *pDVar12;
  int iVar13;
  char *pcVar14;
  SIDTy *this_01;
  CHAR *pCVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  dword local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  local_EAX_42 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_01 = local_c;
  if (local_EAX_42 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x167,0,local_EAX_42,
                               "%s","SIDTy::PrepFiles");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_42,0,"E:\\__titans\\Start\\sid_obj.cpp",0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_1CCC != nullptr) {
    FUN_006b5570(local_c->field_1CCC);
    this_01->field_1CCC = nullptr;
  }
  pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_01->field_1CCC = pDVar5;
  this_01->field_002D = 0x20;
  this_01->field_0031 = 0;
  FUN_006e6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
  uVar8 = this_01->field_1AF1[1];
  this_01->field_002D = 0x29;
  this_01->field_0031 = 0x19;
  FUN_006e6080(this_01,2,uVar8,(undefined4 *)&this_01->field_0x1d);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_01->field_1CB8,0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1CB4);
  wsprintfA(&this_01->field_1CD4,"%s%s",&CHAR_00h_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar8 = 0xffffffff;
  pcVar14 = &CHAR___007cc8bc;
  do {
    pcVar6 = pcVar14;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar6 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar6;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar10 = -1;
  pcVar14 = &this_01->field_1CD4;
  do {
    pcVar16 = pcVar14;
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    pcVar16 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar16;
  } while (cVar1 != '\0');
  pcVar14 = pcVar6 + -uVar8;
  pcVar6 = pcVar16 + -1;
  memmove(pcVar6, pcVar14, uVar8); /* compiler REP MOVS byte copy */
  uVar11 = 0;
  hFindFile = FindFirstFileA(&this_01->field_1CD4,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar17 = &DAT_007cc8b8;
        pCVar15 = local_21c.cFileName;
        do {
          bVar2 = *pCVar15;
          bVar19 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_005d8d7a:
            iVar10 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar15[1];
          bVar19 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_005d8d7a;
          pCVar15 = pCVar15 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar10 = 0;
LAB_005d8d7f:
        if (iVar10 != 0) {
          pbVar17 = &DAT_007cc8b4;
          pCVar15 = local_21c.cFileName;
          do {
            bVar2 = *pCVar15;
            bVar19 = bVar2 < *pbVar17;
            if (bVar2 != *pbVar17) {
LAB_005d8dba:
              iVar10 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar15[1];
            bVar19 = bVar2 < pbVar17[1];
            if (bVar2 != pbVar17[1]) goto LAB_005d8dba;
            pCVar15 = pCVar15 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar2 != 0);
          iVar10 = 0;
LAB_005d8dbf:
          if (iVar10 != 0) {
            uVar8 = 0xffffffff;
            pCVar15 = local_21c.cFileName;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pCVar15;
              pCVar15 = pCVar15 + 1;
            } while (cVar1 != '\0');
            if (~uVar8 - 1 < 0x40) {
              wsprintfA(&this_01->field_1CD4,"%s%s%s\\%s",&CHAR_00h_00807680,
                        PTR_s_SAVEGAME__0079c19c,local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;
              iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
              this_01 = local_c;
              if (iVar4 == 0) {
                this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                             (0x345,(byte *)&local_c->field_1CD4,0,0,0);
                if (this_00 != nullptr) {
                  local_EAX_626 = cMf32::RecChk(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  if (local_EAX_626 == 0) {
                    Library::DKW::TBL::FUN_006b5aa0(this_01->field_1CCC,local_21c.cFileName);
                  }
                  cMf32::delete(this_00);
                }
                g_currentExceptionFrame = local_9c.previous;
              }
              else {
                g_currentExceptionFrame = local_9c.previous;
              }
            }
          }
        }
      }
      hFindFile = local_14;
      BVar4 = FindNextFileA(local_14,&local_21c);
    } while (BVar4 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar8 = 0xffffffff;
  pcVar14 = &CHAR_00h_00807ddd;
  do {
    pcVar6 = pcVar14;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar6 = pcVar14 + 1;
    cVar1 = *pcVar14;
    pcVar14 = pcVar6;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pbVar17 = (byte *)(pcVar6 + -uVar8);
  pbVar18 = local_dc;
  for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar18 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar18 = pbVar18 + 4;
  }
  uVar11 = this_01->field_1AF1[0];
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar18 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar18 = pbVar18 + 1;
  }
  this_01->field_002D = 0x28;
  this_01->field_0031 = this_01->field_1CCC->elementSize;
  FUN_006e6080(this_01,2,uVar11,(undefined4 *)&this_01->field_0x1d);
  pDVar12 = this_01->field_1CCC;
  dVar5 = pDVar12->elementSize;
  if ((int)dVar5 < 1) {
    this_01->field_002D = 0x22;
    this_01->field_0031 = 0;
    FUN_006e6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
    uVar8 = this_01->field_1AF1[0];
    this_01->field_002D = 5;
  }
  else {
    if (1 < (int)dVar5) {
      do {
        local_8 = 0;
        uVar8 = 0;
        if (0 < (int)(dVar5 - 1)) {
          do {
            uVar11 = uVar8 + 1;
            if ((int)uVar11 < (int)dVar5) {
              pcVar14 = *(char **)(pDVar12->growCapacity + 4 + uVar8 * 4);
            }
            else {
              pcVar14 = nullptr;
            }
            if ((int)uVar8 < (int)dVar5) {
              pcVar6 = *(char **)(pDVar12->growCapacity + uVar8 * 4);
            }
            else {
              pcVar6 = nullptr;
            }
            local_EAX_880 = Library::MSVCRT::__strcmpi(pcVar6,pcVar14);
            if (0 < local_EAX_880) {
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_01->field_1CCC,uVar8,uVar11);
              local_8 = 1;
            }
            pDVar12 = this_01->field_1CCC;
            dVar5 = pDVar12->elementSize;
            uVar8 = uVar11;
          } while ((int)uVar11 < (int)(dVar5 - 1));
        }
      } while (local_8 != 0);
    }
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    FUN_006e6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
    iVar13 = 0;
    local_8 = this_01->field_1CCC->elementSize;
    iVar10 = local_10;
    if (0 < (int)local_8) {
      if ((int)local_8 < 1) {
        pbVar17 = nullptr;
        goto LAB_005d8fe2;
      }
      do {
        pbVar17 = *(byte **)(this_01->field_1CCC->growCapacity + iVar13 * 4);
LAB_005d8fe2:
        pbVar18 = local_dc;
        do {
          bVar2 = *pbVar17;
          bVar19 = bVar2 < *pbVar18;
          if (bVar2 != *pbVar18) {
LAB_005d900c:
            iVar7 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar17[1];
          bVar19 = bVar2 < pbVar18[1];
          if (bVar2 != pbVar18[1]) goto LAB_005d900c;
          pbVar17 = pbVar17 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_005d9011:
        iVar10 = iVar13;
      } while ((iVar7 != 0) && (iVar13 = iVar13 + 1, iVar10 = local_10, iVar13 < (int)local_8));
    }
    local_10 = iVar10;
    uVar8 = this_01->field_1AF1[0];
    this_01->field_002D = 0x22;
    this_01->field_0031 = local_10;
  }
  FUN_006e6080(this_01,2,uVar8,(undefined4 *)&this_01->field_0x1d);
  uVar8 = this_01->field_1AF1[1];
  this_01->field_002D = 0x29;
  this_01->field_0031 = 9;
  FUN_006e6080(this_01,2,uVar8,(undefined4 *)&this_01->field_0x1d);
  FUN_006b35d0((int *)g_ddxContext_008075A8,this_01->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

