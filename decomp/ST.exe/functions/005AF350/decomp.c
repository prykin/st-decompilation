#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DeleteCtrls */

void __thiscall ChooseMapTy::DeleteCtrls(ChooseMapTy *this)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  ChooseMapTy *this_00;
  int iVar3;
  HoloTy *pHVar3;
  int iVar4;
  uint uVar10;
  DArrayTy *pDVar5;
  uint local_EAX_970;
  uint local_EAX_1506;
  int iVar7;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  ChooseMapTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\load_obj.cpp",0x3ea,0,iVar3,"%s"
                               ,"ChooseMapTy::DeleteCtrls");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\load_obj.cpp",0x3ea);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_c;
  /* ST_CALLSITE[005AF3D0]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
  SetAccelerator(0,local_c->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_1C83 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_1C83);
  }
  this_00->field_1C83 = 0;
  FUN_006b3af0((int *)g_ddxContext_008075A8,this_00->field_1C87);
  FUN_006b5f80((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
  /* ST_CALLSITE[005AF447]: CALL 0x004042d2; direct=004042D2 MMMObjTy::OutBSlProc */
  MMMObjTy::OutBSlProc
            ((MMMObjTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,nullptr,nullptr
             ,0x112,0x38,0x204,0x19d,(undefined4 *)(this_00->array_00BC[0xc].field_01DB + 0x140));
  uVar11 = this_00->array_00BC[0xc].field_01EC;
  if (uVar11 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,uVar11);
  }
  pHVar3 = this_00->field_20B8;
  this_00->array_00BC[0xc].field_01EC = 0;
  if (pHVar3 != nullptr) {
    /* ST_CALLSITE[005AF46F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    HoloTy::Done(pHVar3);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_20B8);
    this_00->field_20B8 = nullptr;
  }
  pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar3 == nullptr) {
    pHVar3 = nullptr;
  }
  else {
    pHVar3->field_0002 = 1;
    pHVar3->field_0000 = 0;
    *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
    pHVar3->field_0001 = CASE_2;
    pHVar3->field_0007 = nullptr;
    pHVar3->field_000B = nullptr;
    pHVar3->field_000F = 0;
    *(undefined4 *)&pHVar3->field_0x1b = 1;
    pHVar3->field_0013 = 1;
    pHVar3->field_0017 = -1;
    pHVar3->field_0027 = 0;
    pHVar3->field_0023 = 0;
    pHVar3->field_002F = 1;
    pHVar3->field_002B = 1;
  }
  this_00->field_20B8 = pHVar3;
  if (pHVar3 != nullptr) {
    uVar11 = 0;
    cVar10 = '\x01';
    bVar9 = 0x10;
    iVar8 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
    /* ST_CALLSITE[005AF517]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    uVar10 = HoloTy::Init(this_00->field_20B8,CASE_2,0x112,0x38,iVar4,iVar8,bVar9,cVar10,uVar11);
    if (uVar10 != 0) {
      pHVar3 = this_00->field_20B8;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar11 = *(uint *)&this_00->field_20B8->field_0x3;
      if (-1 < (int)uVar11) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar11);
      }
      /* ST_CALLSITE[005AF550]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      HoloTy::NextFas(this_00->field_20B8);
    }
    /* ST_CALLSITE[005AF578]: CALL 0x00402298; direct=00402298 PutDDXClip */
    PutDDXClip(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  uVar11 = this_00->array_00BC[0xc].field_01F4;
  if (uVar11 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1AB8,uVar11);
  }
  if (this_00->field_1B05 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
  }
  puVar6 = &this_00->field_1C23;
  local_8 = 0x16;
  do {
    FUN_006b3af0((int *)g_ddxContext_008075A8,*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this_00->field_20B4 == '\0') {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    this_00->field_0033 = 0;
    FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (g_startSystem_0081176C->field_0389 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0389);
    }
    g_startSystem_0081176C->field_0389 = 0;
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    FUN_006b4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      FUN_006b5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar5 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar5->flags;
    if (this_00->field_20BC != nullptr) {
      /* ST_CALLSITE[005AF677]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(this_00->field_20BC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_20BC);
      this_00->field_20BC = nullptr;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_20BC = pHVar3;
    if (pHVar3 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005AF71A]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_970 =
           HoloTy::Init(this_00->field_20BC,CASE_4,10,0xb4,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (local_EAX_970 != 0) {
        pHVar3 = this_00->field_20BC;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar11 = *(uint *)&this_00->field_20BC->field_0x3;
        if (-1 < (int)uVar11) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar11);
        }
        /* ST_CALLSITE[005AF753]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_20BC);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      /* ST_CALLSITE[005AF797]: CALL 0x00402298; direct=00402298 PutDDXClip */
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
    FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  if (this_00->field_20B7 == '\0') {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    this_00->field_0033 = 0;
    if (g_startSystem_0081176C->field_054C != 0) {
      FUN_006e6080(this_00,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    this_00->field_0031 = 0;
    this_00->field_0033 = 0;
    if (g_startSystem_0081176C->field_0550 != 0) {
      FUN_006e6080(this_00,2,g_startSystem_0081176C->field_0550,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    if (g_startSystem_0081176C->field_054C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_054C);
      g_startSystem_0081176C->field_054C = 0;
    }
    if (g_startSystem_0081176C->field_0550 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0550);
      g_startSystem_0081176C->field_0550 = 0;
    }
    if (this_00->field_20C0 != nullptr) {
      /* ST_CALLSITE[005AF897]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(this_00->field_20C0);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_20C0);
      this_00->field_20C0 = nullptr;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_20C0 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      /* ST_CALLSITE[005AF932]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_1506 =
           HoloTy::Init(this_00->field_20C0,CASE_1,200,0x1f1,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (local_EAX_1506 != 0) {
        pHVar3 = this_00->field_20C0;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar11 = *(uint *)&this_00->field_20C0->field_0x3;
        if (-1 < (int)uVar11) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar11);
        }
        /* ST_CALLSITE[005AF96B]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(this_00->field_20C0);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      /* ST_CALLSITE[005AF9B2]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    FUN_006b3af0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
    if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
      FUN_006b3af0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
    }
    if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
      FUN_006b3af0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
    }
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

