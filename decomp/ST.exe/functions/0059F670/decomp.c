#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DeleteCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::DeleteCtrls(FSGSTy *this)

{
  FSGSTy *pFVar2;
  int iVar3;
  HoloTy *pHVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  DDXContext_008075A8 *pDVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x89c,0,iVar3,"%s"
                               ,"FSGSTy::DeleteCtrls");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x89c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pFVar2 = local_8;
  switch(local_8->field_1A5F) {
  case CASE_2:
  case CASE_4:
  case CASE_5:
  case CASE_7:
    if (local_8->field_1A5F == CASE_7) {
      sub_005A0A50(local_8);
    }
    else {
      sub_005A0590(local_8);
    }
  case CASE_1:
    if (pFVar2->field_1F23 != nullptr) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      uVar9 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0xaa,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      PutDDXClip(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  case CASE_3:
    sub_005A0590(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    uVar9 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x72,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F23;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
      if (-1 < (int)uVar9) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
      }
      HoloTy::NextFas(pFVar2->field_1F23);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    PutDDXClip(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1B2C != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
    }
    if (pFVar2->field_1BBD != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
    }
    uVar9 = pFVar2->field_1C4E;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1C92;
    break;
  case CASE_6:
    sub_005A07F0(local_8);
    if (pFVar2->field_1F27 != nullptr) {
      HoloTy::Done(pFVar2->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F27);
      pFVar2->field_1F27 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F27 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      uVar9 = HoloTy::Init(pFVar2->field_1F27,CASE_4,0x13,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F27;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F27->field_0x3;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
        }
        HoloTy::NextFas(pFVar2->field_1F27);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      PutDDXClip(0x13,0x5e,0x13,0x5e,0x1bf,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
      if (pFVar2->field_1B2C != 0xffffffff) {
        FUN_006b3af0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
      }
      if (pFVar2->field_1BBD != 0xffffffff) {
        FUN_006b3af0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
      }
      if (pFVar2->field_1C4E != 0xffffffff) {
        FUN_006b3af0((int *)pFVar2->field_1C92,pFVar2->field_1C4E);
      }
    }
    if (pFVar2->field_1F2B != nullptr) {
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    uVar9 = HoloTy::Init(pFVar2->field_1F2B,CASE_2,0x1e9,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar9) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
      }
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    PutDDXClip(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar9 = pFVar2->field_1E01;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case CASE_8:
    sub_005A0AF0(local_8);
    if (pFVar2->field_1F2F != nullptr) {
      HoloTy::Done(pFVar2->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2F = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      uVar9 = HoloTy::Init(pFVar2->field_1F2F,CASE_2,0x199,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F2F;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F2F->field_0x3;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
        }
        HoloTy::NextFas(pFVar2->field_1F2F);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      PutDDXClip(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    if (pFVar2->field_1F2B != nullptr) {
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == nullptr) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    bVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    uVar9 = HoloTy::Init(pFVar2->field_1F2B,CASE_4,0x13,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
    if (uVar9 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar9 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar9) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
      }
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    PutDDXClip(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar9 = pFVar2->field_1E01;
    if (uVar9 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar8 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case CASE_9:
    sub_005A0C80(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      uVar9 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      PutDDXClip(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  case CASE_A:
    sub_005A0590(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar9 = 0;
      cVar7 = '\x01';
      bVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      uVar9 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0x5e,iVar3,iVar5,bVar6,cVar7,uVar9);
      if (uVar9 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar9 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar9);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      PutDDXClip(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar9 = pFVar2->field_1ABC;
    pDVar8 = g_ddxContext_008075A8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  FUN_006b3af0((int *)pDVar8,uVar9);
switchD_0059f6f7_default:
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

