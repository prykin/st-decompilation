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
    */

void __thiscall ChooseMapTy::PrepFiles(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  AnonShape_006B5B10_E0D06CF1 *pAVar5;
  code *pcVar6;
  int iVar7;
  DArrayTy *pDVar8;
  cMf32 *pcVar9;
  ushort *puVar10;
  BOOL BVar11;
  LONG LVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  cMf32 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_00;
  cMf32 *pcVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX_01;
  char *pcVar17;
  ChooseMapTy *this_01;
  uint *puVar18;
  byte *pbVar19;
  CHAR *pCVar20;
  uint uVar21;
  byte *pbVar22;
  CHAR *pCVar23;
  char *pcVar24;
  bool bVar26;
  undefined4 uVar27;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  InternalExceptionFrame local_12c;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  FILETIME local_44;
  FILETIME local_3c;
  int local_34;
  cMf32 *local_30;
  int local_2c;
  ChooseMapTy *local_28;
  cMf32 *local_24;
  char *local_20;
  int local_1c;
  HANDLE local_18;
  cMf32 **local_14;
  uint local_10;
  cMf32 *local_c;
  bool local_5;

  local_2c = 0;
  local_c = (cMf32 *)0x0;
  local_30 = (cMf32 *)0x0;
  switch(this->field_1A5F) {
  case CASE_1:
  case CASE_4:
switchD_005afd30_caseD_1:
    local_30 = (cMf32 *)0x8f000405;
  case CASE_2:
  case CASE_5:
switchD_005afd30_caseD_2:
    local_c = (cMf32 *)0x8f000205;
    break;
  case CASE_9:
    local_c = (cMf32 *)0x88000116;
    break;
  case CASE_A:
    local_c = (cMf32 *)0x88000216;
    break;
  case CASE_B:
    local_c = (cMf32 *)0x88000416;
    break;
  case CASE_C:
switchD_005afd30_caseD_c:
    local_c = (cMf32 *)0x88000516;
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
      local_c = (cMf32 *)0x8f000805;
    }
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_28 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_01 = local_28;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x4f5,0,iVar7,
                                "%s","ChooseMapTy::PrepFiles");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\load_obj.cpp",0x4f5);
    return;
  }
  if (local_28->field_1C97 != (DArrayTy *)0x0) {
    FUN_006b5570(local_28->field_1C97);
    this_01->field_1C97 = (DArrayTy *)0x0;
  }
  if (this_01->field_1C9B != (DArrayTy *)0x0) {
    DArrayDestroy(this_01->field_1C9B);
    this_01->field_1C9B = (DArrayTy *)0x0;
  }
  if (this_01->field_1C9F != (DArrayTy *)0x0) {
    FUN_006b5570(this_01->field_1C9F);
    this_01->field_1C9F = (DArrayTy *)0x0;
  }
  pDVar8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,0x32,10);
  this_01->field_1C97 = pDVar8;
  pDVar8 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x32,8,10);
  this_01->field_1C9B = pDVar8;
  pDVar8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  this_01->field_1C9F = pDVar8;
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 0;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  pSVar4 = this_01->field_1A5B;
  if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
    memset(&local_60, 0, 0x1a); /* compiler bulk-zero initialization */
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_60._2_2_ = 0xffff;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_60._0_2_ = 0xffff;
    MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_60);
  }
  pAVar5 = (AnonShape_006B5B10_E0D06CF1 *)this_01->field_1C7B;
  FUN_006b4170(pAVar5,0,0,0,pAVar5->field_0004,pAVar5->field_0008,0);
  uVar21 = 0x3f;
  puVar18 = &this_01->field_1C23;
  do {
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar18,0xffffffff,0x114,uVar21);
    uVar21 = uVar21 + 0x13;
    puVar18 = puVar18 + 1;
  } while ((int)uVar21 < 0x1e1);
  uVar21 = 0xffffffff;
  pcVar17 = &this_01->field_1DA7;
  do {
    pcVar13 = pcVar17;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar13 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar13;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar17 = pcVar13 + -uVar21;
  pcVar13 = &this_01->field_0x1faf;
  for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pcVar13 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar21 = 0xffffffff;
  pcVar17 = &DAT_007cc8bc;
  do {
    pcVar13 = pcVar17;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar13 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar13;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar7 = -1;
  pcVar17 = &this_01->field_0x1faf;
  do {
    pcVar24 = pcVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar24;
  } while (cVar1 != '\0');
  pcVar17 = pcVar13 + -uVar21;
  pcVar13 = pcVar24 + -1;
  for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pcVar13 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar13 = pcVar13 + 1;
  }
  CVar2 = this_01->field_1A5F;
  if ((CVar2 != CASE_0) && ((CVar2 < CASE_6 || ((CVar2 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar22 = &this_01->field_1CA3;
  pbVar19 = &this_01->field_1DA7;
  do {
    bVar3 = *pbVar19;
    bVar26 = bVar3 < *pbVar22;
    if (bVar3 != *pbVar22) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
      goto LAB_005aff87;
    }
    if (bVar3 == 0) break;
    bVar3 = pbVar19[1];
    bVar26 = bVar3 < pbVar22[1];
    if (bVar3 != pbVar22[1]) goto LAB_005aff82;
    pbVar19 = pbVar19 + 2;
    pbVar22 = pbVar22 + 2;
  } while (bVar3 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar22 = &DAT_007cc8b8;
          pCVar20 = local_26c.cFileName;
          do {
            bVar3 = *pCVar20;
            bVar26 = bVar3 < *pbVar22;
            if (bVar3 != *pbVar22) {
LAB_005afffc:
              iVar7 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
              goto LAB_005b0001;
            }
            if (bVar3 == 0) break;
            bVar3 = pCVar20[1];
            bVar26 = bVar3 < pbVar22[1];
            if (bVar3 != pbVar22[1]) goto LAB_005afffc;
            pCVar20 = pCVar20 + 2;
            pbVar22 = pbVar22 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_005b0001:
          if (iVar7 != 0) {
            pbVar22 = &DAT_007cc8b4;
            pCVar20 = local_26c.cFileName;
            do {
              bVar3 = *pCVar20;
              bVar26 = bVar3 < *pbVar22;
              if (bVar3 != *pbVar22) {
LAB_005b003c:
                iVar7 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005b0041;
              }
              if (bVar3 == 0) break;
              bVar3 = pCVar20[1];
              bVar26 = bVar3 < pbVar22[1];
              if (bVar3 != pbVar22[1]) goto LAB_005b003c;
              pCVar20 = pCVar20 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar3 != 0);
            iVar7 = 0;
LAB_005b0041:
            if ((iVar7 != 0) || (local_34 != 0)) {
              if (this_01->field_1A5F == CASE_3) {
                uVar21 = 0xffffffff;
                local_20 = &this_01->field_0x1faf;
                pcVar17 = &this_01->field_1DA7;
                do {
                  pcVar13 = pcVar17;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar13 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar13;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                pcVar17 = pcVar13 + -uVar21;
                pcVar13 = local_20;
                for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
                  pcVar17 = pcVar17 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pcVar13 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                FUN_006b8280(local_20,local_20);
                pcVar17 = local_20;
                uVar21 = 0xffffffff;
                pCVar20 = local_26c.cFileName;
                do {
                  pCVar23 = pCVar20;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pCVar23 = pCVar20 + 1;
                  cVar1 = *pCVar20;
                  pCVar20 = pCVar23;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                iVar7 = -1;
                pcVar13 = local_20;
                do {
                  pcVar24 = pcVar13;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar24 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar24;
                } while (cVar1 != '\0');
                pCVar20 = pCVar23 + -uVar21;
                pcVar13 = pcVar24 + -1;
                for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pCVar20;
                  pCVar20 = pCVar20 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pcVar13 = *pCVar20;
                  pCVar20 = pCVar20 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                FUN_006b8280(local_20,local_20);
                uVar21 = 0xffffffff;
                pcVar13 = PTR_s_ADDON_0079c060;
                do {
                  pcVar24 = pcVar13;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar24 = pcVar13 + 1;
                  cVar1 = *pcVar13;
                  pcVar13 = pcVar24;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                local_10 = 1;
                iVar7 = -1;
                do {
                  pcVar13 = pcVar17;
                  if (iVar7 == 0) break;
                  iVar7 = iVar7 + -1;
                  pcVar13 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar13;
                } while (cVar1 != '\0');
                pcVar17 = pcVar24 + -uVar21;
                pcVar13 = pcVar13 + -1;
                for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                  *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
                  pcVar17 = pcVar17 + 4;
                  pcVar13 = pcVar13 + 4;
                }
                for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
                  *pcVar13 = *pcVar17;
                  pcVar17 = pcVar17 + 1;
                  pcVar13 = pcVar13 + 1;
                }
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar7 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
                this_01 = local_28;
                if (iVar7 == 0) {
                  pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                              (0x345,&local_28->field_0x1faf,0,0,0);
                  if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
                    FUN_006b5570(g_dArray_0080C4CB);
                  }
                  g_dArray_0080C4CB =
                       (DArrayTy *)
                       Library::Ourlib::MFSARR::mfSarLoad(pcVar9,PTR_s_OBJECTIVES_0079c074,0);
                  if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
                    g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
                  }
                  memset(&DAT_0080ed16, 0, 0x104); /* compiler bulk-zero initialization */
                  local_14 = (cMf32 **)&DAT_0080ed16;
                  puVar10 = cMf32::RecGet(pcVar9,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar10 == (ushort *)0x0) {
                    local_10 = 0;
                  }
                  cMf32::delete(this_00,pcVar9);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              Library::DKW::TBL::FUN_006b5aa0(&this_01->field_1C9F->flags,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar11 = FindNextFileA(local_18,&local_26c);
      } while (BVar11 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar21 = 0xffffffff;
  pcVar17 = &this_01->field_1DA7;
  do {
    pcVar13 = pcVar17;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar13 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar13;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar17 = pcVar13 + -uVar21;
  pcVar13 = &this_01->field_0x1faf;
  for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pcVar13 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar13 = pcVar13 + 1;
  }
  if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < (CASE_C|CASE_1))) {
    uVar21 = 0xffffffff;
    pcVar17 = PTR_DAT_0079c06c;
    do {
      pcVar13 = pcVar17;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar13 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar13;
    } while (cVar1 != '\0');
    uVar21 = ~uVar21;
    iVar7 = -1;
    pcVar17 = &this_01->field_0x1faf;
    do {
      pcVar24 = pcVar17;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar24 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar24;
    } while (cVar1 != '\0');
    pcVar17 = pcVar13 + -uVar21;
    pcVar13 = pcVar24 + -1;
    for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
      *pcVar13 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  uVar21 = 0xffffffff;
  pcVar17 = &DAT_007c72d8;
  do {
    pcVar13 = pcVar17;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar13 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar13;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar7 = -1;
  pcVar17 = &this_01->field_0x1faf;
  do {
    pcVar24 = pcVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar24;
  } while (cVar1 != '\0');
  pcVar17 = pcVar13 + -uVar21;
  pcVar13 = pcVar24 + -1;
  for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pcVar13 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar21 = 0xffffffff;
  pcVar17 = PTR_DAT_0079c058;
  do {
    pcVar13 = pcVar17;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar13 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar13;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar7 = -1;
  pcVar17 = &this_01->field_0x1faf;
  do {
    pcVar24 = pcVar17;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar24 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar24;
  } while (cVar1 != '\0');
  pcVar17 = pcVar13 + -uVar21;
  pcVar13 = pcVar24 + -1;
  for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
    pcVar17 = pcVar17 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
    *pcVar13 = *pcVar17;
    pcVar17 = pcVar17 + 1;
    pcVar13 = pcVar13 + 1;
  }
  if (this_01->field_1A5F == CASE_3) {
    bVar26 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_01->field_0x1faf,&local_26c);
    bVar26 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar26) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        local_24 = (cMf32 *)0x0;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)local_26c.cFileName,(byte *)0x0,(byte *)0x0,local_370,(byte *)0x0);
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        iVar7 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0);
        this_01 = local_28;
        if (iVar7 == 0) {
          uVar21 = 0xffffffff;
          pcVar17 = &local_28->field_1DA7;
          do {
            pcVar13 = pcVar17;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar13 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar13;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar17 = pcVar13 + -uVar21;
          pcVar13 = &local_28->field_0x1faf;
          for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pcVar13 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar13 = pcVar13 + 1;
          }
          uVar21 = 0xffffffff;
          pbVar22 = local_370;
          do {
            pbVar19 = pbVar22;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pbVar19 = pbVar22 + 1;
            bVar3 = *pbVar22;
            pbVar22 = pbVar19;
          } while (bVar3 != 0);
          uVar21 = ~uVar21;
          iVar7 = -1;
          pcVar17 = &local_28->field_0x1faf;
          do {
            pcVar13 = pcVar17;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            pcVar13 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar13;
          } while (cVar1 != '\0');
          pbVar22 = pbVar19 + -uVar21;
          pbVar19 = (byte *)(pcVar13 + -1);
          for (uVar15 = uVar21 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pbVar19 = *(undefined4 *)pbVar22;
            pbVar22 = pbVar22 + 4;
            pbVar19 = pbVar19 + 4;
          }
          for (uVar21 = uVar21 & 3; uVar21 != 0; uVar21 = uVar21 - 1) {
            *pbVar19 = *pbVar22;
            pbVar22 = pbVar22 + 1;
            pbVar19 = pbVar19 + 1;
          }
          pcVar9 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,&local_28->field_0x1faf,0,0,0);
          bVar26 = false;
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar26 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar26 = true;
            break;
          case CASE_13:
            bVar26 = DAT_00803400 == '\f';
          }
          if (bVar26) {
            local_14 = &local_24;
            puVar10 = cMf32::RecGet(pcVar9,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            pcVar16 = extraout_ECX;
            if ((puVar10 != (ushort *)0x0) && (pcVar16 = local_24, local_c == local_24)) {
              Library::DKW::TBL::FUN_006ae1c0
                        (&this_01->field_1C9B->flags,&local_26c.ftLastWriteTime.dwLowDateTime);
              uVar21 = 0xffffffff;
              pcVar17 = PTR_DAT_0079c06c;
              do {
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar1 != '\0');
              pbVar22 = (byte *)FUN_006b8240((char *)local_370,~uVar21 - 1);
LAB_005b051b:
              pDVar8 = this_01->field_1C97;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(&pDVar8->flags,(char *)pbVar22);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              pcVar16 = extraout_ECX_01;
            }
          }
          else {
            local_14 = (cMf32 **)&DAT_008087b6;
            puVar10 = cMf32::RecGet(pcVar9,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            pcVar16 = extraout_ECX_00;
            if (((puVar10 != (ushort *)0x0) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar2 = this_01->field_1A5F, pcVar16 = _DAT_008087ba, CVar2 == CASE_1 ||
                   (CVar2 == CASE_13)) || (CVar2 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_01->field_1A5F != CASE_2) {
                pbVar22 = local_370;
                goto LAB_005b051b;
              }
              pcVar16 = (cMf32 *)((uint)_DAT_008087ba & 0xffffff00);
              pcVar17 = (char *)((int)&DAT_008087c4 + 3);
              iVar7 = 8;
              do {
                if (((byte)pcVar17[0x22] < 8) && (*pcVar17 == '\0')) {
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  pcVar16 = (cMf32 *)CONCAT31((int3)((uint)pcVar16 >> 8),(char)pcVar16 + '\x01');
                }
                pcVar17 = pcVar17 + 0x51;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
              if ((byte)pcVar16 < 2) {
                pDVar8 = this_01->field_1C97;
                pbVar22 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar16,pcVar9);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar11 = FindNextFileA(local_18,&local_26c);
    } while (BVar11 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar21 = this_01->field_1C9F->elementSize;
  if ((int)(this_01->field_1C97->elementSize + uVar21) < 1) {
    this_01->field_002D = 0x22;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar27 = this_01->field_1A6C;
    this_01->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar21) {
    local_10 = uVar21 - 1;
    do {
      local_1c = 0;
      uVar21 = 0;
      if (local_10 != 0) {
        do {
          pDVar8 = this_01->field_1C9F;
          uVar15 = uVar21 + 1;
          if ((int)uVar15 < (int)pDVar8->elementSize) {
            pcVar17 = *(char **)(pDVar8->growCapacity + 4 + uVar21 * 4);
          }
          else {
            pcVar17 = (char *)0x0;
          }
          if ((int)uVar21 < (int)pDVar8->elementSize) {
            pcVar13 = *(char **)(pDVar8->growCapacity + uVar21 * 4);
          }
          else {
            pcVar13 = (char *)0x0;
          }
          iVar7 = Library::MSVCRT::__strcmpi(pcVar13,pcVar17);
          if (0 < iVar7) {
            FUN_006b8200((AnonShape_006B8200_800652FF *)this_01->field_1C9F,uVar21,uVar15);
            local_1c = 1;
          }
          uVar21 = uVar15;
        } while (uVar15 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = this_01->field_1C97->elementSize;
  if (1 < uVar21) {
    CVar2 = this_01->field_1A5F;
    if (CVar2 < CASE_9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (CVar2 < (CASE_C|CASE_1)) {
      local_5 = true;
    }
    else {
      if (CVar2 != CASE_13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar21 - 1;
    do {
      uVar21 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pDVar8 = this_01->field_1C97;
            if ((int)(uVar21 + 1) < (int)pDVar8->elementSize) {
              pcVar17 = *(char **)(pDVar8->growCapacity + 4 + uVar21 * 4);
            }
            else {
              pcVar17 = (char *)0x0;
            }
            if ((int)uVar21 < (int)pDVar8->elementSize) {
              pcVar13 = *(char **)(pDVar8->growCapacity + uVar21 * 4);
            }
            else {
              pcVar13 = (char *)0x0;
            }
            iVar7 = Library::MSVCRT::__strcmpi(pcVar13,pcVar17);
            if (0 < iVar7) {
              pDVar8 = this_01->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            DArrayGetElement(this_01->field_1C9B,uVar21,&local_3c);
            DArrayGetElement(this_01->field_1C9B,uVar21 + 1,&local_44);
            LVar12 = CompareFileTime(&local_3c,&local_44);
            if (LVar12 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1C9B,uVar21,uVar21 + 1);
              pDVar8 = this_01->field_1C97;
LAB_005b06e8:
              FUN_006b8200((AnonShape_006B8200_800652FF *)pDVar8,uVar21,uVar21 + 1);
              local_1c = 1;
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = this_01->field_1C9F->elementSize + this_01->field_1C97->elementSize;
  this_01->field_002D = 0x28;
  *(uint *)&this_01->field_0x31 = uVar21;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x20;
  *(undefined4 *)&this_01->field_0x31 = 1;
  FUN_006e6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
  this_01->field_002D = 0x22;
  if (uVar21 <= param_1) {
    param_1 = uVar21 - 1;
  }
  *(uint *)&this_01->field_0x31 = param_1;
  uVar27 = this_01->field_1A6C;
LAB_005b07ac:
  FUN_006e6080(this_01,2,uVar27,(undefined4 *)&this_01->field_0x1d);
  this_01->field_1A64 = 1;
  this_01->field_1A68 = this_01->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

