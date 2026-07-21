#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall SIDTy::InitSID(SIDTy *this)

{
  code *pcVar1;
  SIDTy *this_00;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  DArrayTy *pDVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    puVar5 = &local_8->field_1A60;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)puVar5,(int *)PTR_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*puVar5 + 4))(DAT_00806784,7,0,"MM_SID",0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->field_1A68 = 0;
    if (this_00->field_1A64 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar2 = 1;
    puVar4 = PTR_0081176c->field_002C + 0x14;
    uVar3 = FUN_006b4fe0((int)PTR_0081176c->field_002C);
    puVar4 = (ushort *)
             FUN_006b50c0(0x15e,0xa5,(uint)PTR_0081176c->field_002C[7],uVar3,(undefined4 *)puVar4,
                          iVar2);
    this_00->field_1CB8 = puVar4;
    uVar3 = *(uint *)(puVar4 + 10);
    if (uVar3 == 0) {
      uVar3 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = PTR_0081176c->field_002C + 0x14;
    uVar3 = FUN_006b4fe0((int)PTR_0081176c->field_002C);
    puVar4 = (ushort *)
             FUN_006b50c0(0x13e,0xe,(uint)PTR_0081176c->field_002C[7],uVar3,(undefined4 *)puVar4,
                          iVar2);
    this_00->field_1CBC = puVar4;
    uVar3 = *(uint *)(puVar4 + 10);
    if (uVar3 == 0) {
      uVar3 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = PTR_0081176c->field_002C + 0x14;
    uVar3 = FUN_006b4fe0((int)PTR_0081176c->field_002C);
    puVar4 = (ushort *)
             FUN_006b50c0(0x104,0x28,(uint)PTR_0081176c->field_002C[7],uVar3,(undefined4 *)puVar4,
                          iVar2);
    this_00->field_1CC0 = puVar4;
    uVar3 = *(uint *)(puVar4 + 10);
    if (uVar3 == 0) {
      uVar3 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)puVar4);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    PaintExplanation(this_00);
    puVar4 = this_00->field_1CB8;
    puVar5 = &this_00->field_1CB4;
    FUN_006b2330((uint)PTR_008075a8,puVar5,0x2e,0x4023f6,*(uint *)(puVar4 + 2),*(uint *)(puVar4 + 4)
                 ,(uint)puVar4);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*puVar5,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0((int *)PTR_008075a8,*puVar5);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B01,(int *)PTR_008075a8,0x2d,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B01 + 4))(DAT_00806784,7,0,"SID_SLDUP",0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B92,(int *)PTR_008075a8,0x2d,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B92 + 4))(DAT_00806784,7,0,"SID_SLDDN",0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1C23,(int *)PTR_008075a8,0x2d,'\a',(undefined4 *)0x0
               ,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1C23 + 4))(DAT_00806784,7,0,"SID_SLDT",0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
    this_00->field_1CD0 = &pDVar6->flags;
    Library::DKW::TBL::FUN_006b6020(&pDVar6->flags,0,&DAT_008016a0);
    iVar2 = 1;
    puVar4 = this_00->field_1CB8 + 0x14;
    uVar3 = FUN_006b4fe0((int)this_00->field_1CB8);
    puVar4 = (ushort *)
             FUN_006b50c0(0x156,0xe,(uint)this_00->field_1CB8[7],uVar3,(undefined4 *)puVar4,iVar2);
    this_00->field_1CC8 = puVar4;
    this_00->field_0065 = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\sid_obj.cpp",0x49,0,iVar2,"%s",
                             "SIDTy::InitSID");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\sid_obj.cpp",0x49);
  return;
}

