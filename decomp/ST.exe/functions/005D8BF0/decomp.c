#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles */

void __thiscall SIDTy::PrepFiles(SIDTy *this)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  DArrayTy *pDVar6;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  cMf32 *this_01;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  SIDTy *this_02;
  CHAR *pCVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  undefined4 uVar20;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  uint local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_02 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x167,0,iVar5,"%s"
                                ,"SIDTy::PrepFiles");
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\sid_obj.cpp",0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((AnonShape_006B5570_4D68B99C *)local_c->field_1CCC != (AnonShape_006B5570_4D68B99C *)0x0) {
    FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_c->field_1CCC);
    this_02->field_1CCC = (uint *)0x0;
  }
  pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  this_02->field_1CCC = &pDVar6->flags;
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
  pcVar14 = &DAT_007cc8bc;
  do {
    pcVar8 = pcVar14;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar14 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar5 = -1;
  pcVar14 = &this_02->field_1CD4;
  do {
    pcVar16 = pcVar14;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar16 = pcVar14 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar16;
  } while (cVar2 != '\0');
  pcVar14 = pcVar8 + -uVar10;
  pcVar8 = pcVar16 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar8 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar8 = pcVar8 + 1;
  }
  hFindFile = FindFirstFileA(&this_02->field_1CD4,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar17 = &DAT_007cc8b8;
        pCVar15 = local_21c.cFileName;
        do {
          bVar3 = *pCVar15;
          bVar19 = bVar3 < *pbVar17;
          if (bVar3 != *pbVar17) {
LAB_005d8d7a:
            iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar3 == 0) break;
          bVar3 = pCVar15[1];
          bVar19 = bVar3 < pbVar17[1];
          if (bVar3 != pbVar17[1]) goto LAB_005d8d7a;
          pCVar15 = pCVar15 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_005d8d7f:
        if (iVar5 != 0) {
          pbVar17 = &DAT_007cc8b4;
          pCVar15 = local_21c.cFileName;
          do {
            bVar3 = *pCVar15;
            bVar19 = bVar3 < *pbVar17;
            if (bVar3 != *pbVar17) {
LAB_005d8dba:
              iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar15[1];
            bVar19 = bVar3 < pbVar17[1];
            if (bVar3 != pbVar17[1]) goto LAB_005d8dba;
            pCVar15 = pCVar15 + 2;
            pbVar17 = pbVar17 + 2;
          } while (bVar3 != 0);
          iVar5 = 0;
LAB_005d8dbf:
          if (iVar5 != 0) {
            uVar10 = 0xffffffff;
            pCVar15 = local_21c.cFileName;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar2 = *pCVar15;
              pCVar15 = pCVar15 + 1;
            } while (cVar2 != '\0');
            if (~uVar10 - 1 < 0x40) {
              wsprintfA(&this_02->field_1CD4,"%s%s%s\\%s",&DAT_00807680,
                        PTR_s_SAVEGAME__0079c19c,local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;
              iVar5 = Library::MSVCRT::__setjmp3(local_9c.jumpBuffer,0);
              this_02 = local_c;
              if (iVar5 == 0) {
                this_00 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                             (0x345,&local_c->field_1CD4,0,0,0);
                if (this_00 != (cMf32 *)0x0) {
                  iVar5 = cMf32::RecChk(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  this_01 = extraout_ECX;
                  if (iVar5 == 0) {
                    Library::DKW::TBL::FUN_006b5aa0(this_02->field_1CCC,local_21c.cFileName);
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
      BVar7 = FindNextFileA(local_14,&local_21c);
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
  }
  uVar10 = 0xffffffff;
  pcVar14 = (char *)&DAT_00807ddd;
  do {
    pcVar8 = pcVar14;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar14 + 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar8;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pbVar17 = (byte *)(pcVar8 + -uVar10);
  pbVar18 = local_dc;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar18 = *(undefined4 *)pbVar17;
    pbVar17 = pbVar17 + 4;
    pbVar18 = pbVar18 + 4;
  }
  uVar20 = this_02->field_1AF1;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar18 = *pbVar17;
    pbVar17 = pbVar17 + 1;
    pbVar18 = pbVar18 + 1;
  }
  this_02->field_002D = 0x28;
  this_02->field_0031 = this_02->field_1CCC[2];
  FUN_006e6080(this_02,2,uVar20,(undefined4 *)&this_02->field_0x1d);
  puVar12 = this_02->field_1CCC;
  uVar10 = puVar12[2];
  if ((int)uVar10 < 1) {
    this_02->field_002D = 0x22;
    this_02->field_0031 = 0;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    uVar20 = this_02->field_1AF1;
    this_02->field_002D = 5;
  }
  else {
    if (1 < (int)uVar10) {
      do {
        local_8 = 0;
        uVar11 = 0;
        if (0 < (int)(uVar10 - 1)) {
          do {
            uVar1 = uVar11 + 1;
            if ((int)uVar1 < (int)uVar10) {
              pcVar14 = *(char **)(puVar12[5] + 4 + uVar11 * 4);
            }
            else {
              pcVar14 = (char *)0x0;
            }
            if ((int)uVar11 < (int)uVar10) {
              pcVar8 = *(char **)(puVar12[5] + uVar11 * 4);
            }
            else {
              pcVar8 = (char *)0x0;
            }
            iVar5 = Library::MSVCRT::__strcmpi(pcVar8,pcVar14);
            if (0 < iVar5) {
              FUN_006b8200((AnonShape_006B8200_800652FF *)this_02->field_1CCC,uVar11,uVar1);
              local_8 = 1;
            }
            puVar12 = this_02->field_1CCC;
            uVar10 = puVar12[2];
            uVar11 = uVar1;
          } while ((int)uVar1 < (int)(uVar10 - 1));
        }
      } while (local_8 != 0);
    }
    this_02->field_002D = 0x20;
    this_02->field_0031 = 1;
    FUN_006e6080(this_02,2,this_02->field_1AF1,(undefined4 *)&this_02->field_0x1d);
    iVar13 = 0;
    local_8 = this_02->field_1CCC[2];
    iVar5 = local_10;
    if (0 < (int)local_8) {
      if ((int)local_8 < 1) {
        pbVar17 = (byte *)0x0;
        goto LAB_005d8fe2;
      }
      do {
        pbVar17 = *(byte **)(this_02->field_1CCC[5] + iVar13 * 4);
LAB_005d8fe2:
        pbVar18 = local_dc;
        do {
          bVar3 = *pbVar17;
          bVar19 = bVar3 < *pbVar18;
          if (bVar3 != *pbVar18) {
LAB_005d900c:
            iVar9 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
            goto LAB_005d9011;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar17[1];
          bVar19 = bVar3 < pbVar18[1];
          if (bVar3 != pbVar18[1]) goto LAB_005d900c;
          pbVar17 = pbVar17 + 2;
          pbVar18 = pbVar18 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_005d9011:
        iVar5 = iVar13;
      } while ((iVar9 != 0) && (iVar13 = iVar13 + 1, iVar5 = local_10, iVar13 < (int)local_8));
    }
    local_10 = iVar5;
    uVar20 = this_02->field_1AF1;
    this_02->field_002D = 0x22;
    this_02->field_0031 = local_10;
  }
  FUN_006e6080(this_02,2,uVar20,(undefined4 *)&this_02->field_0x1d);
  this_02->field_002D = 0x29;
  this_02->field_0031 = 9;
  FUN_006e6080(this_02,2,this_02->field_1AF5,(undefined4 *)&this_02->field_0x1d);
  FUN_006b35d0((int *)PTR_008075a8,this_02->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

