
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  MReportTy MVar1;
  code *pcVar2;
  bool bVar3;
  MReportTy *this_00;
  int iVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  uint uVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  MReportTy *local_c;
  int local_8;
  
  iVar5 = 0;
  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1f9,0,iVar4,&DAT_007a4ccc,
                               s_MReportTy__NoneMReport_007ccfc8);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1f9);
    return;
  }
  MVar1 = local_c[0x65];
  if (MVar1 == (MReportTy)0x1) {
    if (((local_c[0x67] != (MReportTy)0x0) && (local_c[0x69] == (MReportTy)0x0)) &&
       (local_c[0x68] != (MReportTy)0x0)) {
      bVar3 = false;
      FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            if (DAT_0080c963 <= *(int *)(this_00 + 0x2c3)) {
              uVar6 = *(uint *)(this_00 + 0x2a3);
              iVar7 = 0;
              iVar4 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar6 = *(uint *)(this_00 + 0x2a3);
            if ((int)uVar6 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = (int)uVar6 / 0x28;
            }
            iVar7 = *(int *)(this_00 + 0x2c3);
            *(int *)(this_00 + 0x2c3) = iVar7 + iVar4;
            if (DAT_0080c963 < iVar7 + iVar4) {
              *(int *)(this_00 + 0x2c3) = DAT_0080c963;
            }
            PaintMainScore(this_00,*(int *)(this_00 + 0x2c3),uVar6,0);
            bVar3 = true;
          }
          else if (*(int *)(this_00 + iVar5 * 4 + 0x2a3) < (int)(&DAT_0080c943)[iVar5]) {
            if (*(int *)(this_00 + 0x2a3) < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = *(int *)(this_00 + 0x2a3) / 0x28;
            }
            iVar7 = *(int *)(this_00 + iVar5 * 4 + 0x2a3);
            *(int *)(this_00 + iVar5 * 4 + 0x2a3) = iVar7 + iVar4;
            if ((int)(&DAT_0080c943)[iVar5] < iVar7 + iVar4) {
              *(undefined4 *)(this_00 + iVar5 * 4 + 0x2a3) = (&DAT_0080c943)[iVar5];
            }
            PaintMainScore(this_00,*(int *)(this_00 + iVar5 * 4 + 0x2a3),*(uint *)(this_00 + 0x2a3),
                           iVar5);
            bVar3 = true;
          }
          else {
            uVar6 = *(uint *)(this_00 + 0x2a3);
            iVar4 = (&DAT_0080c943)[iVar5];
            iVar7 = iVar5;
LAB_005bfb27:
            PaintMainScore(this_00,iVar4,uVar6,iVar7);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(DAT_0080c83e + 1));
      }
      if (bVar3) {
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
        FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
        thunk_FUN_00540620(0x1a,0x46,0x1a,0x46,*(uint *)(*(int *)(this_00 + 0x73) + 4),
                           *(byte **)(*(int *)(this_00 + 0x73) + 8),'\x01',
                           *(BITMAPINFO **)(this_00 + 0x5d));
        iVar4 = *(int *)(this_00 + 0x73);
        Library::DKW::DDX::FUN_006b48e0
                  (DAT_0080759c,0x1a,0x46,iVar4,0,0,0,*(uint *)(iVar4 + 4),*(int *)(iVar4 + 8),
                   (int)(this_00 + 0xa3),0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      this_00[0x68] = (MReportTy)0x0;
    }
  }
  else if (MVar1 == (MReportTy)0x3) {
    if (*(HoloTy **)(local_c + 0x453) != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(local_c + 0x453));
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)(this_00 + 0x457) != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x457));
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (*(HoloTy **)(this_00 + 0x453) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x453));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x453));
        *(undefined4 *)(this_00 + 0x453) = 0;
      }
      if (*(HoloTy **)(this_00 + 0x457) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x457));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x457));
        *(undefined4 *)(this_00 + 0x457) = 0;
      }
      this_00[0x65] = (MReportTy)0x1;
      thunk_FUN_005c0230(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (MVar1 == (MReportTy)0x4) {
    if (*(HoloTy **)(local_c + 0x453) != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(local_c + 0x453));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x453) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x453) + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)(this_00 + 0x457) != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x457));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x457) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x457) + 3));
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      this_00[0x65] = (MReportTy)0x2;
      thunk_FUN_005b66e0(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

