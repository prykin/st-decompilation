#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\combo.cpp
   ComboTy::OutBmpProc

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 005939E0 -> 006B4640 @ 00593A9E | 005939E0 -> 006C5000 @ 00593A50 | 005939E0 ->
   006C5000 @ 00593A79 */

void __thiscall
ComboTy::OutBmpProc(ComboTy *this,DDXContext *param_1,undefined4 param_2,undefined4 param_3,
                   int param_4,int param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  int *piVar1;
  AnonShape_005939E0_9F78A8B0 *pAVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  AnonShape_005939E0_9F78A8B0 *local_8;

  local_8 = (AnonShape_005939E0_9F78A8B0 *)param_8;
  if (param_8 != 0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;

    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    pAVar3 = local_8;
    if (errorCode == 0) {
      if (local_8->field_0060 != 0) {
        piVar1 = (int *)local_8->field_0078;

        Library::DKW::DDX::FUN_006c5000
                  (param_1,param_4,param_5 + 3,piVar1,0,0,0,piVar1[1],piVar1[2],local_8->field_0060,
                   (byte)local_8->field_0058);
      }
      if (*(int *)&pAVar3->field_0x5c != 0) {
        piVar1 = *(int **)&pAVar3->field_0x74;

        Library::DKW::DDX::FUN_006c5000
                  (param_1,param_4,param_5,piVar1,0,0,0,piVar1[1],piVar1[2],
                   *(int *)&pAVar3->field_0x5c,(byte)*(undefined4 *)&pAVar3->field_0x50);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }

      FUN_006b4640(param_1,param_4 + 3,param_5,*(BITMAPINFO **)&pAVar3->field_0x74,nullptr);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;

    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\combo.cpp",0x12,0,errorCode,"%s"
                               ,"ComboTy::OutBmpProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\combo.cpp",0x12);
  }
  return;
}

