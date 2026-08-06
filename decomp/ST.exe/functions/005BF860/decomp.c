#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  char cVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  bool bVar4;
  MTaskTy *this_00;
  int iVar5;
  int iVar7;
  int iVar6;
  int iVar8;
  uint uVar9;
  int iVar10;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  int local_8;

  iVar8 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (MTaskTy *)this;
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
  cVar1 = *(char *)&local_c->field_0065;
  if (cVar1 == '\x01') {
    if (((*(char *)((int)&local_c->field_0065 + 2) != '\0') &&
        (*(char *)&local_c->field_0069 == '\0')) &&
       (*(char *)((int)&local_c->field_0065 + 3) != '\0')) {
      bVar4 = false;
      FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar8 == 0) {
            if (DAT_0080c963 <= *(int *)((int)this_00->field_02BD + 6)) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              uVar9 = *(uint *)((int)this_00->field_0291 + 0x12);
              iVar10 = 0;
              iVar6 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar9 = *(uint *)((int)this_00->field_0291 + 0x12);
            if ((int)uVar9 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = (int)uVar9 / 0x28;
            }
            iVar6 = *(int *)((int)this_00->field_02BD + 6) + iVar6;
            *(int *)((int)this_00->field_02BD + 6) = iVar6;
            if (DAT_0080c963 < iVar6) {
              *(int *)((int)this_00->field_02BD + 6) = DAT_0080c963;
            }
            PaintMainScore((MReportTy *)this_00,*(int *)((int)this_00->field_02BD + 6),uVar9,0);
            bVar4 = true;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          else if (*(int *)((int)this_00->field_0291 + iVar8 * 4 + 0x12) <
                   (int)(&DAT_0080c943)[iVar8]) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar6 = *(int *)((int)this_00->field_0291 + 0x12);
            if (iVar6 < 0x29) {
              iVar6 = 5;
            }
            else {
              iVar6 = iVar6 / 0x28;
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar6 = *(int *)((int)this_00->field_0291 + iVar8 * 4 + 0x12) + iVar6;
            *(int *)((int)this_00->field_0291 + iVar8 * 4 + 0x12) = iVar6;
            if ((int)(&DAT_0080c943)[iVar8] < iVar6) {
              *(undefined4 *)((int)this_00->field_0291 + iVar8 * 4 + 0x12) = (&DAT_0080c943)[iVar8];
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            PaintMainScore((MReportTy *)this_00,
                           *(int *)((int)this_00->field_0291 + iVar8 * 4 + 0x12),
                           *(uint *)((int)this_00->field_0291 + 0x12),iVar8);
            bVar4 = true;
          }
          else {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar9 = *(uint *)((int)this_00->field_0291 + 0x12);
            iVar6 = (&DAT_0080c943)[iVar8];
            iVar10 = iVar8;
LAB_005bfb27:
            PaintMainScore((MReportTy *)this_00,iVar6,uVar9,iVar10);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)(DAT_0080c83e + 1));
      }
      if (bVar4) {
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
        FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
        iVar8 = *(int *)((int)&this_00->field_0070 + 3);
        PutDDXClip(0x1a,0x46,0x1a,0x46,*(uint *)(iVar8 + 4),*(byte **)(iVar8 + 8),'\x01',
                   (BITMAPINFO *)this_00->field_005D);
        pAVar2 = *(AnonPointee_MReportTy_0073 **)((int)&this_00->field_0070 + 3);
        Library::DKW::DDX::FUN_006b48e0
                  ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,
                   pAVar2->field_0008,(ushort *)&this_00->field_0xa3,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      *(undefined1 *)((int)&this_00->field_0065 + 3) = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(HoloTy **)&local_c->field_0x453 != nullptr) {
      iVar8 = HoloTy::NextFas(*(HoloTy **)&local_c->field_0x453);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00->field_0x457 != nullptr) {
      iVar8 = HoloTy::NextFas(*(HoloTy **)&this_00->field_0x457);
      if (iVar8 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (*(HoloTy **)&this_00->field_0x453 != nullptr) {
        HoloTy::Done(*(HoloTy **)&this_00->field_0x453);
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x453);
        *(undefined4 *)&this_00->field_0x453 = 0;
      }
      if (*(HoloTy **)&this_00->field_0x457 != nullptr) {
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
    if (*(HoloTy **)&local_c->field_0x453 != nullptr) {
      iVar8 = HoloTy::NextFas(*(HoloTy **)&local_c->field_0x453);
      if (iVar8 == 0) {
        uVar9 = *(uint *)(*(int *)&this_00->field_0x453 + 3);
        if (-1 < (int)uVar9) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00->field_0x457 != nullptr) {
      iVar8 = HoloTy::NextFas(*(HoloTy **)&this_00->field_0x457);
      if (iVar8 == 0) {
        uVar9 = *(uint *)(*(int *)&this_00->field_0x457 + 3);
        if (-1 < (int)uVar9) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar9);
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

