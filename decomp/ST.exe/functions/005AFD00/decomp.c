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
  ChooseMapTy_field_1A5FState CVar3;
  StartSystemTy *pSVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  int local_EAX_175;
  DArrayTy *local_EAX_267;
  DArrayTy *pDVar8;
  DArrayTy *local_EAX_301;
  int iVar7;
  cMf32 *pcVar7;
  ushort *puVar8;
  BOOL BVar9;
  int local_EAX_1635;
  BulkInitializedRecord_008087C7 *pBVar10;
  int local_EAX_2257;
  LONG LVar11;
  char *pcVar12;
  int local_EAX_2515;
  int iVar14;
  byte bVar13;
  int iVar15;
  uint uVar16;
  ChooseMapTy *this_00;
  uint *puVar17;
  char *pcVar18;
  CHAR *pCVar19;
  uint uVar21;
  byte *pbVar22;
  CHAR *pCVar23;
  char *pcVar24;
  byte *pbVar25;
  bool bVar26;
  DArrayTy *pDVar27;
  undefined4 uVar28;
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
  byte CVar2;
  char *pcVar12_mg8;

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
  local_EAX_175 = Library::MSVCRT::__setjmp3(local_a4.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_175 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x4f5,0,local_EAX_175,
                                "%s","ChooseMapTy::PrepFiles");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_175,0,"E:\\__titans\\Start\\load_obj.cpp",0x4f5);
    return;
  }
  if (local_28->field_1C97 != nullptr) {
    FUN_006b5570(local_28->field_1C97);
    this_00->field_1C97 = nullptr;
  }
  if (this_00->field_1C9B != nullptr) {
    DArrayDestroy(this_00->field_1C9B);
    this_00->field_1C9B = nullptr;
  }
  if (this_00->field_1C9F != nullptr) {
    FUN_006b5570(this_00->field_1C9F);
    this_00->field_1C9F = nullptr;
  }
  local_EAX_267 = Library::DKW::TBL::SArrayCreate(nullptr,0x32,10);
  this_00->field_1C97 = local_EAX_267;
  pDVar8 = Library::DKW::TBL::DArrayCreate(nullptr,0x32,8,10);
  this_00->field_1C9B = pDVar8;
  local_EAX_301 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_00->field_1C9F = local_EAX_301;
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 0;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  pSVar4 = this_00->field_1A5B;
  if (pSVar4->field_02E6 != nullptr) {
    memset(&local_60, 0, 0x1a); /* compiler bulk-zero initialization */
    STPiece<2,2>(local_60) = 0xffff;
    STPiece<0,2>(local_60) = 0xffff;
    MMsgTy::StatePanel(pSVar4->field_02E6,(int)&local_60);
  }
  pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_1C7B;
  FUN_006b4170(pRVar5,0,0,0,pRVar5->field_0004,pRVar5->field_0008,0);
  uVar21 = 0x3f;
  puVar17 = &this_00->field_1C23;
  do {
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar17,0xffffffff,0x114,uVar21);
    uVar21 = uVar21 + 0x13;
    puVar17 = puVar17 + 1;
  } while ((int)uVar21 < 0x1e1);
  uVar21 = 0xffffffff;
  pcVar18 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = &this_00->field_1FAF;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  uVar21 = 0xffffffff;
  pcVar18 = &CHAR___007cc8bc;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  CVar3 = this_00->field_1A5F;
  if ((CVar3 != CASE_0) && ((CVar3 < CASE_6 || ((CVar3 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar22 = &this_00->field_1CA3;
  pcVar18 = &this_00->field_1DA7;
  do {
    bVar13 = *pcVar18;
    bVar26 = bVar13 < *pbVar22;
    if (bVar13 != *pbVar22) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
      goto LAB_005aff87;
    }
    if (bVar13 == 0) break;
    bVar13 = pcVar18[1];
    bVar26 = bVar13 < pbVar22[1];
    if (bVar13 != pbVar22[1]) goto LAB_005aff82;
    pcVar18 = pcVar18 + 2;
    pbVar22 = pbVar22 + 2;
  } while (bVar13 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar22 = &DAT_007cc8b8;
          pCVar19 = local_26c.cFileName;
          do {
            bVar13 = *pCVar19;
            bVar26 = bVar13 < *pbVar22;
            if (bVar13 != *pbVar22) {
LAB_005afffc:
              iVar15 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
              goto LAB_005b0001;
            }
            if (bVar13 == 0) break;
            bVar13 = pCVar19[1];
            bVar26 = bVar13 < pbVar22[1];
            if (bVar13 != pbVar22[1]) goto LAB_005afffc;
            pCVar19 = pCVar19 + 2;
            pbVar22 = pbVar22 + 2;
          } while (bVar13 != 0);
          iVar15 = 0;
LAB_005b0001:
          if (iVar15 != 0) {
            pbVar22 = &DAT_007cc8b4;
            pCVar19 = local_26c.cFileName;
            do {
              bVar13 = *pCVar19;
              bVar26 = bVar13 < *pbVar22;
              if (bVar13 != *pbVar22) {
LAB_005b003c:
                iVar15 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005b0041;
              }
              if (bVar13 == 0) break;
              bVar13 = pCVar19[1];
              bVar26 = bVar13 < pbVar22[1];
              if (bVar13 != pbVar22[1]) goto LAB_005b003c;
              pCVar19 = pCVar19 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar13 != 0);
            iVar15 = 0;
LAB_005b0041:
            if ((iVar15 != 0) || (local_34 != 0)) {
              if (this_00->field_1A5F == CASE_3) {
                uVar21 = 0xffffffff;
                local_20 = &this_00->field_1FAF;
                pcVar18 = &this_00->field_1DA7;
                do {
                  pcVar12 = pcVar18;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar12 = pcVar18 + 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar12;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                pcVar18 = pcVar12 + -uVar21;
                pcVar12 = local_20;
                memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                FUN_006b8280(local_20,local_20);
                pcVar18 = local_20;
                uVar21 = 0xffffffff;
                pCVar19 = local_26c.cFileName;
                do {
                  pCVar23 = pCVar19;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pCVar23 = pCVar19 + 1;
                  cVar1 = *pCVar19;
                  pCVar19 = pCVar23;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                iVar15 = -1;
                pcVar12 = local_20;
                do {
                  pcVar24 = pcVar12;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar24 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar24;
                } while (cVar1 != '\0');
                pCVar19 = pCVar23 + -uVar21;
                pcVar12 = pcVar24 + -1;
                memmove(pcVar12, pCVar19, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                FUN_006b8280(local_20,local_20);
                uVar21 = 0xffffffff;
                pcVar12_mg8 = PTR_s_ADDON_0079c060;
                do {
                  pcVar12 = pcVar12_mg8;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar12 = pcVar12_mg8 + 1;
                  cVar1 = *pcVar12_mg8;
                  pcVar12_mg8 = pcVar12;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                local_10 = 1;
                iVar15 = -1;
                do {
                  pcVar24 = pcVar18;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar24 = pcVar18 + 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar24;
                } while (cVar1 != '\0');
                pcVar18 = pcVar12 + -uVar21;
                pcVar12 = pcVar24 + -1;
                memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar7 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
                this_00 = local_28;
                if (iVar7 == 0) {
                  pcVar7 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                              (0x345,(byte *)&local_28->field_1FAF,0,0,0);
                  if (g_dArray_0080C4CB != nullptr) {
                    FUN_006b5570(g_dArray_0080C4CB);
                  }
                  g_dArray_0080C4CB =
                       (DArrayTy *)
                       Library::Ourlib::MFSARR::mfSarLoad(pcVar7,PTR_s_OBJECTIVES_0079c074,0);
                  if (g_dArray_0080C4CB == nullptr) {
                    g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
                  }
                  pcVar18 = &CHAR_00h_0080ed16;
                  for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
                    pcVar18[0] = '\0';
                    pcVar18[1] = '\0';
                    pcVar18[2] = '\0';
                    pcVar18[3] = '\0';
                    pcVar18 = pcVar18 + 4;
                  }
                  local_14 = (int *)&CHAR_00h_0080ed16;
                  puVar8 = cMf32::RecGet(pcVar7,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar8 == nullptr) {
                    local_10 = 0;
                  }
                  cMf32::delete(pcVar7);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              Library::DKW::TBL::FUN_006b5aa0(this_00->field_1C9F,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar9 = FindNextFileA(local_18,&local_26c);
      } while (BVar9 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      FindClose(local_18);
    }
  }
  uVar21 = 0xffffffff;
  pcVar18 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = &this_00->field_1FAF;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  if ((8 < this_00->field_1A5F) && (this_00->field_1A5F < CASE_D)) {
    uVar21 = 0xffffffff;
    pcVar18 = PTR_DAT_0079c06c;
    do {
      pcVar12 = pcVar18;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar12 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar12;
    } while (cVar1 != '\0');
    uVar21 = ~uVar21;
    iVar15 = -1;
    pcVar18 = &this_00->field_1FAF;
    do {
      pcVar24 = pcVar18;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar24 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar24;
    } while (cVar1 != '\0');
    pcVar18 = pcVar12 + -uVar21;
    pcVar12 = pcVar24 + -1;
    memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
    uVar16 = 0;
  }
  uVar21 = 0xffffffff;
  pcVar18 = &CHAR___007c72d8;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  uVar21 = 0xffffffff;
  pcVar18 = PTR_CHAR___0079c058;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  if (this_00->field_1A5F == CASE_3) {
    bVar26 = false;
  }
  else {
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    bVar26 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar26) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        local_24 = 0;
        Library::MSVCRT::FUN_0072e730
                  ((byte *)local_26c.cFileName,nullptr,nullptr,local_370,nullptr);
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        local_EAX_1635 = Library::MSVCRT::__setjmp3(local_12c.jumpBuffer,0);
        this_00 = local_28;
        if (local_EAX_1635 == 0) {
          uVar21 = 0xffffffff;
          pcVar18 = &local_28->field_1DA7;
          do {
            pcVar12 = pcVar18;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar12 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar12;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar18 = pcVar12 + -uVar21;
          pcVar12 = &local_28->field_1FAF;
          memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
          uVar16 = 0;
          uVar21 = 0xffffffff;
          pbVar22 = local_370;
          do {
            pbVar25 = pbVar22;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pbVar25 = pbVar22 + 1;
            bVar13 = *pbVar22;
            pbVar22 = pbVar25;
          } while (bVar13 != 0);
          uVar21 = ~uVar21;
          iVar15 = -1;
          pcVar18 = &local_28->field_1FAF;
          do {
            pcVar12 = pcVar18;
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            pcVar12 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar12;
          } while (cVar1 != '\0');
          pbVar22 = pbVar25 + -uVar21;
          pbVar25 = (byte *)(pcVar12 + -1);
          memmove(pbVar25, pbVar22, uVar21); /* compiler REP MOVS byte copy */
          pcVar7 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0
                                      (0x345,(byte *)&local_28->field_1FAF,0,0,0);
          bVar26 = false;
          switch(this_00->field_1A5F) {
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
            puVar8 = cMf32::RecGet(pcVar7,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            if ((puVar8 != nullptr) && (local_c == local_24)) {
              Library::DKW::TBL::DArrayAppend(this_00->field_1C9B,&local_26c.ftLastWriteTime);
              uVar21 = 0xffffffff;
              pcVar18 = PTR_DAT_0079c06c;
              do {
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar18 + 1;
              } while (cVar1 != '\0');
              pbVar22 = (byte *)FUN_006b8240((char *)local_370,~uVar21 - 1);
LAB_005b051b:
              pDVar27 = this_00->field_1C97;
LAB_005b0523:
              Library::DKW::TBL::FUN_006b5aa0(pDVar27,(char *)pbVar22);
            }
          }
          else {
            local_14 = &DAT_008087b6;
            puVar8 = cMf32::RecGet(pcVar7,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            if (((puVar8 != nullptr) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar3 = this_00->field_1A5F, CVar3 == CASE_1 || (CVar3 == CASE_13)) ||
                  (CVar3 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_00->field_1A5F != CASE_2) {
                pbVar22 = local_370;
                goto LAB_005b051b;
              }
              bVar13 = 0;
              pBVar10 = g_bulkInitializedRecords_008087C7;
              iVar15 = 8;
              do {
                if ((pBVar10->field_0022 < 8) && (*(char *)pBVar10 == '\0')) {
                  bVar13 = bVar13 + 1;
                }
                pBVar10 = pBVar10 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              if (bVar13 < 2) {
                pDVar27 = this_00->field_1C97;
                pbVar22 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar7);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar9 = FindNextFileA(local_18,&local_26c);
    } while (BVar9 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    FindClose(local_18);
  }
  uVar21 = this_00->field_1C9F->elementSize;
  if ((int)(this_00->field_1C97->elementSize + uVar21) < 1) {
    this_00->field_002D = 0x22;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    uVar28 = this_00->field_1A6C;
    this_00->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar21) {
    local_10 = uVar21 - 1;
    do {
      local_1c = 0;
      uVar21 = 0;
      if (local_10 != 0) {
        do {
          pDVar27 = this_00->field_1C9F;
          uVar16 = uVar21 + 1;
          if ((int)uVar16 < (int)pDVar27->elementSize) {
            pcVar18 = *(char **)(pDVar27->growCapacity + 4 + uVar21 * 4);
          }
          else {
            pcVar18 = nullptr;
          }
          if ((int)uVar21 < (int)pDVar27->elementSize) {
            pcVar12 = *(char **)(pDVar27->growCapacity + uVar21 * 4);
          }
          else {
            pcVar12 = nullptr;
          }
          local_EAX_2257 = Library::MSVCRT::__strcmpi(pcVar12,pcVar18);
          if (0 < local_EAX_2257) {
            FUN_006b8200((AnonShape_006B8200_800652FF *)this_00->field_1C9F,uVar21,uVar16);
            local_1c = 1;
          }
          uVar21 = uVar16;
        } while (uVar16 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = this_00->field_1C97->elementSize;
  if (1 < uVar21) {
    CVar2 = this_00->field_1A5F;
    if (CVar2 < 9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (CVar2 < 0xd) {
      local_5 = true;
    }
    else {
      if (CVar2 != 0x13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar21 - 1;
    do {
      uVar21 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pDVar27 = this_00->field_1C97;
            if ((int)(uVar21 + 1) < (int)pDVar27->elementSize) {
              pcVar18 = *(char **)(pDVar27->growCapacity + 4 + uVar21 * 4);
            }
            else {
              pcVar18 = nullptr;
            }
            if ((int)uVar21 < (int)pDVar27->elementSize) {
              pcVar12 = *(char **)(pDVar27->growCapacity + uVar21 * 4);
            }
            else {
              pcVar12 = nullptr;
            }
            local_EAX_2515 = Library::MSVCRT::__strcmpi(pcVar12,pcVar18);
            if (0 < local_EAX_2515) {
              pDVar27 = this_00->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            DArrayGetElement(this_00->field_1C9B,uVar21,&local_3c);
            DArrayGetElement(this_00->field_1C9B,uVar21 + 1,&local_44);
            LVar11 = CompareFileTime(&local_3c,&local_44);
            if (LVar11 < 0) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_1C9B,uVar21,uVar21 + 1);
              pDVar27 = this_00->field_1C97;
LAB_005b06e8:
              FUN_006b8200((AnonShape_006B8200_800652FF *)pDVar27,uVar21,uVar21 + 1);
              local_1c = 1;
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = this_00->field_1C9F->elementSize + this_00->field_1C97->elementSize;
  this_00->field_002D = 0x28;
  *(uint *)&this_00->field_0x31 = uVar21;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 1;
  FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x22;
  if (uVar21 <= param_1) {
    param_1 = uVar21 - 1;
  }
  *(uint *)&this_00->field_0x31 = param_1;
  uVar28 = this_00->field_1A6C;
LAB_005b07ac:
  FUN_006e6080(this_00,2,uVar28,(undefined4 *)&this_00->field_0x1d);
  this_00->field_1A64 = 1;
  this_00->field_1A68 = this_00->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

