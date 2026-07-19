
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall WaitTy::InitWait(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  WaitTy *pWVar12;
  int iVar13;
  char cVar14;
  undefined4 local_668 [256];
  undefined4 local_268;
  undefined4 local_1a5;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_17e;
  undefined4 local_171;
  undefined4 local_16d;
  int local_169;
  undefined4 local_6c [7];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  uint local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar4 == 0) {
    _DAT_0080f32e = 0;
    *(undefined4 *)(local_c + 0x1a64) = param_1;
    *(undefined4 *)(local_c + 0x1a68) = param_2;
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(this_01 + 0x1af0) = puVar5;
    if ((DAT_00811768 == '\x01') || (DAT_008067a0 != '\0')) {
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    }
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    uVar6 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    *(undefined4 *)(DAT_0081176c + 0x2c) = uVar6;
    iVar4 = *(int *)(DAT_0081176c + 0x2c);
    *(int *)(this_01 + 0x5d) = iVar4;
    FUN_006bc360(iVar4,local_668,(int *)0x0);
    *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x140) = 0x1f;
    FUN_00718780((int)local_668,0,0x100,0x8b,0x15,(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x144)
                );
    puVar7 = FUN_0070a5a0(DAT_00806780,1,s_MM_MAPB_007cc790,0,1);
    thunk_FUN_00540760(*(undefined4 **)(DAT_0081176c + 0x2f0),0,0,'\x01',(byte *)puVar7);
    iVar4 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar5;
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      *(undefined4 *)(this_01 + 0x2d) = 0x28;
      *(undefined2 *)(this_01 + 0x31) = 1;
      *(undefined2 *)(this_01 + 0x33) = *(undefined2 *)(*(int *)(DAT_0081176c + 0x548) + 8);
      FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)(this_01 + 0x1d));
      *(undefined4 *)(this_01 + 0x2d) = 0x22;
      *(undefined2 *)(this_01 + 0x33) = 0;
      *(undefined2 *)(this_01 + 0x31) = 0;
      FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)(this_01 + 0x1d));
    }
    PaintWait(this_01,'\x01');
    iVar4 = 1;
    puVar9 = (undefined4 *)(*(int *)(this_01 + 0x5d) + 0x28);
    uVar8 = FUN_006b4fe0(*(int *)(this_01 + 0x5d));
    iVar4 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(*(int *)(this_01 + 0x5d) + 0xe),uVar8,puVar9,
                         iVar4);
    *(int *)(this_01 + 0x1aec) = iVar4;
    uVar8 = *(uint *)(iVar4 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar4 + 0xe) * *(int *)(iVar4 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar4 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar4);
    for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    uVar11 = 0x3f;
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    pWVar12 = this_01 + 0x1a94;
    do {
      FUN_006b2330((uint)DAT_008075a8,(uint *)pWVar12,0x31,0x402211,
                   *(uint *)(*(int *)(this_01 + 0x1aec) + 4),0x13,(uint)this_01);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)pWVar12,0xffffffff,0x114,uVar11);
      FUN_006b3af0(DAT_008075a8,*(uint *)pWVar12);
      uVar11 = uVar11 + 0x13;
      pWVar12 = pWVar12 + 4;
    } while ((int)uVar11 < 0x1e1);
    CreateCtrls(this_01);
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x204,0x19d,
                 *(int *)(this_01 + 0x1a5b) + 0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = (undefined1 *)0x0;
    }
    else {
      puVar10[2] = 1;
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      puVar10[1] = 2;
      *(undefined4 *)(puVar10 + 7) = 0;
      *(undefined4 *)(puVar10 + 0xb) = 0;
      *(undefined4 *)(puVar10 + 0xf) = 0;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      *(undefined4 *)(puVar10 + 0x13) = 1;
      *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x27) = 0;
      *(undefined4 *)(puVar10 + 0x23) = 0;
      *(undefined4 *)(puVar10 + 0x2f) = 1;
      *(undefined4 *)(puVar10 + 0x2b) = 1;
    }
    *(undefined1 **)(this_01 + 0x1af8) = puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar11 = 0;
      cVar14 = '\x01';
      uVar8 = 0x10;
      iVar13 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
      uVar8 = HoloTy::Init(*(HoloTy **)(this_01 + 0x1af8),2,0x112,0x38,iVar4,iVar13,uVar8,cVar14,
                           uVar11);
      if (uVar8 != 0) {
        iVar4 = *(int *)(this_01 + 0x1af8);
        *(undefined1 *)(iVar4 + 2) = 1;
        *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
        if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1af8) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1af8) + 3));
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if ((*(int *)(this_01 + 0x1a64) == 0) || (*(int *)(this_01 + 0x1a68) != 0)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   *(int *)(this_01 + 0x1a5b) + 0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
      puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar10[2] = 1;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 3) = 0xffffffff;
        puVar10[1] = 2;
        *(undefined4 *)(puVar10 + 7) = 0;
        *(undefined4 *)(puVar10 + 0xb) = 0;
        *(undefined4 *)(puVar10 + 0xf) = 0;
        *(undefined4 *)(puVar10 + 0x1b) = 1;
        *(undefined4 *)(puVar10 + 0x13) = 1;
        *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar10 + 0x27) = 0;
        *(undefined4 *)(puVar10 + 0x23) = 0;
        *(undefined4 *)(puVar10 + 0x2f) = 1;
        *(undefined4 *)(puVar10 + 0x2b) = 1;
      }
      *(undefined1 **)(this_01 + 0x1b00) = puVar10;
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = 0;
        cVar14 = '\x01';
        uVar8 = 0x10;
        iVar13 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
        uVar8 = HoloTy::Init(*(HoloTy **)(this_01 + 0x1b00),4,10,0xb4,iVar4,iVar13,uVar8,cVar14,
                             uVar11);
        if (uVar8 != 0) {
          iVar4 = *(int *)(this_01 + 0x1b00);
          *(undefined1 *)(iVar4 + 2) = 1;
          *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
          if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1b00) + 3)) {
            FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1b00) + 3));
          }
          if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
          }
          if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
          }
          if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
    }
    if (*(int *)(this_01 + 0x1a64) == 0) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   *(int *)(this_01 + 0x1a5b) + 0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      puVar10 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar10[2] = 1;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 3) = 0xffffffff;
        puVar10[1] = 2;
        *(undefined4 *)(puVar10 + 7) = 0;
        *(undefined4 *)(puVar10 + 0xb) = 0;
        *(undefined4 *)(puVar10 + 0xf) = 0;
        *(undefined4 *)(puVar10 + 0x1b) = 1;
        *(undefined4 *)(puVar10 + 0x13) = 1;
        *(undefined4 *)(puVar10 + 0x17) = 0xffffffff;
        *(undefined4 *)(puVar10 + 0x27) = 0;
        *(undefined4 *)(puVar10 + 0x23) = 0;
        *(undefined4 *)(puVar10 + 0x2f) = 1;
        *(undefined4 *)(puVar10 + 0x2b) = 1;
      }
      *(undefined1 **)(this_01 + 0x1afc) = puVar10;
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = 0;
        cVar14 = '\x01';
        uVar8 = 0x10;
        iVar13 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar8 = HoloTy::Init(*(HoloTy **)(this_01 + 0x1afc),1,200,0x1f1,iVar4,iVar13,uVar8,cVar14,
                             uVar11);
        if (uVar8 != 0) {
          iVar4 = *(int *)(this_01 + 0x1afc);
          *(undefined1 *)(iVar4 + 2) = 1;
          *(undefined4 *)(iVar4 + 0x17) = *(undefined4 *)(iVar4 + 0x13);
          if (-1 < (int)*(uint *)(*(int *)(this_01 + 0x1afc) + 3)) {
            FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_01 + 0x1afc) + 3));
          }
          if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
          }
          if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
            FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
          FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    }
    if ((DAT_00811768 != '\0') || (DAT_008067a0 != '\0')) {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)(this_01 + 0x5d),10,2);
    }
    pcVar1 = *(char **)(this_01 + 0x1af8);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (-1 < (int)*(uint *)(pcVar1 + 3))) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar1 + 3));
    }
    pcVar1 = *(char **)(this_01 + 0x1b00);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (-1 < (int)*(uint *)(pcVar1 + 3))) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar1 + 3));
    }
    pcVar1 = *(char **)(this_01 + 0x1afc);
    if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (-1 < (int)*(uint *)(pcVar1 + 3))) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar1 + 3));
    }
    thunk_FUN_005e9a40(this_01);
    this_00 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar6 = *(undefined4 *)(DAT_00802a30 + 0xc9);
      uVar2 = *(undefined4 *)(DAT_00802a30 + 0xc5);
      DAT_00802a30[0x493] = (CursorClassTy)0x1;
      *(undefined2 *)(this_00 + 0x494) = 0xffff;
      CursorClassTy::SetGCType(this_00,0,uVar2,uVar6);
      CursorClassTy::DrawSprite(this_00,*(int *)(this_00 + 0xc5),*(int *)(this_00 + 0xc9));
      this_00[0xd2] = (CursorClassTy)0x0;
      *(undefined4 *)(this_00 + 0x4df) = 0xffffffff;
    }
    this_01[0x65] = (WaitTy)0x3;
    puVar9 = &local_268;
    for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    iVar4 = *(int *)(this_01 + 0x1a5b);
    *(undefined1 *)((int)puVar9 + 2) = 0;
    local_194 = 2;
    local_16d = 2;
    local_198 = *(undefined4 *)(this_01 + 8);
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (*(int *)(iVar4 + 0x2e6) != 0) {
      puVar9 = local_6c;
      for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0xffff;
      MMsgTy::ShowSprites(*(MMsgTy **)(iVar4 + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x2e6) + 0x1cab) =
           *(undefined4 *)(this_01 + 8);
      MMsgTy::SetPanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),0,(int)&local_268,0,0);
      MMsgTy::StatePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),(int)local_6c);
    }
    thunk_FUN_00568bc0(&g_sound,0);
    if ((DAT_00807300._1_1_ & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
    }
    thunk_FUN_005b6730(this_01,0xb,'\0',-1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar13 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xa3,0,iVar4,&DAT_007a4ccc,
                              s_WaitTy__InitWait_007cdd84);
  if (iVar13 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0xa3);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

