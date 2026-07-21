#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  char cVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  code *pcVar3;
  bool bVar4;
  MReportTy *this_00;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  int local_8;

  iVar6 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1f9,0,iVar5,"%s",
                               "MReportTy::NoneMReport");
    if (iVar6 != 0) {
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
      FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar6 == 0) {
            if (DAT_0080c963 <= this_00->field_02C3) {
              uVar7 = this_00->field_02A3;
              iVar8 = 0;
              iVar5 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar7 = this_00->field_02A3;
            if ((int)uVar7 < 0x29) {
              iVar5 = 5;
            }
            else {
              iVar5 = (int)uVar7 / 0x28;
            }
            iVar5 = this_00->field_02C3 + iVar5;
            this_00->field_02C3 = iVar5;
            if (DAT_0080c963 < iVar5) {
              this_00->field_02C3 = DAT_0080c963;
            }
            PaintMainScore(this_00,this_00->field_02C3,uVar7,0);
            bVar4 = true;
          }
          else if ((&this_00->field_02A3)[iVar6] < (int)(&DAT_0080c943)[iVar6]) {
            if (this_00->field_02A3 < 0x29) {
              iVar5 = 5;
            }
            else {
              iVar5 = this_00->field_02A3 / 0x28;
            }
            iVar5 = (&this_00->field_02A3)[iVar6] + iVar5;
            (&this_00->field_02A3)[iVar6] = iVar5;
            if ((int)(&DAT_0080c943)[iVar6] < iVar5) {
              (&this_00->field_02A3)[iVar6] = (&DAT_0080c943)[iVar6];
            }
            PaintMainScore(this_00,(&this_00->field_02A3)[iVar6],this_00->field_02A3,iVar6);
            bVar4 = true;
          }
          else {
            uVar7 = this_00->field_02A3;
            iVar5 = (&DAT_0080c943)[iVar6];
            iVar8 = iVar6;
LAB_005bfb27:
            PaintMainScore(this_00,iVar5,uVar7,iVar8);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(DAT_0080c83e + 1));
      }
      if (bVar4) {
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
        FUN_006b5f80(DAT_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
        PutDDXClip(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
                   (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D)
        ;
        pAVar2 = this_00->field_0073;
        Library::DKW::DDX::FUN_006b48e0
                  (DAT_0080759c,0x1a,0x46,(int)pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,
                   (int)&this_00->field_0xa3,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      this_00->field_0068 = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (local_c->field_0453 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(local_c->field_0453);
      if (iVar5 != 0) {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(this_00->field_0457);
      if (iVar5 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (this_00->field_0453 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_0453);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0453);
        this_00->field_0453 = (HoloTy *)0x0;
      }
      if (this_00->field_0457 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_0457);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_0457);
        this_00->field_0457 = (HoloTy *)0x0;
      }
      this_00->field_0065 = 1;
      thunk_FUN_005c0230(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (local_c->field_0453 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(local_c->field_0453);
      if (iVar5 == 0) {
        uVar7 = this_00->field_0453->field_0003;
        if (-1 < (int)uVar7) {
          FUN_006b3af0(DAT_008075a8,uVar7);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_00->field_0457 != (HoloTy *)0x0) {
      iVar5 = HoloTy::NextFas(this_00->field_0457);
      if (iVar5 == 0) {
        uVar7 = this_00->field_0457->field_0003;
        if (-1 < (int)uVar7) {
          FUN_006b3af0(DAT_008075a8,uVar7);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

