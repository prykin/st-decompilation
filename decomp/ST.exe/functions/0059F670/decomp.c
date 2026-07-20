
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DeleteCtrls
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/FSGSTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10 */

void __thiscall FSGSTy::DeleteCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  HoloTy *pHVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x89c,0,iVar3,&DAT_007a4ccc
                               ,s_FSGSTy__DeleteCtrls_007cc3bc);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x89c);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  pFVar2 = local_8;
  switch(local_8->field_1A5F) {
  case CASE_2:
  case CASE_4:
  case CASE_5:
  case CASE_7:
    if (local_8->field_1A5F == CASE_7) {
      thunk_FUN_005a0a50((int)local_8);
    }
    else {
      thunk_FUN_005a0590((int)local_8);
    }
  case CASE_1:
    if (pFVar2->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar6 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0xaa,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar6 = pFVar2->field_1F23->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      PutDDXClip(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar6 = pFVar2->field_1ABC;
    piVar8 = DAT_008075a8;
    break;
  case CASE_3:
    thunk_FUN_005a0590((int)local_8);
    if (pFVar2->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 == (HoloTy *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    uVar6 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x72,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      pHVar4 = pFVar2->field_1F23;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = 0xffffffff;
      uVar6 = pFVar2->field_1F23->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(pFVar2->field_1F23);
    }
    FUN_006b5f80(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    PutDDXClip(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1B2C != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1B70,pFVar2->field_1B2C);
    }
    if (pFVar2->field_1BBD != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1C01,pFVar2->field_1BBD);
    }
    uVar6 = pFVar2->field_1C4E;
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = (int *)pFVar2->field_1C92;
    break;
  case CASE_6:
    thunk_FUN_005a07f0((AnonShape_005A07F0_323FD806 *)local_8);
    if (pFVar2->field_1F27 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F27);
      pFVar2->field_1F27 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F27 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar6 = HoloTy::Init(pFVar2->field_1F27,CASE_4,0x13,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        pHVar4 = pFVar2->field_1F27;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar6 = pFVar2->field_1F27->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(pFVar2->field_1F27);
      }
      FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
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
    if (pFVar2->field_1F2B != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == (HoloTy *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    uVar6 = HoloTy::Init(pFVar2->field_1F2B,CASE_2,0x1e9,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = 0xffffffff;
      uVar6 = pFVar2->field_1F2B->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    PutDDXClip(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar6 = pFVar2->field_1E01;
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = (int *)pFVar2->field_1E45;
    break;
  case CASE_8:
    thunk_FUN_005a0af0((int)local_8);
    if (pFVar2->field_1F2F != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2F = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar6 = HoloTy::Init(pFVar2->field_1F2F,CASE_2,0x199,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        pHVar4 = pFVar2->field_1F2F;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar6 = pFVar2->field_1F2F->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(pFVar2->field_1F2F);
      }
      FUN_006b5f80(DAT_008075a8,0x199,0x5e,0x174,0x175);
      PutDDXClip(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    if (pFVar2->field_1F2B != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F2B = pHVar4;
    if (pHVar4 == (HoloTy *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
    uVar6 = HoloTy::Init(pFVar2->field_1F2B,CASE_4,0x13,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      pHVar4 = pFVar2->field_1F2B;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = 0xffffffff;
      uVar6 = pFVar2->field_1F2B->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(pFVar2->field_1F2B);
    }
    FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
    PutDDXClip(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    if (pFVar2->field_1CDF != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1D23,pFVar2->field_1CDF);
    }
    if (pFVar2->field_1D70 != 0xffffffff) {
      FUN_006b3af0((int *)pFVar2->field_1DB4,pFVar2->field_1D70);
    }
    uVar6 = pFVar2->field_1E01;
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = (int *)pFVar2->field_1E45;
    break;
  case CASE_9:
    thunk_FUN_005a0c80((int)local_8);
    if (pFVar2->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      uVar6 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0x22,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar6 = pFVar2->field_1F23->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      PutDDXClip(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar6 = pFVar2->field_1ABC;
    piVar8 = DAT_008075a8;
    break;
  case CASE_A:
    thunk_FUN_005a0590((int)local_8);
    if (pFVar2->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    pFVar2->field_1F23 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      uVar6 = HoloTy::Init(pFVar2->field_1F23,CASE_4,0xb4,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        pHVar4 = pFVar2->field_1F23;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar6 = pFVar2->field_1F23->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(pFVar2->field_1F23);
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      PutDDXClip(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',(BITMAPINFO *)pFVar2->field_005D);
    }
    uVar6 = pFVar2->field_1ABC;
    piVar8 = DAT_008075a8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  FUN_006b3af0(piVar8,uVar6);
switchD_0059f6f7_default:
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

