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
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar6;
  dword dVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  int iVar12;
  char *pcVar13;
  SIDTy *this_02;
  CHAR *pCVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  undefined4 uVar19;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_02 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x167,0,iVar4,"%s"
                                ,"SIDTy::PrepFiles");
    if (iVar12 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_1CCC != (DArrayTy *)0x0) {
    FUN_006b5570(local_c->field_1CCC);
    this_02->field_1CCC = (DArrayTy *)0x0;
  }
  pDVar5 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  this_02->field_1CCC = pDVar5;
  this_02->field_002D = 0x20;
  this_02->field_0031 = 0;
  FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
  this_02->field_002D = 0x29;
  this_02->field_0031 = 0x19;
  FUN_006e6080(this_02,2,this_02->field_1AF5,(undefined4 *)&this_02->field_0x1d);
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_02->field_1CB8,0,3,0x15,0x142,0x62,0xff);
  FUN_006b35d0((int *)PTR_008075a8,this_02->field_1CB4);
  wsprintfA(&this_02->field_1CD4,"%s%s",&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar10 = 0xffffffff;
  pcVar13 = &DAT_007cc8bc;
  do {
    pcVar8 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar4 = -1;
  pcVar13 = &this_02->field_1CD4;
  do {
    pcVar15 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar8 + -uVar10;
  pcVar8 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar8 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar8 = pcVar8 + 1;
  }
  hFindFile = FindFirstFileA(&this_02->field_1CD4,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar16 = &DAT_007cc8b8;
        pCVar14 = local_21c.cFileName;
        do {
          bVar2 = *pCVar14;
          bVar18 = bVar2 < *pbVar16;
          if (bVar2 != *pbVar16) {
LAB_005d8d7a:
            iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar14[1];
          bVar18 = bVar2 < pbVar16[1];
          if (bVar2 != pbVar16[1]) goto LAB_005d8d7a;
          pCVar14 = pCVar14 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005d8d7f:
        if (iVar4 != 0) {
          pbVar16 = &DAT_007cc8b4;
          pCVar14 = local_21c.cFileName;
          do {
            bVar2 = *pCVar14;
            bVar18 = bVar2 < *pbVar16;
            if (bVar2 != *pbVar16) {
LAB_005d8dba:
              iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar14[1];
            bVar18 = bVar2 < pbVar16[1];
            if (bVar2 != pbVar16[1]) goto LAB_005d8dba;
            pCVar14 = pCVar14 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005d8dbf:
          if (iVar4 != 0) {
            uVar10 = 0xffffffff;
            pCVar14 = local_21c.cFileName;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar1 = *pCVar14;
              pCVar14 = pCVar14 + 1;
            } while (cVar1 != '\0');
            if (~uVar10 - 1 < 0x40) {
              wsprintfA(&this_02->field_1CD4,"%s%s%s\\%s",&DAT_00807680,
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
                    Library::DKW::TBL::FUN_006b5aa0(&this_02->field_1CCC->flags,local_21c.cFileName)
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
  uVar10 = 0xffffffff;
  pcVar13 = (char *)&DAT_00807ddd;
  do {
    pcVar8 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pbVar16 = (byte *)(pcVar8 + -uVar10);
  pbVar17 = local_dc;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar16;
    pbVar16 = pbVar16 + 4;
    pbVar17 = pbVar17 + 4;
  }
  uVar19 = this_02->field_1AF1;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar17 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    pbVar17 = pbVar17 + 1;
  }
  this_02->field_002D = 0x28;
  this_02->field_0031 = this_02->field_1CCC->elementSize;
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  pDVar5 = this_02->field_1CCC;
  dVar7 = pDVar5->elementSize;
  if ((int)dVar7 < 1) {
    this_02->field_002D = 0x22;
    this_02->field_0031 = 0;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    uVar19 = this_02->field_1AF1;
    this_02->field_002D = 5;
  }
  else {
    if (1 < (int)dVar7) {
      do {
        local_8 = 0;
        uVar10 = 0;
        if (0 < (int)(dVar7 - 1)) {
          do {
            uVar11 = uVar10 + 1;
            if ((int)uVar11 < (int)dVar7) {
              pcVar13 = *(char **)(pDVar5->growCapacity + 4 + uVar10 * 4);
            }
            else {
              pcVar13 = (char *)0x0;
            }
            if ((int)uVar10 < (int)dVar7) {
              pcVar8 = *(char **)(pDVar5->growCapacity + uVar10 * 4);
            }
            else {
              pcVar8 = (char *)0x0;
            }
            iVar4 = Library::MSVCRT::__strcmpi(pcVar8,pcVar13);
            if (0 < iVar4) {
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_02->field_1CCC,uVar10,uVar11);
              local_8 = 1;
            }
            pDVar5 = this_02->field_1CCC;
            dVar7 = pDVar5->elementSize;
            uVar10 = uVar11;
          } while ((int)uVar11 < (int)(dVar7 - 1));
        }
      } while (local_8 != 0);
    }
    this_02->field_002D = 0x20;
    this_02->field_0031 = 1;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    iVar12 = 0;
    local_8 = this_02->field_1CCC->elementSize;
    iVar4 = local_10;
    if (0 < (int)local_8) {
      if ((int)local_8 < 1) {
        pbVar16 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar16 = *(byte **)(this_02->field_1CCC->growCapacity + iVar12 * 4);
LAB_005d8fe2:
        pbVar17 = local_dc;
        do {
          bVar2 = *pbVar16;
          bVar18 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_005d900c:
            iVar9 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar16[1];
          bVar18 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_005d900c;
          pbVar16 = pbVar16 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_005d9011:
        iVar4 = iVar12;
      } while ((iVar9 != 0) && (iVar12 = iVar12 + 1, iVar4 = local_10, iVar12 < (int)local_8));
    }
    local_10 = iVar4;
    uVar19 = this_02->field_1AF1;
    this_02->field_002D = 0x22;
    this_02->field_0031 = local_10;
  }
  FUN_006e6080(this_02,2,uVar19,(undefined4 *)&this_02->field_0x1d);
  this_02->field_002D = 0x29;
  this_02->field_0031 = 9;
  FUN_006e6080(this_02,2,this_02->field_1AF5,(undefined4 *)&this_02->field_0x1d);
  FUN_006b35d0((int *)PTR_008075a8,this_02->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

