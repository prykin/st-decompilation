#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,undefined1 param_2)

{
  int iVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  MTaskTy *pMVar3;
  int iVar4;
  cMf32 *pcVar5;
  ushort *puVar6;
  uint *puVar7;
  DArrayTy *pDVar8;
  LPSTR text;
  ccFntTy *pcVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar14;
  int *piVar15;
  byte bVar16;
  char *pcVar17;
  undefined4 local_5a8 [256];
  byte local_1a8 [260];
  undefined4 local_a4 [20];
  InternalExceptionFrame local_54;
  MTaskTy *local_10;
  undefined4 *local_c;
  undefined4 *local_8;

  this->field_0061 = this->field_0069;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pMVar3 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\task_obj.cpp",0xdd,0,iVar4,"%s",
                               "MTaskTy::InitMTask");
    pMVar3 = local_10;
    if (iVar4 == 0) {
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)local_10);
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
    StartSystemTy::sub_005DAF20(PTR_0081176c);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar3->field_006E == '\0') {
    pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,&DAT_0080c52e);
    pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  pMVar3->field_0070 = pcVar5;
  if (DAT_0080fb6e != 0) {
    if (PTR_0080c4c7 != (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4c7);
    }
    PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                   Library::Ourlib::MFSARR::mfSarLoad
                             (pMVar3->field_0070,PTR_s_DESCRIPTION_0079c21c,0);
    if (PTR_0080c4c7 == (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)0x0) {
      PTR_0080c4c7 = (AnonShape_GLOBAL_0080C4C7_5A4CB754 *)
                     Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    if (PTR_0080c4cb != (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0080c4cb);
    }
    PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                   Library::Ourlib::MFSARR::mfSarLoad
                             (pMVar3->field_0070,PTR_s_OBJECTIVES_0079c220,0);
    if (PTR_0080c4cb == (AnonShape_GLOBAL_0080C4CB_D58160AA *)0x0) {
      PTR_0080c4cb = (AnonShape_GLOBAL_0080C4CB_D58160AA *)
                     Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    }
    memset(&DAT_0080c3c3, 0, 0x104); /* compiler bulk-zero initialization */
    iVar4 = 0;
    local_8 = &DAT_0080c3c3;
    puVar6 = cMf32::RecGet(pMVar3->field_0070,0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
      uVar10 = 0xffffffff;
      pbVar12 = local_1a8;
      do {
        pbVar14 = pbVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar14 = pbVar12 + 1;
        bVar16 = *pbVar12;
        pbVar12 = pbVar14;
      } while (bVar16 != 0);
      uVar10 = ~uVar10;
      pbVar12 = pbVar14 + -uVar10;
      pbVar14 = (byte *)&DAT_0080c3c3;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
        pbVar12 = pbVar12 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pbVar14 = *pbVar12;
        pbVar12 = pbVar12 + 1;
        pbVar14 = pbVar14 + 1;
      }
    }
  }
  if (pMVar3->field_006E == '\0') {
    pcVar5 = pMVar3->field_0070;
    pcVar17 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    pcVar5 = pMVar3->field_0070;
    pcVar17 = (char *)&DAT_0080e303;
  }
  puVar7 = (uint *)Library::Ourlib::MFDARR::mfDarLoad(pcVar5,pcVar17,0);
  pMVar3->field_0074 = puVar7;
  if (puVar7 == (uint *)0x0) {
    pDVar8 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,1,0x50,1);
    memset(local_a4, 0, 0x50); /* compiler bulk-zero initialization */
    pMVar3->field_0074 = &pDVar8->flags;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_a4[0]._0_1_ = 8;
    Library::DKW::TBL::FUN_006ae1c0(&pDVar8->flags,local_a4);
  }
  Library::DKW::TBL::FUN_006afe40(&pMVar3->field_0078,pMVar3->field_0074);
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C);
    }
  }
  iVar4 = 1;
  bVar16 = 0;
  text = FUN_006f2c00("TASK_BKG",1,(uint)DAT_0080874e);
  pcVar5 = (cMf32 *)FUN_0070a9f0(g_cMf32_00806780,text,bVar16,iVar4);
  pMVar3->field_005D = pcVar5;
  pMVar3->field_0080 = 1;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,"MT_CHECK",0xffffffff,0,1,0,(undefined4 *)0x0);
  pMVar3->field_0081 = puVar6;
  thunk_FUN_00568bc0(&g_sound,0);
  FUN_006bc360((ushort *)pMVar3->field_005D,local_5a8,(int *)0x0);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_0x91);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x191);
  pcVar9 = (ccFntTy *)thunk_FUN_005defe0((int)pMVar3->field_005D,(undefined *)0x0,DAT_00807dd9);
  pMVar3->field_0089 = pcVar9;
  pcVar9->field_0058 = 1;
  pcVar9->field_005C = 0;
  pcVar9 = (ccFntTy *)thunk_FUN_005df290((int)pMVar3->field_005D,(undefined *)0x0,DAT_00807dd9);
  local_c = &pMVar3->field_0653;
  pMVar3->field_008D = pcVar9;
  piVar15 = &pMVar3->field_02A5;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar15,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar15,0xffffffff,0,0);
    FUN_006b3af0((int *)PTR_008075a8,*piVar15);
    local_c = local_c + 3;
    piVar15 = piVar15 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  local_c = (undefined4 *)&pMVar3->field_0x68f;
  piVar15 = &pMVar3->field_02BD;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)PTR_008075a8,(uint *)piVar15,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar15,0xffffffff,0,0);
    FUN_006b3af0((int *)PTR_008075a8,*piVar15);
    local_c = (undefined4 *)((int)local_c + 0xc);
    piVar15 = piVar15 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_02D1,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_02D1 + 4))(DAT_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_02ED = 0;
  pMVar3->field_02F1 = 0;
  pMVar3->field_02D9 = 0;
  if (pMVar3->field_02D5 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0319,pMVar3->field_02D5);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_0362,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_0362 + 4))(DAT_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_037E = 0;
  pMVar3->field_0382 = 0;
  pMVar3->field_036A = 0;
  if (pMVar3->field_0366 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_03AA,pMVar3->field_0366);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_03F3,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_03F3 + 4))(DAT_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_040F = 0;
  pMVar3->field_0413 = 0;
  pMVar3->field_03FB = 0;
  if (pMVar3->field_03F7 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_043B,pMVar3->field_03F7);
  }
  piVar15 = &pMVar3->field_0484;
  FUN_006b2330((uint)PTR_008075a8,(uint *)piVar15,0x32,0x402f63,0,0,(uint)&pMVar3->field_06BF);
  Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar15,0xffffffff,0,0);
  FUN_006b3af0((int *)PTR_008075a8,*piVar15);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_048C,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_048C + 4))(DAT_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_04A8 = 0;
  pMVar3->field_04AC = 0;
  pMVar3->field_0494 = 0;
  if (pMVar3->field_0490 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_04D4,pMVar3->field_0490);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_051D,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_051D + 4))(DAT_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_0539 = 0;
  pMVar3->field_053D = 0;
  pMVar3->field_0525 = 0;
  if (pMVar3->field_0521 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0565,pMVar3->field_0521);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_05AE,(int *)PTR_008075a8,0x31,'\a',(undefined4 *)0x0,0,
             0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(pMVar3->field_05AE + 4))(DAT_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_05CA = 0;
  pMVar3->field_05CE = 0;
  pMVar3->field_05B6 = 0;
  if (pMVar3->field_05B2 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_05F6,pMVar3->field_05B2);
  }
  piVar15 = &pMVar3->field_063F;
  FUN_006b2330((uint)PTR_008075a8,(uint *)piVar15,0x32,0x402f63,0,0,(uint)&pMVar3->field_06CB);
  Library::DKW::DDX::FUN_006b3640((int *)PTR_008075a8,*piVar15,0xffffffff,0,0);
  FUN_006b3af0((int *)PTR_008075a8,*piVar15);
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  pMVar3->field_064B = pDVar8;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar3->field_0647 = pDVar8;
  pDVar8 = (DArrayTy *)Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar3->field_064F = pDVar8;
  if (PTR_0081176c->field_02E6 != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(PTR_0081176c->field_02E6,0,0,1);
  }
  DarkScreen(DAT_0080759c,1,0);
  this_00 = PTR_00802a30;
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    iVar4 = PTR_00802a30->field_00C9;
    iVar1 = PTR_00802a30->field_00C5;
    PTR_00802a30->field_0493 = 3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,iVar1,iVar4);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = 0xffffffff;
  }
  SetAccelerator(1,pMVar3->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(1,pMVar3->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar3->field_006D = 3;
  PlayScript(pMVar3);
  PaintMTask(pMVar3);
  thunk_FUN_0055ddf0(DAT_0080759c,(int *)PTR_008075a8,(int)pMVar3->field_005D,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

