
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::NoneMReport */

void __thiscall MReportTy::NoneMReport(MReportTy *this)

{
  char cVar1;
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
  cVar1 = local_c->field_0x65;
  if (cVar1 == '\x01') {
    if (((local_c->field_0x67 != '\0') && (local_c->field_0x69 == '\0')) &&
       (local_c->field_0x68 != '\0')) {
      bVar3 = false;
      FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            if (DAT_0080c963 <= *(int *)&this_00[5].field_0x48) {
              uVar6 = *(uint *)&this_00[5].field_0x28;
              iVar7 = 0;
              iVar4 = DAT_0080c963;
              goto LAB_005bfb27;
            }
            uVar6 = *(uint *)&this_00[5].field_0x28;
            if ((int)uVar6 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = (int)uVar6 / 0x28;
            }
            iVar4 = *(int *)&this_00[5].field_0x48 + iVar4;
            *(int *)&this_00[5].field_0x48 = iVar4;
            if (DAT_0080c963 < iVar4) {
              *(int *)&this_00[5].field_0x48 = DAT_0080c963;
            }
            PaintMainScore(this_00,*(int *)&this_00[5].field_0x48,uVar6,0);
            bVar3 = true;
          }
          else if (*(int *)(&this_00[5].field_0x28 + iVar5 * 4) < (int)(&DAT_0080c943)[iVar5]) {
            if (*(int *)&this_00[5].field_0x28 < 0x29) {
              iVar4 = 5;
            }
            else {
              iVar4 = *(int *)&this_00[5].field_0x28 / 0x28;
            }
            iVar4 = *(int *)(&this_00[5].field_0x28 + iVar5 * 4) + iVar4;
            *(int *)(&this_00[5].field_0x28 + iVar5 * 4) = iVar4;
            if ((int)(&DAT_0080c943)[iVar5] < iVar4) {
              *(undefined4 *)(&this_00[5].field_0x28 + iVar5 * 4) = (&DAT_0080c943)[iVar5];
            }
            PaintMainScore(this_00,*(int *)(&this_00[5].field_0x28 + iVar5 * 4),
                           *(uint *)&this_00[5].field_0x28,iVar5);
            bVar3 = true;
          }
          else {
            uVar6 = *(uint *)&this_00[5].field_0x28;
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
        thunk_FUN_00540620(0x1a,0x46,0x1a,0x46,*(uint *)(*(int *)&this_00->field_0x73 + 4),
                           *(byte **)(*(int *)&this_00->field_0x73 + 8),'\x01',
                           *(BITMAPINFO **)&this_00->field_0x5d);
        iVar4 = *(int *)&this_00->field_0x73;
        Library::DKW::DDX::FUN_006b48e0
                  (DAT_0080759c,0x1a,0x46,iVar4,0,0,0,*(uint *)(iVar4 + 4),*(int *)(iVar4 + 8),
                   (int)&this_00[1].field_0x24,0x4c,0x10000ff);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      this_00->field_0x68 = 0;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(HoloTy **)&local_c[8].field_0x5b != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&local_c[8].field_0x5b);
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00[8].field_0x5f != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&this_00[8].field_0x5f);
      if (iVar4 != 0) {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      if (*(HoloTy **)&this_00[8].field_0x5b != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[8].field_0x5b);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[8].field_0x5b);
        *(undefined4 *)&this_00[8].field_0x5b = 0;
      }
      if (*(HoloTy **)&this_00[8].field_0x5f != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[8].field_0x5f);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[8].field_0x5f);
        *(undefined4 *)&this_00[8].field_0x5f = 0;
      }
      this_00->field_0x65 = 1;
      thunk_FUN_005c0230(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(HoloTy **)&local_c[8].field_0x5b != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&local_c[8].field_0x5b);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)&this_00[8].field_0x5b + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0(DAT_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_00[8].field_0x5f != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)&this_00[8].field_0x5f);
      if (iVar4 == 0) {
        uVar6 = *(uint *)(*(int *)&this_00[8].field_0x5f + 3);
        if (-1 < (int)uVar6) {
          FUN_006b3af0(DAT_008075a8,uVar6);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (local_8 != 0) {
      this_00->field_0x65 = 2;
      thunk_FUN_005b66e0(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

