#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PrepFiles

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall ChooseMapTy::PrepFiles(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  StartSystemTy *pSVar3;
  AnonShape_006B5B10_E0D06CF1 *pAVar4;
  code *pcVar5;
  int iVar6;
  DArrayTy *pDVar7;
  cMf32 *pcVar8;
  ushort *puVar9;
  BOOL BVar10;
  LONG LVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  ChooseMapTy *this_00;
  uint *puVar16;
  char *pcVar17;
  CHAR *pCVar18;
  uint uVar19;
  byte *pbVar20;
  CHAR *pCVar21;
  char *pcVar22;
  byte *pbVar24;
  bool bVar25;
  undefined4 uVar26;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  InternalExceptionFrame local_12c;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  FILETIME local_44;
  FILETIME local_3c;
  int local_34;
  int local_30;
  int local_2c;
  ChooseMapTy *local_28;
  int local_24;
  char *local_20;
  int local_1c;
  HANDLE local_18;
  int *local_14;
  uint local_10;
  int local_c;
  bool local_5;

  local_2c = 0;
  local_c = 0;
  local_30 = 0;
  switch(this->field_1A5F) {
  case CASE_1:
  case CASE_4:
switchD_005afd30_caseD_1:
    local_30 = -0x70fffbfb;
  case CASE_2:
  case CASE_5:
switchD_005afd30_caseD_2:
    local_c = -0x70fffdfb;
    break;
  case CASE_9:
    local_c = -0x77fffeea;
    break;
  case CASE_A:
    local_c = -0x77fffdea;
    break;
  case CASE_B:
    local_c = -0x77fffbea;
    break;
  case CASE_C:
switchD_005afd30_caseD_c:
    local_c = -0x77fffaea;
    break;
  case CASE_13:
    switch(DAT_00803400) {
    case '\x04':
      goto switchD_005afd30_caseD_1;
    case '\x05':
      goto switchD_005afd30_caseD_2;
    case '\f':
      goto switchD_005afd30_caseD_c;
    case '\x14':
    case '\x15':
      local_c = -0x70fff7fb;
    }
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_28 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_00 = local_28;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x4f5,0,iVar6,
                                "%s","ChooseMapTy::PrepFiles");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\load_obj.cpp",0x4f5);
    return;
  }
  if (local_28->field_1C97 != (DArrayTy *)0x0) {
    FUN_006b5570(local_28->field_1C97);
    this_00->field_1C97 = (DArrayTy *)0x0;
  }
  if (this_00->field_1C9B != (DArrayTy *)0x0) {
    DArrayDestroy(this_00->field_1C9B);
    this_00->field_1C9B = (DArrayTy *)0x0;
  }
  if (this_00->field_1C9F != (DArrayTy *)0x0) {
    FUN_006b5570(this_00->field_1C9F);
    this_00->field_1C9F = (DArrayTy *)0x0;
  }
  pDVar7 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,0x32,10);
  this_00->field_1C97 = pDVar7;
  pDVar7 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x32,8,10);
  this_00->field_1C9B = pDVar7;
  pDVar7 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  this_00->field_1C9F = pDVar7;
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 0;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  pSVar3 = this_00->field_1A5B;
  if (pSVar3->field_02E6 != (MMsgTy *)0x0) {
    memset(&local_60, 0, 0x1a); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_60._2_2_ = 0xffff;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(pSVar3->field_02E6,(int)&local_60);
  }
  pAVar4 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_1C7B;
  FUN_006b4170(pAVar4,0,0,0,pAVar4->field_0004,pAVar4->field_0008,0);
  uVar19 = 0x3f;
  puVar16 = this_00->field_1C23;
  do {
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0x114,uVar19);
    uVar19 = uVar19 + 0x13;
    puVar16 = puVar16 + 1;
  } while ((int)uVar19 < 0x1e1);
  uVar19 = 0xffffffff;
  pcVar17 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar17;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  pcVar17 = pcVar12 + -uVar19;
  pcVar12 = &this_00->field_1FAF;
  for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar19 = 0xffffffff;
  pcVar17 = &DAT_007cc8bc;
  do {
    pcVar12 = pcVar17;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar22 = pcVar17;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar22;
  } while (cVar1 != '\0');
  pcVar17 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  CVar2 = this_00->field_1A5F;
  if ((CVar2 != CASE_0) && ((CVar2 < CASE_6 || ((CVar2 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar20 = &this_00->field_1CA3;
  pcVar17 = &this_00->field_1DA7;
  do {
    bVar14 = *pcVar17;
    bVar25 = bVar14 < *pbVar20;
    if (bVar14 != *pbVar20) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
      goto LAB_005aff87;
    }
    if (bVar14 == 0) break;
    bVar14 = pcVar17[1];
    bVar25 = bVar14 < pbVar20[1];
    if (bVar14 != pbVar20[1]) goto LAB_005aff82;
    pcVar17 = pcVar17 + 2;
    pbVar20 = pbVar20 + 2;
  } while (bVar14 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar20 = &DAT_007cc8b8;
          pCVar18 = local_26c.cFileName;
          do {
            bVar14 = *pCVar18;
            bVar25 = bVar14 < *pbVar20;
            if (bVar14 != *pbVar20) {
LAB_005afffc:
              iVar6 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
              goto LAB_005b0001;
            }
            if (bVar14 == 0) break;
            bVar14 = pCVar18[1];
            bVar25 = bVar14 < pbVar20[1];
            if (bVar14 != pbVar20[1]) goto LAB_005afffc;
            pCVar18 = pCVar18 + 2;
            pbVar20 = pbVar20 + 2;
          } while (bVar14 != 0);
          iVar6 = 0;
LAB_005b0001:
          if (iVar6 != 0) {
            pbVar20 = &DAT_007cc8b4;
            pCVar18 = local_26c.cFileName;
            do {
              bVar14 = *pCVar18;
              bVar25 = bVar14 < *pbVar20;
              if (bVar14 != *pbVar20) {
LAB_005b003c:
                iVar6 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005b0041;
              }
              if (bVar14 == 0) break;
              bVar14 = pCVar18[1];
              bVar25 = bVar14 < pbVar20[1];
              if (bVar14 != pbVar20[1]) goto LAB_005b003c;
              pCVar18 = pCVar18 + 2;
              pbVar20 = pbVar20 + 2;
            } while (bVar14 != 0);
            iVar6 = 0;
LAB_005b0041:
            if ((iVar6 != 0) || (local_34 != 0)) {
              if (this_00->field_1A5F == CASE_3) {
                uVar19 = 0xffffffff;
                local_20 = &this_00->field_1FAF;
                pcVar17 = &this_00->field_1DA7;
                do {
                  pcVar12 = pcVar17;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar12 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar12;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                pcVar17 = pcVar12 + -uVar19;
                pcVar12 = local_20;
                for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
                  pcVar17 = pcVar17 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar17 = local_20;
                uVar19 = 0xffffffff;
                pCVar18 = local_26c.cFileName;
                do {
                  pCVar21 = pCVar18;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pCVar21 = pCVar18 + 1;
                  cVar1 = *pCVar18;
                  pCVar18 = pCVar21;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                iVar6 = -1;
                pcVar12 = local_20;
                do {
                  pcVar22 = pcVar12;
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  pcVar22 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar22;
                } while (cVar1 != '\0');
                pCVar18 = pCVar21 + -uVar19;
                pcVar12 = pcVar22 + -1;
                for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pCVar18;
                  pCVar18 = pCVar18 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pCVar18;
                  pCVar18 = pCVar18 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar19 = 0xffffffff;
                pcVar12 = PTR_s_ADDON_0079c060;
                do {
                  pcVar22 = pcVar12;
                  if (uVar19 == 0) break;
                  uVar19 = uVar19 - 1;
                  pcVar22 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar22;
                } while (cVar1 != '\0');
                uVar19 = ~uVar19;
                local_10 = 1;
                iVar6 = -1;
                do {
                  pcVar12 = pcVar17;
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  pcVar12 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar12;
                } while (cVar1 != '\0');
                pcVar17 = pcVar22 + -uVar19;
                pcVar12 = pcVar12 + -1;
                for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
                  pcVar17 = pcVar17 + 4;
                  pcVar12 = pcVar12 + 4;
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *pcVar12 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  pcVar12 = pcVar12 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar6 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
                this_00 = local_28;
                if (iVar6 == 0) {
                  pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                              (0x345,&local_28->field_1FAF,0,0,0);
                  if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
                    FUN_006b5570(g_dArray_0080C4CB);
                  }
                  g_dArray_0080C4CB =
                       (DArrayTy *)
                       Library::Ourlib::MFSARR::mfSarLoad(pcVar8,PTR_s_OBJECTIVES_0079c074,0);
                  if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
                    g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
                  }
                  memset(&DAT_0080ed16, 0, 0x104); /* compiler bulk-zero initialization */
                  local_14 = (int *)&DAT_0080ed16;
                  puVar9 = cMf32::RecGet(pcVar8,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar9 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  cMf32::delete(pcVar8);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              Library::DKW::TBL::FUN_006b5aa0(&this_00->field_1C9F->flags,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar10 = FindNextFileA(local_18,&local_26c);
      } while (BVar10 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar19 = 0xffffffff;
  pcVar17 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar17;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  pcVar17 = pcVar12 + -uVar19;
  pcVar12 = &this_00->field_1FAF;
  for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if ((8 < this_00->field_1A5F) && (this_00->field_1A5F < CASE_D)) {
    uVar19 = 0xffffffff;
    pcVar17 = PTR_DAT_0079c06c;
    do {
      pcVar12 = pcVar17;
      if (uVar19 == 0) break;
      uVar19 = uVar19 - 1;
      pcVar12 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar12;
    } while (cVar1 != '\0');
    uVar19 = ~uVar19;
    iVar6 = -1;
    pcVar17 = &this_00->field_1FAF;
    do {
      pcVar22 = pcVar17;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar22 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar22;
    } while (cVar1 != '\0');
    pcVar17 = pcVar12 + -uVar19;
    pcVar12 = pcVar22 + -1;
    for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
      *pcVar12 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar12 = pcVar12 + 1;
    }
  }
  uVar19 = 0xffffffff;
  pcVar17 = &DAT_007c72d8;
  do {
    pcVar12 = pcVar17;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar22 = pcVar17;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar22;
  } while (cVar1 != '\0');
  pcVar17 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar19 = 0xffffffff;
  pcVar17 = PTR_DAT_0079c058;
  do {
    pcVar12 = pcVar17;
    if (uVar19 == 0) break;
    uVar19 = uVar19 - 1;
    pcVar12 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar12;
  } while (cVar1 != '\0');
  uVar19 = ~uVar19;
  iVar6 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar22 = pcVar17;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar22 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar22;
  } while (cVar1 != '\0');
  pcVar17 = pcVar12 + -uVar19;
  pcVar12 = pcVar22 + -1;
  for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    *pcVar12 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (this_00->field_1A5F == CASE_3) {
    bVar25 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    bVar25 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar25) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        local_24 = 0;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)local_26c.cFileName,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0);
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar6 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0);
        this_00 = local_28;
        if (iVar6 == 0) {
          uVar19 = 0xffffffff;
          pcVar17 = &local_28->field_1DA7;
          do {
            pcVar12 = pcVar17;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pcVar12 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar12;
          } while (cVar1 != '\0');
          uVar19 = ~uVar19;
          pcVar17 = pcVar12 + -uVar19;
          pcVar12 = &local_28->field_1FAF;
          for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pcVar12 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar12 = pcVar12 + 1;
          }
          uVar19 = 0xffffffff;
          pbVar20 = local_370;
          do {
            pbVar24 = pbVar20;
            if (uVar19 == 0) break;
            uVar19 = uVar19 - 1;
            pbVar24 = pbVar20 + 1;
            bVar14 = *pbVar20;
            pbVar20 = pbVar24;
          } while (bVar14 != 0);
          uVar19 = ~uVar19;
          iVar6 = -1;
          pcVar17 = &local_28->field_1FAF;
          do {
            pcVar12 = pcVar17;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar12 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar12;
          } while (cVar1 != '\0');
          pbVar20 = pbVar24 + -uVar19;
          pbVar24 = (byte *)(pcVar12 + -1);
          for (uVar15 = uVar19 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pbVar24 = *(undefined4 *)pbVar20;
            pbVar20 = pbVar20 + 4;
            pbVar24 = pbVar24 + 4;
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *pbVar24 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            pbVar24 = pbVar24 + 1;
          }
          pcVar8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,&local_28->field_1FAF,0,0,0);
          bVar25 = false;
          switch(this_00->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar25 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar25 = true;
            break;
          case CASE_13:
            bVar25 = DAT_00803400 == '\f';
          }
          if (bVar25) {
            local_14 = &local_24;
            puVar9 = cMf32::RecGet(pcVar8,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            if ((puVar9 != (ushort *)0x0) && (local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_00->field_1C9B->flags,&local_26c.ftLastWriteTime.dwLowDateTime);
              uVar19 = 0xffffffff;
              pcVar17 = PTR_DAT_0079c06c;
              do {
                if (uVar19 == 0) break;
                uVar19 = uVar19 - 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar1 != '\0');
              pbVar20 = (byte *)FUN_006b8240((char *)local_370,~uVar19 - 1);
LAB_005b051b:
              pDVar7 = this_00->field_1C97;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(&pDVar7->flags,(char *)pbVar20);
            }
          }
          else {
            local_14 = &DAT_008087b6;
            puVar9 = cMf32::RecGet(pcVar8,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            if (((puVar9 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar2 = this_00->field_1A5F, CVar2 == CASE_1 || (CVar2 == CASE_13)) ||
                  (CVar2 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_00->field_1A5F != CASE_2) {
                pbVar20 = local_370;
                goto LAB_005b051b;
              }
              bVar14 = 0;
              pcVar17 = (char *)((int)&DAT_008087c4 + 3);
              iVar6 = 8;
              do {
                if (((byte)pcVar17[0x22] < 8) && (*pcVar17 == '\0')) {
                  bVar14 = bVar14 + 1;
                }
                pcVar17 = pcVar17 + 0x51;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              if (bVar14 < 2) {
                pDVar7 = this_00->field_1C97;
                pbVar20 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar8);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar10 = FindNextFileA(local_18,&local_26c);
    } while (BVar10 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar19 = this_00->field_1C9F->elementSize;
  if ((int)(this_00->field_1C97->elementSize + uVar19) < 1) {
    this_00->field_002D = 0x22;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    uVar26 = this_00->field_1A6C;
    this_00->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar19) {
    local_10 = uVar19 - 1;
    do {
      local_1c = 0;
      uVar19 = 0;
      if (local_10 != 0) {
        do {
          pDVar7 = this_00->field_1C9F;
          uVar15 = uVar19 + 1;
          if ((int)uVar15 < (int)pDVar7->elementSize) {
            pcVar17 = *(char **)(pDVar7->growCapacity + 4 + uVar19 * 4);
          }
          else {
            pcVar17 = (char *)0x0;
          }
          if ((int)uVar19 < (int)pDVar7->elementSize) {
            pcVar12 = *(char **)(pDVar7->growCapacity + uVar19 * 4);
          }
          else {
            pcVar12 = (char *)0x0;
          }
          iVar6 = Library::MSVCRT::__strcmpi(pcVar12,pcVar17);
          if (0 < iVar6) {
            FUN_006b8200((AnonShape_006B8200_800652FF *)this_00->field_1C9F,uVar19,uVar15);
            local_1c = 1;
          }
          uVar19 = uVar15;
        } while (uVar15 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar19 = this_00->field_1C97->elementSize;
  if (1 < uVar19) {
    CVar2 = this_00->field_1A5F;
    if (CVar2 < CASE_9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (CVar2 < CASE_D) {
      local_5 = true;
    }
    else {
      if (CVar2 != CASE_13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar19 - 1;
    do {
      uVar19 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pDVar7 = this_00->field_1C97;
            if ((int)(uVar19 + 1) < (int)pDVar7->elementSize) {
              pcVar17 = *(char **)(pDVar7->growCapacity + 4 + uVar19 * 4);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((int)uVar19 < (int)pDVar7->elementSize) {
              pcVar12 = *(char **)(pDVar7->growCapacity + uVar19 * 4);
            }
            else {
              pcVar12 = (char *)0x0;
            }
            iVar6 = Library::MSVCRT::__strcmpi(pcVar12,pcVar17);
            if (0 < iVar6) {
              pDVar7 = this_00->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            DArrayGetElement(this_00->field_1C9B,uVar19,&local_3c);
            DArrayGetElement(this_00->field_1C9B,uVar19 + 1,&local_44);
            LVar11 = CompareFileTime(&local_3c,&local_44);
            if (LVar11 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_1C9B,uVar19,uVar19 + 1);
              pDVar7 = this_00->field_1C97;
LAB_005b06e8:
              FUN_006b8200((AnonShape_006B8200_800652FF *)pDVar7,uVar19,uVar19 + 1);
              local_1c = 1;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar19 = this_00->field_1C9F->elementSize + this_00->field_1C97->elementSize;
  this_00->field_002D = 0x28;
  *(uint *)&this_00->field_0x31 = uVar19;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 1;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x22;
  if (uVar19 <= param_1) {
    param_1 = uVar19 - 1;
  }
  *(uint *)&this_00->field_0x31 = param_1;
  uVar26 = this_00->field_1A6C;
LAB_005b07ac:
  FUN_006e6080(this_00,2,uVar26,(undefined4 *)&this_00->field_0x1d);
  this_00->field_1A64 = 1;
  this_00->field_1A68 = this_00->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

