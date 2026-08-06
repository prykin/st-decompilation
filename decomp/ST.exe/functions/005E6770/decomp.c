#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall WaitTy::InitWait(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  StartSystemTy *pSVar2;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  DArrayTy *pDVar4;
  ushort *local_EAX_200;
  ushort *puVar6;
  int uVar7;
  ushort *puVar5;
  undefined4 *puVar7;
  HoloTy *pHVar8;
  uint uVar10;
  uint local_EAX_1420;
  uint local_EAX_1917;
  int iVar12;
  uint uVar9;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  undefined4 local_668 [256];
  undefined4 local_268;
  undefined4 local_1a5;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_17e;
  undefined4 local_171;
  undefined4 local_16d;
  int local_169;
  undefined4 local_6c [7];
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
    local_c->field_1A64 = param_1;
    local_c->field_1A68 = param_2;
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    this_01->field_1AF0 = pDVar4;
    if ((DAT_00811768 == '\x01') || (DAT_008067a0 != '\0')) {
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
    puVar5 = g_startSystem_0081176C->field_002C;
    this_01->field_005D = puVar5;
    FUN_006bc360(puVar5,local_668,nullptr);
    this_01->field_1A5B->field_0140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_668,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
    puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
    DibPut((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
           (byte *)puVar6);
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    FUN_006b4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar4->flags;
    if (g_startSystem_0081176C->field_0389 != 0) {
      this_01->field_002D = 0x28;
      *(undefined2 *)&this_01->field_0x31 = 1;
      *(short *)&this_01->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
      FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x22;
      *(undefined2 *)&this_01->field_0x33 = 0;
      *(undefined2 *)&this_01->field_0x31 = 0;
      FUN_006e6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
    }
    PaintWait(this_01,'\x01');
    iVar16 = 1;
    puVar5 = this_01->field_005D + 0x14;
    uVar7 = FUN_006b4fe0((int)this_01->field_005D);
    puVar5 = (ushort *)
             FUN_006b50c0(0x1e4,399,(uint)this_01->field_005D[7],uVar7,(undefined4 *)puVar5,iVar16);
    this_01->field_1AEC = puVar5;
    uVar11 = *(uint *)(puVar5 + 10);
    if (uVar11 == 0) {
      uVar11 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar5 + 4);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0((int *)puVar5);
    for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    uVar9 = 0x3f;
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar12 = this_01->field_1A94;
    do {
      FUN_006b2330(g_ddxContext_008075A8,puVar12,0x31,0x402211,*(uint *)(this_01->field_1AEC + 2),
                   0x13,(ushort *)this_01);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar12,0xffffffff,0x114,uVar9);
      FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar12);
      uVar9 = uVar9 + 0x13;
      puVar12 = puVar12 + 1;
    } while ((int)uVar9 < 0x1e1);
    CreateCtrls(this_01);
    FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x204,0x19d,
                 (ushort *)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
    pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar8 == nullptr) {
      pHVar8 = nullptr;
    }
    else {
      pHVar8->field_0002 = 1;
      pHVar8->field_0000 = 0;
      *(undefined4 *)&pHVar8->field_0x3 = 0xffffffff;
      pHVar8->field_0001 = CASE_2;
      pHVar8->field_0007 = nullptr;
      pHVar8->field_000B = nullptr;
      pHVar8->field_000F = 0;
      *(undefined4 *)&pHVar8->field_0x1b = 1;
      pHVar8->field_0013 = 1;
      pHVar8->field_0017 = -1;
      pHVar8->field_0027 = 0;
      pHVar8->field_0023 = 0;
      pHVar8->field_002F = 1;
      pHVar8->field_002B = 1;
    }
    this_01->field_1AF8 = pHVar8;
    if (pHVar8 != nullptr) {
      uVar11 = 0;
      cVar15 = '\x01';
      bVar14 = 0x10;
      iVar13 = 1;
      iVar16 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
      uVar10 = HoloTy::Init(this_01->field_1AF8,CASE_2,0x112,0x38,iVar16,iVar13,bVar14,cVar15,uVar11
                           );
      if (uVar10 != 0) {
        pHVar8 = this_01->field_1AF8;
        pHVar8->field_0002 = 1;
        pHVar8->field_0017 = pHVar8->field_0013;
        uVar11 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar11) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    if ((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) {
      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   (ushort *)&this_01->field_1A5B->field_0140);
      Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
      pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar8 == nullptr) {
        pHVar8 = nullptr;
      }
      else {
        pHVar8->field_0002 = 1;
        pHVar8->field_0000 = 0;
        *(undefined4 *)&pHVar8->field_0x3 = 0xffffffff;
        pHVar8->field_0001 = CASE_2;
        pHVar8->field_0007 = nullptr;
        pHVar8->field_000B = nullptr;
        pHVar8->field_000F = 0;
        *(undefined4 *)&pHVar8->field_0x1b = 1;
        pHVar8->field_0013 = 1;
        pHVar8->field_0017 = -1;
        pHVar8->field_0027 = 0;
        pHVar8->field_0023 = 0;
        pHVar8->field_002F = 1;
        pHVar8->field_002B = 1;
      }
      this_01->field_1B00 = pHVar8;
      if (pHVar8 != nullptr) {
        uVar11 = 0;
        cVar15 = '\x01';
        bVar14 = 0x10;
        iVar13 = 1;
        iVar16 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
        local_EAX_1420 =
             HoloTy::Init(this_01->field_1B00,CASE_4,10,0xb4,iVar16,iVar13,bVar14,cVar15,uVar11);
        if (local_EAX_1420 != 0) {
          pHVar8 = this_01->field_1B00;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar11 = *(uint *)&this_01->field_1B00->field_0x3;
          if (-1 < (int)uVar11) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
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
    if (this_01->field_1A64 == 0) {
      FUN_006b2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)&this_01->field_1A5B->field_0140);
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
      pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar8 == nullptr) {
        pHVar8 = nullptr;
      }
      else {
        pHVar8->field_0002 = 1;
        pHVar8->field_0000 = 0;
        *(undefined4 *)&pHVar8->field_0x3 = 0xffffffff;
        pHVar8->field_0001 = CASE_2;
        pHVar8->field_0007 = nullptr;
        pHVar8->field_000B = nullptr;
        pHVar8->field_000F = 0;
        *(undefined4 *)&pHVar8->field_0x1b = 1;
        pHVar8->field_0013 = 1;
        pHVar8->field_0017 = -1;
        pHVar8->field_0027 = 0;
        pHVar8->field_0023 = 0;
        pHVar8->field_002F = 1;
        pHVar8->field_002B = 1;
      }
      this_01->field_1AFC = pHVar8;
      if (pHVar8 != nullptr) {
        uVar11 = 0;
        cVar15 = '\x01';
        bVar14 = 0x10;
        iVar13 = 1;
        iVar16 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        local_EAX_1917 =
             HoloTy::Init(this_01->field_1AFC,CASE_1,200,0x1f1,iVar16,iVar13,bVar14,cVar15,uVar11);
        if (local_EAX_1917 != 0) {
          pHVar8 = this_01->field_1AFC;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar11 = *(uint *)&this_01->field_1AFC->field_0x3;
          if (-1 < (int)uVar11) {
            FUN_006b3af0((int *)g_ddxContext_008075A8,uVar11);
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
    pHVar8 = this_01->field_1AF8;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    pHVar8 = this_01->field_1B00;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    pHVar8 = this_01->field_1AFC;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    sub_005E9A40(this_01);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar16 = g_cursorClass_00802A30->field_00C9;
      iVar13 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar13,iVar16);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    this_01->field_0065 = 3;
    puVar7 = &local_268;
    memset(puVar7, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar7 = (undefined4 *)((byte *)puVar7 + 0x1f8);
    iVar16 = 0;
    pSVar2 = this_01->field_1A5B;
    local_194 = 2;
    local_16d = 2;
    local_198 = this_01->field_0008;
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (pSVar2->field_02E6 != nullptr) {
      puVar7 = local_6c;
      for (iVar16 = 6; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0xffff;
      MMsgTy::ShowSprites(pSVar2->field_02E6);
      this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
      MMsgTy::SetPanel(this_01->field_1A5B->field_02E6,0,(int)&local_268,0,0);
      MMsgTy::StatePanel(this_01->field_1A5B->field_02E6,(int)local_6c);
    }
    thunk_FUN_00568bc0(&g_sound,0);
    if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,nullptr);
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

