#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::NoneMTest

   [STSwitchEnumApplier] Switch target field_00B3 uses
   /SubmarineTitans/Recovered/Enums/MTestTy_field_00B3State. Cases: CASE_1=1;CASE_4=4;CASE_5=5 */

void __thiscall MTestTy::NoneMTest(MTestTy *this)

{
  MTestTy *pMVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_00B3 == CASE_1) {
      if (g_holo_00811778 != nullptr) {
        iVar5 = HoloTy::NextFas(g_holo_00811778);
        if (iVar5 == 0) {
          pMVar2->field_00B3 = CASE_4;
        }
      }
    }
    else if ((local_8->field_00B3 == CASE_5) && (g_holo_00811778 != nullptr)) {
      iVar5 = HoloTy::NextFas(g_holo_00811778);
      if (iVar5 == 0) {
        pMVar2->field_00B3 = 0;
        if (-1 < (int)*(uint *)&g_holo_00811778->field_0x3) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,*(uint *)&g_holo_00811778->field_0x3);
        }
      }
    }
    _DAT_00811774 = pMVar2->field_00A1;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0x6c,0,iVar3,"%s",
                             "MTestTy::NoneMTest");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\test_obj.cpp",0x6c);
  return;
}

