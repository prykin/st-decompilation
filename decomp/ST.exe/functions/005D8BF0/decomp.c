#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles */

void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  AnonPointee_SIDTy_1CCC *pAVar5;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  int iVar11;
  char *pcVar12;
  SIDTy *this_02;
  CHAR *pCVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  bool bVar17;
  undefined4 uVar18;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  int local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_02 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167,0,iVar4,&DAT_007a4ccc
                                ,s_SIDTy__PrepFiles_007cd694);
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((AnonShape_006B5570_4D68B99C *)local_c->field_1CCC != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_c->field_1CCC);
    this_02->field_1CCC = (AnonPointee_SIDTy_1CCC *)0x0;
  }
  pAVar5 = (AnonPointee_SIDTy_1CCC *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_02->field_1CCC = pAVar5;
  this_02->field_002D = 0x20;
  this_02->field_0031 = 0;
  FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
  this_02->field_002D = 0x29;
  this_02->field_0031 = 0x19;
  FUN_006e6080(this_02,2,this_02->field_1AF5,(undefined4 *)&this_02->field_0x1d);
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1CB8,0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0(DAT_008075a8,this_02->field_1CB4);
  wsprintfA(&this_02->field_1CD4,&DAT_007c6ee4,&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_007cc8bc;
  do {
    pcVar7 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar7 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar7;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar4 = -1;
  pcVar12 = &this_02->field_1CD4;
  do {
    pcVar14 = pcVar12;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar7 + -uVar9;
  pcVar7 = pcVar14 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar7 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar7 = pcVar7 + 1;
  }
  hFindFile = FindFirstFileA(&this_02->field_1CD4,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar15 = &DAT_007cc8b8;
        pCVar13 = local_21c.cFileName;
        do {
          bVar2 = *pCVar13;
          bVar17 = bVar2 < *pbVar15;
          if (bVar2 != *pbVar15) {
LAB_005d8d7a:
            iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar13[1];
          bVar17 = bVar2 < pbVar15[1];
          if (bVar2 != pbVar15[1]) goto LAB_005d8d7a;
          pCVar13 = pCVar13 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005d8d7f:
        if (iVar4 != 0) {
          pbVar15 = &DAT_007cc8b4;
          pCVar13 = local_21c.cFileName;
          do {
            bVar2 = *pCVar13;
            bVar17 = bVar2 < *pbVar15;
            if (bVar2 != *pbVar15) {
LAB_005d8dba:
              iVar4 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar13[1];
            bVar17 = bVar2 < pbVar15[1];
            if (bVar2 != pbVar15[1]) goto LAB_005d8dba;
            pCVar13 = pCVar13 + 2;
            pbVar15 = pbVar15 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005d8dbf:
          if (iVar4 != 0) {
            uVar9 = 0xffffffff;
            pCVar13 = local_21c.cFileName;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar1 = *pCVar13;
              pCVar13 = pCVar13 + 1;
            } while (cVar1 != '\0');
            if (~uVar9 - 1 < 0x40) {
              wsprintfA(&this_02->field_1CD4,s__s_s_s__s_007ca1ec,&DAT_00807680,
                        PTR_s_SAVEGAME__0079c19c,local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;
              iVar4 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
              this_02 = local_c;
              if (iVar4 == 0) {
                this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                             (0x345,&local_c->field_1CD4,0,0,0);
                if (this_00 != (cMf32 *)0x0) {
                  iVar4 = cMf32::RecChk(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  this_01 = extraout_ECX;
                  if (iVar4 == 0) {
                    Library::DKW::TBL::FUN_006b5aa0((uint *)this_02->field_1CCC,local_21c.cFileName)
                    ;
                    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                    this_01 = extraout_ECX_00;
                  }
                  cMf32::delete(this_01,this_00);
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
      BVar6 = FindNextFileA(local_14,&local_21c);
    } while (BVar6 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar9 = 0xffffffff;
  pcVar12 = (char *)&DAT_00807ddd;
  do {
    pcVar7 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar7 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar7;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pbVar15 = (byte *)(pcVar7 + -uVar9);
  pbVar16 = local_dc;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pbVar16 = *(undefined4 *)pbVar15;
    pbVar15 = pbVar15 + 4;
    pbVar16 = pbVar16 + 4;
  }
  uVar18 = this_02->field_1AF1;
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pbVar16 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    pbVar16 = pbVar16 + 1;
  }
  this_02->field_002D = 0x28;
  this_02->field_0031 = this_02->field_1CCC->field_0008;
  FUN_006e6080(this_02,2,uVar18,(undefined4 *)&this_02->field_0x1d);
  pAVar5 = this_02->field_1CCC;
  iVar4 = pAVar5->field_0008;
  if (iVar4 < 1) {
    this_02->field_002D = 0x22;
    this_02->field_0031 = 0;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    uVar18 = this_02->field_1AF1;
    this_02->field_002D = 5;
  }
  else {
    if (1 < iVar4) {
      do {
        local_8 = 0;
        uVar9 = 0;
        if (0 < iVar4 + -1) {
          do {
            uVar10 = uVar9 + 1;
            if ((int)uVar10 < iVar4) {
              pcVar12 = *(char **)(pAVar5->field_0014 + 4 + uVar9 * 4);
            }
            else {
              pcVar12 = (char *)0x0;
            }
            if ((int)uVar9 < iVar4) {
              pcVar7 = *(char **)(pAVar5->field_0014 + uVar9 * 4);
            }
            else {
              pcVar7 = (char *)0x0;
            }
            iVar4 = Library::MSVCRT::__strcmpi(pcVar7,pcVar12);
            if (0 < iVar4) {
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_02->field_1CCC,uVar9,uVar10);
              local_8 = 1;
            }
            pAVar5 = this_02->field_1CCC;
            iVar4 = pAVar5->field_0008;
            uVar9 = uVar10;
          } while ((int)uVar10 < iVar4 + -1);
        }
      } while (local_8 != 0);
    }
    this_02->field_002D = 0x20;
    this_02->field_0031 = 1;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    iVar11 = 0;
    local_8 = this_02->field_1CCC->field_0008;
    iVar4 = local_10;
    if (0 < local_8) {
      if (local_8 < 1) {
        pbVar15 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar15 = *(byte **)(this_02->field_1CCC->field_0014 + iVar11 * 4);
LAB_005d8fe2:
        pbVar16 = local_dc;
        do {
          bVar2 = *pbVar15;
          bVar17 = bVar2 < *pbVar16;
          if (bVar2 != *pbVar16) {
LAB_005d900c:
            iVar8 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar15[1];
          bVar17 = bVar2 < pbVar16[1];
          if (bVar2 != pbVar16[1]) goto LAB_005d900c;
          pbVar15 = pbVar15 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar2 != 0);
        iVar8 = 0;
LAB_005d9011:
        iVar4 = iVar11;
      } while ((iVar8 != 0) && (iVar11 = iVar11 + 1, iVar4 = local_10, iVar11 < local_8));
    }
    local_10 = iVar4;
    uVar18 = this_02->field_1AF1;
    this_02->field_002D = 0x22;
    this_02->field_0031 = local_10;
  }
  FUN_006e6080(this_02,2,uVar18,(undefined4 *)&this_02->field_0x1d);
  this_02->field_002D = 0x29;
  this_02->field_0031 = 9;
  FUN_006e6080(this_02,2,this_02->field_1AF5,(undefined4 *)&this_02->field_0x1d);
  FUN_006b35d0(DAT_008075a8,this_02->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

