#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::AppendPoint */

int __thiscall AiFltClassTy::AppendPoint(AiFltClassTy *this,short *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  code *pcVar5;
  AiFltClassTy *this_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  InternalExceptionFrame local_64;
  short local_20 [10];
  AiFltClassTy *local_c;
  int local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_c = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar9 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0x303,0,iVar6,&DAT_007a4ccc,
                               s_AiFltClassTy__AppendPoint_007d2c20);
    if (iVar9 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0x304);
      return iVar6;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (0 < param_2) {
    local_8 = 0;
    do {
      local_20[0] = 0;
      local_20[1] = 0;
      local_20[2] = 0;
      local_20[3] = 0;
      local_20[4] = 0;
      local_20[5] = 0;
      local_20[6] = 0;
      local_20[7] = 0;
      local_20[8] = 0;
      local_20[9] = 0;
      sVar1 = param_1[1];
      sVar2 = param_1[4];
      if (sVar1 < 0) {
        iVar6 = this_00->field_001C;
      }
      else {
        iVar6 = this_00->field_001C;
      }
      uVar7 = iVar6 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar7;
      sVar3 = param_1[3];
      sVar4 = *param_1;
      if (sVar4 < 0) {
        iVar6 = this_00->field_001C;
      }
      else {
        iVar6 = this_00->field_001C;
      }
      uVar8 = iVar6 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar8;
      iVar6 = thunk_FUN_00675950((uVar8 >> 0x10) % (uint)(int)sVar3 + (int)sVar4,
                                 (uVar7 >> 0x10) % (uint)(int)sVar2 + (int)sVar1,2,local_20,
                                 local_20 + 1,local_20 + 2,0);
      if ((iVar6 != 0) && (iVar6 = thunk_FUN_0065f5c0(this_00,local_20), iVar6 != 0)) {
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

