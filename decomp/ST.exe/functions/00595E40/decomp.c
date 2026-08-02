#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InitFSGS */

void __thiscall FSGSTy::InitFSGS(FSGSTy *this,byte param_1)

{
  MMsgTy *pMVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  ushort *puVar4;
  HGDIOBJ pvVar5;
  FSGSTy_field_1FB3DArray *pFVar6;
  ccFntTy *pcVar7;
  StartServTy *pSVar8;
  int local_EAX_679;
  AnonPointee_FSGSTy_1A97 *pAVar9;
  undefined4 *puVar10;
  LPSTR text;
  int uVar11;
  DArrayTy *pDVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  undefined4 local_450 [256];
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x15d,0,iVar3,
                                "%s","FSGSTy::InitFSGS");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x15d);
    return;
  }
  StartSystemTy::sub_005DAF20(local_c->field_1A5B);
  g_fSGS_0081174C = this_01;
  DAT_008067a0 = 0;
  StartSystemTy::GetIP(this_01->field_1A5B);
  DAT_00802a99 = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != nullptr) {
    MMsgTy::HideSprites(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = 0;
  }
  puVar4 = (ushort *)FUN_0070a9f0(g_cMf32_00806780,"FSGS_BKG",0,1);
  g_startSystem_0081176C->field_002C = puVar4;
  this_01->field_005D = g_startSystem_0081176C->field_002C;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,nullptr);
  this_01->field_1A83 = puVar4;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,nullptr);
  this_01->field_1A87 = puVar4;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,&DAT_007cc07c,0xffffffff,0,1,0,nullptr);
  this_01->field_1A8B = puVar4;
  FUN_006bc360(this_01->field_005D,local_450,nullptr);
  this_01->field_1A5B->field_0140 = 0xf;
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_450,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
  pvVar5 = (HGDIOBJ)FUN_006c6a60(this_01->field_005D);
  this_01->field_1A67 = pvVar5;
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
  pFVar6 = (FSGSTy_field_1FB3DArray *)Library::DKW::TBL::DArrayCreate(nullptr,5,0x10c,5);
  this_01->field_1FB3 = pFVar6;
  this_01->field_1A6F = this_01->field_1A5B->field_0030;
  this_01->field_1A73 = this_01->field_1A5B->field_0034;
  pcVar7 = (ccFntTy *)thunk_FUN_00594850((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->field_1A77 = pcVar7;
  pcVar7->field_007E = 1;
  *(undefined2 *)&pcVar7->field_0x9e = 0;
  pcVar7->field_0x9e = DAT_007c6ff0;
  pcVar7 = (ccFntTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"FSGS_NB",0);
  this_01->field_1A7B = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  pSVar8 = (StartServTy *)ccFntTy::operator_new(0x19d,g_cMf32_00806780,"FSGS_NS",0);
  this_01->field_1A7F = pSVar8;
  *(undefined4 *)(pSVar8 + 0x58) = 1;
  *(undefined4 *)(pSVar8 + 0x5c) = 0;
  puVar4 = this_01->field_005D + 0x14;
  iVar3 = 1;
  local_EAX_679 = FUN_006b4fe0((int)this_01->field_005D);
  pAVar9 = (AnonPointee_FSGSTy_1A97 *)
           FUN_006b50c0(0x24d,0x59,(uint)this_01->field_005D[7],local_EAX_679,(undefined4 *)puVar4,
                        iVar3);
  this_01->field_1A97 = pAVar9;
  local_8 = pAVar9->field_0014;
  if (local_8 == 0) {
    local_8 = ((uint)(ushort)pAVar9->field_000E * pAVar9->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar9->field_0008;
  }
  puVar10 = (undefined4 *)FUN_006b4fa0((int *)pAVar9);
  for (uVar13 = local_8 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar10 = 0xffffffff;
    puVar10 = puVar10 + 1;
  }
  iVar3 = 0;
  bVar14 = 0;
  for (uVar13 = local_8 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar10 = 0xff;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  text = FUN_006f2c00("MM_BAN_",2,this_01->field_1A93);
  puVar4 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,text,bVar14,iVar3);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)this_01->field_1A97,0,0,'\x06',(byte *)puVar4);
  pAVar9 = this_01->field_1A97;
  FUN_006b2330(g_ddxContext_008075A8,&this_01->field_1A8F,0x31,0x4023f6,pAVar9->field_0004,
               pAVar9->field_0008,(ushort *)pAVar9);
  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0
            );
  iVar3 = 1;
  puVar4 = this_01->field_005D + 0x14;
  uVar11 = FUN_006b4fe0((int)this_01->field_005D);
  puVar4 = (ushort *)
           FUN_006b50c0(0x1b8,0x106,(uint)this_01->field_005D[7],uVar11,(undefined4 *)puVar4,iVar3);
  this_01->field_1AC0 = puVar4;
  this_01->field_1ABB = 0;
  puVar10 = &this_01->field_1ABC;
  FUN_006b2330(g_ddxContext_008075A8,puVar10,0x31,0x4023f6,*(uint *)(puVar4 + 2),
               *(uint *)(puVar4 + 4),puVar4);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar10,0xffffffff,0xb4,0xaa);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar10);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1B28,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1B28 + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1B70,this_01->field_1B2C);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1BB9,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1BB9 + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C01,this_01->field_1BBD);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1C4A,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1C4A + 4))(DAT_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C92,this_01->field_1C4E);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CDB,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1CDB + 4))(DAT_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1D23,this_01->field_1CDF);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D6C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(this_01->field_1D6C + 4))(DAT_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1DB4,this_01->field_1D70);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1DFD,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
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
  pDVar11 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  this_01->field_1B08 = pDVar11;
  Library::DKW::TBL::FUN_006b5aa0(&pDVar11->flags,"License agreement");
  Library::DKW::TBL::FUN_006b5aa0(&this_01->field_1B08->flags,"Nothing to do");
  PaintFSGS(this_01,'\x01');
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    pDVar11 = Library::DKW::TBL::SArrayCreate(nullptr,100,100);
    this_01->field_1E9E = &pDVar11->flags;
  }
  this_01->field_1A62 = 0;
  if (param_1 == 6) {
    this_01->field_1A5F = CASE_6;
    bVar14 = 8;
  }
  else if (param_1 == 7) {
    this_01->field_1A5F = CASE_7;
    bVar14 = 7;
  }
  else {
    if (param_1 != 8) {
      SetState(this_01,6);
      this_01->field_1A62 = 1;
      goto LAB_00596510;
    }
    this_01->field_1A5F = CASE_8;
    bVar14 = 10;
  }
  SetState(this_01,bVar14);
LAB_00596510:
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar3 = g_cursorClass_00802A30->field_00C9;
    iVar12 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar12,iVar3);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  pMVar1 = this_01->field_1A5B->field_02E6;
  if (pMVar1 != nullptr) {
    MMsgTy::ShowSprites(pMVar1);
    this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

