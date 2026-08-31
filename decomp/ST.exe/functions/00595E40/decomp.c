#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::InitFSGS */

void __thiscall FSGSTy::InitFSGS(FSGSTy *this,byte param_1)

{
  MMsgTy *pMVar1;
  int iVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  ushort *local_EAX_207;
  ushort *puVar4;
  ushort *local_EAX_284;
  ushort *local_EAX_317;
  HPALETTE pHVar4;
  DArrayTy *pFVar5;
  HDC pcVar6_mg0;
  ushort *puVar5;
  ccFntTy *pcVar6;
  StartServTy *pSVar7;
  int local_EAX_679;
  AnonPointee_FSGSTy_1A97 *pAVar8;
  uint *puVar9;
  LPSTR text;
  ushort *local_EAX_811;
  int uVar11;
  ushort *puVar10;
  DArrayTy *pDVar11;
  DArrayTy *puVar12;
  int iVar12;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint local_450 [256];
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
  /* ST_CALLSITE[00595E82]: CALL 0x0040590c; direct=0040590C StartSystemTy::sub_005DAF20 */
  StartSystemTy::sub_005DAF20(local_c->array_00BC[0xc].field_01DB);
  g_fSGS_0081174C = this_01;
  DAT_008067a0 = 0;
  /* ST_CALLSITE[00595E99]: CALL 0x0040330a; direct=0040330A StartSystemTy::GetIP */
  StartSystemTy::GetIP(this_01->array_00BC[0xc].field_01DB);
  DAT_00802a99 = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {

      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pMVar1 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar1 != nullptr) {
    /* ST_CALLSITE[00595EE5]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
    MMsgTy::HideSprites(pMVar1);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = 0;
  }
  local_EAX_207 = FUN_0070a9f0(g_cMf32_00806780,"FSGS_BKG",0,1);
  g_startSystem_0081176C->field_002C = local_EAX_207;
  this_01->field_005D = g_startSystem_0081176C->field_002C;
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,"SET_ACC",0xffffffff,0,1,0,nullptr);
  this_01->field_1A83 = puVar4;
  local_EAX_284 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806784,CASE_B,"FILE_LIST",0xffffffff,0,1,0,nullptr);
  this_01->field_1A87 = local_EAX_284;
  local_EAX_317 =
       Library::Ourlib::MFRLOAD::mfRLoad
                 (PTR_00806784,CASE_B,&DAT_007cc07c,0xffffffff,0,1,0,nullptr);
  this_01->field_1A8B = local_EAX_317;

  FUN_006bc360(this_01->field_005D,local_450,nullptr);
  (this_01->array_00BC[0xc].field_01DB)->field_0140 = 0xf;

  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_450,0,0x100,0x8b,0x15,
             (undefined4 *)&(this_01->array_00BC[0xc].field_01DB)->field_0x144);
  pHVar4 = FUN_006c6a60(this_01->field_005D);
  this_01->array_00BC[0xc].field_01E7 = pHVar4;
  this_01->field_1F5B = this_01->field_0008;
  this_01->field_1F3B = this_01->field_0008;
  this_01->field_1F5F = 2;
  this_01->field_1F3F = 2;
  this_01->field_1F7F = this_01->field_005D;
  this_01->field_1F93 = 0;
  this_01->field_1F8F = PTR_008032ac;
  this_01->field_1F87 = 0xf;
  this_01->field_1F8B = 1;
  this_01->field_1F83 = 0x4d;
  /* ST_CALLSITE[00596043]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/FSGSTy_field_1FB3DArray; source view only; no Ghidra override */
  pFVar5 = Library::DKW::TBL::DArrayCreate(nullptr,5,0x10c,5);
  this_01->field_1FB3 = (FSGSTy_field_1FB3DArray *)pFVar5;
  this_01->array_00BC[0xc].field_01EF = (this_01->array_00BC[0xc].field_01DB)->field_0030;
  this_01->array_00BC[0xc].field_01F3 = (this_01->array_00BC[0xc].field_01DB)->field_0034;
  /* ST_CALLSITE[00596078]: CALL 0x00402036; direct=00402036 thunk_FUN_00594850; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar6_mg0 = thunk_FUN_00594850((int)this_01->field_005D,nullptr,DAT_00807dd9);
  this_01->array_00BC[0xc].field_01F7 = (ccFntTy *)pcVar6_mg0;
  *(undefined4 *)((int)&pcVar6_mg0[0x1f].unused + 2) = 1;
  puVar5 = (undefined2 *)((int)&pcVar6_mg0[0x27].unused + 2);
  *puVar5 = 0;
  *(undefined1 *)puVar5 = DAT_007c6ff0;
  /* ST_CALLSITE[005960A8]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
  pcVar6 = STPointerBoundaryCast<ccFntTy *>(ccFntTy::operator_new(0x19d,g_cMf32_00806780,"FSGS_NB",0));
  this_01->field_1A7B = pcVar6;
  pcVar6->field_0058 = 1;
  pcVar6->field_005C = 0;
  /* ST_CALLSITE[005960CA]: CALL 0x0070ceb0; direct=0070CEB0 ccFntTy::operator_new; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/StartServTy; source view only; no Ghidra override */
  pSVar7 = STPointerBoundaryCast<StartServTy *>(ccFntTy::operator_new(0x19d,g_cMf32_00806780,"FSGS_NS",0));
  this_01->field_1A7F = pSVar7;
  *(undefined4 *)(pSVar7 + 0x58) = 1;
  *(undefined4 *)(pSVar7 + 0x5c) = 0;
  puVar10 = this_01->field_005D + 0x14;
  iVar14 = 1;

  local_EAX_679 = FUN_006b4fe0(this_01->field_005D);
  pAVar8 = STPointerBoundaryCast<AnonPointee_FSGSTy_1A97 *>(FUN_006b50c0(0x24d,0x59,(uint)this_01->field_005D[7],local_EAX_679,(undefined4 *)puVar10,
                        iVar14));
  this_01->field_1A97 = pAVar8;
  local_8 = pAVar8->field_0014;
  if (local_8 == 0) {
    local_8 = ((uint)(ushort)pAVar8->field_000E * pAVar8->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar8->field_0008;
  }

  puVar9 = STPointerBoundaryCast<undefined4 *>(FUN_006b4fa0((RecoveredRecord_006B4FA0_DAC3A217 *)pAVar8));
  for (uVar12 = local_8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar9 = 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  iVar14 = 0;
  bVar13 = 0;
  for (uVar12 = local_8 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar9 = 0xff;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  /* ST_CALLSITE[00596159]: CALL 0x006f2c00; direct=006F2C00 FUN_006f2c00; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
  text = FUN_006f2c00("MM_BAN_",2,this_01->field_1A93);
  /* ST_CALLSITE[0059616B]: CALL 0x0070a5a0; direct=0070A5A0 Library::Ourlib::MFIMG::mfImgLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
  local_EAX_811 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,6,text,bVar13,iVar14);
  /* ST_CALLSITE[0059617C]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut((RecoveredSourceFamily_dibcopy *)this_01->field_1A97,0,0,'\x06',
         (RecoveredRecordView_006B84D0_87AF9D9B *)local_EAX_811);
  pAVar8 = this_01->field_1A97;

  FUN_006b2330(g_ddxContext_008075A8,&this_01->field_1A8F,0x31,0x4023f6,pAVar8->field_0004,
               pAVar8->field_0008,(ushort *)pAVar8);

  Library::DKW::DDX::FUN_006b3640
            ((int *)g_ddxContext_008075A8,this_01->field_1A8F,0xffffffff,g_nWidth_00806730 - 0x24d,0
            );
  iVar14 = 1;
  puVar10 = this_01->field_005D + 0x14;

  uVar11 = FUN_006b4fe0(this_01->field_005D);
  puVar10 = /* ST_CALLSITE[005961EE]: CALL 0x006b50c0; direct=006B50C0 FUN_006b50c0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ushort; source view only; no Ghidra override */
  STPointerBoundaryCast<ushort *>(FUN_006b50c0(0x1b8,0x106,(uint)this_01->field_005D[7],uVar11,(undefined4 *)puVar10,
                         iVar14));
  this_01->field_1AC0 = puVar10;
  this_01->field_1ABB = 0;
  puVar9 = &this_01->field_1ABC;

  FUN_006b2330(g_ddxContext_008075A8,puVar9,0x31,0x4023f6,*(uint *)(puVar10 + 2),
               *(uint *)(puVar10 + 4),puVar10);

  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar9,0xffffffff,0xb4,0xaa);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar9);

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1B28,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[0059627B]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1B28 + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1B30 = 0;
  if (this_01->field_1B2C != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1B70,this_01->field_1B2C);
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1BB9,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005962C4]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1BB9 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1BC1 = 0;
  if (this_01->field_1BBD != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C01,this_01->field_1BBD);
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1C4A,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[0059630F]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1C4A + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
  this_01->field_1C52 = 0;
  if (this_01->field_1C4E != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1C92,this_01->field_1C4E);
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1CDB,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[00596358]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1CDB + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
  this_01->field_1CE3 = 0;
  if (this_01->field_1CDF != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1D23,this_01->field_1CDF);
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1D6C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005963A3]: CALL dword ptr [EAX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1D6C + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
  this_01->field_1D74 = 0;
  if (this_01->field_1D70 != 0xffffffff) {
    FUN_006b3af0((int *)this_01->field_1DB4,this_01->field_1D70);
  }

  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&this_01->field_1DFD,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_CALLSITE[005963EC]: CALL dword ptr [EDX + 0x4]; [STIndirectCallsiteApplier] exact slot 0x4; mode=structural-presentation; signature=__thiscall;/void;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(this_01->field_1DFD + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
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

  Library::DKW::TBL::FUN_006b5aa0(pDVar11,"License agreement");

  Library::DKW::TBL::FUN_006b5aa0(this_01->field_1B08,"Nothing to do");
  /* ST_CALLSITE[0059647F]: CALL 0x00403b4d; direct=00403B4D FSGSTy::PaintFSGS */
  PaintFSGS(this_01,'\x01');
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     this_01->field_005D,10,2);
  if ((5 < param_1) && (param_1 < 9)) {
    /* ST_CALLSITE[005964B5]: CALL 0x006b54f0; direct=006B54F0 Library::DKW::TBL::SArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/uint; source view only; no Ghidra override */
    puVar12 = Library::DKW::TBL::SArrayCreate(nullptr,100,100);
    this_01->field_1E9E = &puVar12->flags;
  }
  this_01->array_00BC[0xc].field_01E2 = 0;
  if (param_1 == 6) {
    this_01->array_00BC[0xc].field_01DF = 6;
    bVar13 = 8;
  }
  else if (param_1 == 7) {
    this_01->array_00BC[0xc].field_01DF = 7;
    bVar13 = 7;
  }
  else {
    if (param_1 != 8) {
      /* ST_CALLSITE[005964DF]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
      SetState(this_01,6);
      this_01->array_00BC[0xc].field_01E2 = 1;
      goto LAB_00596510;
    }
    this_01->array_00BC[0xc].field_01DF = 8;
    bVar13 = 10;
  }
  /* ST_CALLSITE[0059650B]: CALL 0x00401b2c; direct=00401B2C FSGSTy::SetState */
  SetState(this_01,bVar13);
LAB_00596510:
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar14 = g_cursorClass_00802A30->field_00C9;
    iVar2 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_1;
    this_00->field_0494 = 0xffff;
    /* ST_CALLSITE[0059653B]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
    CursorClassTy::SetGCType(this_00,CASE_0,iVar2,iVar14);
    /* ST_CALLSITE[00596550]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  pMVar1 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
  if (pMVar1 != nullptr) {
    /* ST_CALLSITE[00596575]: CALL 0x00405191; direct=00405191 MMsgTy::ShowSprites */
    MMsgTy::ShowSprites(pMVar1);
    (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = this_01->field_0008;
  }
  thunk_FUN_00568bc0(&g_sound,0);
  thunk_FUN_005b6730(this_01,0xb,'\0',-1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

