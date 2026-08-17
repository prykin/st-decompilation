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
  uint local_EAX_340;
  HoloTy *pHVar3;
  int iVar4;
  uint uVar9;
  uint local_EAX_996;
  uint local_EAX_1307;
  uint local_EAX_1677;
  uint local_EAX_2031;
  uint local_EAX_2414;
  uint local_EAX_2700;
  int iVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  DDXContext_008075A8 *pDVar9;
  uint uVar10;
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
  cVar8 = local_8->array_00BC[0xc].field_01DF;
  switch(cVar8) {
  case '\x02':
  case '\x04':
  case '\x05':
  case '\a':
    if (cVar8 == '\a') {
      /* ST_CALLSITE[0059F705]: CALL 0x004020f9; direct=004020F9 FSGSTy::sub_005A0A50 */
      sub_005A0A50(local_8);
    }
    else {
      /* ST_CALLSITE[0059F70C]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
      sub_005A0590(local_8);
    }
  case '\x01':
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F71B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
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
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059F7C4]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_340 =
           HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0xaa,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_340 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059F7FD]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0xb4,0xaa,0x1b8,0x106);
      /* ST_CALLSITE[0059F845]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  case '\x03':
    /* ST_CALLSITE[0059FADF]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    sub_005A0590(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059FAEE]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
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
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    /* ST_CALLSITE[0059FB8B]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_1307 =
         HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x72,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_1307 != 0) {
      pHVar3 = pFVar2->field_1F23;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
      if (-1 < (int)uVar10) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[0059FBC4]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      HoloTy::NextFas(pFVar2->field_1F23);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x22,0x72,0x2e1,0x14c);
    /* ST_CALLSITE[0059FBFA]: CALL 0x00402298; direct=00402298 PutDDXClip */
    PutDDXClip(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1B2C != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
    }
    if (pFVar2->field_1BBD != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
    }
    uVar10 = pFVar2->field_1C4E;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1C92;
    break;
  case '\x06':
    /* ST_CALLSITE[0059FC50]: CALL 0x0040580d; direct=0040580D FSGSTy::sub_005A07F0 */
    sub_005A07F0(local_8);
    if (pFVar2->field_1F27 != nullptr) {
      /* ST_CALLSITE[0059FC5F]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F27);
      pFVar2->field_1F27 = nullptr;
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
    pFVar2->field_1F27 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[0059FCFD]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_1677 =
           HoloTy::Init(pFVar2->field_1F27,CASE_4,0x13,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_1677 != 0) {
        pHVar3 = pFVar2->field_1F27;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F27->field_0x3;
        if (-1 < (int)uVar10) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059FD35]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(pFVar2->field_1F27);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x1bf,0x175);
      /* ST_CALLSITE[0059FD6B]: CALL 0x00402298; direct=00402298 PutDDXClip */
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
      /* ST_CALLSITE[0059FDC5]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
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
    pFVar2->field_1F2B = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    /* ST_CALLSITE[0059FE5F]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_2031 =
         HoloTy::Init(pFVar2->field_1F2B,CASE_2,0x1e9,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_2031 != 0) {
      pHVar3 = pFVar2->field_1F2B;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar10) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[0059FE98]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0x175);
    /* ST_CALLSITE[0059FED6]: CALL 0x00402298; direct=00402298 PutDDXClip */
    PutDDXClip(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar10 = pFVar2->field_1E01;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case '\b':
    /* ST_CALLSITE[0059FF2C]: CALL 0x0040520e; direct=0040520E FSGSTy::sub_005A0AF0 */
    sub_005A0AF0(local_8);
    if (pFVar2->field_1F2F != nullptr) {
      /* ST_CALLSITE[0059FF3B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = nullptr;
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
    pFVar2->field_1F2F = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[0059FFDE]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_2414 =
           HoloTy::Init(pFVar2->field_1F2F,CASE_2,0x199,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_2414 != 0) {
        pHVar3 = pFVar2->field_1F2F;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F2F->field_0x3;
        if (-1 < (int)uVar10) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[005A0017]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(pFVar2->field_1F2F);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x199,0x5e,0x174,0x175);
      /* ST_CALLSITE[005A0056]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    if (pFVar2->field_1F2B != nullptr) {
      /* ST_CALLSITE[005A0068]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = nullptr;
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
    pFVar2->field_1F2B = pHVar3;
    if (pHVar3 == nullptr) goto switchD_0059f6f7_default;
    uVar10 = 0;
    cVar8 = '\x01';
    bVar7 = 0x10;
    iVar6 = 1;
    iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    /* ST_CALLSITE[005A00FC]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
    local_EAX_2700 =
         HoloTy::Init(pFVar2->field_1F2B,CASE_4,0x13,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
    if (local_EAX_2700 != 0) {
      pHVar3 = pFVar2->field_1F2B;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar10 = *(uint *)&pFVar2->field_1F2B->field_0x3;
      if (-1 < (int)uVar10) {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
      }
      /* ST_CALLSITE[005A0134]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
    /* ST_CALLSITE[005A016A]: CALL 0x00402298; direct=00402298 PutDDXClip */
    PutDDXClip(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar10 = pFVar2->field_1E01;
    if (uVar10 == 0xffffffff) goto switchD_0059f6f7_default;
    pDVar9 = (DDXContext_008075A8 *)pFVar2->field_1E45;
    break;
  case '\t':
    /* ST_CALLSITE[0059F9A7]: CALL 0x0040418d; direct=0040418D FSGSTy::sub_005A0C80 */
    sub_005A0C80(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F9B6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
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
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      /* ST_CALLSITE[0059FA54]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      local_EAX_996 =
           HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (local_EAX_996 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059FA8C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x22,0x5e,0x2e1,0x175);
      /* ST_CALLSITE[0059FAC2]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  case '\n':
    /* ST_CALLSITE[0059F861]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    sub_005A0590(local_8);
    if (pFVar2->field_1F23 != nullptr) {
      /* ST_CALLSITE[0059F870]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = nullptr;
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
    pFVar2->field_1F23 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar10 = 0;
      cVar8 = '\x01';
      bVar7 = 0x10;
      iVar6 = 1;
      iVar4 = Library::DKW::DDX::FUN_006bf9f0((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      /* ST_CALLSITE[0059F914]: CALL 0x0040459d; direct=0040459D HoloTy::Init */
      uVar9 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0x5e,iVar4,iVar6,bVar7,cVar8,uVar10);
      if (uVar9 != 0) {
        pHVar3 = pFVar2->field_1F23;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar10 = *(uint *)&pFVar2->field_1F23->field_0x3;
        if (-1 < (int)uVar10) {
          Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,uVar10);
        }
        /* ST_CALLSITE[0059F94D]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0xb4,0x5e,0x1b8,0x17a);
      /* ST_CALLSITE[0059F98B]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar10 = pFVar2->field_1ABC;
    pDVar9 = g_ddxContext_008075A8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  FUN_006b3af0((int *)pDVar9,uVar10);
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

