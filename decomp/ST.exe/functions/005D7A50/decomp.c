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
  AnonPointee_SIDTy_1CB8 *pAVar4;
  undefined4 *puVar5;
  AnonPointee_SIDTy_1CBC *pAVar6;
  AnonPointee_SIDTy_1CC0 *pAVar7;
  AnonPointee_SIDTy_1CD0 *pAVar8;
  AnonPointee_SIDTy_1CC8 *pAVar9;
  int iVar10;
  uint uVar11;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    puVar5 = &local_8->field_1A60;
    SpriteClassTy::InitSprite((SpriteClassTy *)puVar5,DAT_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*puVar5 + 4))(DAT_00806784,7,0,s_MM_SID_007cd620,0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->field_1A68 = 0;
    if (this_00->field_1A64 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar2 = 1;
    puVar5 = (undefined4 *)(PTR_0081176c->field_002C + 0x28);
    uVar3 = FUN_006b4fe0(PTR_0081176c->field_002C);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar4 = (AnonPointee_SIDTy_1CB8 *)
             FUN_006b50c0(0x15e,0xa5,(uint)*(ushort *)(PTR_0081176c->field_002C + 0xe),uVar3,puVar5,
                          iVar2);
    this_00->field_1CB8 = pAVar4;
    uVar3 = pAVar4[1].field_0004;
    if (uVar3 == 0) {
      uVar3 = ((uint)(ushort)pAVar4->field_000E * pAVar4->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar4->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar4);
    for (uVar11 = uVar3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(PTR_0081176c->field_002C + 0x28);
    uVar3 = FUN_006b4fe0(PTR_0081176c->field_002C);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar6 = (AnonPointee_SIDTy_1CBC *)
             FUN_006b50c0(0x13e,0xe,(uint)*(ushort *)(PTR_0081176c->field_002C + 0xe),uVar3,puVar5,
                          iVar2);
    this_00->field_1CBC = pAVar6;
    uVar3 = pAVar6->field_0014;
    if (uVar3 == 0) {
      uVar3 = ((uint)(ushort)pAVar6->field_000E * pAVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar6->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar6);
    for (uVar11 = uVar3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(PTR_0081176c->field_002C + 0x28);
    uVar3 = FUN_006b4fe0(PTR_0081176c->field_002C);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar7 = (AnonPointee_SIDTy_1CC0 *)
             FUN_006b50c0(0x104,0x28,(uint)*(ushort *)(PTR_0081176c->field_002C + 0xe),uVar3,puVar5,
                          iVar2);
    this_00->field_1CC0 = pAVar7;
    uVar3 = pAVar7->field_0014;
    if (uVar3 == 0) {
      uVar3 = ((uint)(ushort)pAVar7->field_000E * pAVar7->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar7->field_0008;
    }
    puVar5 = (undefined4 *)FUN_006b4fa0((int)pAVar7);
    for (uVar11 = uVar3 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    PaintExplanation(this_00);
    pAVar4 = this_00->field_1CB8;
    puVar5 = &this_00->field_1CB4;
    FUN_006b2330((uint)DAT_008075a8,puVar5,0x2e,0x4023f6,pAVar4->field_0004,pAVar4->field_0008,
                 (uint)pAVar4);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0(DAT_008075a8,*puVar5);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B01,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B01 + 4))(DAT_00806784,7,0,s_SID_SLDUP_007cd614,0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B92,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B92 + 4))(DAT_00806784,7,0,s_SID_SLDDN_007cd608,0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1C23,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1C23 + 4))(DAT_00806784,7,0,s_SID_SLDT_007cd5fc,0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pAVar8 = (AnonPointee_SIDTy_1CD0 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1CD0 = pAVar8;
    Library::DKW::TBL::FUN_006b6020((uint *)pAVar8,0,&DAT_008016a0);
    iVar2 = 1;
    puVar5 = &this_00->field_1CB8[2].field_0008;
    uVar3 = FUN_006b4fe0((int)this_00->field_1CB8);
    pAVar9 = (AnonPointee_SIDTy_1CC8 *)
             FUN_006b50c0(0x156,0xe,(uint)(ushort)this_00->field_1CB8->field_000E,uVar3,puVar5,iVar2
                         );
    this_00->field_1CC8 = pAVar9;
    this_00->field_0065 = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar10 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49,0,iVar2,&DAT_007a4ccc,
                              s_SIDTy__InitSID_007cd5e8);
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49);
  return;
}

