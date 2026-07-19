
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  byte *pbVar1;
  MMsgTy *this_00;
  code *pcVar2;
  FSGSTy *pFVar3;
  int iVar4;
  int iVar5;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    pFVar3 = local_8;
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
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
    thunk_FUN_005a0590((int)pFVar3);
    thunk_FUN_005a07f0((int)pFVar3);
    thunk_FUN_005a0a50((int)pFVar3);
    thunk_FUN_005a0af0((int)pFVar3);
    thunk_FUN_005a0c80((int)pFVar3);
    if (*(byte **)&pFVar3->field_0x1b08 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pFVar3->field_0x1b08);
    }
    *(undefined4 *)&pFVar3->field_0x1b08 = 0;
    if (*(byte **)&pFVar3->field_0x1e9e != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pFVar3->field_0x1e9e);
    }
    *(undefined4 *)&pFVar3->field_0x1e9e = 0;
    if (pFVar3->field_1B0C != 0) {
      FUN_006ab060(&pFVar3->field_1B0C);
    }
    if (*(HoloTy **)&pFVar3[1].field_0x44 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pFVar3[1].field_0x44);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pFVar3[1].field_0x44);
      *(undefined4 *)&pFVar3[1].field_0x44 = 0;
    }
    if (*(HoloTy **)&pFVar3[1].field_0x48 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pFVar3[1].field_0x48);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pFVar3[1].field_0x48);
      *(undefined4 *)&pFVar3[1].field_0x48 = 0;
    }
    if (*(HoloTy **)&pFVar3[1].field_0x4c != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pFVar3[1].field_0x4c);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pFVar3[1].field_0x4c);
      *(undefined4 *)&pFVar3[1].field_0x4c = 0;
    }
    if (*(HoloTy **)&pFVar3[1].field_0x50 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&pFVar3[1].field_0x50);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&pFVar3[1].field_0x50);
      *(undefined4 *)&pFVar3[1].field_0x50 = 0;
    }
    if (pFVar3->field_1E8E != 0) {
      FUN_006ab060(&pFVar3->field_1E8E);
    }
    if (pFVar3->field_1E92 != 0) {
      FUN_006ab060(&pFVar3->field_1E92);
    }
    if (*(int *)&pFVar3->field_0x1e96 != 0) {
      FUN_006ab060((undefined4 *)&pFVar3->field_0x1e96);
    }
    if (*(int *)&pFVar3->field_0x1e9a != 0) {
      FUN_006ab060((undefined4 *)&pFVar3->field_0x1e9a);
    }
    if (-1 < (int)pFVar3->field_1ABC) {
      FUN_006b3bb0(DAT_008075a8,pFVar3->field_1ABC);
    }
    pFVar3->field_1ABC = 0xffffffff;
    if (pFVar3->field_1AC0 != 0) {
      FUN_006ab060(&pFVar3->field_1AC0);
    }
    if (*(uint *)&pFVar3->field_0x1ab3 != 0) {
      FUN_006e56b0(*(void **)&pFVar3->field_0xc,*(uint *)&pFVar3->field_0x1ab3);
    }
    *(undefined4 *)&pFVar3->field_0x1ab3 = 0;
    if (*(int *)&pFVar3->field_0x1aab != 0) {
      FUN_006ab060((undefined4 *)&pFVar3->field_0x1aab);
    }
    if (*(undefined4 **)&pFVar3->field_0x1a9f != (undefined4 *)0x0) {
      FUN_006c6fc0(*(undefined4 **)&pFVar3->field_0x1a9f);
    }
    *(undefined4 *)&pFVar3->field_0x1a9f = 0;
    if (*(int *)&pFVar3->field_0x1a9b != 0) {
      FUN_006ab060((undefined4 *)&pFVar3->field_0x1a9b);
    }
    if (-1 < (int)*(uint *)&pFVar3->field_0x1a8f) {
      FUN_006b3bb0(DAT_008075a8,*(uint *)&pFVar3->field_0x1a8f);
    }
    *(undefined4 *)&pFVar3->field_0x1a8f = 0xffffffff;
    this_01 = (ccFntTy *)0x0;
    if (pFVar3->field_1A97 != 0) {
      FUN_006ab060(&pFVar3->field_1A97);
      this_01 = extraout_ECX;
    }
    if (*(uint **)&pFVar3->field_0x1a77 != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pFVar3->field_0x1a77);
      *(undefined4 *)&pFVar3->field_0x1a77 = 0;
      this_01 = extraout_ECX_00;
    }
    if (*(uint **)&pFVar3->field_0x1a7b != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pFVar3->field_0x1a7b);
      *(undefined4 *)&pFVar3->field_0x1a7b = 0;
      this_01 = extraout_ECX_01;
    }
    if (*(uint **)&pFVar3->field_0x1a7f != (uint *)0x0) {
      ccFntTy::operator(this_01,*(uint **)&pFVar3->field_0x1a7f);
      *(undefined4 *)&pFVar3->field_0x1a7f = 0;
    }
    if (*(HGDIOBJ *)&pFVar3->field_0x1a67 != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)&pFVar3->field_0x1a67);
    }
    pbVar1 = *(byte **)&pFVar3[1].field_0xd4;
    *(undefined4 *)&pFVar3->field_0x1a67 = 0;
    if (pbVar1 != (byte *)0x0) {
      FUN_006ae110(pbVar1);
    }
    iVar4 = *(int *)&pFVar3->field_0x4d;
    *(undefined4 *)&pFVar3[1].field_0xd4 = 0;
    if (iVar4 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&pFVar3->field_0x3d);
    }
    this_00 = *(MMsgTy **)(*(int *)&pFVar3->field_0x1a5b + 0x2e6);
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HideSprites(this_00);
      *(undefined4 *)(*(int *)(*(int *)&pFVar3->field_0x1a5b + 0x2e6) + 0x1cab) = 0;
    }
    DAT_0081174c = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197,0,iVar4,&DAT_007a4ccc,
                             s_FSGSTy__DoneFSGS_007cc0a8);
  if (iVar5 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x197);
  return;
}

