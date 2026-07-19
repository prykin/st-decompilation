
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,undefined1 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  MTaskTy *pMVar3;
  int iVar4;
  cMf32 *pcVar5;
  ushort *puVar6;
  uint *puVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  ccFntTy *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  undefined4 *puVar14;
  byte *pbVar15;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar3 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0xdd,0,iVar4,&DAT_007a4ccc,
                               s_MTaskTy__InitMTask_007cda1c);
    pMVar3 = local_10;
    if (iVar4 == 0) {
      thunk_FUN_005b66e0(local_10);
      pMVar3->field_0045 = 0x200;
      pMVar3->field_0049 = 0;
      pMVar3->field_004D = 0x6102;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_10->field_006E = param_1;
  if (param_1 == '\0') {
    local_10->field_006F = param_2;
  }
  else {
    local_10->field_006F = 0;
  }
  if (local_10->field_006E == '\x01') {
    thunk_FUN_005daf20(DAT_0081176c);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar3->field_006E == '\0') {
    pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    pcVar5 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  pMVar3->field_0070 = pcVar5;
  if (DAT_0080fb6e != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = Library::Ourlib::MFSARR::mfSarLoad
                             ((int)pMVar3->field_0070,PTR_s_DESCRIPTION_0079c21c,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = Library::Ourlib::MFSARR::mfSarLoad
                             ((int)pMVar3->field_0070,PTR_s_OBJECTIVES_0079c220,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar14 = &DAT_0080c3c3;
    for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    local_8 = &DAT_0080c3c3;
    puVar6 = cMf32::RecGet(pMVar3->field_0070,0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar6 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
      uVar11 = 0xffffffff;
      pbVar13 = local_1a8;
      do {
        pbVar15 = pbVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pbVar15 = pbVar13 + 1;
        bVar16 = *pbVar13;
        pbVar13 = pbVar15;
      } while (bVar16 != 0);
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
  if (pMVar3->field_006E == '\0') {
    pcVar5 = pMVar3->field_0070;
    pcVar17 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    pcVar5 = pMVar3->field_0070;
    pcVar17 = (char *)&DAT_0080e303;
  }
  iVar4 = Library::Ourlib::MFDARR::mfDarLoad((int)pcVar5,pcVar17,0);
  pMVar3->field_0074 = iVar4;
  if (iVar4 == 0) {
    puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,0x50,1);
    puVar14 = local_a4;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    pMVar3->field_0074 = puVar7;
    local_a4[0]._0_1_ = 8;
    Library::DKW::TBL::FUN_006ae1c0(puVar7,local_a4);
  }
  Library::DKW::TBL::FUN_006afe40(&pMVar3->field_0078,(uint *)pMVar3->field_0074);
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (DAT_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  iVar4 = 1;
  bVar16 = 0;
  pCVar8 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
  uVar9 = FUN_0070a9f0(DAT_00806780,pCVar8,bVar16,iVar4);
  pMVar3->field_005D = uVar9;
  pMVar3->field_0080 = 1;
  puVar6 = Library::Ourlib::MFRLOAD::mfRLoad
                     (DAT_00806784,CASE_B,(byte *)s_MT_CHECK_007cda58,0xffffffff,0,1,0,
                      (undefined4 *)0x0);
  pMVar3->field_0081 = puVar6;
  thunk_FUN_00568bc0(&g_sound,0);
  FUN_006bc360(pMVar3->field_005D,local_5a8,(int *)0x0);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_0x91);
  Library::Ourlib::PALETTE::FUN_00718780
            ((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x191);
  pcVar10 = (ccFntTy *)thunk_FUN_005defe0(pMVar3->field_005D,(undefined *)0x0,DAT_00807dd9);
  pMVar3->field_0089 = pcVar10;
  pcVar10->field_0058 = 1;
  pcVar10->field_005C = 0;
  pcVar10 = (ccFntTy *)thunk_FUN_005df290(pMVar3->field_005D,(undefined *)0x0,DAT_00807dd9);
  local_c = &pMVar3->field_0653;
  pMVar3->field_008D = pcVar10;
  puVar7 = &pMVar3->field_02A5;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar7);
    local_c = local_c + 3;
    puVar7 = puVar7 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  local_c = (undefined4 *)&pMVar3->field_0x68f;
  puVar7 = &pMVar3->field_02BD;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar7);
    local_c = (undefined4 *)((int)local_c + 0xc);
    puVar7 = puVar7 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_02D1,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_02D1 + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  pMVar3->field_02ED = 0;
  pMVar3->field_02F1 = 0;
  pMVar3->field_02D9 = 0;
  if (pMVar3->field_02D5 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0319,pMVar3->field_02D5);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_0362,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_0362 + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  pMVar3->field_037E = 0;
  pMVar3->field_0382 = 0;
  pMVar3->field_036A = 0;
  if (pMVar3->field_0366 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_03AA,pMVar3->field_0366);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_03F3,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_03F3 + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  pMVar3->field_040F = 0;
  pMVar3->field_0413 = 0;
  pMVar3->field_03FB = 0;
  if (pMVar3->field_03F7 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_043B,pMVar3->field_03F7);
  }
  puVar14 = &pMVar3->field_0484;
  FUN_006b2330((uint)DAT_008075a8,puVar14,0x32,0x402f63,0,0,(uint)&pMVar3->field_06BF);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar14,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*puVar14);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_048C,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_048C + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  pMVar3->field_04A8 = 0;
  pMVar3->field_04AC = 0;
  pMVar3->field_0494 = 0;
  if (pMVar3->field_0490 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_04D4,pMVar3->field_0490);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_051D,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_051D + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff);
  pMVar3->field_0539 = 0;
  pMVar3->field_053D = 0;
  pMVar3->field_0525 = 0;
  if (pMVar3->field_0521 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_0565,pMVar3->field_0521);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar3->field_05AE,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(pMVar3->field_05AE + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  pMVar3->field_05CA = 0;
  pMVar3->field_05CE = 0;
  pMVar3->field_05B6 = 0;
  if (pMVar3->field_05B2 != 0xffffffff) {
    FUN_006b3af0((int *)pMVar3->field_05F6,pMVar3->field_05B2);
  }
  puVar14 = &pMVar3->field_063F;
  FUN_006b2330((uint)DAT_008075a8,puVar14,0x32,0x402f63,0,0,(uint)&pMVar3->field_06CB);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar14,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*puVar14);
  puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  pMVar3->field_064B = puVar7;
  puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar3->field_0647 = puVar7;
  puVar7 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  pMVar3->field_064F = puVar7;
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  DarkScreen(DAT_0080759c,1,0);
  this_00 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar9 = DAT_00802a30->field_00C9;
    uVar1 = DAT_00802a30->field_00C5;
    DAT_00802a30->field_0493 = 3;
    this_00->field_0494 = 0xffff;
    CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar9);
    CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_0xd2 = 0;
    *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
  }
  SetAccelerator(1,pMVar3->field_0008,2,100,2,1,0,0,0,0,0,0);
  SetAccelerator(1,pMVar3->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar3->field_006D = 3;
  PlayScript(pMVar3);
  PaintMTask(pMVar3);
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,pMVar3->field_005D,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

