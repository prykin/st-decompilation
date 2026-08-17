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
  AiFltClassTy *this_00;
  int iVar6;
  uint uVar6;
  uint uVar7;
  int iVar9;
  int iVar8;
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
    iVar8 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0x303,0,iVar6,"%s",
                               "AiFltClassTy::AppendPoint");
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,"E:\\__titans\\ai\\ai_flt.cpp",0x304);
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
        iVar9 = this_00->field_001C;
      }
      else {
        iVar9 = this_00->field_001C;
      }
      uVar6 = iVar9 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar6;
      sVar3 = param_1[3];
      sVar4 = *param_1;
      if (sVar4 < 0) {
        iVar9 = this_00->field_001C;
      }
      else {
        iVar9 = this_00->field_001C;
      }
      uVar7 = iVar9 * 0x41c64e6d + 0x3039;
      this_00->field_001C = uVar7;
      iVar9 = thunk_FUN_00675950((uVar7 >> 0x10) % (uint)(int)sVar3 + (int)sVar4,
                                 (uVar6 >> 0x10) % (uint)(int)sVar2 + (int)sVar1,2,local_20,
                                 local_20 + 1,local_20 + 2,0);
      /* ST_CALLSITE[0065F75F]: CALL 0x00404eb2; direct=00404EB2 AiFltClassTy::sub_0065F5C0 */
      if ((iVar9 != 0) && (iVar9 = sub_0065F5C0(this_00,local_20), iVar9 != 0)) {
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_2);
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

