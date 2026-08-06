#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  MMsgTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    this_01 = local_8;
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    sub_005A0590(this_01);
    sub_005A07F0(this_01);
    sub_005A0A50(this_01);
    sub_005A0AF0(this_01);
    sub_005A0C80(this_01);
    if (this_01->field_1B08 != nullptr) {
      FUN_006b5570(this_01->field_1B08);
    }
    this_01->field_1B08 = nullptr;
    if ((DArrayTy *)this_01->field_1E9E != nullptr) {
      FUN_006b5570((DArrayTy *)this_01->field_1E9E);
    }
    this_01->field_1E9E = nullptr;
    if (this_01->field_1B0C != nullptr) {
      FreeAndNull(&this_01->field_1B0C);
    }
    if (this_01->field_1F23 != nullptr) {
      HoloTy::Done(this_01->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F23);
      this_01->field_1F23 = nullptr;
    }
    if (this_01->field_1F27 != nullptr) {
      HoloTy::Done(this_01->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F27);
      this_01->field_1F27 = nullptr;
    }
    if (this_01->field_1F2B != nullptr) {
      HoloTy::Done(this_01->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F2B);
      this_01->field_1F2B = nullptr;
    }
    if (this_01->field_1F2F != nullptr) {
      HoloTy::Done(this_01->field_1F2F);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F2F);
      this_01->field_1F2F = nullptr;
    }
    if (this_01->field_1E8E != 0) {
      FreeAndNull(&this_01->field_1E8E);
    }
    if (this_01->field_1E92 != nullptr) {
      FreeAndNull(&this_01->field_1E92);
    }
    if (this_01->field_1E96 != nullptr) {
      FreeAndNull(&this_01->field_1E96);
    }
    if (this_01->field_1E9A != nullptr) {
      FreeAndNull(&this_01->field_1E9A);
    }
    if (-1 < (int)this_01->field_1ABC) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,this_01->field_1ABC);
    }
    this_01->field_1ABC = 0xffffffff;
    if (this_01->field_1AC0 != nullptr) {
      FreeAndNull(&this_01->field_1AC0);
    }
    if (this_01->field_1AB3 != 0) {
      StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_1AB3);
    }
    this_01->field_1AB3 = 0;
    if (this_01->field_1AAB != (LPCSTR)0x0) {
      FreeAndNull(&this_01->field_1AAB);
    }
    if (this_01->field_1A9F != nullptr) {
      FUN_006c6fc0(this_01->field_1A9F);
    }
    this_01->field_1A9F = nullptr;
    if (this_01->field_1A9B != nullptr) {
      FreeAndNull(&this_01->field_1A9B);
    }
    if (-1 < (int)this_01->field_1A8F) {
      FUN_006b3bb0((int *)g_ddxContext_008075A8,this_01->field_1A8F);
    }
    this_01->field_1A8F = 0xffffffff;
    if (this_01->field_1A97 != nullptr) {
      FreeAndNull(&this_01->field_1A97);
    }
    if (this_01->field_1A77 != nullptr) {
      ccFntTy::operator_delete((uint *)this_01->field_1A77);
      this_01->field_1A77 = nullptr;
    }
    if (this_01->field_1A7B != nullptr) {
      ccFntTy::operator_delete((uint *)this_01->field_1A7B);
      this_01->field_1A7B = nullptr;
    }
    if (this_01->field_1A7F != nullptr) {
      ccFntTy::operator_delete((uint *)this_01->field_1A7F);
      this_01->field_1A7F = nullptr;
    }
    if (this_01->field_1A67 != (HGDIOBJ)0x0) {
      DeleteObject(this_01->field_1A67);
    }
    this_01->field_1A67 = (HGDIOBJ)0x0;
    if (this_01->field_1FB3 != nullptr) {
      DArrayDestroy((DArrayTy *)this_01->field_1FB3);
    }
    this_01->field_1FB3 = nullptr;
    if (this_01->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->field_0x3d);
    }
    this_00 = this_01->field_1A5B->field_02E6;
    if (this_00 != nullptr) {
      MMsgTy::HideSprites(this_00);
      this_01->field_1A5B->field_02E6->field_1CAB = 0;
    }
    g_fSGS_0081174C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x197,0,errorCode,
                             "%s","FSGSTy::DoneFSGS");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x197);
  return;
}

