#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DeleteCtrls */

void __thiscall SettMapTy::DeleteCtrls(SettMapTy *this)

{
  SettMapTy_field_1E26State SVar1;
  AnonShape_006B5B10_E0D06CF1 *pAVar2;
  code *pcVar3;
  SettMapTy *this_00;
  int iVar4;
  HoloTy *pHVar5;
  DArrayTy *pDVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  SettMapTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\sett_obj.cpp",0x3a4,0,iVar4,"%s"
                               ,"SettMapTy::DeleteCtrls");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\sett_obj.cpp",0x3a4);
    return;
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,
                   (uint)g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_10;
  if (local_10->field_215D != 0) {
    StartSystemTy::sub_006E56B0(local_10->field_000C,local_10->field_215D);
  }
  this_00->field_215D = 0;
  puVar7 = &this_00->field_1F8C;
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this_00->field_211D != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_211D);
      this_00->field_211D = 0;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21E8 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_21E8);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_21E8);
    this_00->field_21E8 = (HoloTy *)0x0;
  }
  pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar5 == (HoloTy *)0x0) {
    pHVar5 = (HoloTy *)0x0;
  }
  else {
    pHVar5->field_0002 = 1;
    pHVar5->field_0000 = 0;
    pHVar5->field_0003 = -1;
    pHVar5->field_0001 = CASE_2;
    pHVar5->field_0007 = 0;
    pHVar5->field_000B = (void *)0x0;
    *(undefined4 *)&pHVar5->field_0xf = 0;
    *(undefined4 *)&pHVar5->field_0x1b = 1;
    pHVar5->field_0013 = 1;
    pHVar5->field_0017 = -1;
    pHVar5->field_0027 = 0;
    pHVar5->field_0023 = 0;
    pHVar5->field_002F = 1;
    pHVar5->field_002B = 1;
  }
  this_00->field_21E8 = pHVar5;
  if (pHVar5 != (HoloTy *)0x0) {
    uVar11 = 0;
    cVar10 = '\x01';
    uVar9 = 0x10;
    iVar8 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x112,0x38,0x205,0x104);
    uVar9 = HoloTy::Init(this_00->field_21E8,CASE_2,0x112,0x38,iVar4,iVar8,uVar9,cVar10,uVar11);
    if (uVar9 != 0) {
      pHVar5 = this_00->field_21E8;
      pHVar5->field_0002 = 0;
      pHVar5->field_0017 = -1;
      uVar9 = this_00->field_21E8->field_0003;
      if (-1 < (int)uVar9) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
      }
      HoloTy::NextFas(this_00->field_21E8);
    }
    FUN_006b5f80((int *)PTR_008075a8,0x112,0x38,0x205,0x104);
    PutDDXClip(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  if (this_00->field_1C6F != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1CB3,this_00->field_1C6F);
  }
  if (this_00->field_1D00 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1D44,this_00->field_1D00);
  }
  if (this_00->field_1D91 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1DD5,this_00->field_1D91);
  }
  puVar7 = &this_00->field_20CC;
  local_c = 10;
  do {
    FUN_006b3af0((int *)PTR_008075a8,*puVar7);
    puVar7 = puVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar7 = &this_00->field_2125;
  local_c = 0xe;
  do {
    if (*puVar7 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
      *puVar7 = 0;
    }
    puVar7 = puVar7 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21F4 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_21F4);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_21F4);
    this_00->field_21F4 = (HoloTy *)0x0;
  }
  pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar5 == (HoloTy *)0x0) {
    pHVar5 = (HoloTy *)0x0;
  }
  else {
    pHVar5->field_0002 = 1;
    pHVar5->field_0000 = 0;
    pHVar5->field_0003 = -1;
    pHVar5->field_0001 = CASE_2;
    pHVar5->field_0007 = 0;
    pHVar5->field_000B = (void *)0x0;
    *(undefined4 *)&pHVar5->field_0xf = 0;
    *(undefined4 *)&pHVar5->field_0x1b = 1;
    pHVar5->field_0013 = 1;
    pHVar5->field_0017 = -1;
    pHVar5->field_0027 = 0;
    pHVar5->field_0023 = 0;
    pHVar5->field_002F = 1;
    pHVar5->field_002B = 1;
  }
  this_00->field_21F4 = pHVar5;
  if (pHVar5 != (HoloTy *)0x0) {
    uVar11 = 0;
    cVar10 = '\x01';
    uVar9 = 0x10;
    iVar8 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,0x112,0x149,0x205,0x8c);
    uVar9 = HoloTy::Init(this_00->field_21F4,CASE_2,0x112,0x149,iVar4,iVar8,uVar9,cVar10,uVar11);
    if (uVar9 != 0) {
      pHVar5 = this_00->field_21F4;
      pHVar5->field_0002 = 0;
      pHVar5->field_0017 = -1;
      uVar9 = this_00->field_21F4->field_0003;
      if (-1 < (int)uVar9) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
      }
      HoloTy::NextFas(this_00->field_21F4);
    }
    FUN_006b5f80((int *)PTR_008075a8,0x112,0x149,0x205,0x8c);
    PutDDXClip(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  FUN_006b3af0((int *)PTR_008075a8,this_00->field_1E22);
  if ((((this_00->field_0x21e2 == '\0') || (SVar1 = this_00->field_1E26, SVar1 == 6)) ||
      (SVar1 == CASE_7)) || (SVar1 == 0xe)) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (g_startSystem_0081176C->field_0389 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0389);
    }
    g_startSystem_0081176C->field_0389 = 0;
    pAVar2 = (AnonShape_006B5B10_E0D06CF1 *)g_startSystem_0081176C->field_0544;
    FUN_006b4170(pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != (DArrayTy *)0x0) {
      FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar6 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar6->flags;
    if (this_00->field_21EC != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21EC);
      this_00->field_21EC = (HoloTy *)0x0;
    }
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = -1;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_21EC = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,10,0xb4,0xf9,0x121);
      uVar9 = HoloTy::Init(this_00->field_21EC,CASE_4,10,0xb4,iVar4,iVar8,uVar9,cVar10,uVar11);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_21EC;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar9 = this_00->field_21EC->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_21EC);
      }
      FUN_006b5f80((int *)PTR_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
    }
    if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
    }
    if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
    }
    FUN_006b3af0((int *)PTR_008075a8,g_startSystem_0081176C->field_0540);
  }
  if ((this_00->field_0x21e3 != '\0') &&
     (((SVar1 = this_00->field_1E26, SVar1 == 6 || (SVar1 == CASE_7)) || (SVar1 == 0xe)))) {
    puVar7 = &this_00->field_1F60;
    local_c = 7;
    do {
      if (*puVar7 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar7);
        *puVar7 = 0;
      }
      puVar7 = puVar7 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (this_00->field_21F0 != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21F0);
      this_00->field_21F0 = (HoloTy *)0x0;
    }
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = -1;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = (void *)0x0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_21F0 = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar11 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)PTR_008075a8,10,0xb4,0xf9,0x123);
      uVar9 = HoloTy::Init(this_00->field_21F0,CASE_4,10,0xb4,iVar4,iVar8,uVar9,cVar10,uVar11);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_21F0;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar9 = this_00->field_21F0->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_21F0);
      }
      FUN_006b5f80((int *)PTR_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    FUN_006b3af0((int *)PTR_008075a8,this_00->field_1F80);
  }
  if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != (cLoadingTy *)0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,(uint)g_cursorClass_00802A30->field_001C
                 ,0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

