#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  MMsgTy *this_00;
  code *pcVar1;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar2;
  DArrayTy *pDVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  AnonPointee_PrividerTy_1C8E *pAVar7;
  uint *puVar8;
  HoloTy *pHVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_454 [256];
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
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    pDVar3 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,10);
    this_02 = local_10;
    local_10->field_1C92 = &pDVar3->flags;
    Library::DKW::TBL::FUN_006b5aa0(&pDVar3->flags,(char *)&DAT_00807ddd);
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                     (uint)g_cursorClass_00802A30->field_001C);
      }
    }
    puVar4 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    g_startSystem_0081176C->field_002C = puVar4;
    puVar4 = g_startSystem_0081176C->field_002C;
    this_02->field_005D = puVar4;
    FUN_006bc360(puVar4,local_454,(int *)0x0);
    this_02->field_1A5B->field_0140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_454,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
    if (param_2 != '\0') {
      DarkScreen(DAT_0080759c,1,0);
    }
    this_02->field_1A71 = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar2 = thunk_FUN_005daa90(), iVar2 != 0)) {
      param_1 = '\0';
    }
    SetMode(this_02,param_1,'\x01');
    this_02->field_1A60 = this_02->field_1A5F;
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::ShowSprites(this_00);
      this_02->field_1A5B->field_02E6->field_1CAB = this_02->field_0008;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1A77,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1A77 + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
    this_02->field_1A93 = 0x289;
    this_02->field_1A97 = 0x6a;
    this_02->field_1A7F = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B08,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B08 + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
    this_02->field_1B24 = 0x289;
    this_02->field_1B28 = 0x176;
    this_02->field_1B10 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B99,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B99 + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
    iVar2 = 1;
    this_02->field_1BB5 = 0x28e;
    this_02->field_1BB9 = 0x8a;
    puVar4 = this_02->field_005D + 0x14;
    this_02->field_1BA1 = 0;
    uVar5 = FUN_006b4fe0((int)this_02->field_005D);
    puVar4 = (ushort *)
             FUN_006b50c0(0x208,0x143,(uint)this_02->field_005D[7],uVar5,(undefined4 *)puVar4,iVar2)
    ;
    this_02->field_1C82 = puVar4;
    uVar5 = *(uint *)(puVar4 + 10);
    if (uVar5 == 0) {
      uVar5 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar8 = &this_02->field_1C2A;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    uVar5 = 0x67;
    do {
      FUN_006b2330(PTR_008075a8,puVar8,0x31,0x40597f,*(uint *)(this_02->field_1C82 + 2),0x13,
                   (uint)this_02);
      Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar8,0xffffffff,0x7a,uVar5);
      uVar5 = uVar5 + 0x13;
      puVar8 = puVar8 + 1;
    } while ((int)uVar5 < 0x209);
    iVar2 = 1;
    puVar4 = this_02->field_005D + 0x14;
    uVar5 = FUN_006b4fe0((int)this_02->field_005D);
    pAVar7 = (AnonPointee_PrividerTy_1C8E *)
             FUN_006b50c0(0x22e,0x2e,(uint)this_02->field_005D[7],uVar5,(undefined4 *)puVar4,iVar2);
    this_02->field_1C8E = pAVar7;
    uVar5 = pAVar7[1].field_0008;
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)&pAVar7[1].field_0x2 * pAVar7->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar7->field_0008;
    }
    puVar6 = (undefined4 *)FUN_006b4fa0((int)pAVar7);
    for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    ccFntTy::SetSurf(g_startSystem_0081176C->field_0034,(int)this_02->field_1C8E,0,3,1,0x22c,0x14);
    uVar13 = 2;
    iVar12 = -1;
    iVar2 = -2;
    puVar8 = (uint *)LoadResourceString(0x26b5,g_module_00807618);
    ccFntTy::WrStr(g_startSystem_0081176C->field_0034,puVar8,iVar2,iVar12,uVar13);
    pAVar7 = this_02->field_1C8E;
    puVar6 = &this_02->field_1C8A;
    FUN_006b2330(PTR_008075a8,puVar6,0x31,0x4023f6,pAVar7->field_0004,pAVar7->field_0008,
                 (uint)pAVar7);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar6,0xffffffff,0x79,0x197);
    CreateCtrls(this_02,'\x01');
    FUN_006b2330(PTR_008075a8,&local_8,0x32,0x403c74,0x22e,0x145,(uint)this_02);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,local_8,0xffffffff,0x79,0x51);
    pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar9 == (HoloTy *)0x0) {
      pHVar9 = (HoloTy *)0x0;
    }
    else {
      pHVar9->field_0002 = 1;
      pHVar9->field_0000 = 0;
      pHVar9->field_0003 = -1;
      pHVar9->field_0001 = CASE_2;
      pHVar9->field_0007 = 0;
      pHVar9->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar9->field_0xf = 0;
      *(undefined4 *)&pHVar9->field_0x1b = 1;
      pHVar9->field_0013 = 1;
      pHVar9->field_0017 = -1;
      pHVar9->field_0027 = 0;
      pHVar9->field_0023 = 0;
      pHVar9->field_002F = 1;
      pHVar9->field_002B = 1;
    }
    this_02->field_1C96 = pHVar9;
    if (pHVar9 != (HoloTy *)0x0) {
      uVar10 = 0;
      cVar11 = '\x01';
      uVar5 = 0x10;
      iVar12 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x79,0x51,0x22e,0x145);
      uVar5 = HoloTy::Init(this_02->field_1C96,CASE_2,0x79,0x51,iVar2,iVar12,uVar5,cVar11,uVar10);
      if (uVar5 != 0) {
        pHVar9 = this_02->field_1C96;
        pHVar9->field_0002 = 1;
        pHVar9->field_0017 = pHVar9->field_0013;
        uVar5 = this_02->field_1C96->field_0003;
        if (-1 < (int)uVar5) {
          FUN_006b3af0((int *)PTR_008075a8,uVar5);
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
        puVar8 = &this_02->field_1C2A;
        local_c = 0x16;
        do {
          FUN_006b3af0((int *)PTR_008075a8,*puVar8);
          puVar8 = puVar8 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0((int *)PTR_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->field_1A5F == '\0') {
      FUN_006b2330(PTR_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (uint)&this_02->field_1A5B->field_0140);
      Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,local_8,0xffffffff,0x79,0x197);
      pHVar9 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar9 == (HoloTy *)0x0) {
        pHVar9 = (HoloTy *)0x0;
      }
      else {
        pHVar9->field_0002 = 1;
        pHVar9->field_0000 = 0;
        pHVar9->field_0003 = -1;
        pHVar9->field_0001 = CASE_2;
        pHVar9->field_0007 = 0;
        pHVar9->field_000B = (void *)0x0;
        *(undefined4 *)&pHVar9->field_0xf = 0;
        *(undefined4 *)&pHVar9->field_0x1b = 1;
        pHVar9->field_0013 = 1;
        pHVar9->field_0017 = -1;
        pHVar9->field_0027 = 0;
        pHVar9->field_0023 = 0;
        pHVar9->field_002F = 1;
        pHVar9->field_002B = 1;
      }
      this_02->field_1C9A = pHVar9;
      if (pHVar9 != (HoloTy *)0x0) {
        uVar10 = 0;
        cVar11 = '\x01';
        uVar5 = 0x10;
        iVar12 = 1;
        iVar2 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x79,0x197,0x22e,0x2e);
        uVar5 = HoloTy::Init(this_02->field_1C9A,CASE_1,0x79,0x197,iVar2,iVar12,uVar5,cVar11,uVar10)
        ;
        if (uVar5 != 0) {
          pHVar9 = this_02->field_1C9A;
          pHVar9->field_0002 = 1;
          pHVar9->field_0017 = pHVar9->field_0013;
          uVar5 = this_02->field_1C9A->field_0003;
          if (-1 < (int)uVar5) {
            FUN_006b3af0((int *)PTR_008075a8,uVar5);
          }
          FUN_006b3af0((int *)PTR_008075a8,*puVar6);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0((int *)PTR_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0((int *)PTR_008075a8,*puVar6);
    }
    this_01 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
      iVar2 = g_cursorClass_00802A30->field_00C9;
      iVar12 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = 1;
      this_01->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,iVar12,iVar2);
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = -1;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,(int *)PTR_008075a8,(int)this_02->field_005D,10,2);
    }
    pHVar9 = this_02->field_1C96;
    if (((pHVar9 != (HoloTy *)0x0) && (pHVar9->field_0000 != '\0')) && (-1 < pHVar9->field_0003)) {
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pHVar9->field_0003);
    }
    pHVar9 = this_02->field_1C9A;
    if (((pHVar9 != (HoloTy *)0x0) && (pHVar9->field_0000 != '\0')) && (-1 < pHVar9->field_0003)) {
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,pHVar9->field_0003);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar12 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0xac,0,iVar2,"%s",
                              "PrividerTy::InitPrivider");
  if (iVar12 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\prov_obj.cpp",0xac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

