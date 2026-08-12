#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  char cVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  bool bVar4;
  MReportTy *this_00;
  int iVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  int local_8;

  iVar8 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1f9,0,iVar5,"%s",
                               "MReportTy::NoneMReport");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x1f9);
    return;
  }
  cVar1 = local_c->field_0065;
  if (cVar1 == '\x01') {
    if (((local_c->field_0067 != '\0') && (local_c->field_0069 == '\0')) &&
       (local_c->field_0068 != '\0')) {
      bVar4 = false;
      FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar8 == 0) {
            if (DAT_0080c963 <= this_00->field_02C3) {
              uVar9 = this_00->field_02A3;
              iVar10 = 0;
              iVar6 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar9 = this_00->field_02A3;
            if ((int)uVar9 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = (int)uVar9 / 0x28;
            }
            iVar6 = this_00->field_02C3 + iVar6;
            this_00->field_02C3 = iVar6;
            if (DAT_0080c963 < iVar6) {
              this_00->field_02C3 = DAT_0080c963;
            }
            PaintMainScore(this_00,this_00->field_02C3,uVar9,0);
            bVar4 = true;
          }
          else if ((&this_00->field_02A3)[iVar8] < (int)(&DAT_0080c943)[iVar8]) {
            if (this_00->field_02A3 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = this_00->field_02A3 / 0x28;
            }
            iVar6 = (&this_00->field_02A3)[iVar8] + iVar6;
            (&this_00->field_02A3)[iVar8] = iVar6;
            if ((int)(&DAT_0080c943)[iVar8] < iVar6) {
              (&this_00->field_02A3)[iVar8] = (&DAT_0080c943)[iVar8];
            }
            PaintMainScore(this_00,(&this_00->field_02A3)[iVar8],this_00->field_02A3,iVar8);
            bVar4 = true;
          }
          else {
            uVar9 = this_00->field_02A3;
            iVar6 = (&DAT_0080c943)[iVar8];
            iVar10 = iVar8;
LAB_005bfb27:
            PaintMainScore(this_00,iVar6,uVar9,iVar10);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(DAT_0080c83e + 1));
      }
      if (bVar4) {
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
        FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
        PutDDXClip(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
                   (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
        pAVar2 = this_00->field_0073;
        Library::DKW::DDX::FUN_006b48e0
                  ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,
                   pAVar2->field_0008,(ushort *)&this_00->field_00A3,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      this_00->field_0068 = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (local_c->field_0453 != nullptr) {
      iVar8 = HoloTy::NextFas(local_c->field_0453);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != nullptr) {
      iVar8 = HoloTy::NextFas(this_00->field_0457);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (this_00->field_0453 != nullptr) {
        HoloTy::Done(this_00->field_0453);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0453);
        this_00->field_0453 = nullptr;
      }
      if (this_00->field_0457 != nullptr) {
        HoloTy::Done(this_00->field_0457);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0457);
        this_00->field_0457 = nullptr;
      }
      this_00->field_0065 = 1;
      thunk_FUN_005c0230(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (local_c->field_0453 != nullptr) {
      iVar8 = HoloTy::NextFas(local_c->field_0453);
      if (iVar8 == 0) {
        uVar9 = *(uint *)&this_00->field_0453->field_0x3;
        if (-1 < (int)uVar9) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != nullptr) {
      iVar8 = HoloTy::NextFas(this_00->field_0457);
      if (iVar8 == 0) {
        uVar9 = *(uint *)&this_00->field_0457->field_0x3;
        if (-1 < (int)uVar9) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      thunk_FUN_005b66e0((MTaskTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

