
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall PrividerTy::InitPrivider(PrividerTy *this,char param_1,char param_2)

{
  MMsgTy *this_00;
  undefined4 uVar1;
  code *pcVar2;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  HoloTy *pHVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar10;
  int iVar11;
  undefined4 local_454 [256];
  InternalExceptionFrame local_54;
  PrividerTy *local_10;
  int local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::CloseGame((CFsgsConnection *)&DAT_00802a90);
      CFsgsConnection::CancelConnection((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,10);
    this_02 = local_10;
    local_10->field_1C92 = puVar4;
    Library::DKW::TBL::FUN_006b5aa0((int)puVar4,(char *)&DAT_00807ddd);
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      if (DAT_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)DAT_00802a30->field_00AD);
      }
      else if (DAT_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)DAT_00802a30->field_0060,DAT_00802a30->field_001C);
      }
    }
    uVar5 = FUN_0070a9f0(DAT_00806780,s_LOADSINGLE_007cc79c,0,1);
    *(undefined4 *)(DAT_0081176c + 0x2c) = uVar5;
    iVar3 = *(int *)(DAT_0081176c + 0x2c);
    this_02->field_005D = iVar3;
    FUN_006bc360(iVar3,local_454,(int *)0x0);
    *(undefined4 *)&this_02->field_1A5B->field_0x140 = 0x1f;
    FUN_00718780((int)local_454,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
    if (param_2 != '\0') {
      DarkScreen(DAT_0080759c,1,0);
    }
    this_02->field_1A71 = 0;
    thunk_FUN_005dac60();
    if ((param_1 == '\x01') && (iVar3 = thunk_FUN_005daa90(), iVar3 != 0)) {
      param_1 = '\0';
    }
    SetMode(this_02,param_1,'\x01');
    this_02->field_1A60 = this_02->field_1A5F;
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::ShowSprites(this_00);
      this_02->field_1A5B->field_02E6->field_1CAB = this_02->field_0008;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1A77,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_02->field_1A77 + 4))(DAT_00806784,7,0,s_MM_SLDUP_007cc04c,0xffffffff);
    this_02->field_1A93 = 0x289;
    this_02->field_1A97 = 0x6a;
    this_02->field_1A7F = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B08,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_02->field_1B08 + 4))(DAT_00806784,7,0,s_MM_SLDDN_007cc040,0xffffffff);
    this_02->field_1B24 = 0x289;
    this_02->field_1B28 = 0x176;
    this_02->field_1B10 = 0;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&this_02->field_1B99,DAT_008075a8,0x31,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(this_02->field_1B99 + 4))(DAT_00806784,7,0,s_MM_SLDT_007cc034,0xffffffff);
    iVar3 = 1;
    this_02->field_1BB5 = 0x28e;
    this_02->field_1BB9 = 0x8a;
    puVar7 = (undefined4 *)(this_02->field_005D + 0x28);
    this_02->field_1BA1 = 0;
    uVar6 = FUN_006b4fe0(this_02->field_005D);
    iVar3 = FUN_006b50c0(0x208,0x143,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar6,puVar7,iVar3
                        );
    this_02->field_1C82 = iVar3;
    uVar6 = *(uint *)(iVar3 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    puVar4 = &this_02->field_1C2A;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    uVar6 = 0x67;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar4,0x31,0x40597f,*(uint *)(this_02->field_1C82 + 4),0x13,
                   (uint)this_02);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar4,0xffffffff,0x7a,uVar6);
      uVar6 = uVar6 + 0x13;
      puVar4 = puVar4 + 1;
    } while ((int)uVar6 < 0x209);
    iVar3 = 1;
    puVar7 = (undefined4 *)(this_02->field_005D + 0x28);
    uVar6 = FUN_006b4fe0(this_02->field_005D);
    iVar3 = FUN_006b50c0(0x22e,0x2e,(uint)*(ushort *)(this_02->field_005D + 0xe),uVar6,puVar7,iVar3)
    ;
    this_02->field_1C8E = iVar3;
    uVar6 = *(uint *)(iVar3 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(DAT_0081176c + 0x34),this_02->field_1C8E,0,3,1,0x22c,0x14);
    uVar5 = 2;
    iVar11 = -1;
    iVar3 = -2;
    puVar4 = (uint *)FUN_006b0140(0x26b5,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(DAT_0081176c + 0x34),puVar4,iVar3,iVar11,uVar5);
    uVar6 = this_02->field_1C8E;
    puVar7 = &this_02->field_1C8A;
    FUN_006b2330((uint)DAT_008075a8,puVar7,0x31,0x4023f6,*(uint *)(uVar6 + 4),*(uint *)(uVar6 + 8),
                 uVar6);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar7,0xffffffff,0x79,0x197);
    CreateCtrls(this_02,'\x01');
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403c74,0x22e,0x145,(uint)this_02);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x51);
    pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar8 == (HoloTy *)0x0) {
      pHVar8 = (HoloTy *)0x0;
    }
    else {
      pHVar8->field_0002 = 1;
      pHVar8->field_0000 = 0;
      pHVar8->field_0003 = 0xffffffff;
      pHVar8->field_0001 = 2;
      pHVar8->field_0007 = 0;
      pHVar8->field_000B = 0;
      *(undefined4 *)&pHVar8->field_0xf = 0;
      *(undefined4 *)&pHVar8->field_0x1b = 1;
      pHVar8->field_0013 = 1;
      pHVar8->field_0017 = 0xffffffff;
      pHVar8->field_0027 = 0;
      pHVar8->field_0023 = 0;
      pHVar8->field_002F = 1;
      pHVar8->field_002B = 1;
    }
    this_02->field_1C96 = pHVar8;
    if (pHVar8 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar10 = '\x01';
      uVar6 = 0x10;
      iVar11 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x51,0x22e,0x145);
      uVar6 = HoloTy::Init(this_02->field_1C96,CASE_2,0x79,0x51,iVar3,iVar11,uVar6,cVar10,uVar9);
      if (uVar6 != 0) {
        pHVar8 = this_02->field_1C96;
        pHVar8->field_0002 = 1;
        pHVar8->field_0017 = pHVar8->field_0013;
        uVar6 = this_02->field_1C96->field_0003;
        if (-1 < (int)uVar6) {
          FUN_006b3af0(DAT_008075a8,uVar6);
        }
        if (this_02->field_1A7B != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1ABF,this_02->field_1A7B);
        }
        if (this_02->field_1B0C != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1B50,this_02->field_1B0C);
        }
        if (this_02->field_1B9D != 0xffffffff) {
          FUN_006b3af0((int *)this_02->field_1BE1,this_02->field_1B9D);
        }
        puVar4 = &this_02->field_1C2A;
        local_c = 0x16;
        do {
          FUN_006b3af0(DAT_008075a8,*puVar4);
          puVar4 = puVar4 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->field_1A5F == '\0') {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (uint)&this_02->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x79,0x197);
      pHVar8 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar8 == (HoloTy *)0x0) {
        pHVar8 = (HoloTy *)0x0;
      }
      else {
        pHVar8->field_0002 = 1;
        pHVar8->field_0000 = 0;
        pHVar8->field_0003 = 0xffffffff;
        pHVar8->field_0001 = 2;
        pHVar8->field_0007 = 0;
        pHVar8->field_000B = 0;
        *(undefined4 *)&pHVar8->field_0xf = 0;
        *(undefined4 *)&pHVar8->field_0x1b = 1;
        pHVar8->field_0013 = 1;
        pHVar8->field_0017 = 0xffffffff;
        pHVar8->field_0027 = 0;
        pHVar8->field_0023 = 0;
        pHVar8->field_002F = 1;
        pHVar8->field_002B = 1;
      }
      this_02->field_1C9A = pHVar8;
      if (pHVar8 != (HoloTy *)0x0) {
        uVar9 = 0;
        cVar10 = '\x01';
        uVar6 = 0x10;
        iVar11 = 1;
        iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x79,0x197,0x22e,0x2e);
        uVar6 = HoloTy::Init(this_02->field_1C9A,CASE_1,0x79,0x197,iVar3,iVar11,uVar6,cVar10,uVar9);
        if (uVar6 != 0) {
          pHVar8 = this_02->field_1C9A;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar6 = this_02->field_1C9A->field_0003;
          if (-1 < (int)uVar6) {
            FUN_006b3af0(DAT_008075a8,uVar6);
          }
          FUN_006b3af0(DAT_008075a8,*puVar7);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      FUN_006b3af0(DAT_008075a8,*puVar7);
    }
    this_01 = DAT_00802a30;
    if (DAT_00802a30 != (CursorClassTy *)0x0) {
      uVar5 = DAT_00802a30->field_00C9;
      uVar1 = DAT_00802a30->field_00C5;
      DAT_00802a30->field_0493 = 1;
      this_01->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_01,CASE_0,uVar1,uVar5);
      CursorClassTy::DrawSprite(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_0xd2 = 0;
      *(undefined4 *)&this_01->field_0x4df = 0xffffffff;
    }
    if (param_2 != '\0') {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_02->field_005D,10,2);
    }
    pHVar8 = this_02->field_1C96;
    if (((pHVar8 != (HoloTy *)0x0) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)pHVar8->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar8->field_0003);
    }
    pHVar8 = this_02->field_1C9A;
    if (((pHVar8 != (HoloTy *)0x0) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)pHVar8->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar8->field_0003);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar11 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0xac,0,iVar3,&DAT_007a4ccc,
                              s_PrividerTy__InitPrivider_007ccda0);
  if (iVar11 == 0) {
    RaiseInternalException(iVar3,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0xac);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

