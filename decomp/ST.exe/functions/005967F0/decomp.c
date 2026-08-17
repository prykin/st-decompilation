#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DoneFSGS */

void __thiscall FSGSTy::DoneFSGS(FSGSTy *this)

{
  ccFntTy *pcVar1;
  HGDIOBJ ho;
  FSGSTy_field_1FB3DArray *array;
  MMsgTy *this_00;
  FSGSTy *this_01;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  FSGSTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[0059682A]: CALL dword ptr [0x0085c02c] */
    CFsgsConnection::StopBanners((CFsgsConnection *)&DAT_00802a90);
    this_01 = local_8;
    /* ST_CALLSITE[00596835]: CALL 0x0040458e; direct=0040458E MMObjTy::DoneMMObj */
    MMObjTy::DoneMMObj((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        Library::DKW::DDX::FUN_006b8b10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        FUN_006b3af0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    /* ST_CALLSITE[00596876]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_startSystem_0081176C->field_002C != nullptr) {
      cMf32::RecMemFree(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    /* ST_CALLSITE[00596898]: CALL 0x00405641; direct=00405641 FSGSTy::sub_005A0590 */
    sub_005A0590(this_01);
    /* ST_CALLSITE[0059689F]: CALL 0x0040580d; direct=0040580D FSGSTy::sub_005A07F0 */
    sub_005A07F0(this_01);
    /* ST_CALLSITE[005968A6]: CALL 0x004020f9; direct=004020F9 FSGSTy::sub_005A0A50 */
    sub_005A0A50(this_01);
    /* ST_CALLSITE[005968AD]: CALL 0x0040520e; direct=0040520E FSGSTy::sub_005A0AF0 */
    sub_005A0AF0(this_01);
    /* ST_CALLSITE[005968B4]: CALL 0x0040418d; direct=0040418D FSGSTy::sub_005A0C80 */
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
      /* ST_CALLSITE[00596905]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(this_01->field_1F23);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F23);
      this_01->field_1F23 = nullptr;
    }
    if (this_01->field_1F27 != nullptr) {
      /* ST_CALLSITE[00596929]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(this_01->field_1F27);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F27);
      this_01->field_1F27 = nullptr;
    }
    if (this_01->field_1F2B != nullptr) {
      /* ST_CALLSITE[0059694D]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(this_01->field_1F2B);
      Library::MSVCRT::FUN_0072e2b0(this_01->field_1F2B);
      this_01->field_1F2B = nullptr;
    }
    if (this_01->field_1F2F != nullptr) {
      /* ST_CALLSITE[00596971]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
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
    pcVar1 = this_01->array_00BC[0xc].field_01F7;
    if (pcVar1 != nullptr) {
      ccFntTy::operator_delete((uint *)pcVar1);
      this_01->array_00BC[0xc].field_01F7 = nullptr;
    }
    if (this_01->field_1A7B != nullptr) {
      ccFntTy::operator_delete((uint *)this_01->field_1A7B);
      this_01->field_1A7B = nullptr;
    }
    if (this_01->field_1A7F != nullptr) {
      ccFntTy::operator_delete((uint *)this_01->field_1A7F);
      this_01->field_1A7F = nullptr;
    }
    ho = this_01->array_00BC[0xc].field_01E7;
    if (ho != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[00596B01]: CALL dword ptr [0x0085ba78] */
      DeleteObject(ho);
    }
    array = this_01->field_1FB3;
    this_01->array_00BC[0xc].field_01E7 = nullptr;
    if (array != nullptr) {
      DArrayDestroy((DArrayTy *)array);
    }
    this_01->field_1FB3 = nullptr;
    if (this_01->field_004D != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->field_0x3d);
    }
    this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
    if (this_00 != nullptr) {
      /* ST_CALLSITE[00596B48]: CALL 0x0040462e; direct=0040462E MMsgTy::HideSprites */
      MMsgTy::HideSprites(this_00);
      (this_01->array_00BC[0xc].field_01DB)->field_02E6->field_1CAB = 0;
    }
    g_fSGS_0081174C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0x197,0,errorCode,
                             "%s","FSGSTy::DoneFSGS");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0x197);
  return;
}

