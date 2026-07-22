#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  MTaskTy *this_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  int local_8;

  iVar5 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (MTaskTy *)this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1f9,0,iVar4,"%s",
                               "MReportTy::NoneMReport");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x1f9);
    return;
  }
  cVar1 = *(char *)&local_c->field_0065;
  if (cVar1 == '\x01') {
    if (((*(char *)((int)&local_c->field_0065 + 2) != '\0') &&
        (*(char *)&local_c->field_0069 == '\0')) &&
       (*(char *)((int)&local_c->field_0065 + 3) != '\0')) {
      bVar3 = false;
      FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            if (DAT_0080c963 <= *(int *)&this_00->field_0x2c3) {
              uVar6 = *(uint *)&this_00->field_0x2a3;
              iVar7 = 0;
              iVar4 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar6 = *(uint *)&this_00->field_0x2a3;
            if ((int)uVar6 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = (int)uVar6 / 0x28;
            }
            iVar4 = *(int *)&this_00->field_0x2c3 + iVar4;
            *(int *)&this_00->field_0x2c3 = iVar4;
            if (DAT_0080c963 < iVar4) {
              *(int *)&this_00->field_0x2c3 = DAT_0080c963;
            }
            PaintMainScore((MReportTy *)this_00,*(int *)&this_00->field_0x2c3,uVar6,0);
            bVar3 = true;
          }
          else if (*(int *)(&this_00->field_0x2a3 + iVar5 * 4) < (int)(&DAT_0080c943)[iVar5]) {
            if (*(int *)&this_00->field_0x2a3 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = *(int *)&this_00->field_0x2a3 / 0x28;
            }
            iVar4 = *(int *)(&this_00->field_0x2a3 + iVar5 * 4) + iVar4;
            *(int *)(&this_00->field_0x2a3 + iVar5 * 4) = iVar4;
            if ((int)(&DAT_0080c943)[iVar5] < iVar4) {
              *(undefined4 *)(&this_00->field_0x2a3 + iVar5 * 4) = (&DAT_0080c943)[iVar5];
            }
            PaintMainScore((MReportTy *)this_00,*(int *)(&this_00->field_0x2a3 + iVar5 * 4),
                           *(uint *)&this_00->field_0x2a3,iVar5);
            bVar3 = true;
          }
          else {
            uVar6 = *(uint *)&this_00->field_0x2a3;
            iVar4 = (&DAT_0080c943)[iVar5];
            iVar7 = iVar5;
LAB_005bfb27:
            PaintMainScore((MReportTy *)this_00,iVar4,uVar6,iVar7);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(DAT_0080c83e + 1));
      }
      if (bVar3) {
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
        FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
        iVar4 = *(int *)((int)&this_00->field_0070 + 3);
        PutDDXClip(0x1a,0x46,0x1a,0x46,*(uint *)(iVar4 + 4),*(byte **)(iVar4 + 8),'\x01',
                   (BITMAPINFO *)this_00->field_005D);
        iVar4 = *(int *)((int)&this_00->field_0070 + 3);
        Library::DKW::DDX::FUN_006b48e0
                  (DAT_0080759c,0x1a,0x46,iVar4,0,0,0,*(uint *)(iVar4 + 4),*(int *)(iVar4 + 8),
                   (int)&this_00->field_0xa3,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      *(undefined1 *)((int)&this_00->field_0065 + 3) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(HoloTy **)&local_c->field_0x453 != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&local_c->field_0x453);
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00->field_0x457 != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&this_00->field_0x457);
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (*(HoloTy **)&this_00->field_0x453 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00->field_0x453);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x453);
        *(undefined4 *)&this_00->field_0x453 = 0;
      }
      if (*(HoloTy **)&this_00->field_0x457 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00->field_0x457);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x457);
        *(undefined4 *)&this_00->field_0x457 = 0;
      }
      *(undefined1 *)&this_00->field_0065 = 1;
      thunk_FUN_005c0230((MReportTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(HoloTy **)&local_c->field_0x453 != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&local_c->field_0x453);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)&this_00->field_0x453 + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0((int *)PTR_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00->field_0x457 != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&this_00->field_0x457);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)&this_00->field_0x457 + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0((int *)PTR_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      *(undefined1 *)&this_00->field_0065 = 2;
      thunk_FUN_005b66e0(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

