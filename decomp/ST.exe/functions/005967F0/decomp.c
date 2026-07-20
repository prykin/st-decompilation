
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  MMsgTy *this_00;
  code *pcVar1;
  FSGSTy *pFVar2;
  int errorCode;
  int iVar3;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    pFVar2 = local_8;
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (DAT_00802a30 != 0) {
      if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
        Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
      }
      else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
        FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
      }
    }
    DarkScreen(DAT_0080759c,10,2);
    if (*(uint *)(DAT_0081176c + 0x2c) != 0) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)(DAT_0081176c + 0x2c));
    }
    thunk_FUN_005a0590((int)pFVar2);
    thunk_FUN_005a07f0((int)pFVar2);
    thunk_FUN_005a0a50((int)pFVar2);
    thunk_FUN_005a0af0((int)pFVar2);
    thunk_FUN_005a0c80((int)pFVar2);
    if ((byte *)pFVar2->field_1B08 != (byte *)0x0) {
      FUN_006b5570((byte *)pFVar2->field_1B08);
    }
    pFVar2->field_1B08 = 0;
    if ((byte *)pFVar2->field_1E9E != (byte *)0x0) {
      FUN_006b5570((byte *)pFVar2->field_1E9E);
    }
    pFVar2->field_1E9E = 0;
    if (pFVar2->field_1B0C != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1B0C);
    }
    if (pFVar2->field_1F23 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F23);
      pFVar2->field_1F23 = (HoloTy *)0x0;
    }
    if (pFVar2->field_1F27 != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F27);
      pFVar2->field_1F27 = (HoloTy *)0x0;
    }
    if (pFVar2->field_1F2B != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2B);
      pFVar2->field_1F2B = (HoloTy *)0x0;
    }
    if (pFVar2->field_1F2F != (HoloTy *)0x0) {
      HoloTy::Done(pFVar2->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(pFVar2->field_1F2F);
      pFVar2->field_1F2F = (HoloTy *)0x0;
    }
    if (pFVar2->field_1E8E != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1E8E);
    }
    if (pFVar2->field_1E92 != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1E92);
    }
    if (pFVar2->field_1E96 != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1E96);
    }
    if (pFVar2->field_1E9A != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1E9A);
    }
    if (-1 < (int)pFVar2->field_1ABC) {
      FUN_006b3bb0(DAT_008075a8,pFVar2->field_1ABC);
    }
    pFVar2->field_1ABC = 0xffffffff;
    if (pFVar2->field_1AC0 != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1AC0);
    }
    if (pFVar2->field_1AB3 != 0) {
      StartSystemTy::sub_006E56B0(pFVar2->field_000C,pFVar2->field_1AB3);
    }
    pFVar2->field_1AB3 = 0;
    if (pFVar2->field_1AAB != (LPCSTR)0x0) {
      FUN_006ab060(&pFVar2->field_1AAB);
    }
    if ((undefined4 *)pFVar2->field_1A9F != (undefined4 *)0x0) {
      FUN_006c6fc0((undefined4 *)pFVar2->field_1A9F);
    }
    pFVar2->field_1A9F = 0;
    if (pFVar2->field_1A9B != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1A9B);
    }
    if (-1 < (int)pFVar2->field_1A8F) {
      FUN_006b3bb0(DAT_008075a8,pFVar2->field_1A8F);
    }
    pFVar2->field_1A8F = 0xffffffff;
    this_01 = (ccFntTy *)0x0;
    if (pFVar2->field_1A97 != 0) {
      FUN_006ab060((LPVOID *)&pFVar2->field_1A97);
      this_01 = extraout_ECX;
    }
    if (pFVar2->field_1A77 != (ccFntTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)pFVar2->field_1A77);
      pFVar2->field_1A77 = (ccFntTy *)0x0;
      this_01 = extraout_ECX_00;
    }
    if ((uint *)pFVar2->field_1A7B != (uint *)0x0) {
      ccFntTy::operator(this_01,(uint *)pFVar2->field_1A7B);
      pFVar2->field_1A7B = 0;
      this_01 = extraout_ECX_01;
    }
    if (pFVar2->field_1A7F != (StartServTy *)0x0) {
      ccFntTy::operator(this_01,(uint *)pFVar2->field_1A7F);
      pFVar2->field_1A7F = (StartServTy *)0x0;
    }
    if (pFVar2->field_1A67 != (HGDIOBJ)0x0) {
      DeleteObject(pFVar2->field_1A67);
    }
    pFVar2->field_1A67 = (HGDIOBJ)0x0;
    if ((byte *)pFVar2->field_1FB3 != (byte *)0x0) {
      FUN_006ae110((byte *)pFVar2->field_1FB3);
    }
    pFVar2->field_1FB3 = 0;
    if (pFVar2->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pFVar2->field_0x3d);
    }
    this_00 = pFVar2->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      pFVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    g_fSGS_0081174C = (FSGSTy *)0x0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
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

