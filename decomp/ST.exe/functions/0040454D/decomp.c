
void __thiscall FSGSTy::InitFSGS(FSGSTy *this,byte param_1)

{
  FSGSTy *pFVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  LPSTR pCVar10;
  int iVar11;
  undefined4 extraout_ECX;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 uVar12;
  byte bVar13;
  undefined4 auStack_450 [256];
  InternalExceptionFrame IStack_50;
  FSGSTy *pFStack_c;
  uint uStack_8;
  
  IStack_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_50;
  pFStack_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(IStack_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = pFStack_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = IStack_50.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x15d,0,iVar4,
                                &DAT_007a4ccc,s_FSGSTy__InitFSGS_007cbff8);
    if (iVar11 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x15d);
    return;
  }
  thunk_FUN_005daf20(*(int *)(pFStack_c + 0x1a5b));
  DAT_0081174c = this_01;
  DAT_008067a0 = 0;
  StartSystemTy::GetIP(*(StartSystemTy **)(this_01 + 0x1a5b));
  DAT_00802a99 = 0;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6));
    *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
  }
  uVar5 = FUN_0070a9f0(DAT_00806780,s_FSGS_BKG_007cc09c,0,1);
  *(undefined4 *)(DAT_0081176c + 0x2c) = uVar5;
  *(undefined4 *)(this_01 + 0x5d) = *(undefined4 *)(DAT_0081176c + 0x2c);
  puVar6 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_SET_ACC_007cc090,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1a83) = puVar6;
  puVar6 = FUN_00709af0(DAT_00806784,0xb,(byte *)s_FILE_LIST_007cc084,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1a87) = puVar6;
  puVar6 = FUN_00709af0(DAT_00806784,0xb,&DAT_007cc07c,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)(this_01 + 0x1a8b) = puVar6;
  FUN_006bc360(*(int *)(this_01 + 0x5d),auStack_450,(int *)0x0);
  *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140) = 0xf;
  FUN_00718780((int)auStack_450,0,0x100,0x8b,0x15,(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x144)
              );
  uVar5 = FUN_006c6a60(*(int *)(this_01 + 0x5d));
  *(undefined4 *)(this_01 + 0x1a67) = uVar5;
  *(undefined4 *)(this_01 + 0x1f5b) = *(undefined4 *)(this_01 + 8);
  *(undefined4 *)(this_01 + 0x1f3b) = *(undefined4 *)(this_01 + 8);
  *(undefined4 *)(this_01 + 0x1f5f) = 2;
  *(undefined4 *)(this_01 + 7999) = 2;
  *(undefined4 *)(this_01 + 0x1f7f) = *(undefined4 *)(this_01 + 0x5d);
  *(undefined4 *)(this_01 + 0x1f93) = 0;
  *(undefined4 *)(this_01 + 0x1f8f) = DAT_008032ac;
  *(undefined4 *)(this_01 + 0x1f87) = 0xf;
  *(undefined4 *)(this_01 + 0x1f8b) = 1;
  *(undefined4 *)(this_01 + 0x1f83) = 0x4d;
  puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10c,5);
  *(uint **)(this_01 + 0x1fb3) = puVar7;
  *(undefined4 *)(this_01 + 0x1a6f) = *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x30);
  *(undefined4 *)(this_01 + 0x1a73) = *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x34);
  iVar4 = thunk_FUN_00594850(*(int *)(this_01 + 0x5d),(undefined *)0x0,DAT_00807dd9);
  *(int *)(this_01 + 0x1a77) = iVar4;
  *(undefined4 *)(iVar4 + 0x7e) = 1;
  *(undefined2 *)(iVar4 + 0x9e) = 0;
  this_02 = (ccFntTy *)CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_007c6ff0);
  *(undefined1 *)(iVar4 + 0x9e) = DAT_007c6ff0;
  puVar8 = ccFntTy::operator(this_02,0x19d,DAT_00806780,s_FSGS_NB_007cc070,0);
  *(undefined4 **)(this_01 + 0x1a7b) = puVar8;
  puVar8[0x16] = 1;
  puVar8[0x17] = 0;
  puVar8 = ccFntTy::operator(this_03,0x19d,DAT_00806780,s_FSGS_NS_007cc064,0);
  *(undefined4 **)(this_01 + 0x1a7f) = puVar8;
  puVar8[0x16] = 1;
  puVar8[0x17] = 0;
  puVar8 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
  iVar4 = 1;
  uVar9 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
  iVar4 = FUN_006b50c0(0x24d,0x59,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar9,puVar8,
                       iVar4);
  *(int *)(this_01 + 0x1a97) = iVar4;
  uStack_8 = *(uint *)(iVar4 + 0x14);
  if (uStack_8 == 0) {
    uStack_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(iVar4 + 8);
  }
  puVar8 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar9 = uStack_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 0;
  bVar13 = 0;
  for (uVar9 = uStack_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = 0xff;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pCVar10 = FUN_006f2c00(s_MM_BAN__007cc058,2,*(undefined4 *)(this_01 + 0x1a93));
  puVar6 = FUN_0070a5a0(DAT_00806780,6,pCVar10,bVar13,iVar4);
  thunk_FUN_00540760(*(undefined4 **)(this_01 + 0x1a97),0,0,'\x06',(byte *)puVar6);
  uVar9 = *(uint *)(this_01 + 0x1a97);
  FUN_006b2330((uint)DAT_008075a8,(uint *)(this_01 + 0x1a8f),0x31,0x4023f6,*(uint *)(uVar9 + 4),
               *(uint *)(uVar9 + 8),uVar9);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,*(uint *)(this_01 + 0x1a8f),0xffffffff,DAT_00806730 - 0x24d,0);
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
  uVar9 = FUN_006b50c0(0x1b8,0x106,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar9,puVar8,
                       iVar4);
  *(uint *)(this_01 + 0x1ac0) = uVar9;
  this_01[0x1abb] = (FSGSTy)0x0;
  pFVar1 = this_01 + 0x1abc;
  FUN_006b2330((uint)DAT_008075a8,(uint *)pFVar1,0x31,0x4023f6,*(uint *)(uVar9 + 4),
               *(uint *)(uVar9 + 8),uVar9);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pFVar1,0xffffffff,0xb4,0xaa);
  FUN_006b3af0(DAT_008075a8,*(uint *)pFVar1);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1b28),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1b28) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)(this_01 + 0x1b30) = 0;
  if (*(uint *)(this_01 + 0x1b2c) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1b70),*(uint *)(this_01 + 0x1b2c));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1bb9),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1bb9) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)(this_01 + 0x1bc1) = 0;
  if (*(uint *)(this_01 + 0x1bbd) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1c01),*(uint *)(this_01 + 0x1bbd));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1c4a),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1c4a) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)(this_01 + 0x1c52) = 0;
  if (*(uint *)(this_01 + 0x1c4e) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1c92),*(uint *)(this_01 + 0x1c4e));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1cdb),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1cdb) + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  *(undefined4 *)(this_01 + 0x1ce3) = 0;
  if (*(uint *)(this_01 + 0x1cdf) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1d23),*(uint *)(this_01 + 0x1cdf));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1d6c),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1d6c) + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  *(undefined4 *)(this_01 + 0x1d74) = 0;
  if (*(uint *)(this_01 + 0x1d70) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1db4),*(uint *)(this_01 + 0x1d70));
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)(this_01 + 0x1dfd),DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)(this_01 + 0x1dfd) + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  *(undefined4 *)(this_01 + 0x1e05) = 0;
  if (*(uint *)(this_01 + 0x1e01) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_01 + 0x1e45),*(uint *)(this_01 + 0x1e01));
  }
  *(undefined4 *)(this_01 + 0x1cfb) = 0;
  *(undefined4 *)(this_01 + 0x1cf7) = 0;
  *(undefined4 *)(this_01 + 0x1b48) = 0;
  *(undefined4 *)(this_01 + 0x1b44) = 0;
  *(undefined4 *)(this_01 + 0x1d8c) = 0;
  *(undefined4 *)(this_01 + 0x1d88) = 0;
  *(undefined4 *)(this_01 + 0x1bd9) = 0;
  *(undefined4 *)(this_01 + 0x1bd5) = 0;
  *(undefined4 *)(this_01 + 0x1e1d) = 0;
  *(undefined4 *)(this_01 + 0x1e19) = 0;
  *(undefined4 *)(this_01 + 0x1c6a) = 0;
  *(undefined4 *)(this_01 + 0x1c66) = 0;
  puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  *(uint **)(this_01 + 0x1b08) = puVar7;
  Library::DKW::TBL::FUN_006b5aa0((int)puVar7,s_License_agreement_007cc01c);
  Library::DKW::TBL::FUN_006b5aa0(*(int *)(this_01 + 0x1b08),s_Nothing_to_do_007cc00c);
  PaintFSGS(this_01,'\x01');
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    puVar7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
    *(uint **)(this_01 + 0x1e9e) = puVar7;
  }
  this_01[0x1a62] = (FSGSTy)0x0;
  if (param_1 == 6) {
    this_01[0x1a5f] = (FSGSTy)0x6;
    uVar12 = 8;
  }
  else if (param_1 == 7) {
    this_01[0x1a5f] = (FSGSTy)0x7;
    uVar12 = 7;
  }
  else {
    if (param_1 != 8) {
      SetState(this_01,6);
      this_01[0x1a62] = (FSGSTy)0x1;
      goto LAB_00596510;
    }
    this_01[0x1a5f] = (FSGSTy)0x8;
    uVar12 = 10;
  }
  SetState(this_01,uVar12);
LAB_00596510:
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar5 = *(undefined4 *)(DAT_00802a30 + 0xc9);
    uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
    DAT_00802a30[0x493] = (CursorClassTy)0x1;
    *(undefined2 *)(this_00 + 0x494) = 0xffff;
    CursorClassTy::SetGCType(this_00,0,uVar2,uVar5);
    CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
    this_00[0xd2] = (CursorClassTy)0x0;
    *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
  }
  if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::ShowSprites(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6));
    *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
         *(undefined4 *)(this_01 + 8);
  }
  thunk_FUN_00568bc0(&g_sound,0);
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = IStack_50.previous;
  return;
}

