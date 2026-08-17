#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneMin1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00494AE0 -> 0055A270 @ 00494C1D; MOVSX at 00494C0D establishes signed source width 2 |
   00494DF0 -> 0055A270 @ 00494E5E; MOVSX at 00494E4E establishes signed source width 2 | 00557C90
   -> 0055A270 @ 00557F34; MOVSX at 00557F1D establishes signed source width 1

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A270 -> 0055BB00 @ 0055A336 */

void __thiscall
VisibleClassTy::SetZoneMin1
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

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
    if (this->field_00B4[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x35f,0,iVar4,
                                   "%s","VisibleClassTy::SetZoneMin1");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = Library::DKW::LIB::MemAllocClear(local_14->field_0024 * local_14->field_0020);
      this->field_00B4[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[0055A336]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      sub_0055BB00(this,5,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 0x20) != 0) {
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
                bVar1 = this->field_00B4[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_00B4[param_4][iVar9 + iVar8] = bVar1 + 1;
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

