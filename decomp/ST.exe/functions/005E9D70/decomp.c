#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DeleteCtrls */

void __thiscall WaitTy::DeleteCtrls(WaitTy *this)

{
  AnonShape_006B5B10_E0D06CF1 *pAVar1;
  code *pcVar2;
  WaitTy *this_00;
  int iVar3;
  HoloTy *pHVar4;
  DArrayTy *pDVar5;
  undefined4 *this_01;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x34c,0,iVar3,"%s"
                               ,"WaitTy::DeleteCtrls");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\wait_obj.cpp",0x34c);
    return;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C);
    }
  }
  this_00 = local_c;
  SetAccelerator(0,local_c->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  FUN_006b5f80((int *)PTR_008075a8,0x112,0x38,0x204,0x19d);
  this_01 = &this_00->field_1A5B->field_0140;
  MMMObjTy::OutRGlProc((MMMObjTy *)this_01,DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,this_01);
  if (this_00->field_1AF8 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_1AF8);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_1AF8);
    this_00->field_1AF8 = (HoloTy *)0x0;
  }
  pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar4 == (HoloTy *)0x0) {
    pHVar4 = (HoloTy *)0x0;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    pHVar4->field_0003 = -1;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = 0;
    pHVar4->field_000B = (void *)0x0;
    *(undefined4 *)&pHVar4->field_0xf = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = -1;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_1AF8 = pHVar4;
  if (pHVar4 != (HoloTy *)0x0) {
    uVar10 = 0;
    cVar9 = '\x01';
    uVar8 = 0x10;
    iVar7 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x112,0x38,0x204,0x19d);
    uVar8 = HoloTy::Init(this_00->field_1AF8,CASE_2,0x112,0x38,iVar3,iVar7,uVar8,cVar9,uVar10);
    if (uVar8 != 0) {
      pHVar4 = this_00->field_1AF8;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar8 = this_00->field_1AF8->field_0003;
      if (-1 < (int)uVar8) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar8);
      }
      HoloTy::NextFas(this_00->field_1AF8);
    }
    PutDDXClip(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
               (BITMAPINFO *)PTR_0081176c->field_002C);
  }
  puVar6 = &this_00->field_1A94;
  local_8 = 0x16;
  do {
    FUN_006b3af0((int *)PTR_008075a8,*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((this_00->field_1A64 == 0) || (this_00->field_1A5F == '\x0e')) {
    if (PTR_0081176c->field_0389 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_0389);
    }
    PTR_0081176c->field_0389 = 0;
    pAVar1 = (AnonShape_006B5B10_E0D06CF1 *)PTR_0081176c->field_0544;
    FUN_006b4170(pAVar1,0,0,0,pAVar1->field_0004,pAVar1->field_0008,0xff);
    if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
    }
    pDVar5 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    PTR_0081176c->field_0548 = &pDVar5->flags;
    if (this_00->field_1B00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_1B00);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_1B00);
      this_00->field_1B00 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = -1;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_1B00 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,10,0xb4,0xf9,0x121);
      uVar8 = HoloTy::Init(this_00->field_1B00,CASE_4,10,0xb4,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        pHVar4 = this_00->field_1B00;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar8 = this_00->field_1B00->field_0003;
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar8);
        }
        HoloTy::NextFas(this_00->field_1B00);
      }
      FUN_006b5f80((int *)PTR_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
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
    FUN_006b3af0((int *)PTR_008075a8,PTR_0081176c->field_0540);
  }
  else {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,PTR_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  if (this_00->field_1A64 == 0) {
    if (PTR_0081176c->field_054C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_054C);
      PTR_0081176c->field_054C = 0;
    }
    if (PTR_0081176c->field_0550 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_0550);
      PTR_0081176c->field_0550 = 0;
    }
    if (this_00->field_1AFC != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_1AFC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_1AFC);
      this_00->field_1AFC = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = -1;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_1AFC = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,200,0x1f1,400,0x62);
      uVar8 = HoloTy::Init(this_00->field_1AFC,CASE_1,200,0x1f1,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        pHVar4 = this_00->field_1AFC;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar8 = this_00->field_1AFC->field_0003;
        if (-1 < (int)uVar8) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar8);
        }
        HoloTy::NextFas(this_00->field_1AFC);
      }
      FUN_006b5f80((int *)PTR_008075a8,200,0x1f1,400,0x62);
      PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C)
      ;
    }
    FUN_006b3af0((int *)PTR_008075a8,PTR_0081176c->field_0554);
    FUN_006b3af0((int *)PTR_008075a8,PTR_0081176c->field_0558);
    if (PTR_0081176c->field_0560 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
    }
    if (PTR_0081176c->field_05F1 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
    }
  }
  else {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (PTR_0081176c->field_054C != 0) {
      FUN_006e6080(this_00,2,PTR_0081176c->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (PTR_0081176c->field_0550 != 0) {
      FUN_006e6080(this_00,2,PTR_0081176c->field_0550,(undefined4 *)&this_00->field_0x1d);
    }
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,(uint)PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

