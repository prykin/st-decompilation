#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall SIDTy::InitSID(SIDTy *this)

{
  uint *puVar1;
  SIDTy *this_00;
  int iVar3;
  int local_EAX_181;
  ushort *puVar3;
  undefined4 *puVar4;
  int uVar3;
  int local_EAX_410;
  DArrayTy *pDVar5;
  int local_EAX_923;
  int iVar8;
  uint uVar6;
  uint uVar7;
  int iVar9;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    puVar4 = &local_8->field_1A60;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)puVar4,(int *)g_ddxContext_008075A8,0x2f,'\a',nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*puVar4 + 4))(PTR_00806784,7,0,"MM_SID",0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->field_1A68 = 0;
    if (this_00->field_1A64 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar9 = 1;
    puVar3 = g_startSystem_0081176C->field_002C + 0x14;
    local_EAX_181 = FUN_006b4fe0((int)g_startSystem_0081176C->field_002C);
    puVar3 = (ushort *)
             FUN_006b50c0(0x15e,0xa5,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_181,
                          (undefined4 *)puVar3,iVar9);
    this_00->field_1CB8 = puVar3;
    uVar7 = *(uint *)(puVar3 + 10);
    if (uVar7 == 0) {
      uVar7 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar3 + 4);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0((int *)puVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar9 = 1;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar3 = g_startSystem_0081176C->field_002C + 0x14;
    uVar3 = FUN_006b4fe0((int)g_startSystem_0081176C->field_002C);
    puVar3 = (ushort *)
             FUN_006b50c0(0x13e,0xe,(uint)g_startSystem_0081176C->field_002C[7],uVar3,
                          (undefined4 *)puVar3,iVar9);
    this_00->field_1CBC = puVar3;
    uVar7 = *(uint *)(puVar3 + 10);
    if (uVar7 == 0) {
      uVar7 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar3 + 4);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0((int *)puVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar9 = 1;
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar3 = g_startSystem_0081176C->field_002C + 0x14;
    local_EAX_410 = FUN_006b4fe0((int)g_startSystem_0081176C->field_002C);
    puVar3 = (ushort *)
             FUN_006b50c0(0x104,0x28,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_410,
                          (undefined4 *)puVar3,iVar9);
    this_00->field_1CC0 = puVar3;
    uVar7 = *(uint *)(puVar3 + 10);
    if (uVar7 == 0) {
      uVar7 = ((uint)puVar3[7] * *(int *)(puVar3 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar3 + 4);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0((int *)puVar3);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    PaintExplanation(this_00);
    puVar3 = this_00->field_1CB8;
    puVar1 = &this_00->field_1CB4;
    FUN_006b2330(g_ddxContext_008075A8,puVar1,0x2e,0x4023f6,*(uint *)(puVar3 + 2),
                 *(uint *)(puVar3 + 4),puVar3);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar1,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar1);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B01,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B01 + 4))(PTR_00806784,7,0,"SID_SLDUP",0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B92,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B92 + 4))(PTR_00806784,7,0,"SID_SLDDN",0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1C23,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1C23 + 4))(PTR_00806784,7,0,"SID_SLDT",0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,1,1);
    this_00->field_1CD0 = pDVar5;
    Library::DKW::TBL::FUN_006b6020(pDVar5,0,&DAT_008016a0);
    iVar9 = 1;
    puVar3 = this_00->field_1CB8 + 0x14;
    local_EAX_923 = FUN_006b4fe0((int)this_00->field_1CB8);
    puVar3 = (ushort *)
             FUN_006b50c0(0x156,0xe,(uint)this_00->field_1CB8[7],local_EAX_923,(undefined4 *)puVar3,
                          iVar9);
    this_00->field_1CC8 = puVar3;
    this_00->field_0065 = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x49,0,iVar3,"%s",
                             "SIDTy::InitSID");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x49);
  return;
}

