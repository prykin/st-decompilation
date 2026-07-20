
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InitFSGS */

void __thiscall FSGSTy::InitFSGS(FSGSTy *this,byte param_1)

{
  MMsgTy *pMVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  HGDIOBJ pvVar7;
  uint *puVar8;
  ccFntTy *pcVar9;
  undefined4 *puVar10;
  StartServTy *pSVar11;
  uint uVar12;
  LPSTR text;
  int iVar13;
  undefined4 extraout_ECX;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 uVar14;
  byte bVar15;
  undefined4 local_450 [256];
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x15d,0,iVar4,
                                &DAT_007a4ccc,s_FSGSTy__InitFSGS_007cbff8);
    if (iVar13 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x15d);
    return;
  }
  StartSystemTy::sub_005DAF20(local_c->field_1A5B);
  g_fSGS_0081174C = this_01;
  DAT_008067a0 = 0;
  StartSystemTy::GetIP(this_01->field_1A5B);
  DAT_00802a99 = 0;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != (MMsgTy *)0x0) {
    MMsgTy::HideSprites(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = 0;
  }
  uVar5 = FUN_0070a9f0(g_cMf32_00806780,s_FSGS_BKG_007cc09c,0,1);
  PTR_0081176c->field_002C = uVar5;
  this_01->field_005D = PTR_0081176c->field_002C;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_SET_ACC_007cc090,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A83 = puVar6;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,s_FILE_LIST_007cc084,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A87 = puVar6;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,&DAT_007cc07c,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A8B = puVar6;
  FUN_006bc360((ushort *)this_01->field_005D,local_450,(int *)0x0);
  *(undefined4 *)&this_01->field_1A5B->field_0x140 = 0xf;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_450,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
  pvVar7 = (HGDIOBJ)FUN_006c6a60(this_01->field_005D);
  this_01->field_1A67 = pvVar7;
  this_01->field_1F5B = this_01->field_0008;
  this_01->field_1F3B = this_01->field_0008;
  this_01->field_1F5F = 2;
  this_01->field_1F3F = 2;
  this_01->field_1F7F = this_01->field_005D;
  this_01->field_1F93 = 0;
  this_01->field_1F8F = DAT_008032ac;
  this_01->field_1F87 = 0xf;
  this_01->field_1F8B = 1;
  this_01->field_1F83 = 0x4d;
  puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10c,5);
  this_01->field_1FB3 = puVar8;
  this_01->field_1A6F = this_01->field_1A5B->field_0030;
  this_01->field_1A73 = this_01->field_1A5B->field_0034;
  pcVar9 = (ccFntTy *)thunk_FUN_00594850(this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_01->field_1A77 = pcVar9;
  pcVar9->field_007E = 1;
  *(undefined2 *)&pcVar9->field_0x9e = 0;
  this_02 = (ccFntTy *)CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_007c6ff0);
  pcVar9->field_0x9e = DAT_007c6ff0;
  puVar10 = ccFntTy::operator(this_02,0x19d,g_cMf32_00806780,s_FSGS_NB_007cc070,0);
  this_01->field_1A7B = puVar10;
  puVar10[0x16] = 1;
  puVar10[0x17] = 0;
  pSVar11 = (StartServTy *)ccFntTy::operator(this_03,0x19d,g_cMf32_00806780,s_FSGS_NS_007cc064,0);
  this_01->field_1A7F = pSVar11;
  *(undefined4 *)(pSVar11 + 0x58) = 1;
  *(undefined4 *)(pSVar11 + 0x5c) = 0;
  puVar10 = (undefined4 *)(this_01->field_005D + 0x28);
  iVar4 = 1;
  uVar12 = FUN_006b4fe0(this_01->field_005D);
  iVar4 = FUN_006b50c0(0x24d,0x59,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar12,puVar10,iVar4)
  ;
  this_01->field_1A97 = iVar4;
  local_8 = *(uint *)(iVar4 + 0x14);
  if (local_8 == 0) {
    local_8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
  }
  puVar10 = (undefined4 *)FUN_006b4fa0(iVar4);
  for (uVar12 = local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar10 = 0xffffffff;
    puVar10 = puVar10 + 1;
  }
  iVar4 = 0;
  bVar15 = 0;
  for (uVar12 = local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar10 = 0xff;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  text = FUN_006f2c00(s_MM_BAN__007cc058,2,this_01->field_1A93);
  puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,text,bVar15,iVar4);
  DibPut((undefined4 *)this_01->field_1A97,0,0,'\x06',(byte *)puVar6);
  uVar12 = this_01->field_1A97;
  FUN_006b2330((uint)DAT_008075a8,&this_01->field_1A8F,0x31,0x4023f6,*(uint *)(uVar12 + 4),
               *(uint *)(uVar12 + 8),uVar12);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0);
  iVar4 = 1;
  puVar10 = (undefined4 *)(this_01->field_005D + 0x28);
  uVar12 = FUN_006b4fe0(this_01->field_005D);
  uVar12 = FUN_006b50c0(0x1b8,0x106,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar12,puVar10,
                        iVar4);
  this_01->field_1AC0 = uVar12;
  this_01->field_1ABB = 0;
  puVar10 = &this_01->field_1ABC;
  FUN_006b2330((uint)DAT_008075a8,puVar10,0x31,0x4023f6,*(uint *)(uVar12 + 4),*(uint *)(uVar12 + 8),
               uVar12);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar10,0xffffffff,0xb4,0xaa);
  FUN_006b3af0(DAT_008075a8,*puVar10);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1B28,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1B28 + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1B70,this_01->field_1B2C);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1BB9,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1BB9 + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C01,this_01->field_1BBD);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1C4A,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1C4A + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C92,this_01->field_1C4E);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CDB,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1CDB + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1D23,this_01->field_1CDF);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D6C,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1D6C + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1DB4,this_01->field_1D70);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1DFD,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(this_01->field_1DFD + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
  this_01->field_1E05 = 0;
  if (this_01->field_1E01 != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1E45,this_01->field_1E01);
  }
  this_01->field_1CFB = 0;
  this_01->field_1CF7 = 0;
  this_01->field_1B48 = 0;
  this_01->field_1B44 = 0;
  this_01->field_1D8C = 0;
  this_01->field_1D88 = 0;
  this_01->field_1BD9 = 0;
  this_01->field_1BD5 = 0;
  this_01->field_1E1D = 0;
  this_01->field_1E19 = 0;
  this_01->field_1C6A = 0;
  this_01->field_1C66 = 0;
  puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01->field_1B08 = puVar8;
  Library::DKW::TBL::FUN_006b5aa0(puVar8,s_License_agreement_007cc01c);
  Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_1B08,s_Nothing_to_do_007cc00c);
  PaintFSGS(this_01,'\x01');
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
    this_01->field_1E9E = puVar8;
  }
  this_01->field_1A62 = 0;
  if (param_1 == 6) {
    this_01->field_1A5F = CASE_6;
    uVar14 = 8;
  }
  else if (param_1 == 7) {
    this_01->field_1A5F = CASE_7;
    uVar14 = 7;
  }
  else {
    if (param_1 != 8) {
      SetState(this_01,6);
      this_01->field_1A62 = 1;
      goto LAB_00596510;
    }
    this_01->field_1A5F = CASE_8;
    uVar14 = 10;
  }
  SetState(this_01,uVar14);
LAB_00596510:
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    uVar5 = PTR_00802a30->field_00C9;
    uVar2 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar5);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != (MMsgTy *)0x0) {
    MMsgTy::ShowSprites(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

