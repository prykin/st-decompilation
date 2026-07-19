
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  undefined1 *puVar1;
  MMsgTy *this_00;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar12;
  int iVar13;
  undefined4 local_454 [256];
  InternalExceptionFrame local_54;
  PrividerTy *local_10;
  int local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 == 0) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    puVar6 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,10);
    this_02 = local_10;
    *(uint **)&local_10->field_0x1c92 = puVar6;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar6,(char *)&DAT_00807ddd);
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (*(int *)&DAT_00802a30[1].field_0x45 == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)&DAT_00802a30[1].field_0x49);
      }
      else if (DAT_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
      }
    }
    uVar7 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    *(undefined4 *)(DAT_0081176c + 0x2c) = uVar7;
    iVar5 = *(int *)(DAT_0081176c + 0x2c);
    *(int *)&this_02->field_0x5d = iVar5;
    FUN_006bc360(iVar5,local_454,(int *)0x0);
    *(undefined4 *)(*(int *)&this_02->field_0x1a5b + 0x140) = 0x1f;
    FUN_00718780((int)local_454,0,0x100,0x8b,0x15,
                 (undefined4 *)(*(int *)&this_02->field_0x1a5b + 0x144));
    if (param_2 != '\0') {
      thunk_FUN_0055dbf0(DAT_0080759c,1,0);
    }
    this_02->field_0x1a71 = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar5 = thunk_FUN_005daa90(), iVar5 != 0)) {
      param_1 = '\0';
    }
    SetMode(this_02,param_1,'\x01');
    this_02->field_0x1a60 = this_02->field_0x1a5f;
    this_00 = *(MMsgTy **)(*(int *)&this_02->field_0x1a5b + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::ShowSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&this_02->field_0x1a5b + 0x2e6) + 0x1cab) =
           *(undefined4 *)&this_02->field_0x8;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_0x1a77,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
    ;
    (**(code **)(*(int *)&this_02->field_0x1a77 + 4))
              (DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    *(undefined4 *)&this_02->field_0x1a93 = 0x289;
    *(undefined4 *)&this_02->field_0x1a97 = 0x6a;
    *(undefined4 *)&this_02->field_0x1a7f = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_0x1b08,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
    ;
    (**(code **)(*(int *)&this_02->field_0x1b08 + 4))
              (DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    *(undefined4 *)&this_02->field_0x1b24 = 0x289;
    *(undefined4 *)&this_02->field_0x1b28 = 0x176;
    *(undefined4 *)&this_02->field_0x1b10 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_0x1b99,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0)
    ;
    (**(code **)(*(int *)&this_02->field_0x1b99 + 4))
              (DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    iVar5 = 1;
    *(undefined4 *)&this_02->field_0x1bb5 = 0x28e;
    *(undefined4 *)&this_02->field_0x1bb9 = 0x8a;
    puVar9 = (undefined4 *)(*(int *)&this_02->field_0x5d + 0x28);
    *(undefined4 *)&this_02->field_0x1ba1 = 0;
    uVar8 = FUN_006b4fe0(*(int *)&this_02->field_0x5d);
    iVar5 = FUN_006b50c0(0x208,0x143,(uint)*(ushort *)(*(int *)&this_02->field_0x5d + 0xe),uVar8,
                         puVar9,iVar5);
    *(int *)&this_02->field_0x1c82 = iVar5;
    uVar8 = *(uint *)(iVar5 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar5 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    puVar6 = (uint *)&this_02->field_0x1c2a;
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    uVar8 = 0x67;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar6,0x31,0x40597f,
                   *(uint *)(*(int *)&this_02->field_0x1c82 + 4),0x13,(uint)this_02);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar6,0xffffffff,0x7a,uVar8);
      uVar8 = uVar8 + 0x13;
      puVar6 = puVar6 + 1;
    } while ((int)uVar8 < 0x209);
    iVar5 = 1;
    puVar9 = (undefined4 *)(*(int *)&this_02->field_0x5d + 0x28);
    uVar8 = FUN_006b4fe0(*(int *)&this_02->field_0x5d);
    iVar5 = FUN_006b50c0(0x22e,0x2e,(uint)*(ushort *)(*(int *)&this_02->field_0x5d + 0xe),uVar8,
                         puVar9,iVar5);
    *(int *)&this_02->field_0x1c8e = iVar5;
    uVar8 = *(uint *)(iVar5 + 0x14);
    if (uVar8 == 0) {
      uVar8 = ((uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar5 + 8);
    }
    puVar9 = (undefined4 *)FUN_006b4fa0(iVar5);
    for (uVar11 = uVar8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar9 = 0xff;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),*(int *)&this_02->field_0x1c8e,0,3,1,0x22c,
                     0x14);
    uVar7 = 2;
    iVar13 = -1;
    iVar5 = -2;
    puVar6 = (uint *)FUN_006b0140(0x26b5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar6,iVar5,iVar13,uVar7);
    uVar8 = *(uint *)&this_02->field_0x1c8e;
    puVar1 = &this_02->field_0x1c8a;
    FUN_006b2330((uint)DAT_008075a8,(uint *)puVar1,0x31,0x4023f6,*(uint *)(uVar8 + 4),
                 *(uint *)(uVar8 + 8),uVar8);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*(uint *)puVar1,0xffffffff,0x79,0x197);
    CreateCtrls(this_02,'\x01');
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403c74,0x22e,0x145,(uint)this_02);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x51);
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
    *(undefined1 **)&this_02->field_0x1c96 = puVar10;
    if (puVar10 != (undefined1 *)0x0) {
      uVar11 = 0;
      cVar12 = '\x01';
      uVar8 = 0x10;
      iVar13 = 1;
      iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar8 = HoloTy::Init(*(HoloTy **)&this_02->field_0x1c96,2,0x79,0x51,iVar5,iVar13,uVar8,cVar12,
                           uVar11);
      if (uVar8 != 0) {
        iVar5 = *(int *)&this_02->field_0x1c96;
        *(undefined1 *)(iVar5 + 2) = 1;
        *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
        uVar8 = *(uint *)(*(int *)&this_02->field_0x1c96 + 3);
        if (-1 < (int)uVar8) {
          FUN_006b3af0(DAT_008075a8,uVar8);
        }
        if (*(uint *)&this_02->field_0x1a7b != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_02->field_0x1abf,*(uint *)&this_02->field_0x1a7b);
        }
        if (*(uint *)&this_02->field_0x1b0c != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_02->field_0x1b50,*(uint *)&this_02->field_0x1b0c);
        }
        if (*(uint *)&this_02->field_0x1b9d != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_02->field_0x1be1,*(uint *)&this_02->field_0x1b9d);
        }
        puVar6 = (uint *)&this_02->field_0x1c2a;
        local_c = 0x16;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar6);
          puVar6 = puVar6 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->field_0x1a5f == '\0') {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   *(int *)&this_02->field_0x1a5b + 0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
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
      *(undefined1 **)&this_02->field_0x1c9a = puVar10;
      if (puVar10 != (undefined1 *)0x0) {
        uVar11 = 0;
        cVar12 = '\x01';
        uVar8 = 0x10;
        iVar13 = 1;
        iVar5 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar8 = HoloTy::Init(*(HoloTy **)&this_02->field_0x1c9a,1,0x79,0x197,iVar5,iVar13,uVar8,
                             cVar12,uVar11);
        if (uVar8 != 0) {
          iVar5 = *(int *)&this_02->field_0x1c9a;
          *(undefined1 *)(iVar5 + 2) = 1;
          *(undefined4 *)(iVar5 + 0x17) = *(undefined4 *)(iVar5 + 0x13);
          uVar8 = *(uint *)(*(int *)&this_02->field_0x1c9a + 3);
          if (-1 < (int)uVar8) {
            FUN_006b3af0(DAT_008075a8,uVar8);
          }
          FUN_006b3af0(DAT_008075a8,*(uint *)puVar1);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0(DAT_008075a8,*(uint *)puVar1);
    }
    this_01 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar7 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
      uVar2 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
      DAT_00802a30[0xb].field_0x47 = 1;
      *(undefined2 *)&this_01[0xb].field_0x48 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,uVar2,uVar7);
      CursorClassTy::DrawSprite
                (this_01,*(int *)((int)&this_01[1].field_0060 + 1),*(int *)&this_01[2].field_0x1);
      this_01[2].field_0xa = 0;
      *(undefined4 *)&this_01[0xc].field_0x2f = 0xffffffff;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,*(int *)&this_02->field_0x5d,10,2);
    }
    pcVar3 = *(char **)&this_02->field_0x1c96;
    if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (-1 < (int)*(uint *)(pcVar3 + 3))) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar3 + 3));
    }
    pcVar3 = *(char **)&this_02->field_0x1c9a;
    if (((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) && (-1 < (int)*(uint *)(pcVar3 + 3))) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(pcVar3 + 3));
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar13 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xac,0,iVar5,&DAT_007a4ccc,
                              s_PrividerTy__InitPrivider_007ccda0);
  if (iVar13 == 0) {
    RaiseInternalException(iVar5,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xac);
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

