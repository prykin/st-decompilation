#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall WaitTy::InitWait(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  AnonShape_006B5B10_E0D06CF1 *pAVar1;
  StartSystemTy *pSVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  AnonPointee_WaitTy_1AF0 *pAVar5;
  ccFntTy *pcVar6;
  ushort *puVar7;
  uint *puVar8;
  uint uVar9;
  AnonPointee_WaitTy_1AEC *pAVar10;
  undefined4 *puVar11;
  HoloTy *pHVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar4 == 0) {
    _DAT_0080f32e = 0;
    local_c->field_1A64 = param_1;
    local_c->field_1A68 = param_2;
    pAVar5 = (AnonPointee_WaitTy_1AF0 *)Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    this_01->field_1AF0 = pAVar5;
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
    pcVar6 = (ccFntTy *)FUN_0070a9f0(g_cMf32_00806780,"LOADSINGLE",0,1);
    PTR_0081176c->field_002C = pcVar6;
    pcVar6 = PTR_0081176c->field_002C;
    this_01->field_005D = pcVar6;
    FUN_006bc360((ushort *)pcVar6,local_668,(int *)0x0);
    this_01->field_1A5B->field_0140 = 0x1f;
    Library::Ourlib::PALETTE::FUN_00718780
              ((int)local_668,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
    puVar7 = Library::Ourlib::MFIMG::mfImgLoad(g_cMf32_00806780,1,"MM_MAPB",0,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_02F0,0,0,'\x01',(byte *)puVar7);
    pAVar1 = (AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_0544;
    FUN_006b4170(pAVar1,0,0,0,pAVar1->field_0004,pAVar1->field_0008,0xff);
    if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
    }
    puVar8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    PTR_0081176c->field_0548 = puVar8;
    if (PTR_0081176c->field_0389 != 0) {
      this_01->field_002D = 0x28;
      *(undefined2 *)&this_01->field_0x31 = 1;
      *(undefined2 *)&this_01->field_0x33 = *(undefined2 *)(PTR_0081176c->field_0548 + 8);
      FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x22;
      *(undefined2 *)&this_01->field_0x33 = 0;
      *(undefined2 *)&this_01->field_0x31 = 0;
      FUN_006e6080(this_01,2,PTR_0081176c->field_0389,(undefined4 *)&this_01->field_0x1d);
    }
    PaintWait(this_01,'\x01');
    iVar4 = 1;
    puVar11 = (undefined4 *)&this_01->field_005D->field_0x28;
    uVar9 = FUN_006b4fe0((int)this_01->field_005D);
    pAVar10 = (AnonPointee_WaitTy_1AEC *)
              FUN_006b50c0(0x1e4,399,(uint)*(ushort *)&this_01->field_005D->field_0xe,uVar9,puVar11,
                           iVar4);
    this_01->field_1AEC = pAVar10;
    uVar9 = pAVar10->field_0014;
    if (uVar9 == 0) {
      uVar9 = ((uint)(ushort)pAVar10->field_000E * pAVar10->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              pAVar10->field_0008;
    }
    puVar11 = (undefined4 *)FUN_006b4fa0((int)pAVar10);
    for (uVar13 = uVar9 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    uVar13 = 0x3f;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar11 = 0;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    puVar8 = &this_01->field_1A94;
    do {
      FUN_006b2330((uint)DAT_008075a8,puVar8,0x31,0x402211,this_01->field_1AEC->field_0004,0x13,
                   (uint)this_01);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0x114,uVar13);
      FUN_006b3af0(DAT_008075a8,*puVar8);
      uVar13 = uVar13 + 0x13;
      puVar8 = puVar8 + 1;
    } while ((int)uVar13 < 0x1e1);
    CreateCtrls(this_01);
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403099,0x204,0x19d,
                 (uint)&this_01->field_1A5B->field_0140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x112,0x38);
    pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar12 == (HoloTy *)0x0) {
      pHVar12 = (HoloTy *)0x0;
    }
    else {
      pHVar12->field_0002 = 1;
      pHVar12->field_0000 = 0;
      pHVar12->field_0003 = -1;
      pHVar12->field_0001 = CASE_2;
      pHVar12->field_0007 = 0;
      pHVar12->field_000B = 0;
      *(undefined4 *)&pHVar12->field_0xf = 0;
      *(undefined4 *)&pHVar12->field_0x1b = 1;
      pHVar12->field_0013 = 1;
      pHVar12->field_0017 = -1;
      pHVar12->field_0027 = 0;
      pHVar12->field_0023 = 0;
      pHVar12->field_002F = 1;
      pHVar12->field_002B = 1;
    }
    this_01->field_1AF8 = pHVar12;
    if (pHVar12 != (HoloTy *)0x0) {
      uVar13 = 0;
      cVar15 = '\x01';
      uVar9 = 0x10;
      iVar14 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
      uVar9 = HoloTy::Init(this_01->field_1AF8,CASE_2,0x112,0x38,iVar4,iVar14,uVar9,cVar15,uVar13);
      if (uVar9 != 0) {
        pHVar12 = this_01->field_1AF8;
        pHVar12->field_0002 = 1;
        pHVar12->field_0017 = pHVar12->field_0013;
        uVar9 = this_01->field_1AF8->field_0003;
        if (-1 < (int)uVar9) {
          FUN_006b3af0(DAT_008075a8,uVar9);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    if ((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   (uint)&this_01->field_1A5B->field_0140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,10,0xb4);
      pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar12 == (HoloTy *)0x0) {
        pHVar12 = (HoloTy *)0x0;
      }
      else {
        pHVar12->field_0002 = 1;
        pHVar12->field_0000 = 0;
        pHVar12->field_0003 = -1;
        pHVar12->field_0001 = CASE_2;
        pHVar12->field_0007 = 0;
        pHVar12->field_000B = 0;
        *(undefined4 *)&pHVar12->field_0xf = 0;
        *(undefined4 *)&pHVar12->field_0x1b = 1;
        pHVar12->field_0013 = 1;
        pHVar12->field_0017 = -1;
        pHVar12->field_0027 = 0;
        pHVar12->field_0023 = 0;
        pHVar12->field_002F = 1;
        pHVar12->field_002B = 1;
      }
      this_01->field_1B00 = pHVar12;
      if (pHVar12 != (HoloTy *)0x0) {
        uVar13 = 0;
        cVar15 = '\x01';
        uVar9 = 0x10;
        iVar14 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
        uVar9 = HoloTy::Init(this_01->field_1B00,CASE_4,10,0xb4,iVar4,iVar14,uVar9,cVar15,uVar13);
        if (uVar9 != 0) {
          pHVar12 = this_01->field_1B00;
          pHVar12->field_0002 = 1;
          pHVar12->field_0017 = pHVar12->field_0013;
          uVar9 = this_01->field_1B00->field_0003;
          if (-1 < (int)uVar9) {
            FUN_006b3af0(DAT_008075a8,uVar9);
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
                   (uint)&this_01->field_1A5B->field_0140);
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
      pHVar12 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar12 == (HoloTy *)0x0) {
        pHVar12 = (HoloTy *)0x0;
      }
      else {
        pHVar12->field_0002 = 1;
        pHVar12->field_0000 = 0;
        pHVar12->field_0003 = -1;
        pHVar12->field_0001 = CASE_2;
        pHVar12->field_0007 = 0;
        pHVar12->field_000B = 0;
        *(undefined4 *)&pHVar12->field_0xf = 0;
        *(undefined4 *)&pHVar12->field_0x1b = 1;
        pHVar12->field_0013 = 1;
        pHVar12->field_0017 = -1;
        pHVar12->field_0027 = 0;
        pHVar12->field_0023 = 0;
        pHVar12->field_002F = 1;
        pHVar12->field_002B = 1;
      }
      this_01->field_1AFC = pHVar12;
      if (pHVar12 != (HoloTy *)0x0) {
        uVar13 = 0;
        cVar15 = '\x01';
        uVar9 = 0x10;
        iVar14 = 1;
        iVar4 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
        uVar9 = HoloTy::Init(this_01->field_1AFC,CASE_1,200,0x1f1,iVar4,iVar14,uVar9,cVar15,uVar13);
        if (uVar9 != 0) {
          pHVar12 = this_01->field_1AFC;
          pHVar12->field_0002 = 1;
          pHVar12->field_0017 = pHVar12->field_0013;
          uVar9 = this_01->field_1AFC->field_0003;
          if (-1 < (int)uVar9) {
            FUN_006b3af0(DAT_008075a8,uVar9);
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
      thunk_FUN_0055ddf0(DAT_0080759c,DAT_008075a8,(int)this_01->field_005D,10,2);
    }
    pHVar12 = this_01->field_1AF8;
    if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) && (-1 < pHVar12->field_0003))
    {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
    }
    pHVar12 = this_01->field_1B00;
    if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) && (-1 < pHVar12->field_0003))
    {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
    }
    pHVar12 = this_01->field_1AFC;
    if (((pHVar12 != (HoloTy *)0x0) && (pHVar12->field_0000 != '\0')) && (-1 < pHVar12->field_0003))
    {
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,pHVar12->field_0003);
    }
    thunk_FUN_005e9a40((AnonShape_005E9970_7C1AA6F1 *)this_01);
    this_00 = PTR_00802a30;
    if (PTR_00802a30 != (CursorClassTy *)0x0) {
      iVar4 = PTR_00802a30->field_00C9;
      iVar14 = PTR_00802a30->field_00C5;
      PTR_00802a30->field_0493 = 1;
      this_00->field_0494 = 0xffff;
      CursorClassTy::SetGCType(this_00,CASE_0,iVar14,iVar4);
      CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = 0xffffffff;
    }
    this_01->field_0065 = 3;
    puVar11 = &local_268;
    for (iVar4 = 0x7e; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    pSVar2 = this_01->field_1A5B;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    local_194 = 2;
    local_16d = 2;
    local_198 = this_01->field_0008;
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (pSVar2->field_02E6 != (MMsgTy *)0x0) {
      puVar11 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0xffff;
      MMsgTy::ShowSprites(pSVar2->field_02E6);
      this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
      MMsgTy::SetPanel(this_01->field_1A5B->field_02E6,0,(int)&local_268,0,0);
      MMsgTy::StatePanel(this_01->field_1A5B->field_02E6,(int)local_6c);
    }
    thunk_FUN_00568bc0(&g_sound,0);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    if ((DAT_00807300._1_1_ & 8) != 0) {
      thunk_FUN_0056a130(&g_sound,0x14,'\x02',0,(uint *)0x0);
    }
    thunk_FUN_005b6730(this_01,0xb,'\0',-1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar14 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0xa3,0,iVar4,"%s",
                              "WaitTy::InitWait");
  if (iVar14 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\wait_obj.cpp",0xa3);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

