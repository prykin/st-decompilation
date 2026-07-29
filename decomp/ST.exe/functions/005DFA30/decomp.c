#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  MTaskTy *pMVar4;
  int iVar5;
  cMf32 *pcVar6;
  ushort *puVar7;
  MTaskTy_field_0074DArray *pMVar8;
  LPSTR text;
  ccFntTy *pcVar9;
  DArrayTy *pDVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar15;
  uint *puVar16;
  byte bVar17;
  char *pcVar18;
  undefined4 local_5a8 [256];
  byte local_1a8 [260];
  undefined4 local_a4 [20];
  InternalExceptionFrame local_54;
  MTaskTy *local_10;
  ushort *local_c;
  undefined4 *local_8;

  this->field_0061 = this->field_0069;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0xdd,0,iVar5,"%s",
                               "MTaskTy::InitMTask");
    pMVar4 = local_10;
    if (iVar5 == 0) {
      thunk_FUN_005b66e0(local_10);
      pMVar4->field_0045 = 0x200;
      pMVar4->field_0049 = 0;
      pMVar4->field_004D = 0x6102;
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
  if (pMVar4->field_006E == '\0') {
    pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,&DAT_0080c52e);
    pcVar6 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  pMVar4->field_0070 = pcVar6;
  if (DAT_0080fb6e != 0) {
    if (g_dArray_0080C4C7 != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(pMVar4->field_0070,PTR_s_DESCRIPTION_0079c21c,0);
    if (g_dArray_0080C4C7 == (DArrayTy *)0x0) {
      g_dArray_0080C4C7 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    if (g_dArray_0080C4CB != (DArrayTy *)0x0) {
      FUN_006b5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)
         Library::Ourlib::MFSARR::mfSarLoad(pMVar4->field_0070,PTR_s_OBJECTIVES_0079c220,0);
    if (g_dArray_0080C4CB == (DArrayTy *)0x0) {
      g_dArray_0080C4CB = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
    iVar5 = 0;
    local_8 = &DAT_0080c3c3;
    puVar7 = cMf32::RecGet(pMVar4->field_0070,0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar7 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
      uVar11 = 0xffffffff;
      pbVar13 = local_1a8;
      do {
        pbVar15 = pbVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pbVar15 = pbVar13 + 1;
        bVar17 = *pbVar13;
        pbVar13 = pbVar15;
      } while (bVar17 != 0);
      uVar11 = ~uVar11;
      pbVar13 = pbVar15 + -uVar11;
      pbVar15 = (byte *)&DAT_0080c3c3;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar15 = pbVar15 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar15 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar15 = pbVar15 + 1;
      }
    }
  }
  if (pMVar4->field_006E == '\0') {
    pcVar6 = pMVar4->field_0070;
    pcVar18 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    pcVar6 = pMVar4->field_0070;
    pcVar18 = (char *)&DAT_0080e303;
  }
  pMVar8 = (MTaskTy_field_0074DArray *)Library::Ourlib::MFDARR::mfDarLoad(pcVar6,pcVar18,0);
  pMVar4->field_0074 = pMVar8;
  if (pMVar8 == (MTaskTy_field_0074DArray *)0x0) {
    pMVar8 = (MTaskTy_field_0074DArray *)Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,0x50,1);
    memset(local_a4, 0, 0x50); /* compiler bulk-zero initialization */
    pMVar4->field_0074 = pMVar8;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_a4[0]._0_1_ = 8;
    Library::DKW::TBL::FUN_006ae1c0((uint *)pMVar8,local_a4);
  }
  Library::DKW::TBL::FUN_006afe40(&pMVar4->field_0078,&pMVar4->field_0074->flags);
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                   (uint)g_cursorClass_00802A30->field_001C);
    }
  }
  iVar5 = 1;
  bVar17 = 0;
  text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
  pcVar6 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806780,text,bVar17,iVar5);
  pMVar4->field_005D = pcVar6;
  pMVar4->field_0080 = 1;
  puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"MT_CHECK",0xffffffff,0,1,0,(undefined4 *)0x0);
  pMVar4->field_0081 = puVar7;
  thunk_FUN_00568bc0(&g_sound,0);
  FUN_006bc360((ushort *)pMVar4->field_005D,local_5a8,(int *)0x0);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar4->field_0x91);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar4->field_0x191);
  pcVar9 = (ccFntTy *)thunk_FUN_005defe0((int)pMVar4->field_005D,(undefined *)0x0,DAT_00807dd9);
  pMVar4->field_0089 = pcVar9;
  pcVar9->field_0058 = 1;
  pcVar9->field_005C = 0;
  pcVar9 = (ccFntTy *)thunk_FUN_005df290((int)pMVar4->field_005D,(undefined *)0x0,DAT_00807dd9);
  local_c = (ushort *)&pMVar4->field_0653;
  pMVar4->field_008D = pcVar9;
  puVar16 = pMVar4->field_02A5;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  local_c = (ushort *)&pMVar4->field_0x68f;
  puVar16 = pMVar4->field_02BD;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_02D1,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_02D1 + 4))(DAT_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar4->field_02ED = 0;
  pMVar4->field_02F1 = 0;
  pMVar4->field_02D9 = 0;
  if (pMVar4->field_02D5 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_0319,pMVar4->field_02D5);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_0362,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_0362 + 4))(DAT_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar4->field_037E = 0;
  pMVar4->field_0382 = 0;
  pMVar4->field_036A = 0;
  if (pMVar4->field_0366 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_03AA,pMVar4->field_0366);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_03F3,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_03F3 + 4))(DAT_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar4->field_040F = 0;
  pMVar4->field_0413 = 0;
  pMVar4->field_03FB = 0;
  if (pMVar4->field_03F7 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_043B,pMVar4->field_03F7);
  }
  piVar1 = &pMVar4->field_0484;
  FUN_006b2330(g_ddxContext_008075A8,(uint *)piVar1,0x32,0x402f63,0,0,(ushort *)&pMVar4->field_06BF);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*piVar1,0xffffffff,0,0);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*piVar1);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_048C,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_048C + 4))(DAT_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar4->field_04A8 = 0;
  pMVar4->field_04AC = 0;
  pMVar4->field_0494 = 0;
  if (pMVar4->field_0490 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_04D4,pMVar4->field_0490);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_051D,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_051D + 4))(DAT_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar4->field_0539 = 0;
  pMVar4->field_053D = 0;
  pMVar4->field_0525 = 0;
  if (pMVar4->field_0521 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_0565,pMVar4->field_0521);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4->field_05AE,(int *)g_ddxContext_008075A8,0x31,'\a',
             (undefined4 *)0x0,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar4->field_05AE + 4))(DAT_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar4->field_05CA = 0;
  pMVar4->field_05CE = 0;
  pMVar4->field_05B6 = 0;
  if (pMVar4->field_05B2 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar4->field_05F6,pMVar4->field_05B2);
  }
  piVar1 = &pMVar4->field_063F;
  FUN_006b2330(g_ddxContext_008075A8,(uint *)piVar1,0x32,0x402f63,0,0,(ushort *)&pMVar4->field_06CB);
  Library::DKW::DDX::FUN_006b3640((int *)g_ddxContext_008075A8,*piVar1,0xffffffff,0,0);
  FUN_006b3af0((int *)g_ddxContext_008075A8,*piVar1);
  pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  pMVar4->field_064B = pDVar10;
  pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar4->field_0647 = pDVar10;
  pDVar10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar4->field_064F = pDVar10;
  if (g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  DarkScreen(g_dDXContext_0080759C,1,0);
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    iVar5 = g_cursorClass_00802A30->field_00C9;
    iVar2 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar2,iVar5);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  SetAccelerator(1,pMVar4->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(1,pMVar4->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar4->field_006D = 3;
  PlayScript(pMVar4);
  PaintMTask(pMVar4);
  thunk_FUN_0055ddf0((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     (ushort *)pMVar4->field_005D,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

