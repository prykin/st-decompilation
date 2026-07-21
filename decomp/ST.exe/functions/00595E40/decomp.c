#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InitFSGS */

void __thiscall FSGSTy::InitFSGS(FSGSTy *this,byte param_1)

{
  int *piVar1;
  MMsgTy *pMVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  ccFntTy *pcVar5;
  ushort *puVar6;
  HGDIOBJ pvVar7;
  DArrayTy *pDVar8;
  undefined4 *puVar9;
  StartServTy *pSVar10;
  uint uVar11;
  AnonPointee_FSGSTy_1A97 *pAVar12;
  LPSTR text;
  AnonPointee_FSGSTy_1AC0 *pAVar13;
  uint *puVar14;
  int iVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  ccFntTy *this_02;
  ccFntTy *this_03;
  undefined1 uVar16;
  byte bVar17;
  undefined4 local_450 [256];
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar15 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x15d,0,iVar4,
                                "%s","FSGSTy::InitFSGS");
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x15d);
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
  pMVar2 = this_01->field_1A5B->field_02E6;
  if (pMVar2 != (MMsgTy *)0x0) {
    MMsgTy::HideSprites(pMVar2);
    this_01->field_1A5B->field_02E6->field_1CAB = 0;
  }
  pcVar5 = (ccFntTy *)FUN_0070a9f0(g_cMf32_00806780,"FSGS_BKG",0,1);
  PTR_0081176c->field_002C = pcVar5;
  this_01->field_005D = PTR_0081176c->field_002C;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A83 = puVar6;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A87 = puVar6;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,&DAT_007cc07c,0xffffffff,0,1,0,(undefined4 *)0x0);
  this_01->field_1A8B = puVar6;
  FUN_006bc360((ushort *)this_01->field_005D,local_450,(int *)0x0);
  this_01->field_1A5B->field_0140 = 0xf;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_450,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
  pvVar7 = (HGDIOBJ)FUN_006c6a60((int)this_01->field_005D);
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
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,5,0x10c,5);
  this_01->field_1FB3 = pDVar8;
  this_01->field_1A6F = this_01->field_1A5B->field_0030;
  this_01->field_1A73 = this_01->field_1A5B->field_0034;
  pcVar5 = (ccFntTy *)thunk_FUN_00594850((int)this_01->field_005D,(undefined *)0x0,DAT_00807dd9);
  this_01->field_1A77 = pcVar5;
  pcVar5->field_007E = 1;
  *(undefined2 *)&pcVar5->field_0x9e = 0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_02 = (ccFntTy *)CONCAT31((int3)((uint)extraout_ECX >> 8),DAT_007c6ff0);
  pcVar5->field_0x9e = DAT_007c6ff0;
  puVar9 = ccFntTy::operator(this_02,0x19d,g_cMf32_00806780,"FSGS_NB",0);
  this_01->field_1A7B = puVar9;
  puVar9[0x16] = 1;
  puVar9[0x17] = 0;
  pSVar10 = (StartServTy *)ccFntTy::operator(this_03,0x19d,g_cMf32_00806780,"FSGS_NS",0);
  this_01->field_1A7F = pSVar10;
  *(undefined4 *)(pSVar10 + 0x58) = 1;
  *(undefined4 *)(pSVar10 + 0x5c) = 0;
  puVar9 = (undefined4 *)&this_01->field_005D->field_0x28;
  iVar4 = 1;
  uVar11 = FUN_006b4fe0((int)this_01->field_005D);
  pAVar12 = (AnonPointee_FSGSTy_1A97 *)
            FUN_006b50c0(0x24d,0x59,(uint)*(ushort *)&this_01->field_005D->field_0xe,uVar11,puVar9,
                         iVar4);
  this_01->field_1A97 = pAVar12;
  local_8 = pAVar12->field_0014;
  if (local_8 == 0) {
    local_8 = ((uint)(ushort)pAVar12->field_000E * pAVar12->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar12->field_0008;
  }
  puVar9 = (undefined4 *)FUN_006b4fa0((int)pAVar12);
  for (uVar11 = local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  iVar4 = 0;
  bVar17 = 0;
  for (uVar11 = local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined1 *)puVar9 = 0xff;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  text = FUN_006f2c00("MM_BAN_",2,this_01->field_1A93);
  puVar6 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,text,bVar17,iVar4);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1A97,0,0,'\x06',(byte *)puVar6);
  pAVar12 = this_01->field_1A97;
  FUN_006b2330((uint)DAT_008075a8,(uint *)&this_01->field_1A8F,0x31,0x4023f6,pAVar12->field_0004,
               pAVar12->field_0008,(uint)pAVar12);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0);
  iVar4 = 1;
  puVar9 = (undefined4 *)&this_01->field_005D->field_0x28;
  uVar11 = FUN_006b4fe0((int)this_01->field_005D);
  pAVar13 = (AnonPointee_FSGSTy_1AC0 *)
            FUN_006b50c0(0x1b8,0x106,(uint)*(ushort *)&this_01->field_005D->field_0xe,uVar11,puVar9,
                         iVar4);
  this_01->field_1AC0 = pAVar13;
  this_01->field_1ABB = 0;
  piVar1 = &this_01->field_1ABC;
  FUN_006b2330((uint)DAT_008075a8,(uint *)piVar1,0x31,0x4023f6,pAVar13->field_0004,
               pAVar13->field_0008,(uint)pAVar13);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*piVar1,0xffffffff,0xb4,0xaa);
  FUN_006b3af0(DAT_008075a8,*piVar1);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1B28,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1B28 + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1B70,this_01->field_1B2C);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1BB9,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1BB9 + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C01,this_01->field_1BBD);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1C4A,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1C4A + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C92,this_01->field_1C4E);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CDB,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1CDB + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1D23,this_01->field_1CDF);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D6C,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1D6C + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1DB4,this_01->field_1D70);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1DFD,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1DFD + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
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
  puVar14 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
  this_01->field_1B08 = puVar14;
  Library::DKW::TBL::FUN_006b5aa0(puVar14,"License agreement");
  Library::DKW::TBL::FUN_006b5aa0((uint *)this_01->field_1B08,"Nothing to do");
  PaintFSGS(this_01,'\x01');
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,(int)this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    puVar14 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,100,100);
    this_01->field_1E9E = puVar14;
  }
  this_01->field_1A62 = 0;
  if (param_1 == 6) {
    this_01->field_1A5F = CASE_6;
    uVar16 = 8;
  }
  else if (param_1 == 7) {
    this_01->field_1A5F = CASE_7;
    uVar16 = 7;
  }
  else {
    if (param_1 != 8) {
      SetState(this_01,6);
      this_01->field_1A62 = 1;
      goto LAB_00596510;
    }
    this_01->field_1A5F = CASE_8;
    uVar16 = 10;
  }
  SetState(this_01,uVar16);
LAB_00596510:
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    iVar4 = PTR_00802a30->field_00C9;
    iVar15 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar15,iVar4);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = 0xffffffff;
  }
  pMVar2 = this_01->field_1A5B->field_02E6;
  if (pMVar2 != (MMsgTy *)0x0) {
    MMsgTy::ShowSprites(pMVar2);
    this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

