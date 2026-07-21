#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassTxtProc

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall
MTaskTy::OutGlassTxtProc
          (MTaskTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,AnonShape_00413AF0_B6B4EE9A *param_8)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (param_8 != (AnonShape_00413AF0_B6B4EE9A *)0x0) {
    uVar1 = param_8->field_000C;
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        local_8 = (int *)0x0;
        goto LAB_005df673;
      }
      do {
        local_8 = (int *)(param_8->field_0008 * uVar5 + param_8->field_001C);
LAB_005df673:
      } while ((*local_8 != param_2) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
    }
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar3 == 0) {
      if (local_8[0xb] != 0) {
        iVar3 = local_8[local_8[4] + 1];
        Library::DKW::DDX::FUN_006b48e0
                  ((int)param_1,param_4,param_5,iVar3,0,0,0,*(uint *)(iVar3 + 4),*(int *)(iVar3 + 8)
                   ,local_8[0xb],0,0x10000ff);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      FUN_006b48a0(param_1,param_4,param_5,(BITMAPINFO *)local_8[local_8[4] + 1],(uint *)0x0,
                   0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x3a,0,iVar3,&DAT_007a4ccc,
                               s_MTaskTy__OutGlassTxtProc_007cd9dc);
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_task_obj_cpp_007cd994,0x3a);
  }
  return;
}

