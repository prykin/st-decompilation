
void __thiscall SIDTy::InitSID(SIDTy *this)

{
  SpriteClassTy *this_00;
  SIDTy *pSVar1;
  code *pcVar2;
  SIDTy *this_01;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  SIDTy *pSStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pSStack_8 = this;
  iVar3 = __setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pSStack_8;
  if (iVar3 == 0) {
    this_00 = (SpriteClassTy *)(pSStack_8 + 0x1a60);
    SpriteClassTy::InitSprite(this_00,DAT_008075a8,0x2f,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)this_00 + 4))(DAT_00806784,7,0,s_MM_SID_007cd620,0xffffffff);
    *(undefined4 *)(this_01 + 0x1a7c) = 0x2e;
    *(undefined4 *)(this_01 + 0x1a80) = 0x193;
    *(undefined4 *)(this_01 + 0x1a68) = 0;
    if (*(uint *)(this_01 + 0x1a64) != 0xffffffff) {
      FUN_006b3730(*(uint **)(this_01 + 0x1aa8),*(uint *)(this_01 + 0x1a64),
                   *(uint *)(this_01 + 0x1a68),*(uint *)(this_01 + 0x1a7c),
                   *(uint *)(this_01 + 0x1a80));
    }
    iVar3 = 1;
    puVar5 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar3 = FUN_006b50c0(0x15e,0xa5,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar4,
                         puVar5,iVar3);
    *(int *)(this_01 + 0x1cb8) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar3 = FUN_006b50c0(0x13e,0xe,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar4,
                         puVar5,iVar3);
    *(int *)(this_01 + 0x1cbc) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar5 = (undefined4 *)(*(int *)(DAT_0081176c + 0x2c) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(DAT_0081176c + 0x2c));
    iVar3 = FUN_006b50c0(0x104,0x28,(uint)*(ushort *)(*(int *)(DAT_0081176c + 0x2c) + 0xe),uVar4,
                         puVar5,iVar3);
    *(int *)(this_01 + 0x1cc0) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar4 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    PaintExplanation(this_01);
    uVar4 = *(uint *)(this_01 + 0x1cb8);
    pSVar1 = this_01 + 0x1cb4;
    FUN_006b2330((uint)DAT_008075a8,(uint *)pSVar1,0x2e,0x4023f6,*(uint *)(uVar4 + 4),
                 *(uint *)(uVar4 + 8),uVar4);
    FUN_006b3640(DAT_008075a8,*(uint *)pSVar1,0xffffffff,0xe1,0x1a9);
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar1);
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1b01),DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1b01) + 4))(DAT_00806784,7,0,s_SID_SLDUP_007cd614,0xffffffff);
    *(undefined4 *)(this_01 + 0x1b1d) = 0x22b;
    *(undefined4 *)(this_01 + 0x1b21) = 0x1be;
    *(undefined4 *)(this_01 + 0x1b09) = 0;
    if (*(uint *)(this_01 + 0x1b05) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1b49),*(uint *)(this_01 + 0x1b05));
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1b92),DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1b92) + 4))(DAT_00806784,7,0,s_SID_SLDDN_007cd608,0xffffffff);
    *(undefined4 *)(this_01 + 0x1bae) = 0x22b;
    *(undefined4 *)(this_01 + 0x1bb2) = 0x211;
    *(undefined4 *)(this_01 + 0x1b9a) = 0;
    if (*(uint *)(this_01 + 0x1b96) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1bda),*(uint *)(this_01 + 0x1b96));
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(this_01 + 0x1c23),DAT_008075a8,0x2d,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(this_01 + 0x1c23) + 4))(DAT_00806784,7,0,s_SID_SLDT_007cd5fc,0xffffffff);
    *(undefined4 *)(this_01 + 0x1c3f) = 0x22f;
    *(undefined4 *)(this_01 + 0x1c43) = 0x1d3;
    *(undefined4 *)(this_01 + 0x1c2b) = 0;
    if (*(uint *)(this_01 + 0x1c27) != 0xffffffff) {
      FUN_006b3af0(*(int **)(this_01 + 0x1c6b),*(uint *)(this_01 + 0x1c27));
    }
    puVar6 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(this_01 + 0x1cd0) = puVar6;
    FUN_006b6020((int)puVar6,0,&DAT_008016a0);
    iVar3 = 1;
    puVar5 = (undefined4 *)(*(int *)(this_01 + 0x1cb8) + 0x28);
    uVar4 = FUN_006b4fe0(*(int *)(this_01 + 0x1cb8));
    uVar7 = FUN_006b50c0(0x156,0xe,(uint)*(ushort *)(*(int *)(this_01 + 0x1cb8) + 0xe),uVar4,puVar5,
                         iVar3);
    *(undefined4 *)(this_01 + 0x1cc8) = uVar7;
    this_01[0x65] = (SIDTy)0x3;
    thunk_FUN_005b6730(this_01,1,'\0',-1);
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar8 = ReportDebugMessage(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49,0,iVar3,&DAT_007a4ccc,
                             s_SIDTy__InitSID_007cd5e8);
  if (iVar8 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Start_sid_obj_cpp_007cd5c4,0x49);
  return;
}

