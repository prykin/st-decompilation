#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  ushort *puVar1;
  MMsgTy *this_00;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  AnonPointee_PrividerTy_1C82 *pAVar8;
  undefined4 *puVar9;
  HoloTy *pHVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  undefined4 local_454 [256];
  InternalExceptionFrame local_54;
  PrividerTy *local_10;
  int local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar4 == 0) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,10);
    this_02 = local_10;
    local_10->field_1C92 = puVar5;
    Library::DKW::TBL::FUN_006b5aa0(puVar5,(char *)&DAT_00807ddd);
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    uVar6 = FUN_0070a9f0(g_cMf32_00806780,s_LOADSINGLE_007cc79c,0,1);
    PTR_0081176c->field_002C = uVar6;
    puVar1 = (ushort *)PTR_0081176c->field_002C;
    this_02->field_005D = puVar1;
    FUN_006bc360(puVar1,local_454,(int *)0x0);
    *(undefined4 *)&this_02->field_1A5B->field_0x140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_454,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
    if (param_2 != '\0') {
      DarkScreen(DAT_0080759c,1,0);
    }
    this_02->field_1A71 = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar4 = thunk_FUN_005daa90(), iVar4 != 0)) {
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
              ((SpriteClassTy *)&this_02->field_1A77,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1A77 + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    this_02->field_1A93 = 0x289;
    this_02->field_1A97 = 0x6a;
    this_02->field_1A7F = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B08,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B08 + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    this_02->field_1B24 = 0x289;
    this_02->field_1B28 = 0x176;
    this_02->field_1B10 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B99,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B99 + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    iVar4 = 1;
    this_02->field_1BB5 = 0x28e;
    this_02->field_1BB9 = 0x8a;
    puVar9 = (undefined4 *)(this_02->field_005D + 0x28);
    this_02->field_1BA1 = 0;
    uVar7 = FUN_006b4fe0(this_02->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar8 = (AnonPointee_PrividerTy_1C82 *)
             FUN_006b50c0(0x208,0x143,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar7,puVar9,
                          iVar4);
    this_02->field_1C82 = pAVar8;
    uVar7 = pAVar8->field_0014;
    if (uVar7 == 0) {
      uVar7 = ((uint)(ushort)pAVar8->field_000E * pAVar8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar8->field_0008;
    }
    puVar9 = (undefined4 *)FUN_006b4fa0((int)pAVar8);
    for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar5 = &this_02->field_1C2A;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar7 = 0x67;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x40597f,this_02->field_1C82->field_0004,0x13,
                   (uint)this_02);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x7a,uVar7);
      uVar7 = uVar7 + 0x13;
      puVar5 = puVar5 + 1;
    } while ((int)uVar7 < 0x209);
    iVar4 = 1;
    puVar9 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar7 = FUN_006b4fe0(this_02->field_005D);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = FUN_006b50c0(0x22e,0x2e,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar7,puVar9,iVar4)
    ;
    this_02->field_1C8E = iVar4;
    uVar7 = *(uint *)(iVar4 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    ccFntTy::SetSurf(PTR_0081176c->field_0034,this_02->field_1C8E,0,3,1,0x22c,0x14);
    uVar6 = 2;
    iVar13 = -1;
    iVar4 = -2;
    puVar5 = (uint *)LoadResourceString(0x26b5,HINSTANCE_00807618);
    ccFntTy::WrStr(PTR_0081176c->field_0034,puVar5,iVar4,iVar13,uVar6);
    uVar7 = this_02->field_1C8E;
    puVar9 = &this_02->field_1C8A;
    FUN_006b2330((uint)DAT_008075a8,puVar9,0x31,0x4023f6,*(uint *)(uVar7 + 4),*(uint *)(uVar7 + 8),
                 uVar7);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar9,0xffffffff,0x79,0x197);
    CreateCtrls(this_02,'\x01');
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403c74,0x22e,0x145,(uint)this_02);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x51);
    pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar10 == (HoloTy *)0x0) {
      pHVar10 = (HoloTy *)0x0;
    }
    else {
      pHVar10->field_0002 = 1;
      pHVar10->field_0000 = 0;
      pHVar10->field_0003 = 0xffffffff;
      pHVar10->field_0001 = CASE_2;
      pHVar10->field_0007 = 0;
      pHVar10->field_000B = 0;
      *(undefined4 *)&pHVar10->field_0xf = 0;
      *(undefined4 *)&pHVar10->field_0x1b = 1;
      pHVar10->field_0013 = 1;
      pHVar10->field_0017 = 0xffffffff;
      pHVar10->field_0027 = 0;
      pHVar10->field_0023 = 0;
      pHVar10->field_002F = 1;
      pHVar10->field_002B = 1;
    }
    this_02->field_1C96 = pHVar10;
    if (pHVar10 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar12 = '\x01';
      uVar7 = 0x10;
      iVar13 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar7 = HoloTy::Init(this_02->field_1C96,CASE_2,0x79,0x51,iVar4,iVar13,uVar7,cVar12,uVar11);
      if (uVar7 != 0) {
        pHVar10 = this_02->field_1C96;
        pHVar10->field_0002 = 1;
        pHVar10->field_0017 = pHVar10->field_0013;
        uVar7 = this_02->field_1C96->field_0003;
        if (-1 < (int)uVar7) {
          FUN_006b3af0(DAT_008075a8,uVar7);
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
        puVar5 = &this_02->field_1C2A;
        local_c = 0x16;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar5);
          puVar5 = puVar5 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->field_1A5F == '\0') {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (uint)&this_02->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar10 == (HoloTy *)0x0) {
        pHVar10 = (HoloTy *)0x0;
      }
      else {
        pHVar10->field_0002 = 1;
        pHVar10->field_0000 = 0;
        pHVar10->field_0003 = 0xffffffff;
        pHVar10->field_0001 = CASE_2;
        pHVar10->field_0007 = 0;
        pHVar10->field_000B = 0;
        *(undefined4 *)&pHVar10->field_0xf = 0;
        *(undefined4 *)&pHVar10->field_0x1b = 1;
        pHVar10->field_0013 = 1;
        pHVar10->field_0017 = 0xffffffff;
        pHVar10->field_0027 = 0;
        pHVar10->field_0023 = 0;
        pHVar10->field_002F = 1;
        pHVar10->field_002B = 1;
      }
      this_02->field_1C9A = pHVar10;
      if (pHVar10 != (HoloTy *)0x0) {
        uVar11 = 0;
        cVar12 = '\x01';
        uVar7 = 0x10;
        iVar13 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar7 = HoloTy::Init(this_02->field_1C9A,CASE_1,0x79,0x197,iVar4,iVar13,uVar7,cVar12,uVar11)
        ;
        if (uVar7 != 0) {
          pHVar10 = this_02->field_1C9A;
          pHVar10->field_0002 = 1;
          pHVar10->field_0017 = pHVar10->field_0013;
          uVar7 = this_02->field_1C9A->field_0003;
          if (-1 < (int)uVar7) {
            FUN_006b3af0(DAT_008075a8,uVar7);
          }
          FUN_006b3af0(DAT_008075a8,*puVar9);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0(DAT_008075a8,*puVar9);
    }
    this_01 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar6 = PTR_00802a30->field_00C9;
      uVar2 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_01->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar6);
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_0xd2 = 0;
      *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_02->field_005D,10,2);
    }
    pHVar10 = this_02->field_1C96;
    if (((pHVar10 != (HoloTy *)0x0) && (pHVar10->field_0000 != '\0')) &&
       (-1 < (int)pHVar10->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar10->field_0003);
    }
    pHVar10 = this_02->field_1C9A;
    if (((pHVar10 != (HoloTy *)0x0) && (pHVar10->field_0000 != '\0')) &&
       (-1 < (int)pHVar10->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar10->field_0003);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar13 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xac,0,iVar4,&DAT_007a4ccc,
                              s_PrividerTy__InitPrivider_007ccda0);
  if (iVar13 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

