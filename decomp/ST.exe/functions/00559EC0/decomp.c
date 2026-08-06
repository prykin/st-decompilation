#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneTsh

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041D3E0 -> 00559EC0 @ 0041D413; MOVSX at 0041D400 establishes signed source width 2 |
   00557C90 -> 00559EC0 @ 00557F0A; MOVSX at 00557EF3 establishes signed source width 1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
VisibleClassTy::SetZoneTsh
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          undefined4 param_6,uint param_7)

{
  byte bVar1;
  bool bVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_0094[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x31b,0,iVar4,
                                   "%s","VisibleClassTy::SetZoneTsh");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = Library::DKW::LIB::MemAllocClear(local_14->field_0024 * local_14->field_0020);
      this->field_0094[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      sub_0055BB00(this,4,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 0x10) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar5 = thunk_FUN_005532f0(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar5;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar5 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = this->field_0020 * iVar4;
                bVar1 = this->field_0094[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_0094[param_4][iVar9 + iVar8] = bVar1 + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

