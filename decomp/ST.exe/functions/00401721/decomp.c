
void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  code *pcVar1;
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  FSGSTy *pFStack_8;
  
  IStack_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_4c;
  pFStack_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    pFVar2 = pFStack_8;
    MMObjTy::DoneMMObj((MMObjTy *)pFStack_8);
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    thunk_FUN_0055dbf0(DAT_0080759c,10,2);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(DAT_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    thunk_FUN_005a0590((int)pFVar2);
    thunk_FUN_005a07f0((int)pFVar2);
    thunk_FUN_005a0a50((int)pFVar2);
    thunk_FUN_005a0af0((int)pFVar2);
    thunk_FUN_005a0c80((int)pFVar2);
    if (*(byte **)(pFVar2 + 0x1b08) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pFVar2 + 0x1b08));
    }
    *(undefined4 *)(pFVar2 + 0x1b08) = 0;
    if (*(byte **)(pFVar2 + 0x1e9e) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(pFVar2 + 0x1e9e));
    }
    *(undefined4 *)(pFVar2 + 0x1e9e) = 0;
    if (*(int *)(pFVar2 + 0x1b0c) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1b0c));
    }
    if (*(HoloTy **)(pFVar2 + 0x1f23) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f23));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f23));
      *(undefined4 *)(pFVar2 + 0x1f23) = 0;
    }
    if (*(HoloTy **)(pFVar2 + 0x1f27) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f27));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f27));
      *(undefined4 *)(pFVar2 + 0x1f27) = 0;
    }
    if (*(HoloTy **)(pFVar2 + 0x1f2b) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f2b));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f2b));
      *(undefined4 *)(pFVar2 + 0x1f2b) = 0;
    }
    if (*(HoloTy **)(pFVar2 + 0x1f2f) != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)(pFVar2 + 0x1f2f));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(pFVar2 + 0x1f2f));
      *(undefined4 *)(pFVar2 + 0x1f2f) = 0;
    }
    if (*(int *)(pFVar2 + 0x1e8e) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1e8e));
    }
    if (*(int *)(pFVar2 + 0x1e92) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1e92));
    }
    if (*(int *)(pFVar2 + 0x1e96) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1e96));
    }
    if (*(int *)(pFVar2 + 0x1e9a) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1e9a));
    }
    if (-1 < (int)*(uint *)(pFVar2 + 0x1abc)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pFVar2 + 0x1abc));
    }
    *(undefined4 *)(pFVar2 + 0x1abc) = 0xffffffff;
    if (*(int *)(pFVar2 + 0x1ac0) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1ac0));
    }
    if (*(uint *)(pFVar2 + 0x1ab3) != 0) {
      FUN_006e56b0(*(void **)(pFVar2 + 0xc),*(uint *)(pFVar2 + 0x1ab3));
    }
    *(undefined4 *)(pFVar2 + 0x1ab3) = 0;
    if (*(int *)(pFVar2 + 0x1aab) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1aab));
    }
    if (*(undefined4 **)(pFVar2 + 0x1a9f) != (undefined4 *)0x0) {
      FUN_006c6fc0(*(undefined4 **)(pFVar2 + 0x1a9f));
    }
    *(undefined4 *)(pFVar2 + 0x1a9f) = 0;
    if (*(int *)(pFVar2 + 0x1a9b) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1a9b));
    }
    if (-1 < (int)*(uint *)(pFVar2 + 0x1a8f)) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)(pFVar2 + 0x1a8f));
    }
    *(undefined4 *)(pFVar2 + 0x1a8f) = 0xffffffff;
    this_00 = (ccFntTy *)0x0;
    if (*(int *)(pFVar2 + 0x1a97) != 0) {
      FUN_006ab060((undefined4 *)(pFVar2 + 0x1a97));
      this_00 = extraout_ECX;
    }
    if (*(uint **)(pFVar2 + 0x1a77) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pFVar2 + 0x1a77));
      *(undefined4 *)(pFVar2 + 0x1a77) = 0;
      this_00 = extraout_ECX_00;
    }
    if (*(uint **)(pFVar2 + 0x1a7b) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pFVar2 + 0x1a7b));
      *(undefined4 *)(pFVar2 + 0x1a7b) = 0;
      this_00 = extraout_ECX_01;
    }
    if (*(uint **)(pFVar2 + 0x1a7f) != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)(pFVar2 + 0x1a7f));
      *(undefined4 *)(pFVar2 + 0x1a7f) = 0;
    }
    if (*(HGDIOBJ *)(pFVar2 + 0x1a67) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(pFVar2 + 0x1a67));
    }
    *(undefined4 *)(pFVar2 + 0x1a67) = 0;
    if (*(byte **)(pFVar2 + 0x1fb3) != (byte *)0x0) {
      FUN_006ae110(*(byte **)(pFVar2 + 0x1fb3));
    }
    *(undefined4 *)(pFVar2 + 0x1fb3) = 0;
    if (*(int *)(pFVar2 + 0x4d) != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)(pFVar2 + 0x3d));
    }
    if (*(MMsgTy **)(*(int *)(pFVar2 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(*(MMsgTy **)(*(int *)(pFVar2 + 0x1a5b) + 0x2e6));
      *(undefined4 *)(*(int *)(*(int *)(pFVar2 + 0x1a5b) + 0x2e6) + 0x1cab) = 0;
    }
    DAT_0081174c = 0;
    g_currentExceptionFrame = IStack_4c.previous;
    return;
  }
  g_currentExceptionFrame = IStack_4c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197,0,errorCode,
                             &DAT_007a4ccc,s_FSGSTy__DoneFSGS_007cc0a8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(errorCode,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197);
  return;
}

