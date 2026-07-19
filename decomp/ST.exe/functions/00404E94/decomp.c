
void __thiscall SettMapTy::DeleteCtrls(SettMapTy *this)

{
  SettMapTy SVar1;
  code *pcVar2;
  SettMapTy *this_00;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SettMapTy *pSVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  InternalExceptionFrame IStack_54;
  SettMapTy *pSStack_10;
  int iStack_c;
  int iStack_8;
  
  IStack_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_54;
  pSStack_10 = this;
  iVar3 = __setjmp3(IStack_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_54.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4,0,iVar3,&DAT_007a4ccc
                               ,s_SettMapTy__DeleteCtrls_007cd208);
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4);
    return;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_00 = pSStack_10;
  if (*(uint *)(pSStack_10 + 0x215d) != 0) {
    FUN_006e56b0(*(void **)(pSStack_10 + 0xc),*(uint *)(pSStack_10 + 0x215d));
  }
  *(undefined4 *)(this_00 + 0x215d) = 0;
  pSVar6 = this_00 + 0x1f8c;
  iStack_c = 10;
  do {
    iStack_8 = 8;
    do {
      if (*(uint *)pSVar6 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pSVar6);
        *(uint *)pSVar6 = 0;
      }
      pSVar6 = pSVar6 + 4;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    if (*(uint *)(this_00 + 0x211d) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x211d));
      *(undefined4 *)(this_00 + 0x211d) = 0;
    }
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(HoloTy **)(this_00 + 0x21e8) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(this_00 + 0x21e8));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21e8));
    *(undefined4 *)(this_00 + 0x21e8) = 0;
  }
  puVar4 = (undefined1 *)FUN_0072e530(0x33);
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
  *(undefined1 **)(this_00 + 0x21e8) = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    uVar10 = 0;
    cVar9 = '\x01';
    uVar8 = 0x10;
    iVar7 = 1;
    iVar3 = FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
    uVar8 = HoloTy::Init(*(HoloTy **)(this_00 + 0x21e8),2,0x112,0x38,iVar3,iVar7,uVar8,cVar9,uVar10)
    ;
    if (uVar8 != 0) {
      iVar3 = *(int *)(this_00 + 0x21e8);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21e8) + 3)) {
        FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21e8) + 3));
      }
      HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21e8));
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x38,0x205,0x104);
    thunk_FUN_00540620(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  if (*(uint *)(this_00 + 0x1c6f) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_00 + 0x1cb3),*(uint *)(this_00 + 0x1c6f));
  }
  if (*(uint *)(this_00 + 0x1d00) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_00 + 0x1d44),*(uint *)(this_00 + 0x1d00));
  }
  if (*(uint *)(this_00 + 0x1d91) != 0xffffffff) {
    FUN_006b3af0(*(int **)(this_00 + 0x1dd5),*(uint *)(this_00 + 0x1d91));
  }
  pSVar6 = this_00 + 0x20cc;
  iStack_c = 10;
  do {
    FUN_006b3af0(DAT_008075a8,*(uint *)pSVar6);
    pSVar6 = pSVar6 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  pSVar6 = this_00 + 0x2125;
  iStack_c = 0xe;
  do {
    if (*(uint *)pSVar6 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pSVar6);
      *(uint *)pSVar6 = 0;
    }
    pSVar6 = pSVar6 + 4;
    iStack_c = iStack_c + -1;
  } while (iStack_c != 0);
  if (*(HoloTy **)(this_00 + 0x21f4) != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)(this_00 + 0x21f4));
    FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21f4));
    *(undefined4 *)(this_00 + 0x21f4) = 0;
  }
  puVar4 = (undefined1 *)FUN_0072e530(0x33);
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
  *(undefined1 **)(this_00 + 0x21f4) = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    uVar10 = 0;
    cVar9 = '\x01';
    uVar8 = 0x10;
    iVar7 = 1;
    iVar3 = FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
    uVar8 = HoloTy::Init(*(HoloTy **)(this_00 + 0x21f4),2,0x112,0x149,iVar3,iVar7,uVar8,cVar9,uVar10
                        );
    if (uVar8 != 0) {
      iVar3 = *(int *)(this_00 + 0x21f4);
      *(undefined1 *)(iVar3 + 2) = 0;
      *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
      if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21f4) + 3)) {
        FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21f4) + 3));
      }
      HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f4));
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x149,0x205,0x8c);
    thunk_FUN_00540620(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1e22));
  if ((((this_00[0x21e2] == (SettMapTy)0x0) || (SVar1 = this_00[0x1e26], SVar1 == (SettMapTy)0x6))
      || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) {
    *(undefined4 *)(this_00 + 0x2d) = 0x20;
    *(undefined4 *)(this_00 + 0x31) = 0;
    FUN_006e6080(this_00,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)(this_00 + 0x1d));
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(DAT_0081176c + 0x389));
    }
    *(undefined4 *)(DAT_0081176c + 0x389) = 0;
    iVar3 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar3,0,0,0,*(int *)(iVar3 + 4),*(int *)(iVar3 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar5 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar5;
    if (*(HoloTy **)(this_00 + 0x21ec) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(this_00 + 0x21ec));
      FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21ec));
      *(undefined4 *)(this_00 + 0x21ec) = 0;
    }
    puVar4 = (undefined1 *)FUN_0072e530(0x33);
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
    *(undefined1 **)(this_00 + 0x21ec) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar8 = HoloTy::Init(*(HoloTy **)(this_00 + 0x21ec),4,10,0xb4,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        iVar3 = *(int *)(this_00 + 0x21ec);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21ec) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21ec) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21ec));
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
    }
    if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
    }
    if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  if ((this_00[0x21e3] != (SettMapTy)0x0) &&
     (((SVar1 = this_00[0x1e26], SVar1 == (SettMapTy)0x6 || (SVar1 == (SettMapTy)0x7)) ||
      (SVar1 == (SettMapTy)0xe)))) {
    pSVar6 = this_00 + 0x1f60;
    iStack_c = 7;
    do {
      if (*(uint *)pSVar6 != 0) {
        FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pSVar6);
        *(uint *)pSVar6 = 0;
      }
      pSVar6 = pSVar6 + 4;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
    if (*(HoloTy **)(this_00 + 0x21f0) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(this_00 + 0x21f0));
      FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21f0));
      *(undefined4 *)(this_00 + 0x21f0) = 0;
    }
    puVar4 = (undefined1 *)FUN_0072e530(0x33);
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
    *(undefined1 **)(this_00 + 0x21f0) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      uVar10 = 0;
      cVar9 = '\x01';
      uVar8 = 0x10;
      iVar7 = 1;
      iVar3 = FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar8 = HoloTy::Init(*(HoloTy **)(this_00 + 0x21f0),4,10,0xb4,iVar3,iVar7,uVar8,cVar9,uVar10);
      if (uVar8 != 0) {
        iVar3 = *(int *)(this_00 + 0x21f0);
        *(undefined1 *)(iVar3 + 2) = 0;
        *(undefined4 *)(iVar3 + 0x17) = 0xffffffff;
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21f0) + 3)) {
          FUN_006b3430(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21f0) + 3));
        }
        HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f0));
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b34d0(*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                   *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = IStack_54.previous;
      return;
    }
  }
  g_currentExceptionFrame = IStack_54.previous;
  return;
}

