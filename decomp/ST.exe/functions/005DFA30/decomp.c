#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,undefined1 param_2)

{
  int iVar1;
  CursorClassTy *this_00;
  MTaskTy *pMVar3;
  int local_EAX_46;
  cMf32 *pcVar4;
  ushort *puVar5;
  MTaskTy_field_0074DArray *pMVar6;
  LPSTR text;
  ccFntTy *pcVar7;
  DArrayTy *pDVar8;
  int iVar4;
  int iVar9;
  uint uVar10;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint *puVar16;
  byte bVar17;
  undefined4 local_5a8 [256];
  byte local_1a8 [260];
  undefined4 local_a4 [20];
  InternalExceptionFrame local_54;
  MTaskTy *local_10;
  ushort *local_c;
  char *local_8;
  char *pcVar17_mg1;

  this->field_0061 = this->field_0069;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  local_EAX_46 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar3 = local_10;
  if (local_EAX_46 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0xdd,0,local_EAX_46,
                               "%s","MTaskTy::InitMTask");
    pMVar3 = local_10;
    if (iVar4 == 0) {
      thunk_FUN_005b66e0(local_10);
      pMVar3->field_0045 = 0x200;
      pMVar3->field_0049 = 0;
      pMVar3->field_004D = 0x6102;
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10->field_006E = param_1;
  if (param_1 == '\0') {
    local_10->field_006F = param_2;
  }
  else {
    local_10->field_006F = 0;
  }
  if (local_10->field_006E == '\x01') {
    StartSystemTy::sub_005DAF20(g_startSystem_0081176C);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar3->field_006E == '\0') {
    pcVar4 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080c52e);
    pcVar4 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  pMVar3->field_0070 = pcVar4;
  if (DAT_0080fb6e != 0) {
    if (g_dArray_0080C4C7 != nullptr) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(pMVar3->field_0070,PTR_s_DESCRIPTION_0079c21c,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(pMVar3->field_0070,PTR_s_OBJECTIVES_0079c220,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    }
    pcVar13 = &CHAR_00h_0080c3c3;
    for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13 = pcVar13 + 4;
    }
    local_8 = &CHAR_00h_0080c3c3;
    puVar5 = cMf32::RecGet(pMVar3->field_0070,0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar5 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730
                ((byte *)&CHAR_00h_0080ed16,nullptr,nullptr,local_1a8,nullptr);
      uVar10 = 0xffffffff;
      pbVar12 = local_1a8;
      do {
        pbVar14 = pbVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar14 = pbVar12 + 1;
        bVar17 = *pbVar12;
        pbVar12 = pbVar14;
      } while (bVar17 != 0);
      uVar10 = ~uVar10;
      pbVar12 = pbVar14 + -uVar10;
      pbVar14 = (byte *)&CHAR_00h_0080c3c3;
      memmove(pbVar14, pbVar12, uVar10); /* compiler REP MOVS byte copy */
    }
  }
  if (pMVar3->field_006E == '\0') {
    pcVar4 = pMVar3->field_0070;
    pcVar17_mg1 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    pcVar4 = pMVar3->field_0070;
    pcVar17_mg1 = (char *)&DAT_0080e303;
  }
  pMVar6 = (MTaskTy_field_0074DArray *)Library::Ourlib::MFDARR::mfDarLoad(pcVar4,pcVar17_mg1,0);
  pMVar3->field_0074 = pMVar6;
  if (pMVar6 == nullptr) {
    pMVar6 = (MTaskTy_field_0074DArray *)Library::DKW::TBL::DArrayCreate(nullptr,1,0x50,1);
    memset(local_a4, 0, 0x50); /* compiler bulk-zero initialization */
    pMVar3->field_0074 = pMVar6;
    STPiece<0,1>(local_a4[0]) = 8;
    Library::DKW::TBL::DArrayAppend((DArrayTy *)pMVar6,local_a4);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&pMVar3->field_0078,&pMVar3->field_0074->flags);
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  iVar9 = 1;
  bVar17 = 0;
  text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
  puVar5 = FUN_0070a9f0(g_cMf32_00806780,text,bVar17,iVar9);
  pMVar3->field_005D = puVar5;
  pMVar3->field_0080 = 1;
  puVar5 = Library::Ourlib::MFRLOAD::mfRLoad
                     (PTR_00806784,CASE_B,"MT_CHECK",0xffffffff,0,1,0,nullptr);
  pMVar3->field_0081 = puVar5;
  thunk_FUN_00568bc0(&g_sound,0);
  FUN_006bc360(pMVar3->field_005D,local_5a8,nullptr);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_0x91);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x191);
  pcVar7 = (ccFntTy *)thunk_FUN_005defe0((int)pMVar3->field_005D,nullptr,DAT_00807dd9);
  pMVar3->field_0089 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  pcVar7 = (ccFntTy *)thunk_FUN_005df290((int)pMVar3->field_005D,nullptr,DAT_00807dd9);
  local_c = (ushort *)&pMVar3->field_0653;
  pMVar3->field_008D = pcVar7;
  puVar16 = pMVar3->field_02A5;
  local_8 = (char *)0x5;
  do {
    FUN_006b2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != nullptr);
  local_c = (ushort *)&pMVar3->field_068F;
  puVar16 = &pMVar3->field_02BD;
  local_8 = (char *)0x5;
  do {
    FUN_006b2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != nullptr);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_02D1,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_02D1 + 4))(PTR_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_02ED = 0;
  pMVar3->field_02F1 = 0;
  pMVar3->field_02D9 = 0;
  if (pMVar3->field_02D5 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0319,pMVar3->field_02D5);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_0362,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_0362 + 4))(PTR_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_037E = 0;
  pMVar3->field_0382 = 0;
  pMVar3->field_036A = 0;
  if (pMVar3->field_0366 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_03AA,pMVar3->field_0366);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_03F3,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_03F3 + 4))(PTR_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_040F = 0;
  pMVar3->field_0413 = 0;
  pMVar3->field_03FB = 0;
  if (pMVar3->field_03F7 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_043B,pMVar3->field_03F7);
  }
  puVar15 = &pMVar3->field_0484;
  FUN_006b2330(g_ddxContext_008075A8,puVar15,0x32,0x402f63,0,0,(ushort *)&pMVar3->field_06BF);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0,0);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_048C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_048C + 4))(PTR_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_04A8 = 0;
  pMVar3->field_04AC = 0;
  pMVar3->field_0494 = 0;
  if (pMVar3->field_0490 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_04D4,pMVar3->field_0490);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_051D,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_051D + 4))(PTR_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_0539 = 0;
  pMVar3->field_053D = 0;
  pMVar3->field_0525 = 0;
  if (pMVar3->field_0521 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0565,pMVar3->field_0521);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_05AE,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_05AE + 4))(PTR_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_05CA = 0;
  pMVar3->field_05CE = 0;
  pMVar3->field_05B6 = 0;
  if (pMVar3->field_05B2 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_05F6,pMVar3->field_05B2);
  }
  puVar15 = &pMVar3->field_063F;
  FUN_006b2330(g_ddxContext_008075A8,puVar15,0x32,0x402f63,0,0,(ushort *)&pMVar3->field_06CB);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0,0);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar15);
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,10,0x9e,10,0x405de4);
  pMVar3->field_064B = pDVar8;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,10,0x3e,10,0x40365c);
  pMVar3->field_0647 = pDVar8;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310(nullptr,10,0x3e,10,0x40365c);
  pMVar3->field_064F = pDVar8;
  if (g_startSystem_0081176C->field_02E6 != nullptr) {
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  DarkScreen(g_dDXContext_0080759C,1,0);
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar9 = g_cursorClass_00802A30->field_00C9;
    iVar1 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar1,iVar9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  SetAccelerator(1,pMVar3->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(1,pMVar3->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar3->field_006D = 3;
  PlayScript(pMVar3);
  PaintMTask(pMVar3);
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     pMVar3->field_005D,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

