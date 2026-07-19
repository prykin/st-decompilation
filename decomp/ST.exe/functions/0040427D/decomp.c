
void __thiscall FSGSTy::DeleteCtrls(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  char cVar7;
  int *piVar8;
  uint uVar9;
  InternalExceptionFrame IStack_4c;
  FSGSTy *pFStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pFStack_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_4c.previous;
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
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  pFVar2 = pFStack_8;
  switch(pFStack_8[0x1a5f]) {
  case (FSGSTy)0x2:
  case (FSGSTy)0x4:
  case (FSGSTy)0x5:
  case (FSGSTy)0x7:
    if (pFStack_8[0x1a5f] == (FSGSTy)0x7) {
      thunk_FUN_005a0a50((int)pFStack_8);
    }
    else {
      thunk_FUN_005a0590((int)pFStack_8);
    }
  case (FSGSTy)0x1:
    if (*(HoloTy **)(pFVar2 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f23));
      *(undefined4 *)(pFVar2 + 0x1f23) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f23) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f23),4,0xb4,0xaa,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        iVar3 = *(int *)(pFVar2 + 0x1f23);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f23));
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      thunk_FUN_00540620(0xb4,0xaa,0xb4,0xaa,0x1b8,(byte *)0x106,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x5d));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1abc);
    piVar8 = DAT_008075a8;
    break;
  case (FSGSTy)0x3:
    thunk_FUN_005a0590((int)pFStack_8);
    if (*(HoloTy **)(pFVar2 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f23));
      *(undefined4 *)(pFVar2 + 0x1f23) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f23) = puVar4;
    if (puVar4 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f23),4,0x22,0x72,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      iVar3 = *(int *)(pFVar2 + 0x1f23);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3)) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3));
      }
      HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f23));
    }
    FUN_006b5f80(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
    thunk_FUN_00540620(0x22,0x72,0x22,0x72,0x2e1,(byte *)0x14c,'\x01',
                       *(BITMAPINFO **)(pFVar2 + 0x5d));
    if (*(uint *)(pFVar2 + 0x1b2c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1b70),*(uint *)(pFVar2 + 0x1b2c));
    }
    if (*(uint *)(pFVar2 + 0x1bbd) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1c01),*(uint *)(pFVar2 + 0x1bbd));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1c4e);
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = *(int **)(pFVar2 + 0x1c92);
    break;
  case (FSGSTy)0x6:
    thunk_FUN_005a07f0((int)pFStack_8);
    if (*(HoloTy **)(pFVar2 + 0x1f27) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f27));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f27));
      *(undefined4 *)(pFVar2 + 0x1f27) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f27) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f27),4,0x13,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        iVar3 = *(int *)(pFVar2 + 0x1f27);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f27) + 3)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f27) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f27));
      }
      FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      thunk_FUN_00540620(0x13,0x5e,0x13,0x5e,0x1bf,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x5d));
      if (*(uint *)(pFVar2 + 0x1b2c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(pFVar2 + 0x1b70),*(uint *)(pFVar2 + 0x1b2c));
      }
      if (*(uint *)(pFVar2 + 0x1bbd) != 0xffffffff) {
        FUN_006b3af0(*(int **)(pFVar2 + 0x1c01),*(uint *)(pFVar2 + 0x1bbd));
      }
      if (*(uint *)(pFVar2 + 0x1c4e) != 0xffffffff) {
        FUN_006b3af0(*(int **)(pFVar2 + 0x1c92),*(uint *)(pFVar2 + 0x1c4e));
      }
    }
    if (*(HoloTy **)(pFVar2 + 0x1f2b) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f2b));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f2b));
      *(undefined4 *)(pFVar2 + 0x1f2b) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f2b) = puVar4;
    if (puVar4 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f2b),2,0x1e9,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      iVar3 = *(int *)(pFVar2 + 0x1f2b);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f2b) + 3)) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f2b) + 3));
      }
      HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f2b));
    }
    FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
    thunk_FUN_00540620(0x1e9,0x5e,0x1e9,0x5e,0x124,(byte *)0x175,'\x01',
                       *(BITMAPINFO **)(pFVar2 + 0x5d));
    if (*(uint *)(pFVar2 + 0x1cdf) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1d23),*(uint *)(pFVar2 + 0x1cdf));
    }
    if (*(uint *)(pFVar2 + 0x1d70) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1db4),*(uint *)(pFVar2 + 0x1d70));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1e01);
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = *(int **)(pFVar2 + 0x1e45);
    break;
  case (FSGSTy)0x8:
    thunk_FUN_005a0af0((int)pFStack_8);
    if (*(HoloTy **)(pFVar2 + 0x1f2f) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f2f));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f2f));
      *(undefined4 *)(pFVar2 + 0x1f2f) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f2f) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f2f),2,0x199,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9)
      ;
      if (uVar6 != 0) {
        iVar3 = *(int *)(pFVar2 + 0x1f2f);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f2f) + 3)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f2f) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f2f));
      }
      FUN_006b5f80(DAT_008075a8,0x199,0x5e,0x174,0x175);
      thunk_FUN_00540620(0x199,0x5e,0x199,0x5e,0x174,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x5d));
    }
    if (*(HoloTy **)(pFVar2 + 0x1f2b) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f2b));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f2b));
      *(undefined4 *)(pFVar2 + 0x1f2b) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f2b) = puVar4;
    if (puVar4 == (undefined1 *)0x0) goto switchD_0059f6f7_default;
    uVar9 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
    uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f2b),4,0x13,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
    if (uVar6 != 0) {
      iVar3 = *(int *)(pFVar2 + 0x1f2b);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f2b) + 3)) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f2b) + 3));
      }
      HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f2b));
    }
    FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
    thunk_FUN_00540620(0x13,0x5e,0x13,0x5e,0x174,(byte *)0x175,'\x01',
                       *(BITMAPINFO **)(pFVar2 + 0x5d));
    if (*(uint *)(pFVar2 + 0x1cdf) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1d23),*(uint *)(pFVar2 + 0x1cdf));
    }
    if (*(uint *)(pFVar2 + 0x1d70) != 0xffffffff) {
      FUN_006b3af0(*(int **)(pFVar2 + 0x1db4),*(uint *)(pFVar2 + 0x1d70));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1e01);
    if (uVar6 == 0xffffffff) goto switchD_0059f6f7_default;
    piVar8 = *(int **)(pFVar2 + 0x1e45);
    break;
  case (FSGSTy)0x9:
    thunk_FUN_005a0c80((int)pFStack_8);
    if (*(HoloTy **)(pFVar2 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f23));
      *(undefined4 *)(pFVar2 + 0x1f23) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f23) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f23),4,0x22,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        iVar3 = *(int *)(pFVar2 + 0x1f23);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f23));
      }
      FUN_006b5f80(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
      thunk_FUN_00540620(0x22,0x5e,0x22,0x5e,0x2e1,(byte *)0x175,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x5d));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1abc);
    piVar8 = DAT_008075a8;
    break;
  case (FSGSTy)0xa:
    thunk_FUN_005a0590((int)pFStack_8);
    if (*(HoloTy **)(pFVar2 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f23));
      *(undefined4 *)(pFVar2 + 0x1f23) = 0;
    }
    puVar4 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      puVar4[2] = 1;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 3) = 0xffffffff;
      puVar4[1] = 2;
      *(undefined4 *)(puVar4 + 7) = 0;
      *(undefined4 *)(puVar4 + 0xb) = 0;
      *(undefined4 *)(puVar4 + 0xf) = 0;
      *(undefined4 *)(puVar4 + 0x1b) = 1;
      *(undefined4 *)(puVar4 + 0x13) = 1;
      *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0x27) = 0;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)(puVar4 + 0x2f) = 1;
      *(undefined4 *)(puVar4 + 0x2b) = 1;
    }
    *(undefined1 **)(pFVar2 + 0x1f23) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar9 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      uVar6 = HoloTy::Init(*(HoloTy **)(pFVar2 + 0x1f23),4,0xb4,0x5e,iVar3,iVar5,uVar6,cVar7,uVar9);
      if (uVar6 != 0) {
        iVar3 = *(int *)(pFVar2 + 0x1f23);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3)) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(pFVar2 + 0x1f23) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(pFVar2 + 0x1f23));
      }
      FUN_006b5f80(DAT_008075a8,0xb4,0x5e,0x1b8,0x17a);
      thunk_FUN_00540620(0xb4,0x5e,0xb4,0x5e,0x1b8,(byte *)0x17a,'\x01',
                         *(BITMAPINFO **)(pFVar2 + 0x5d));
    }
    uVar6 = *(uint *)(pFVar2 + 0x1abc);
    piVar8 = DAT_008075a8;
    break;
  default:
    goto switchD_0059f6f7_default;
  }
  FUN_006b3af0(piVar8,uVar6);
switchD_0059f6f7_default:
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = IStack_4c.previous;
      return;
    }
  }
  g_currentExceptionFrame = IStack_4c.previous;
  return;
}

