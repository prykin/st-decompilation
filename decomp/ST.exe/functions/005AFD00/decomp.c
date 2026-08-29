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
  RecoveredSourceFamily_dibcopy *pRVar2;
  DWORD DVar3;
  int local_EAX_175;
  DArrayTy *local_EAX_267;
  DArrayTy *pDVar8;
  DArrayTy *local_EAX_301;
  int iVar7;
  cMf32 *pcVar5;
  ushort *puVar6;
  BOOL BVar7;
  int local_EAX_1635;
  BulkInitializedRecord_008087C7 *pBVar8;
  int local_EAX_2257;
  LONG LVar9;
  char *pcVar10;
  int local_EAX_2515;
  int iVar14;
  byte bVar11;
  uint uVar13;
  int iVar15;
  ChooseMapTy *this_00;
  uint *puVar16;
  char *pcVar17;
  CHAR *pCVar18;
  uint uVar20;
  byte *pbVar21;
  CHAR *pCVar22;
  char *pcVar23;
  byte *pbVar24;
  bool bVar25;
  DArrayTy *pDVar26;
  uint uVar27;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  InternalExceptionFrame local_12c;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  uint local_60;
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
  switch(this->array_00BC[0xc].field_01DF) {
  case 1:
  case 4:
switchD_005afd30_caseD_1:
    local_30 = -0x70fffbfb;
  case 2:
  case 5:
switchD_005afd30_caseD_2:
    local_c = -0x70fffdfb;
    break;
  case 9:
    local_c = -0x77fffeea;
    break;
  case 10:
    local_c = -0x77fffdea;
    break;
  case 0xb:
    local_c = -0x77fffbea;
    break;
  case 0xc:
switchD_005afd30_caseD_c:
    local_c = -0x77fffaea;
    break;
  case 0x13:
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
  uVar27 = this_00->array_00BC[0xc].field_01EC;
  this_00->field_1C9F = local_EAX_301;
  this_00->field_002D = 0x20;
  this_00->field_0031 = 0;
  this_00->field_0033 = 0;
  FUN_006e6080(this_00,2,uVar27,(undefined4 *)&this_00->field_0x1d);
  iVar15 = this_00->array_00BC[0xc].field_01DB;
  if (STField<int>(iVar15,0x2E6) != 0) {
    memset(&local_60, 0, 0x1a); /* compiler bulk-zero initialization */
    STPiece<2,2>(local_60) = 0xffff;
    STPiece<0,2>(local_60) = 0xffff;
    /* ST_CALLSITE[005AFE87]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel(*(MMsgTy **)(iVar15 + 0x2e6),(int)&local_60);
  }
  pRVar2 = (RecoveredSourceFamily_dibcopy *)this_00->field_1C7B;
  FUN_006b4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0);
  uVar20 = 0x3f;
  puVar16 = &this_00->field_1C23;
  do {

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0x114,uVar20);
    uVar20 = uVar20 + 0x13;
    puVar16 = puVar16 + 1;
  } while ((int)uVar20 < 0x1e1);
  uVar20 = 0xffffffff;
  pcVar17 = &this_00->field_1DA7;
  do {
    pcVar10 = pcVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar10 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar10;
  } while (cVar1 != '\0');
  uVar20 = ~uVar20;
  pcVar17 = pcVar10 + -uVar20;
  pcVar10 = &this_00->field_1FAF;
  memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar20 = 0xffffffff;
  pcVar17 = &CHAR___007cc8bc;
  do {
    pcVar10 = pcVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar10 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar10;
  } while (cVar1 != '\0');
  uVar20 = ~uVar20;
  iVar15 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar23 = pcVar17;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar23 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar23;
  } while (cVar1 != '\0');
  pcVar17 = pcVar10 + -uVar20;
  pcVar10 = pcVar23 + -1;
  memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  bVar11 = this_00->array_00BC[0xc].field_01DF;
  if ((bVar11 != 0) && ((bVar11 < 6 || ((bVar11 == 0x13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar21 = &this_00->field_1CA3;
  pcVar17 = &this_00->field_1DA7;
  do {
    bVar11 = *pcVar17;
    bVar25 = bVar11 < *pbVar21;
    if (bVar11 != *pbVar21) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
      goto LAB_005aff87;
    }
    if (bVar11 == 0) break;
    bVar11 = pcVar17[1];
    bVar25 = bVar11 < pbVar21[1];
    if (bVar11 != pbVar21[1]) goto LAB_005aff82;
    pcVar17 = pcVar17 + 2;
    pbVar21 = pbVar21 + 2;
  } while (bVar11 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    /* ST_CALLSITE[005AFFA3]: CALL dword ptr [0x0085bcec] */
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar21 = &DAT_007cc8b8;
          pCVar18 = local_26c.cFileName;
          do {
            bVar11 = *pCVar18;
            bVar25 = bVar11 < *pbVar21;
            if (bVar11 != *pbVar21) {
LAB_005afffc:
              iVar15 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
              goto LAB_005b0001;
            }
            if (bVar11 == 0) break;
            bVar11 = pCVar18[1];
            bVar25 = bVar11 < pbVar21[1];
            if (bVar11 != pbVar21[1]) goto LAB_005afffc;
            pCVar18 = pCVar18 + 2;
            pbVar21 = pbVar21 + 2;
          } while (bVar11 != 0);
          iVar15 = 0;
LAB_005b0001:
          if (iVar15 != 0) {
            pbVar21 = &DAT_007cc8b4;
            pCVar18 = local_26c.cFileName;
            do {
              bVar11 = *pCVar18;
              bVar25 = bVar11 < *pbVar21;
              if (bVar11 != *pbVar21) {
LAB_005b003c:
                iVar15 = (1 - (uint)bVar25) - (uint)(bVar25 != 0);
                goto LAB_005b0041;
              }
              if (bVar11 == 0) break;
              bVar11 = pCVar18[1];
              bVar25 = bVar11 < pbVar21[1];
              if (bVar11 != pbVar21[1]) goto LAB_005b003c;
              pCVar18 = pCVar18 + 2;
              pbVar21 = pbVar21 + 2;
            } while (bVar11 != 0);
            iVar15 = 0;
LAB_005b0041:
            if ((iVar15 != 0) || (local_34 != 0)) {
              if (this_00->array_00BC[0xc].field_01DF == '\x03') {
                uVar20 = 0xffffffff;
                local_20 = &this_00->field_1FAF;
                pcVar17 = &this_00->field_1DA7;
                do {
                  pcVar10 = pcVar17;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar10 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar10;
                } while (cVar1 != '\0');
                uVar20 = ~uVar20;
                pcVar17 = pcVar10 + -uVar20;
                pcVar10 = local_20;
                memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
                uVar13 = 0;
                FUN_006b8280(local_20,local_20);
                pcVar17 = local_20;
                uVar20 = 0xffffffff;
                pCVar18 = local_26c.cFileName;
                do {
                  pCVar22 = pCVar18;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pCVar22 = pCVar18 + 1;
                  cVar1 = *pCVar18;
                  pCVar18 = pCVar22;
                } while (cVar1 != '\0');
                uVar20 = ~uVar20;
                iVar15 = -1;
                pcVar10 = local_20;
                do {
                  pcVar23 = pcVar10;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar23 = pcVar10 + 1;
                  cVar1 = *pcVar10;
                  pcVar10 = pcVar23;
                } while (cVar1 != '\0');
                pCVar18 = pCVar22 + -uVar20;
                pcVar10 = pcVar23 + -1;
                memmove(pcVar10, pCVar18, uVar20); /* compiler REP MOVS byte copy */
                uVar13 = 0;
                FUN_006b8280(local_20,local_20);
                uVar20 = 0xffffffff;
                pcVar12_mg8 = PTR_s_ADDON_0079c060;
                do {
                  pcVar10 = pcVar12_mg8;
                  if (uVar20 == 0) break;
                  uVar20 = uVar20 - 1;
                  pcVar10 = pcVar12_mg8 + 1;
                  cVar1 = *pcVar12_mg8;
                  pcVar12_mg8 = pcVar10;
                } while (cVar1 != '\0');
                uVar20 = ~uVar20;
                local_10 = 1;
                iVar15 = -1;
                do {
                  pcVar23 = pcVar17;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar23 = pcVar17 + 1;
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar23;
                } while (cVar1 != '\0');
                pcVar17 = pcVar10 + -uVar20;
                pcVar10 = pcVar23 + -1;
                memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
                uVar13 = 0;
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;

                iVar7 = Library::MSVCRT::__setjmp3(local_e8.jumpBuffer,0);
                this_00 = local_28;
                if (iVar7 == 0) {
                  /* ST_CALLSITE[005B013C]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
                  pcVar5 = Library::Ourlib::MF32INT::FUN_006f0ec0
                                     (0x345,(byte *)&local_28->field_1FAF,0,0,0);
                  if (g_dArray_0080C4CB != nullptr) {
                    FUN_006b5570(g_dArray_0080C4CB);
                  }
                  /* ST_CALLSITE[005B015F]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
                  g_dArray_0080C4CB =
                       Library::Ourlib::MFSARR::mfSarLoad(pcVar5,PTR_s_OBJECTIVES_0079c074,0);
                  if (g_dArray_0080C4CB == nullptr) {
                    g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
                  }
                  pcVar17 = &CHAR_00h_0080ed16;
                  for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
                    pcVar17[0] = '\0';
                    pcVar17[1] = '\0';
                    pcVar17[2] = '\0';
                    pcVar17[3] = '\0';
                    pcVar17 = pcVar17 + 4;
                  }
                  local_14 = (int *)&CHAR_00h_0080ed16;
                  puVar6 = cMf32::RecGet(pcVar5,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar6 == nullptr) {
                    local_10 = 0;
                  }
                  cMf32::delete(pcVar5);
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
        /* ST_CALLSITE[005B01FE]: CALL dword ptr [0x0085bcf0] */
        BVar7 = FindNextFileA(local_18,&local_26c);
      } while (BVar7 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005B0218]: CALL dword ptr [0x0085bcf4] */
      FindClose(local_18);
    }
  }
  uVar20 = 0xffffffff;
  pcVar17 = &this_00->field_1DA7;
  do {
    pcVar10 = pcVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar10 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar10;
  } while (cVar1 != '\0');
  uVar20 = ~uVar20;
  pcVar17 = pcVar10 + -uVar20;
  pcVar10 = &this_00->field_1FAF;
  memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  bVar11 = this_00->array_00BC[0xc].field_01DF;
  if ((8 < bVar11) && (bVar11 < 0xd)) {
    uVar20 = 0xffffffff;
    pcVar17 = PTR_DAT_0079c06c;
    do {
      pcVar10 = pcVar17;
      if (uVar20 == 0) break;
      uVar20 = uVar20 - 1;
      pcVar10 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar10;
    } while (cVar1 != '\0');
    uVar20 = ~uVar20;
    iVar15 = -1;
    pcVar17 = &this_00->field_1FAF;
    do {
      pcVar23 = pcVar17;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar23 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar23;
    } while (cVar1 != '\0');
    pcVar17 = pcVar10 + -uVar20;
    pcVar10 = pcVar23 + -1;
    memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
    uVar13 = 0;
  }
  uVar20 = 0xffffffff;
  pcVar17 = &CHAR___007c72d8;
  do {
    pcVar10 = pcVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar10 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar10;
  } while (cVar1 != '\0');
  uVar20 = ~uVar20;
  iVar15 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar23 = pcVar17;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar23 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar23;
  } while (cVar1 != '\0');
  pcVar17 = pcVar10 + -uVar20;
  pcVar10 = pcVar23 + -1;
  memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar20 = 0xffffffff;
  pcVar17 = PTR_CHAR___0079c058;
  do {
    pcVar10 = pcVar17;
    if (uVar20 == 0) break;
    uVar20 = uVar20 - 1;
    pcVar10 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar10;
  } while (cVar1 != '\0');
  uVar20 = ~uVar20;
  iVar15 = -1;
  pcVar17 = &this_00->field_1FAF;
  do {
    pcVar23 = pcVar17;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar23 = pcVar17 + 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar23;
  } while (cVar1 != '\0');
  pcVar17 = pcVar10 + -uVar20;
  pcVar10 = pcVar23 + -1;
  memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  if (this_00->array_00BC[0xc].field_01DF == '\x03') {
    bVar25 = false;
  }
  else {
    /* ST_CALLSITE[005B02F6]: CALL dword ptr [0x0085bcec] */
    local_18 = FindFirstFileA(&this_00->field_1FAF,&local_26c);
    bVar25 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar25) {
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
          uVar20 = 0xffffffff;
          pcVar17 = &local_28->field_1DA7;
          do {
            pcVar10 = pcVar17;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pcVar10 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar10;
          } while (cVar1 != '\0');
          uVar20 = ~uVar20;
          pcVar17 = pcVar10 + -uVar20;
          pcVar10 = &local_28->field_1FAF;
          memmove(pcVar10, pcVar17, uVar20); /* compiler REP MOVS byte copy */
          uVar13 = 0;
          uVar20 = 0xffffffff;
          pbVar21 = local_370;
          do {
            pbVar24 = pbVar21;
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            pbVar24 = pbVar21 + 1;
            bVar11 = *pbVar21;
            pbVar21 = pbVar24;
          } while (bVar11 != 0);
          uVar20 = ~uVar20;
          iVar15 = -1;
          pcVar17 = &local_28->field_1FAF;
          do {
            pcVar10 = pcVar17;
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            pcVar10 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar10;
          } while (cVar1 != '\0');
          pbVar21 = pbVar24 + -uVar20;
          pbVar24 = (byte *)(pcVar10 + -1);
          memmove(pbVar24, pbVar21, uVar20); /* compiler REP MOVS byte copy */
          /* ST_CALLSITE[005B03DB]: CALL 0x006f0ec0; direct=006F0EC0 Library::Ourlib::MF32INT::FUN_006f0ec0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/cMf32; signature=__cdecl;pointer:/cMf32;/uint;pointer:/byte;/int;/uint;/uint */
          pcVar5 = Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&local_28->field_1FAF,0,0,0);
          bVar25 = false;
          switch(this_00->array_00BC[0xc].field_01DF) {
          case 1:
          case 2:
          case 4:
          case 5:
            bVar25 = false;
            break;
          case 9:
          case 10:
          case 0xb:
          case 0xc:
            bVar25 = true;
            break;
          case 0x13:
            bVar25 = DAT_00803400 == '\f';
          }
          if (bVar25) {
            local_14 = &local_24;
            puVar6 = cMf32::RecGet(pcVar5,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            if ((puVar6 != nullptr) && (local_c == local_24)) {

              Library::DKW::TBL::DArrayAppend(this_00->field_1C9B,&local_26c.ftLastWriteTime);
              uVar20 = 0xffffffff;
              pcVar17 = PTR_DAT_0079c06c;
              do {
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar1 != '\0');
              pbVar21 = (byte *)FUN_006b8240((char *)local_370,~uVar20 - 1);
LAB_005b051b:
              pDVar26 = this_00->field_1C97;
LAB_005b0523:

              Library::DKW::TBL::FUN_006b5aa0(pDVar26,(char *)pbVar21);
            }
          }
          else {
            local_14 = &DAT_008087b6;
            puVar6 = cMf32::RecGet(pcVar5,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            if (((puVar6 != nullptr) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((cVar1 = this_00->array_00BC[0xc].field_01DF, cVar1 == '\x01' ||
                   (cVar1 == '\x13')) || (cVar1 == '\x04')) && (_DAT_008087ba == local_30)))))) {
              if (this_00->array_00BC[0xc].field_01DF != '\x02') {
                pbVar21 = local_370;
                goto LAB_005b051b;
              }
              bVar11 = 0;
              pBVar8 = g_bulkInitializedRecords_008087C7;
              iVar15 = 8;
              do {
                if ((pBVar8->field_0022 < 8) && (*(char *)pBVar8 == '\0')) {
                  bVar11 = bVar11 + 1;
                }
                pBVar8 = pBVar8 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              if (bVar11 < 2) {
                pDVar26 = this_00->field_1C97;
                pbVar21 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          cMf32::delete(pcVar5);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      /* ST_CALLSITE[005B0558]: CALL dword ptr [0x0085bcf0] */
      BVar7 = FindNextFileA(local_18,&local_26c);
    } while (BVar7 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    /* ST_CALLSITE[005B056F]: CALL dword ptr [0x0085bcf4] */
    FindClose(local_18);
  }
  uVar20 = this_00->field_1C9F->elementSize;
  if ((int)(this_00->field_1C97->elementSize + uVar20) < 1) {
    uVar27 = this_00->array_00BC[0xc].field_01EC;
    this_00->field_002D = 0x22;
    this_00->field_0031 = 0;
    this_00->field_0033 = 0;
    FUN_006e6080(this_00,2,uVar27,(undefined4 *)&this_00->field_0x1d);
    uVar27 = this_00->array_00BC[0xc].field_01EC;
    this_00->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar20) {
    local_10 = uVar20 - 1;
    do {
      local_1c = 0;
      uVar20 = 0;
      if (local_10 != 0) {
        do {
          pDVar26 = this_00->field_1C9F;
          uVar13 = uVar20 + 1;
          if ((int)uVar13 < (int)pDVar26->elementSize) {
            pcVar17 = *(char **)(pDVar26->growCapacity + 4 + uVar20 * 4);
          }
          else {
            pcVar17 = nullptr;
          }
          if ((int)uVar20 < (int)pDVar26->elementSize) {
            pcVar10 = *(char **)(pDVar26->growCapacity + uVar20 * 4);
          }
          else {
            pcVar10 = nullptr;
          }

          local_EAX_2257 = Library::MSVCRT::__strcmpi(pcVar10,pcVar17);
          if (0 < local_EAX_2257) {

            FUN_006b8200((AnonShape_006B8200_800652FF *)this_00->field_1C9F,uVar20,uVar13);
            local_1c = 1;
          }
          uVar20 = uVar13;
        } while (uVar13 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar20 = this_00->field_1C97->elementSize;
  if (1 < uVar20) {
    CVar2 = this_00->array_00BC[0xc].field_01DF;
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
    local_10 = uVar20 - 1;
    do {
      uVar20 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pDVar26 = this_00->field_1C97;
            if ((int)(uVar20 + 1) < (int)pDVar26->elementSize) {
              pcVar17 = *(char **)(pDVar26->growCapacity + 4 + uVar20 * 4);
            }
            else {
              pcVar17 = nullptr;
            }
            if ((int)uVar20 < (int)pDVar26->elementSize) {
              pcVar10 = *(char **)(pDVar26->growCapacity + uVar20 * 4);
            }
            else {
              pcVar10 = nullptr;
            }

            local_EAX_2515 = Library::MSVCRT::__strcmpi(pcVar10,pcVar17);
            if (0 < local_EAX_2515) {
              pDVar26 = this_00->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {

            DArrayGetElement(this_00->field_1C9B,uVar20,&local_3c);

            DArrayGetElement(this_00->field_1C9B,uVar20 + 1,&local_44);
            /* ST_CALLSITE[005B0685]: CALL dword ptr [0x0085bcd8] */
            LVar9 = CompareFileTime(&local_3c,&local_44);
            if (LVar9 < 0) {

              FUN_006b0cd0((RecoveredRecordView_00413AF0_B98DB3AE *)this_00->field_1C9B,uVar20,
                           uVar20 + 1);
              pDVar26 = this_00->field_1C97;
LAB_005b06e8:

              FUN_006b8200((AnonShape_006B8200_800652FF *)pDVar26,uVar20,uVar20 + 1);
              local_1c = 1;
            }
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar27 = this_00->array_00BC[0xc].field_01EC;
  uVar20 = this_00->field_1C9F->elementSize + this_00->field_1C97->elementSize;
  this_00->field_002D = 0x28;
  *(uint *)&this_00->field_0031 = uVar20;
  FUN_006e6080(this_00,2,uVar27,(undefined4 *)&this_00->field_0x1d);
  uVar27 = this_00->array_00BC[0xc].field_01EC;
  this_00->field_002D = 0x20;
  this_00->field_0031 = 1;
  this_00->field_0033 = 0;
  FUN_006e6080(this_00,2,uVar27,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x22;
  if (uVar20 <= param_1) {
    param_1 = uVar20 - 1;
  }
  this_00->field_0031 = (short)param_1;
  this_00->field_0033 = (short)(param_1 >> 0x10);
  uVar27 = this_00->array_00BC[0xc].field_01EC;
LAB_005b07ac:
  FUN_006e6080(this_00,2,uVar27,(undefined4 *)&this_00->field_0x1d);
  DVar3 = this_00->field_0061;
  this_00->array_00BC[0xc].field_01E4 = 1;
  this_00->array_00BC[0xc].field_01E8 = DVar3;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

