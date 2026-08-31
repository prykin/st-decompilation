#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall WaitTy::InitWait(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  DArrayTy *pDVar3;
  ushort *local_EAX_200;
  RecoveredRecordView_006B84D0_87AF9D9B *puVar6;
  uint *puVar4_mg0;
  int uVar7;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar4;
  uint *puVar5;
  HoloTy *pHVar6;
  RecoveredRecord_005AACB0_2533FD69 *pRVar7;
  uint uVar10;
  uint local_EAX_1420;
  uint local_EAX_1917;
  int iVar12;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  byte bVar12;
  char cVar13;
  ushort *puVar14;
  int iVar15;
  uint local_668 [256];
  uint local_268;
  uint local_1a5;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_17e;
  uint local_171;
  uint local_16d;
  int local_169;
  uint local_6c [7];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;

  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar4 == 0) {
    _DAT_0080f32e = 0;
    local_c->array_00BC[0xc].field_01E4 = param_1;
    local_c->array_00BC[0xc].field_01E8 = param_2;
    pDVar3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_01->field_1AF0 = pDVar3;
    if ((DAT_00811768 == '\x01') || (DAT_008067a0 != '\0')) {
      /* ST_CALLSITE[005E67F0]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,1,0);
    }
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    local_EAX_200 = FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    g_startSystem_0081176C->field_002C = local_EAX_200;
    puVar14 = g_startSystem_0081176C->field_002C;
    this_01->field_005D = puVar14;

    FUN_006bc360(puVar14,local_668,nullptr);
    *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x140) = 0x1f;

    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_668,0,0x100,0x8b,0x15,
               (undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x144));
    /* ST_CALLSITE[005E68A9]: CALL 0x0070a5a0; direct=0070A5A0 Library::Ourlib::MFIMG::mfImgLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/cMf32;/byte;pointer:/char;/byte;/int */
    puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
    /* ST_CALLSITE[005E68BF]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',puVar6);
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    FUN_006b4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    /* ST_CALLSITE[005E6903]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/uint; signature=__stdcall;pointer:/uint;pointer:/SubmarineTitans/Recovered/DArrayTy;/uint;/uint */
    puVar4_mg0 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = puVar4_mg0;
    if (g_startSystem_0081176C->field_0389 != 0) {
      this_01->field_002D = 0x28;
      this_01->field_0031 = 1;
      this_01->field_0033 = (short)g_startSystem_0081176C->field_0548[2];
      FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x22;
      this_01->field_0033 = 0;
      this_01->field_0031 = 0;
      FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
    }
    /* ST_CALLSITE[005E6985]: CALL 0x004043f4; direct=004043F4 WaitTy::PaintWait */
    PaintWait(this_01,'\x01');
    iVar15 = 1;
    puVar14 = this_01->field_005D + 0x14;

    uVar7 = FUN_006b4fe0(this_01->field_005D);
    pRVar4 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(FUN_006b50c0(0x1e4,399,(uint)this_01->field_005D[7],uVar7,(undefined4 *)puVar14,iVar15));
    this_01->field_1AEC = (ushort *)pRVar4;
    uVar9 = *(uint *)&pRVar4[1].field_0x4;
    if (uVar9 == 0) {
      uVar9 = ((uint)pRVar4->field_000E * *(int *)&pRVar4->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)&pRVar4->field_0x8;
    }

    puVar5 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar4));
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    uVar8 = 0x3f;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar11 = this_01->field_1A94;
    do {

      FUN_006b2330(g_ddxContext_008075A8,puVar11,0x31,0x402211,*(uint *)(this_01->field_1AEC + 2),
                   0x13,(ushort *)this_01);

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar11,0xffffffff,0x114,uVar8);
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar11);
      uVar8 = uVar8 + 0x13;
      puVar11 = puVar11 + 1;
    } while ((int)uVar8 < 0x1e1);
    /* ST_CALLSITE[005E6A59]: CALL 0x00402941; direct=00402941 WaitTy::CreateCtrls */
    CreateCtrls(this_01);

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x204,0x19d,
                 (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar6 == nullptr) {
      pHVar6 = nullptr;
    }
    else {
      pHVar6->field_0002 = 1;
      pHVar6->field_0000 = 0;
      *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
      pHVar6->field_0001 = CASE_2;
      pHVar6->field_0007 = nullptr;
      pHVar6->field_000B = nullptr;
      pHVar6->field_000F = 0;
      *(undefined4 *)&pHVar6->field_0x1b = 1;
      pHVar6->field_0013 = 1;
      pHVar6->field_0017 = -1;
      pHVar6->field_0027 = 0;
      pHVar6->field_0023 = 0;
      pHVar6->field_002F = 1;
      pHVar6->field_002B = 1;
    }
    this_01->field_1AF8 = pHVar6;
    if (pHVar6 != nullptr) {
      uVar9 = 0;
      cVar13 = '\x01';
      bVar12 = 0x10;
      iVar15 = 1;
      /* ST_CALLSITE[005E6B16]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar7 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
      /* ST_CALLSITE[005E6B2B]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar10 = HoloTy::Init(this_01->field_1AF8,CASE_2,0x112,0x38,pRVar7,iVar15,bVar12,cVar13,uVar9);
      if (uVar10 != 0) {
        pHVar6 = this_01->field_1AF8;
        pHVar6->field_0002 = 1;
        pHVar6->field_0017 = pHVar6->field_0013;
        uVar9 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar9) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    if ((this_01->array_00BC[0xc].field_01E4 == 0) || (this_01->array_00BC[0xc].field_01E8 != 0)) {

      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
      pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar6 == nullptr) {
        pHVar6 = nullptr;
      }
      else {
        pHVar6->field_0002 = 1;
        pHVar6->field_0000 = 0;
        *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
        pHVar6->field_0001 = CASE_2;
        pHVar6->field_0007 = nullptr;
        pHVar6->field_000B = nullptr;
        pHVar6->field_000F = 0;
        *(undefined4 *)&pHVar6->field_0x1b = 1;
        pHVar6->field_0013 = 1;
        pHVar6->field_0017 = -1;
        pHVar6->field_0027 = 0;
        pHVar6->field_0023 = 0;
        pHVar6->field_002F = 1;
        pHVar6->field_002B = 1;
      }
      this_01->field_1B00 = pHVar6;
      if (pHVar6 != nullptr) {
        uVar9 = 0;
        cVar13 = '\x01';
        bVar12 = 0x10;
        iVar15 = 1;
        /* ST_CALLSITE[005E6CE7]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
        pRVar7 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
        /* ST_CALLSITE[005E6CFC]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        local_EAX_1420 =
             HoloTy::Init(this_01->field_1B00,CASE_4,10,0xb4,pRVar7,iVar15,bVar12,cVar13,uVar9);
        if (local_EAX_1420 != 0) {
          pHVar6 = this_01->field_1B00;
          pHVar6->field_0002 = 1;
          pHVar6->field_0017 = pHVar6->field_0013;
          uVar9 = *(uint *)&this_01->field_1B00->field_0x3;
          if (-1 < (int)uVar9) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
          }
          if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
            FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,
                         g_startSystem_0081176C->field_0391);
          }
          if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
            FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,
                         g_startSystem_0081176C->field_0422);
          }
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
            FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,
                         g_startSystem_0081176C->field_04B3);
          }
          FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }

      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
    }
    if (this_01->array_00BC[0xc].field_01E4 == 0) {

      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)(this_01->array_00BC[0xc].field_01DB + 0x140));

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,200,0x1f1);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
      pHVar6 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar6 == nullptr) {
        pHVar6 = nullptr;
      }
      else {
        pHVar6->field_0002 = 1;
        pHVar6->field_0000 = 0;
        *(undefined4 *)&pHVar6->field_0x3 = 0xffffffff;
        pHVar6->field_0001 = CASE_2;
        pHVar6->field_0007 = nullptr;
        pHVar6->field_000B = nullptr;
        pHVar6->field_000F = 0;
        *(undefined4 *)&pHVar6->field_0x1b = 1;
        pHVar6->field_0013 = 1;
        pHVar6->field_0017 = -1;
        pHVar6->field_0027 = 0;
        pHVar6->field_0023 = 0;
        pHVar6->field_002F = 1;
        pHVar6->field_002B = 1;
      }
      this_01->field_1AFC = pHVar6;
      if (pHVar6 != nullptr) {
        uVar9 = 0;
        cVar13 = '\x01';
        bVar12 = 0x10;
        iVar15 = 1;
        /* ST_CALLSITE[005E6ED6]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
        pRVar7 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        /* ST_CALLSITE[005E6EED]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        local_EAX_1917 =
             HoloTy::Init(this_01->field_1AFC,CASE_1,200,0x1f1,pRVar7,iVar15,bVar12,cVar13,uVar9);
        if (local_EAX_1917 != 0) {
          pHVar6 = this_01->field_1AFC;
          pHVar6->field_0002 = 1;
          pHVar6->field_0017 = pHVar6->field_0013;
          uVar9 = *(uint *)&this_01->field_1AFC->field_0x3;
          if (-1 < (int)uVar9) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
          }
          if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
            FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,
                         g_startSystem_0081176C->field_0560);
          }
          if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
            FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,
                         g_startSystem_0081176C->field_05F1);
          }
          FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
          FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }

      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);

      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    if ((DAT_00811768 != '\0') || (DAT_008067a0 != '\0')) {
      thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                         this_01->field_005D,10,2);
    }
    pHVar6 = this_01->field_1AF8;
    if (((pHVar6 != nullptr) && (pHVar6->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar6->field_0x3)) {

      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar6->field_0x3);
    }
    pHVar6 = this_01->field_1B00;
    if (((pHVar6 != nullptr) && (pHVar6->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar6->field_0x3)) {

      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar6->field_0x3);
    }
    pHVar6 = this_01->field_1AFC;
    if (((pHVar6 != nullptr) && (pHVar6->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar6->field_0x3)) {

      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar6->field_0x3);
    }
    /* ST_CALLSITE[005E70D8]: CALL 0x00401b45; direct=00401B45 WaitTy::sub_005E9A40 */
    sub_005E9A40(this_01);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar15 = g_cursorClass_00802A30->field_00C9;
      iVar10 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      /* ST_CALLSITE[005E7108]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(this_00,CASE_0,iVar10,iVar15);
      /* ST_CALLSITE[005E711D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    this_01->field_0065 = 3;
    puVar5 = &local_268;
    memset(puVar5, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar5 = (undefined4 *)((byte *)puVar5 + 0x1f8);
    iVar15 = this_01->array_00BC[0xc].field_01DB;
    local_194 = 2;
    local_16d = 2;
    local_198 = this_01->field_0008;
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (STField<int>(iVar15,0x2E6) != 0) {
      puVar5 = local_6c;
      for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0xffff;
      /* ST_CALLSITE[005E71C5]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
      MMsgTy::ShowSprites(*(MMsgTy **)(iVar15 + 0x2e6));
      *(undefined4 *)(*(int *)(this_01->array_00BC[0xc].field_01DB + 0x2e6) + 0x1cab) =
           this_01->field_0008;
      /* ST_CALLSITE[005E71F5]: CALL 0x00401717; direct=00401717 MMsgTy::SetPanel */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::SetPanel(*(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6),0,(int)&local_268,0
                       ,0);
      /* ST_CALLSITE[005E720A]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      MMsgTy::StatePanel(*(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6),(int)local_6c);
    }
    thunk_FUN_00568bc0(&g_sound,0);
    if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
      SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_0056A130::thunk_FUN_0056a130
                ((RecoveredReceiver_0056A130 *)&g_sound,0x14,'\x02',0,nullptr);
    }
    thunk_FUN_005b6730(this_01,0xb,'\0',-1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;

  iVar12 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xa3,0,iVar4,"%s",
                              "WaitTy::InitWait");
  if (iVar12 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\wait_obj.cpp",0xa3);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

