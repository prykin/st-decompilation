
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall WaitTy::InitWait(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  StartSystemTy *pSVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  HoloTy *pHVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar12;
  char cVar13;
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
    local_c->field_1A64 = param_1;
    local_c->field_1A68 = param_2;
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_01->field_1AF0 = puVar5;
    if ((DAT_00811768 == '\x01') || (DAT_008067a0 != '\0')) {
      DarkScreen(DAT_0080759c,1,0);
    }
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      if (PTR_00802a30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
      }
      else if (PTR_00802a30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
      }
    }
    uVar6 = FUN_0070a9f0(g_cMf32_00806780,s_LOADSINGLE_007cc79c,0,1);
    PTR_0081176c->field_002C = uVar6;
    puVar7 = (ushort *)PTR_0081176c->field_002C;
    this_01->field_005D = puVar7;
    FUN_006bc360(puVar7,local_668,(int *)0x0);
    *(undefined4 *)&this_01->field_1A5B->field_0x140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_668,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
    puVar7 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,s_MM_MAPB_007cc790,0,1);
    DibPut((undefined4 *)PTR_0081176c->field_02F0,0,0,'\x01',(byte *)puVar7);
    iVar4 = PTR_0081176c->field_0544;
    FUN_006b4170(iVar4,0,0,0,*(int *)(iVar4 + 4),*(int *)(iVar4 + 8),0xff);
    if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    PTR_0081176c->field_0548 = puVar5;
    if (PTR_0081176c->field_0389 != 0) {
      this_01->field_002D = 0x28;
      *(undefined2 *)&this_01->field_0x31 = 1;
      this_01->field_0033 = *(undefined2 *)(PTR_0081176c->field_0548 + 8);
      FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x22;
      this_01->field_0033 = 0;
      *(undefined2 *)&this_01->field_0x31 = 0;
      FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
    }
    PaintWait(this_01,'\x01');
    iVar4 = 1;
    puVar9 = (undefined4 *)(this_01->field_005D + 0x28);
    uVar8 = FUN_006b4fe0(this_01->field_005D);
    iVar4 = FUN_006b50c0(0x1e4,399,(uint)*(ushort *)(this_01->field_005D + 0xe),uVar8,puVar9,iVar4);
    this_01->field_1AEC = iVar4;
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
    puVar5 = &this_01->field_1A94;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar5,0x31,0x402211,*(uint *)(this_01->field_1AEC + 4),0x13,
                   (uint)this_01);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar5,0xffffffff,0x114,uVar11);
      FUN_006b3af0(DAT_008075a8,*puVar5);
      uVar11 = uVar11 + 0x13;
      puVar5 = puVar5 + 1;
    } while ((int)uVar11 < 0x1e1);
    CreateCtrls(this_01);
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x204,0x19d,
                 (uint)&this_01->field_1A5B->field_0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar10 == (HoloTy *)0x0) {
      pHVar10 = (HoloTy *)0x0;
    }
    else {
      pHVar10->field_0002 = 1;
      pHVar10->field_0000 = 0;
      pHVar10->field_0003 = 0xffffffff;
      pHVar10->field_0001 = CASE_2;
      pHVar10->field_0007 = 0;
      pHVar10->field_000B = 0;
      *(undefined4 *)&pHVar10->field_0xf = 0;
      *(undefined4 *)&pHVar10->field_0x1b = 1;
      pHVar10->field_0013 = 1;
      pHVar10->field_0017 = 0xffffffff;
      pHVar10->field_0027 = 0;
      pHVar10->field_0023 = 0;
      pHVar10->field_002F = 1;
      pHVar10->field_002B = 1;
    }
    this_01->field_1AF8 = pHVar10;
    if (pHVar10 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar13 = '\x01';
      uVar8 = 0x10;
      iVar12 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
      uVar8 = HoloTy::Init(this_01->field_1AF8,CASE_2,0x112,0x38,iVar4,iVar12,uVar8,cVar13,uVar11);
      if (uVar8 != 0) {
        pHVar10 = this_01->field_1AF8;
        pHVar10->field_0002 = 1;
        pHVar10->field_0017 = pHVar10->field_0013;
        uVar8 = this_01->field_1AF8->field_0003;
        if (-1 < (int)uVar8) {
          FUN_006b3af0(DAT_008075a8,uVar8);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if ((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   (uint)&this_01->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
      pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar10 == (HoloTy *)0x0) {
        pHVar10 = (HoloTy *)0x0;
      }
      else {
        pHVar10->field_0002 = 1;
        pHVar10->field_0000 = 0;
        pHVar10->field_0003 = 0xffffffff;
        pHVar10->field_0001 = CASE_2;
        pHVar10->field_0007 = 0;
        pHVar10->field_000B = 0;
        *(undefined4 *)&pHVar10->field_0xf = 0;
        *(undefined4 *)&pHVar10->field_0x1b = 1;
        pHVar10->field_0013 = 1;
        pHVar10->field_0017 = 0xffffffff;
        pHVar10->field_0027 = 0;
        pHVar10->field_0023 = 0;
        pHVar10->field_002F = 1;
        pHVar10->field_002B = 1;
      }
      this_01->field_1B00 = pHVar10;
      if (pHVar10 != (HoloTy *)0x0) {
        uVar11 = 0;
        cVar13 = '\x01';
        uVar8 = 0x10;
        iVar12 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
        uVar8 = HoloTy::Init(this_01->field_1B00,CASE_4,10,0xb4,iVar4,iVar12,uVar8,cVar13,uVar11);
        if (uVar8 != 0) {
          pHVar10 = this_01->field_1B00;
          pHVar10->field_0002 = 1;
          pHVar10->field_0017 = pHVar10->field_0013;
          uVar8 = this_01->field_1B00->field_0003;
          if (-1 < (int)uVar8) {
            FUN_006b3af0(DAT_008075a8,uVar8);
          }
          if (PTR_0081176c->field_0391 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
          }
          if (PTR_0081176c->field_0422 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
          }
          if (PTR_0081176c->field_04B3 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
          }
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (PTR_0081176c->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391,0xfffffffe,
                   PTR_0081176c->field_03A9,PTR_0081176c->field_03AD);
      }
      if (PTR_0081176c->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0466,PTR_0081176c->field_0422,0xfffffffe,
                   PTR_0081176c->field_043A,PTR_0081176c->field_043E);
      }
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,0xfffffffe,
                   PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0540);
    }
    if (this_01->field_1A64 == 0) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403b61,400,0x62,
                   (uint)&this_01->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,200,0x1f1);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      pHVar10 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar10 == (HoloTy *)0x0) {
        pHVar10 = (HoloTy *)0x0;
      }
      else {
        pHVar10->field_0002 = 1;
        pHVar10->field_0000 = 0;
        pHVar10->field_0003 = 0xffffffff;
        pHVar10->field_0001 = CASE_2;
        pHVar10->field_0007 = 0;
        pHVar10->field_000B = 0;
        *(undefined4 *)&pHVar10->field_0xf = 0;
        *(undefined4 *)&pHVar10->field_0x1b = 1;
        pHVar10->field_0013 = 1;
        pHVar10->field_0017 = 0xffffffff;
        pHVar10->field_0027 = 0;
        pHVar10->field_0023 = 0;
        pHVar10->field_002F = 1;
        pHVar10->field_002B = 1;
      }
      this_01->field_1AFC = pHVar10;
      if (pHVar10 != (HoloTy *)0x0) {
        uVar11 = 0;
        cVar13 = '\x01';
        uVar8 = 0x10;
        iVar12 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar8 = HoloTy::Init(this_01->field_1AFC,CASE_1,200,0x1f1,iVar4,iVar12,uVar8,cVar13,uVar11);
        if (uVar8 != 0) {
          pHVar10 = this_01->field_1AFC;
          pHVar10->field_0002 = 1;
          pHVar10->field_0017 = pHVar10->field_0013;
          uVar8 = this_01->field_1AFC->field_0003;
          if (-1 < (int)uVar8) {
            FUN_006b3af0(DAT_008075a8,uVar8);
          }
          if (PTR_0081176c->field_0560 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
          }
          if (PTR_0081176c->field_05F1 != 0xffffffff) {
            FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
          }
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
          FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
    }
    if ((DAT_00811768 != '\0') || (DAT_008067a0 != '\0')) {
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,this_01->field_005D,10,2);
    }
    pHVar10 = this_01->field_1AF8;
    if (((pHVar10 != (HoloTy *)0x0) && (pHVar10->field_0000 != '\0')) &&
       (-1 < (int)pHVar10->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar10->field_0003);
    }
    pHVar10 = this_01->field_1B00;
    if (((pHVar10 != (HoloTy *)0x0) && (pHVar10->field_0000 != '\0')) &&
       (-1 < (int)pHVar10->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar10->field_0003);
    }
    pHVar10 = this_01->field_1AFC;
    if (((pHVar10 != (HoloTy *)0x0) && (pHVar10->field_0000 != '\0')) &&
       (-1 < (int)pHVar10->field_0003)) {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar10->field_0003);
    }
    thunk_FUN_005e9a40((AnonShape_005E9A40_265F7E5B *)this_01);
    this_00 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      uVar6 = PTR_00802a30->field_00C9;
      uVar1 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,uVar1,uVar6);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_0xd2 = 0;
      *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
    }
    this_01->field_0065 = 3;
    puVar9 = &local_268;
    for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    pSVar2 = this_01->field_1A5B;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    local_194 = 2;
    local_16d = 2;
    local_198 = this_01->field_0008;
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (pSVar2->field_02E6 != (MMsgTy *)0x0) {
      puVar9 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0xffffffff;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0xffff;
      MMsgTy::ShowSprites(pSVar2->field_02E6);
      this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
      MMsgTy::SetPanel(this_01->field_1A5B->field_02E6,0,(int)&local_268,0,0);
      MMsgTy::StatePanel(this_01->field_1A5B->field_02E6,(int)local_6c);
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
  iVar12 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0xa3,0,iVar4,&DAT_007a4ccc,
                              s_WaitTy__InitWait_007cdd84);
  if (iVar12 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0xa3);
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

