#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall ChooseMapTy::ShowDescription(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  byte bVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  ccFntTy *pcVar4;
  int iVar5;
  int local_EAX_38;
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar7;
  uint *puVar8_mg0;
  char *pcVar8;
  int iVar7;
  int local_EAX_816;
  cMf32 *pcVar9;
  ushort *puVar10;
  byte *puVar11;
  uint *puVar12;
  uint *puVar8_mg3;
  uint *puVar8_mg1;
  int iVar16;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar17;
  ChooseMapTy *pCVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  short *psVar22;
  InternalExceptionFrame local_100;
  InternalExceptionFrame local_bc;
  InternalExceptionFrame local_78;
  short local_34 [14];
  char *local_18;
  cMf32 *local_14;
  ChooseMapTy *local_10;
  int local_c;
  char *local_8;
  char *pcVar19_mgB;

  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_10 = this;

  local_EAX_38 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_78.previous;

    iVar16 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x2c0,0,local_EAX_38,
                                "%s","ChooseMapTy::ShowDescription");
    if (iVar16 == 0) {
      RaiseInternalException(local_EAX_38,0,"E:\\__titans\\Start\\load_obj.cpp",0x2c0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[005AE098]: CALL 0x0070a5a0; direct=0070A5A0 Library::Ourlib::MFIMG::mfImgLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;/byte;/int */
  pRVar7 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
  /* ST_CALLSITE[005AE0AF]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',pRVar7);
  pRVar3 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
  FUN_006b4170(pRVar3,0,0,0,pRVar3->field_0004,pRVar3->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
    FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  /* ST_CALLSITE[005AE0F3]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
  puVar8_mg0 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  pCVar18 = local_10;
  g_startSystem_0081176C->field_0548 = puVar8_mg0;
  uVar13 = local_10->field_1C9F->elementSize;
  if ((0 < (int)(local_10->field_1C97->elementSize + uVar13)) && (uVar13 <= param_1)) {
    uVar13 = 0xffffffff;
    local_18 = &local_10->field_1FAF;
    pcVar8 = &local_10->field_1DA7;
    do {
      pcVar19 = pcVar8;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar8 = pcVar19 + -uVar13;
    pcVar19 = local_18;
    memmove(pcVar19, pcVar8, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    bVar2 = local_10->array_00BC[0xc].field_01DF;
    if ((8 < bVar2) && ((bVar2 < 0xd || ((bVar2 == 0x13 && (DAT_00803400 == '\f')))))) {
      uVar13 = 0xffffffff;
      pcVar8 = PTR_DAT_0079c06c;
      do {
        pcVar19 = pcVar8;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar19 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar19;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      iVar15 = -1;
      pcVar8 = local_18;
      do {
        pcVar21 = pcVar8;
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        pcVar21 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar21;
      } while (cVar1 != '\0');
      pcVar8 = pcVar19 + -uVar13;
      pcVar19 = pcVar21 + -1;
      memmove(pcVar19, pcVar8, uVar13); /* compiler REP MOVS byte copy */
      uVar14 = 0;
    }
    iVar15 = param_1 - local_10->field_1C9F->elementSize;
    if (iVar15 < (int)local_10->field_1C97->elementSize) {
      pcVar8 = *(char **)(local_10->field_1C97->growCapacity + iVar15 * 4);
    }
    else {
      pcVar8 = nullptr;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar19 = pcVar8;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    pcVar8 = local_18;
    do {
      pcVar21 = pcVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar21 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar21;
    } while (cVar1 != '\0');
    pcVar8 = pcVar19 + -uVar13;
    pcVar19 = pcVar21 + -1;
    memmove(pcVar19, pcVar8, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;

    iVar7 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
    pCVar18 = local_10;
    if (iVar7 == 0) {

      local_14 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0
                                    (0x345,(byte *)&local_10->field_1FAF,0,0,0));
    }
    pcVar9 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != nullptr) {
      /* ST_CALLSITE[005AE271]: CALL 0x00402716; direct=00402716 StartSystemTy::LoadMapData */
      StartSystemTy::LoadMapData
                (g_startSystem_0081176C,local_14,pCVar18->array_00BC[0xc].field_01DF);
      cMf32::delete(pcVar9);
    }
    goto LAB_005ae602;
  }
  uVar13 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->array_00BC[0xc].field_01DF == '\x03') &&
     (0 < (int)(local_10->field_1C97->elementSize + local_10->field_1C9F->elementSize))) {
    pcVar8 = &local_10->field_1DA7;
    do {
      pcVar19 = pcVar8;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    local_18 = &local_10->field_1FAF;
    pcVar8 = pcVar19 + -uVar13;
    pcVar19 = local_18;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar19 = pcVar19 + 4;
    }
    local_c = 1;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar19 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_006b8280(local_18,local_18);
    pcVar8 = local_18;
    if ((int)param_1 < (int)pCVar18->field_1C9F->elementSize) {
      pcVar19 = *(char **)(pCVar18->field_1C9F->growCapacity + param_1 * 4);
    }
    else {
      pcVar19 = nullptr;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar21 = pcVar19;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    pcVar19 = local_18;
    do {
      pcVar20 = pcVar19;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    pcVar19 = pcVar21 + -uVar13;
    pcVar21 = pcVar20 + -1;
    memmove(pcVar21, pcVar19, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    FUN_006b8280(local_18,local_18);
    uVar13 = 0xffffffff;
    pcVar19_mgB = PTR_s_ADDON_0079c060;
    do {
      pcVar19 = pcVar19_mgB;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar19_mgB + 1;
      cVar1 = *pcVar19_mgB;
      pcVar19_mgB = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    do {
      pcVar21 = pcVar8;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar21 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar21;
    } while (cVar1 != '\0');
    pcVar8 = pcVar19 + -uVar13;
    pcVar19 = pcVar21 + -1;
    memmove(pcVar19, pcVar8, uVar13); /* compiler REP MOVS byte copy */
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;

    local_EAX_816 = Library::MSVCRT::__setjmp3(local_100.jumpBuffer,0);
    pCVar18 = local_10;
    if (local_EAX_816 == 0) {

      pcVar9 = STPointerBoundaryCast<cMf32 *>(Library::Ourlib::MF32INT::FUN_006f0ec0
                                  (0x345,(byte *)&local_10->field_1FAF,0,0,0));
      local_14 = pcVar9;
      if (g_dArray_0080C4CB != nullptr) {
        FUN_006b5570(g_dArray_0080C4CB);
      }
      /* ST_CALLSITE[005AE3C8]: CALL 0x0071aa10; direct=0071AA10 Library::Ourlib::MFSARR::mfSarLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__cdecl;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/cMf32;pointer:/char;/int */
      g_dArray_0080C4CB = Library::Ourlib::MFSARR::mfSarLoad(pcVar9,PTR_s_OBJECTIVES_0079c074,0);
      pcVar8 = &CHAR_00h_0080ed16;
      for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
      local_8 = &CHAR_00h_0080ed16;
      puVar10 = cMf32::RecGet(pcVar9,0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      pcVar9 = local_14;
      if (puVar10 == nullptr) {
        local_c = 0;
      }
      iVar15 = local_c;
      local_8 = &DAT_0080874e;
      cMf32::RecGet(local_14,0xc,PTR_DAT_0079c068,(int *)&local_8,0);
      cMf32::delete(pcVar9);
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
        FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      if (g_dArray_0080C4CB == nullptr) {
        g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        /* ST_CALLSITE[005AE501]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
        puVar8_mg1 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
        g_startSystem_0081176C->field_0548 = puVar8_mg1;
      }
      else {
        pcVar4 = g_startSystem_0081176C->field_0034;
        pcVar4->field_007E = 1;
        puVar11 = &pcVar4->field_0x9e;
        *(undefined2 *)puVar11 = 0;
        *puVar11 = DAT_007cc854;
        puVar12 = ccFntTy::FormIndentSarr
                            (g_startSystem_0081176C->field_0034,g_dArray_0080C4CB,
                             " ,.;:!?/\\()[]{}",(uint *)&DAT_007c21ec,
                             g_startSystem_0081176C->field_0544->field_0004 + -0x14,0,0xffffffff,
                             nullptr,1);
        g_startSystem_0081176C->field_0548 = puVar12;
        if (g_startSystem_0081176C->field_0548 == nullptr) {
          /* ST_CALLSITE[005AE4CD]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
          puVar8_mg3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
          g_startSystem_0081176C->field_0548 = puVar8_mg3;
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar15 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar15 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  pCVar18->field_002D = 0x28;
  pCVar18->field_0031 = 1;
  puVar11 = &pCVar18->field_0x1d;
  pCVar18->field_0033 = (short)g_startSystem_0081176C->field_0548[2];
  FUN_006e6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  pCVar18->field_002D = 0x22;
  pCVar18->field_0031 = 0;
  pCVar18->field_0033 = 0;
  FUN_006e6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  pCVar18->field_002D = 0x20;
  pCVar18->field_0031 = (short)(uint)(iVar15 != 0);
  pCVar18->field_0033 = (short)((uint)(iVar15 != 0) >> 0x10);
  FUN_006e6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  iVar5 = pCVar18->array_00BC[0xc].field_01DB;
  if (STField<int>(iVar5,0x2E6) != 0) {
    psVar22 = local_34;
    for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
      psVar22[0] = 0;
      psVar22[1] = 0;
      psVar22 = psVar22 + 2;
    }
    *psVar22 = 0;
    local_34[0] = (-(ushort)(iVar15 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    /* ST_CALLSITE[005AE5FD]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
    MMsgTy::StatePanel(*(MMsgTy **)(iVar5 + 0x2e6),(int)local_34);
  }
LAB_005ae602:
  if ((pCVar18->array_00BC[0xc].field_01DF != '\x03') &&
     (-1 < (int)g_startSystem_0081176C->field_02EC)) {

    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < g_startSystem_0081176C->field_0540) {

    FUN_006b35d0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

