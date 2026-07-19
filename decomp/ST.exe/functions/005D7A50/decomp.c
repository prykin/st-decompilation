
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall SIDTy::InitSID(SIDTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  SIDTy *pSVar3;
  SIDTy *this_00;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar4 == 0) {
    pSVar3 = local_8 + 0x42;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&pSVar3->field_0x56,DAT_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)&pSVar3->field_0x56 + 4))(DAT_00806784,7,0,s_MM_SID_007cd620,0xffffffff);
    *(undefined4 *)&this_00[0x43].field_0xd = 0x2e;
    *(undefined4 *)((int)&this_00[0x43].field_0010 + 1) = 0x193;
    *(undefined4 *)&this_00[0x42].field_0x5e = 0;
    if (*(uint *)&this_00[0x42].field_0x5a != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)&this_00[0x43].field_0x39,*(uint *)&this_00[0x42].field_0x5a,
                 *(uint *)&this_00[0x42].field_0x5e,*(uint *)&this_00[0x43].field_0xd,
                 *(uint *)((int)&this_00[0x43].field_0010 + 1));
    }
    iVar4 = 1;
    puVar6 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar4 = FUN_006b50c0(0x15e,0xa5,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar5,
                         puVar6,iVar4);
    *(int *)&this_00[0x48].field_0x50 = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    iVar4 = 1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar6 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar4 = FUN_006b50c0(0x13e,0xe,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar5,
                         puVar6,iVar4);
    *(int *)&this_00[0x48].field_0x54 = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    iVar4 = 1;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar6 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar4 = FUN_006b50c0(0x104,0x28,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar5,
                         puVar6,iVar4);
    *(int *)&this_00[0x48].field_0x58 = iVar4;
    uVar5 = *(uint *)(iVar4 + 0x14);
    if (uVar5 == 0) {
      uVar5 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar6 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    PaintExplanation(this_00);
    uVar5 = *(uint *)&this_00[0x48].field_0x50;
    puVar1 = &this_00[0x48].field_0x4c;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar1,0x2e,0x4023f6,*(uint *)(uVar5 + 4),
                 *(uint *)(uVar5 + 8),uVar5);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar1,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0(DAT_008075a8,*(uint *)puVar1);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00[0x44].field_0x2d,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0
               ,0);
    (**(code **)(*(int *)&this_00[0x44].field_0x2d + 4))
              (DAT_00806784,7,0,s_SID_SLDUP_007cd614,0xffffffff);
    *(undefined4 *)&this_00[0x44].field_0x49 = 0x22b;
    *(undefined4 *)&this_00[0x44].field_0x4d = 0x1be;
    *(undefined4 *)&this_00[0x44].field_0x35 = 0;
    if (*(uint *)&this_00[0x44].field_0x31 != 0xffffffff) {
      FUN_006b3af0((int *)this_00[0x45].field_0010,*(uint *)&this_00[0x44].field_0x31);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00[0x45].field_0x59,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0
               ,0);
    (**(code **)(*(int *)&this_00[0x45].field_0x59 + 4))
              (DAT_00806784,7,0,s_SID_SLDDN_007cd608,0xffffffff);
    this_00[0x46].field_0010 = 0x22b;
    *(undefined4 *)&this_00[0x46].field_0x14 = 0x211;
    this_00[0x45].field_0061 = 0;
    if (*(uint *)&this_00[0x45].field_0x5d != 0xffffffff) {
      FUN_006b3af0(*(int **)&this_00[0x46].field_0x3c,*(uint *)&this_00[0x45].field_0x5d);
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_00[0x47].field_0x20,DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0
               ,0);
    (**(code **)(*(int *)&this_00[0x47].field_0x20 + 4))
              (DAT_00806784,7,0,s_SID_SLDT_007cd5fc,0xffffffff);
    *(undefined4 *)&this_00[0x47].field_0x3c = 0x22f;
    *(undefined4 *)&this_00[0x47].field_0x40 = 0x1d3;
    *(undefined4 *)&this_00[0x47].field_0x28 = 0;
    if (*(uint *)&this_00[0x47].field_0x24 != 0xffffffff) {
      FUN_006b3af0(*(int **)&this_00[0x48].field_0x3,*(uint *)&this_00[0x47].field_0x24);
    }
    puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)&this_00[0x49].field_0x3 = puVar7;
    Library::DKW::TBL::FUN_006b6020((int)puVar7,0,&DAT_008016a0);
    iVar4 = 1;
    puVar6 = (undefined4 *)(*(int *)&this_00[0x48].field_0x50 + 0x28);
    uVar5 = FUN_006b4fe0(*(int *)&this_00[0x48].field_0x50);
    uVar8 = FUN_006b50c0(0x156,0xe,(uint)*(ushort *)(*(int *)&this_00[0x48].field_0x50 + 0xe),uVar5,
                         puVar6,iVar4);
    *(undefined4 *)&this_00[0x48].field_0x60 = uVar8;
    *(undefined1 *)(this_00 + 1) = 3;
    thunk_FUN_005b6730(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49,0,iVar4,&DAT_007a4ccc,
                             s_SIDTy__InitSID_007cd5e8);
  if (iVar9 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49);
  return;
}

