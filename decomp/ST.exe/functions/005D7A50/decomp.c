
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall SIDTy::InitSID(SIDTy *this)

{
  code *pcVar1;
  SIDTy *this_00;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar2 == 0) {
    puVar4 = &local_8->field_1A60;
    SpriteClassTy::InitSprite((SpriteClassTy *)puVar4,DAT_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*puVar4 + 4))(DAT_00806784,7,0,s_MM_SID_007cd620,0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->field_1A68 = 0;
    if (this_00->field_1A64 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar2 = 1;
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x15e,0xa5,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    this_00->field_1CB8 = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x13e,0xe,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    this_00->field_1CBC = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    iVar2 = 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar4 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar3 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar2 = FUN_006b50c0(0x104,0x28,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar3,
                         puVar4,iVar2);
    this_00->field_1CC0 = iVar2;
    uVar3 = *(uint *)(iVar2 + 0x14);
    if (uVar3 == 0) {
      uVar3 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar4 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0xff;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    PaintExplanation(this_00);
    uVar3 = this_00->field_1CB8;
    puVar4 = &this_00->field_1CB4;
    FUN_006b2330((uint)DAT_008075a8,puVar4,0x2e,0x4023f6,*(uint *)(uVar3 + 4),*(uint *)(uVar3 + 8),
                 uVar3);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0(DAT_008075a8,*puVar4);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B01,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_00->field_1B01 + 4))(DAT_00806784,7,0,s_SID_SLDUP_007cd614,0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1B92,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_00->field_1B92 + 4))(DAT_00806784,7,0,s_SID_SLDDN_007cd608,0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00->field_1C23,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_00->field_1C23 + 4))(DAT_00806784,7,0,s_SID_SLDT_007cd5fc,0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      FUN_006b3af0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    this_00->field_1CD0 = puVar5;
    Library::DKW::TBL::FUN_006b6020(puVar5,0,&DAT_008016a0);
    iVar2 = 1;
    puVar4 = (undefined4 *)(this_00->field_1CB8 + 0x28);
    uVar3 = FUN_006b4fe0(this_00->field_1CB8);
    uVar6 = FUN_006b50c0(0x156,0xe,(uint)*(ushort *)(this_00->field_1CB8 + 0xe),uVar3,puVar4,iVar2);
    this_00->field_1CC8 = uVar6;
    this_00->field_0065 = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49,0,iVar2,&DAT_007a4ccc,
                             s_SIDTy__InitSID_007cd5e8);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49);
  return;
}

