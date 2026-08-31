#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  StartSystemTy *pSVar1;
  MMsgTy *this_00;
  AnonPointee_PrividerTy_1C8E *pAVar2;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar2;
  DArrayTy *pDVar4;
  ushort *puVar4;
  int iVar4_mg0;
  int local_EAX_689;
  RecoveredRecord_006B4FA0_DAC3A217 *pRVar5;
  uint *puVar6;
  int uVar5;
  ccFntTy *resourceString;
  HoloTy *pHVar7;
  RecoveredRecord_005AACB0_2533FD69 *pRVar8;
  uint uVar10;
  uint local_EAX_1709;
  int iVar14;
  uint uVar9;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  char cVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  uint local_454 [256];
  InternalExceptionFrame local_54;
  PrividerTy *local_10;
  int local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar2 == 0) {
    if (DAT_008067a0 != '\0') {
      /* ST_CALLSITE[005B9B56]: CALL dword ptr [0x0085c074] */
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      /* ST_CALLSITE[005B9B61]: CALL dword ptr [0x0085bffc] */
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,1,10);
    this_02 = local_10;
    local_10->field_1C92 = pDVar4;

    Library::DKW::TBL::FUN_006b5aa0(pDVar4,&CHAR_00h_00807ddd);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {

        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    puVar4 = FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    g_startSystem_0081176C->field_002C = puVar4;
    puVar16 = g_startSystem_0081176C->field_002C;
    this_02->field_005D = puVar16;

    FUN_006bc360(puVar16,local_454,nullptr);
    (this_02->array_00BC[0xc].field_01DB)->field_0140 = 0x1f;

    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_454,0,0x100,0x8b,0x15,
               (undefined4 *)&(this_02->array_00BC[0xc].field_01DB)->field_0x144);
    if (param_2 != '\0') {
      /* ST_CALLSITE[005B9C4E]: CALL 0x00401d43; direct=00401D43 DarkScreen */
      DarkScreen(g_dDXContext_0080759C,1,0);
    }
    this_02->array_00BC[0xc].field_01F1 = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') &&
       /* ST_CALLSITE[005B9C76]: CALL 0x0040583a; direct=0040583A StartSystemTy::sub_005DAA90 */
       (iVar4_mg0 = StartSystemTy::sub_005DAA90(g_startSystem_0081176C), iVar4_mg0 != 0)) {
      param_1 = '\0';
    }
    /* ST_CALLSITE[005B9C8A]: CALL 0x00403bc5; direct=00403BC5 PrividerTy::SetMode */
    SetMode(this_02,param_1,'\x01');
    pSVar1 = this_02->array_00BC[0xc].field_01DB;
    this_02->array_00BC[0xc].field_01E0 = this_02->array_00BC[0xc].field_01DF;
    this_00 = pSVar1->field_02E6;
    if (this_00 != nullptr) {
      /* ST_CALLSITE[005B9CAB]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
      MMsgTy::ShowSprites(this_00);
      (this_02->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = this_02->field_0008;
    }
    puVar6 = &this_02->array_00BC[0xc].field_01F7;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)puVar6,(int *)g_ddxContext_008075A8,0x31,'\a',nullptr,0,0);
    /* ST_CALLSITE[005B9CF9]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*puVar6 + 4))
              ((SpriteClassTy *)puVar6,PTR_00806784,7,0,(byte *)"MM_SLDUP",0xffffffff);
    this_02->field_1A93 = 0x289;
    this_02->field_1A97 = 0x6a;
    this_02->field_1A7F = 0;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B08,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005B9D4F]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_02->field_1B08 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    this_02->field_1B24 = 0x289;
    this_02->field_1B28 = 0x176;
    this_02->field_1B10 = 0;

    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B99,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005B9D9A]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(this_02->field_1B99 + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
    iVar18 = 1;
    this_02->field_1BB5 = 0x28e;
    this_02->field_1BB9 = 0x8a;
    puVar16 = this_02->field_005D + 0x14;
    this_02->field_1BA1 = 0;

    local_EAX_689 = FUN_006b4fe0(this_02->field_005D);
    pRVar5 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(FUN_006b50c0(0x208,0x143,(uint)this_02->field_005D[7],local_EAX_689,
                          (undefined4 *)puVar16,iVar18));
    this_02->field_1C82 = (ushort *)pRVar5;
    uVar11 = *(uint *)&pRVar5[1].field_0x4;
    if (uVar11 == 0) {
      uVar11 = ((uint)pRVar5->field_000E * *(int *)&pRVar5->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)&pRVar5->field_0x8;
    }

    puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar5));
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar12 = this_02->field_1C2A;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar11 = 0x67;
    do {

      FUN_006b2330(g_ddxContext_008075A8,puVar12,0x31,0x40597f,*(uint *)(this_02->field_1C82 + 2),
                   0x13,(ushort *)this_02);

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar12,0xffffffff,0x7a,uVar11);
      uVar11 = uVar11 + 0x13;
      puVar12 = puVar12 + 1;
    } while ((int)uVar11 < 0x209);
    iVar18 = 1;
    puVar16 = this_02->field_005D + 0x14;

    uVar5 = FUN_006b4fe0(this_02->field_005D);
    pRVar5 = STPointerBoundaryCast<RecoveredRecord_006B4FA0_DAC3A217 *>(FUN_006b50c0(0x22e,0x2e,(uint)this_02->field_005D[7],uVar5,(undefined4 *)puVar16,iVar18
                         ));
    this_02->field_1C8E = (AnonPointee_PrividerTy_1C8E *)pRVar5;
    uVar11 = *(uint *)&pRVar5[1].field_0x4;
    if (uVar11 == 0) {
      uVar11 = ((uint)pRVar5->field_000E * *(int *)&pRVar5->field_0x4 + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)&pRVar5->field_0x8;
    }

    puVar6 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0(pRVar5));
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }

    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_02->field_1C8E,0,3,1,0x22c,0x14);
    uVar11 = 2;
    iVar17 = -1;
    iVar18 = -2;
    /* ST_CALLSITE[005B9F0E]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/ccFntTy; signature=__stdcall;pointer:/ccFntTy;/WinDef.h/UINT;/WinDef.h/HINSTANCE */
    resourceString = LoadResourceString(0x26b5,g_hINSTANCE_00807618);

    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,(char *)resourceString,iVar18,iVar17,uVar11);
    pAVar2 = this_02->field_1C8E;
    puVar12 = &this_02->field_1C8A;

    FUN_006b2330(g_ddxContext_008075A8,puVar12,0x31,0x4023f6,pAVar2->field_0004,pAVar2->field_0008,
                 (ushort *)pAVar2);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar12,0xffffffff,0x79,0x197);
    /* ST_CALLSITE[005B9F65]: CALL 0x0040362f; direct=0040362F PrividerTy::CreateCtrls */
    CreateCtrls(this_02,'\x01');

    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403c74,0x22e,0x145,(ushort *)this_02);

    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x51);
    pHVar7 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar7 == nullptr) {
      pHVar7 = nullptr;
    }
    else {
      pHVar7->field_0002 = 1;
      pHVar7->field_0000 = 0;
      *(undefined4 *)&pHVar7->field_0x3 = 0xffffffff;
      pHVar7->field_0001 = CASE_2;
      pHVar7->field_0007 = nullptr;
      pHVar7->field_000B = nullptr;
      pHVar7->field_000F = 0;
      *(undefined4 *)&pHVar7->field_0x1b = 1;
      pHVar7->field_0013 = 1;
      pHVar7->field_0017 = -1;
      pHVar7->field_0027 = 0;
      pHVar7->field_0023 = 0;
      pHVar7->field_002F = 1;
      pHVar7->field_002B = 1;
    }
    this_02->field_1C96 = pHVar7;
    if (pHVar7 != nullptr) {
      uVar11 = 0;
      cVar15 = '\x01';
      bVar14 = 0x10;
      iVar18 = 1;
      /* ST_CALLSITE[005BA014]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
      pRVar8 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
      /* ST_CALLSITE[005BA026]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar10 = HoloTy::Init(this_02->field_1C96,CASE_2,0x79,0x51,pRVar8,iVar18,bVar14,cVar15,uVar11);
      if (uVar10 != 0) {
        pHVar7 = this_02->field_1C96;
        pHVar7->field_0002 = 1;
        pHVar7->field_0017 = pHVar7->field_0013;
        uVar11 = *(uint *)&this_02->field_1C96->field_0x3;
        if (-1 < (int)uVar11) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
        }
        if (this_02->field_1A7B != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1ABF,this_02->field_1A7B);
        }
        if (this_02->field_1B0C != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1B50,this_02->field_1B0C);
        }
        if (this_02->field_1B9D != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1BE1,this_02->field_1B9D);
        }
        puVar13 = this_02->field_1C2A;
        local_c = 0x16;
        do {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar13);
          puVar13 = puVar13 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->array_00BC[0xc].field_01DF == '\0') {

      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (ushort *)&(this_02->array_00BC[0xc].field_01DB)->field_0140);

      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x197);
      pHVar7 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar7 == nullptr) {
        pHVar7 = nullptr;
      }
      else {
        pHVar7->field_0002 = 1;
        pHVar7->field_0000 = 0;
        *(undefined4 *)&pHVar7->field_0x3 = 0xffffffff;
        pHVar7->field_0001 = CASE_2;
        pHVar7->field_0007 = nullptr;
        pHVar7->field_000B = nullptr;
        pHVar7->field_000F = 0;
        *(undefined4 *)&pHVar7->field_0x1b = 1;
        pHVar7->field_0013 = 1;
        pHVar7->field_0017 = -1;
        pHVar7->field_0027 = 0;
        pHVar7->field_0023 = 0;
        pHVar7->field_002F = 1;
        pHVar7->field_002B = 1;
      }
      this_02->field_1C9A = pHVar7;
      if (pHVar7 != nullptr) {
        uVar11 = 0;
        cVar15 = '\x01';
        bVar14 = 0x10;
        iVar18 = 1;
        /* ST_CALLSITE[005BA1A8]: CALL 0x006bf9f0; direct=006BF9F0 Library::DKW::DDX::FUN_006bf9f0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_005AACB0_2533FD69;pointer:/int;/undefined4;/undefined4;/undefined4;/undefined4 */
        pRVar8 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
        /* ST_CALLSITE[005BA1BD]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
        local_EAX_1709 =
             HoloTy::Init(this_02->field_1C9A,CASE_1,0x79,0x197,pRVar8,iVar18,bVar14,cVar15,uVar11);
        if (local_EAX_1709 != 0) {
          pHVar7 = this_02->field_1C9A;
          pHVar7->field_0002 = 1;
          pHVar7->field_0017 = pHVar7->field_0013;
          uVar11 = *(uint *)&this_02->field_1C9A->field_0x3;
          if (-1 < (int)uVar11) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
          }
          FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
    }
    this_01 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar18 = g_cursorClass_00802A30->field_00C9;
      iVar17 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_01->field_0494 = 0xffff;
      /* ST_CALLSITE[005BA259]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
      CursorClassTy::SetGCType(this_01,CASE_0,iVar17,iVar18);
      /* ST_CALLSITE[005BA26E]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = -1;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                         this_02->field_005D,10,2);
    }
    pHVar7 = this_02->field_1C96;
    if (((pHVar7 != nullptr) && (pHVar7->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar7->field_0x3)) {

      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar7->field_0x3);
    }
    pHVar7 = this_02->field_1C9A;
    if (((pHVar7 != nullptr) && (pHVar7->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar7->field_0x3)) {

      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar7->field_0x3);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar14 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0xac,0,iVar2,"%s",
                              "PrividerTy::InitPrivider");
  if (iVar14 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\prov_obj.cpp",0xac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

