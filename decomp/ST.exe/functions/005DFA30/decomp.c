
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask */

void __thiscall MTaskTy::InitMTask(MTaskTy *this,char param_1,undefined1 param_2)

{
  SpriteClassTy *this_00;
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_01;
  MTaskTy *pMVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  uint *puVar8;
  LPSTR pCVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  byte *pbVar14;
  byte bVar15;
  char *pcVar16;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pMVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0xdd,0,iVar5,&DAT_007a4ccc,
                               s_MTaskTy__InitMTask_007cda1c);
    pMVar4 = local_10;
    if (iVar5 == 0) {
      thunk_FUN_005b66e0(local_10);
      *(undefined4 *)&pMVar4->field_0x45 = 0x200;
      *(undefined4 *)&pMVar4->field_0x49 = 0;
      *(undefined4 *)&pMVar4->field_0x4d = 0x6102;
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_10[1].field_0x1 = param_1;
  if (param_1 == '\0') {
    local_10[1].field_0x2 = param_2;
  }
  else {
    local_10[1].field_0x2 = 0;
  }
  if (local_10[1].field_0x1 == '\x01') {
    thunk_FUN_005daf20(DAT_0081176c);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar4[1].field_0x1 == '\0') {
    puVar6 = FUN_006f0ec0(0x345,&DAT_0080ed16,0,0,0);
  }
  else {
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080c52e);
    puVar6 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  *(undefined4 **)&pMVar4[1].field_0x3 = puVar6;
  if (DAT_0080fb6e != 0) {
    if (DAT_0080c4c7 != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4c7);
    }
    DAT_0080c4c7 = FUN_0071aa10(*(int *)&pMVar4[1].field_0x3,PTR_s_DESCRIPTION_0079c21c,0);
    if (DAT_0080c4c7 == (uint *)0x0) {
      DAT_0080c4c7 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    if (DAT_0080c4cb != (uint *)0x0) {
      FUN_006b5570((byte *)DAT_0080c4cb);
    }
    DAT_0080c4cb = FUN_0071aa10(*(int *)&pMVar4[1].field_0x3,PTR_s_OBJECTIVES_0079c220,0);
    if (DAT_0080c4cb == (uint *)0x0) {
      DAT_0080c4cb = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    }
    puVar6 = &DAT_0080c3c3;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_8 = &DAT_0080c3c3;
    puVar7 = cMf32::RecGet(*(cMf32 **)&pMVar4[1].field_0x3,0xc,PTR_s_TITLE_MISSION_0079c218,
                           (int *)&local_8,0);
    if ((puVar7 == (ushort *)0x0) || ((char)DAT_0080c3c3 == '\0')) {
      Library::MSVCRT::FUN_0072e730(&DAT_0080ed16,(byte *)0x0,(byte *)0x0,local_1a8,(byte *)0x0);
      uVar11 = 0xffffffff;
      pbVar13 = local_1a8;
      do {
        pbVar14 = pbVar13;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar13 + 1;
        bVar15 = *pbVar13;
        pbVar13 = pbVar14;
      } while (bVar15 != 0);
      uVar11 = ~uVar11;
      pbVar13 = pbVar14 + -uVar11;
      pbVar14 = (byte *)&DAT_0080c3c3;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pbVar14 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar14 = pbVar14 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar14 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      }
    }
  }
  if (pMVar4[1].field_0x1 == '\0') {
    iVar5 = *(int *)&pMVar4[1].field_0x3;
    pcVar16 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    iVar5 = *(int *)&pMVar4[1].field_0x3;
    pcVar16 = (char *)&DAT_0080e303;
  }
  iVar5 = FUN_00715050(iVar5,pcVar16,0);
  *(int *)&pMVar4[1].field_0x7 = iVar5;
  if (iVar5 == 0) {
    puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,0x50,1);
    puVar6 = local_a4;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(uint **)&pMVar4[1].field_0x7 = puVar8;
    local_a4[0]._0_1_ = 8;
    Library::DKW::TBL::FUN_006ae1c0(puVar8,local_a4);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&pMVar4[1].field_0xb,*(uint **)&pMVar4[1].field_0x7);
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
    }
    else if (DAT_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
    }
  }
  iVar5 = 1;
  bVar15 = 0;
  pCVar9 = FUN_006f2c00(s_TASK_BKG_007cda64,1,(uint)DAT_0080874e);
  uVar10 = FUN_0070a9f0(DAT_00806780,pCVar9,bVar15,iVar5);
  *(undefined4 *)&pMVar4->field_0x5d = uVar10;
  *(undefined1 *)((int)&pMVar4[1].field_0010 + 3) = 1;
  puVar7 = FUN_00709af0(DAT_00806784,CASE_B,(byte *)s_MT_CHECK_007cda58,0xffffffff,0,1,0,
                        (undefined4 *)0x0);
  *(ushort **)&pMVar4[1].field_0x14 = puVar7;
  thunk_FUN_00568bc0(&g_sound,0);
  FUN_006bc360(*(int *)&pMVar4->field_0x5d,local_5a8,(int *)0x0);
  FUN_00718780((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar4[1].field_0x24);
  FUN_00718780((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar4[3].field_0x4a);
  iVar5 = thunk_FUN_005defe0(*(int *)&pMVar4->field_0x5d,(undefined *)0x0,DAT_00807dd9);
  *(int *)&pMVar4[1].field_0x1c = iVar5;
  *(undefined4 *)(iVar5 + 0x58) = 1;
  *(undefined4 *)(iVar5 + 0x5c) = 0;
  uVar10 = thunk_FUN_005df290(*(int *)&pMVar4->field_0x5d,(undefined *)0x0,DAT_00807dd9);
  local_c = (undefined4 *)&pMVar4[0xe].field_0x5d;
  *(undefined4 *)&pMVar4[1].field_0x20 = uVar10;
  puVar8 = (uint *)&pMVar4[6].field_0x17;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    local_c = local_c + 3;
    puVar8 = puVar8 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  local_c = (undefined4 *)&pMVar4[0xf].field_0x2c;
  puVar8 = (uint *)&pMVar4[6].field_0x2f;
  local_8 = (undefined4 *)0x5;
  do {
    FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x402f63,0,0,(uint)local_c);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0,0);
    FUN_006b3af0(DAT_008075a8,*puVar8);
    local_c = (undefined4 *)((int)local_c + 0xc);
    puVar8 = puVar8 + 1;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (local_8 != (undefined4 *)0x0);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4[6].field_0x43,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&pMVar4[6].field_0x43 + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff);
  *(undefined4 *)&pMVar4[6].field_0x5f = 0;
  *(undefined4 *)((int)&pMVar4[6].field_0061 + 2) = 0;
  *(undefined4 *)&pMVar4[6].field_0x4b = 0;
  if (*(uint *)&pMVar4[6].field_0x47 != 0xffffffff) {
    FUN_006b3af0(*(int **)&pMVar4[7].field_0x1e,*(uint *)&pMVar4[6].field_0x47);
  }
  this_00 = (SpriteClassTy *)((int)&pMVar4[7].field_0065 + 2);
  SpriteClassTy::InitSprite(this_00,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (*this_00->vtable->SetImagesReg)(this_00,DAT_00806784,7,0,(byte *)s_MT_SLDDN_007cda40,0xffffffff);
  *(undefined4 *)&pMVar4[8].field_0x16 = 0;
  *(undefined4 *)&pMVar4[8].field_0x1a = 0;
  *(undefined4 *)&pMVar4[8].field_0x2 = 0;
  uVar11 = *(uint *)((int)&pMVar4[7].field_0069 + 2);
  if (uVar11 != 0xffffffff) {
    FUN_006b3af0(*(int **)&pMVar4[8].field_0x42,uVar11);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4[9].field_0x1e,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&pMVar4[9].field_0x1e + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff);
  *(undefined4 *)&pMVar4[9].field_0x3a = 0;
  *(undefined4 *)&pMVar4[9].field_0x3e = 0;
  *(undefined4 *)&pMVar4[9].field_0x26 = 0;
  if (*(uint *)&pMVar4[9].field_0x22 != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)&pMVar4[9].field_0065 + 1),*(uint *)&pMVar4[9].field_0x22);
  }
  puVar1 = &pMVar4[10].field_0x42;
  FUN_006b2330((uint)DAT_008075a8,(uint *)puVar1,0x32,0x402f63,0,0,(uint)&pMVar4[0xf].field_0x5c);
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar1,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*(uint *)puVar1);
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4[10].field_0x4a,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&pMVar4[10].field_0x4a + 4))(DAT_00806784,7,0,s_MT_SLDUP_007cda4c,0xffffffff)
  ;
  *(undefined4 *)((int)&pMVar4[10].field_0065 + 1) = 0;
  *(undefined4 *)((int)&pMVar4[10].field_0069 + 1) = 0;
  *(undefined4 *)&pMVar4[10].field_0x52 = 0;
  if (*(uint *)&pMVar4[10].field_0x4e != 0xffffffff) {
    FUN_006b3af0(*(int **)&pMVar4[0xb].field_0x25,*(uint *)&pMVar4[10].field_0x4e);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4[0xc].field_0x1,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&pMVar4[0xc].field_0x1 + 4))(DAT_00806784,7,0,s_MT_SLDDN_007cda40,0xffffffff)
  ;
  *(undefined4 *)&pMVar4[0xc].field_0x1d = 0;
  *(undefined4 *)&pMVar4[0xc].field_0x21 = 0;
  *(undefined4 *)&pMVar4[0xc].field_0x9 = 0;
  if (*(uint *)&pMVar4[0xc].field_0x5 != 0xffffffff) {
    FUN_006b3af0(*(int **)&pMVar4[0xc].field_0x49,*(uint *)&pMVar4[0xc].field_0x5);
  }
  SpriteClassTy::InitSprite
            ((SpriteClassTy *)&pMVar4[0xd].field_0x25,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
  (**(code **)(*(int *)&pMVar4[0xd].field_0x25 + 4))(DAT_00806784,7,0,s_MT_SLDT_007cda34,0xffffffff)
  ;
  *(undefined4 *)&pMVar4[0xd].field_0x41 = 0;
  *(undefined4 *)&pMVar4[0xd].field_0x45 = 0;
  *(undefined4 *)&pMVar4[0xd].field_0x2d = 0;
  if (*(uint *)&pMVar4[0xd].field_0x29 != 0xffffffff) {
    FUN_006b3af0(*(int **)(pMVar4 + 0xe),*(uint *)&pMVar4[0xd].field_0x29);
  }
  puVar1 = &pMVar4[0xe].field_0x49;
  FUN_006b2330((uint)DAT_008075a8,(uint *)puVar1,0x32,0x402f63,0,0,
               (uint)((int)&pMVar4[0xf].field_0065 + 3));
  Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar1,0xffffffff,0,0);
  FUN_006b3af0(DAT_008075a8,*(uint *)puVar1);
  puVar8 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x9e,10,0x405de4);
  *(uint **)&pMVar4[0xe].field_0x55 = puVar8;
  puVar8 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)&pMVar4[0xe].field_0x51 = puVar8;
  puVar8 = Library::DKW::TBL::FUN_006ae310((uint *)0x0,10,0x3e,10,0x40365c);
  *(uint **)&pMVar4[0xe].field_0x59 = puVar8;
  if (*(MMsgTy **)(DAT_0081176c + 0x2e6) != (MMsgTy *)0x0) {
    MMsgTy::HidePanel(*(MMsgTy **)(DAT_0081176c + 0x2e6),0,0,1);
  }
  thunk_FUN_0055dbf0(DAT_0080759c,1,0);
  this_01 = DAT_00802a30;
  if (DAT_00802a30 != (CursorClassTy *)0x0) {
    uVar10 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
    uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
    DAT_00802a30[0xb].field_0x47 = 3;
    *(undefined2 *)&this_01[0xb].field_0x48 = 0xffff;
    CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar10);
    CursorClassTy::DrawSprite
              (this_01,*(int *)((int)&this_01[1].field_0060 + 1),*(int *)&this_01[2].field_0x1);
    this_01[2].field_0xa = 0;
    *(undefined4 *)&this_01[0xc].field_0x2f = 0xffffffff;
  }
  thunk_FUN_00540dc0(1,*(undefined4 *)&pMVar4->field_0x8,2,100,2,1,0,0,0,0,0,0);
  thunk_FUN_00540dc0(1,*(undefined4 *)&pMVar4->field_0x8,2,0x62,2,0x1c,0,0,0,0,0,0);
  *(undefined1 *)(pMVar4 + 1) = 3;
  PlayScript(pMVar4);
  PaintMTask(pMVar4);
  thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&pMVar4->field_0x5d,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

