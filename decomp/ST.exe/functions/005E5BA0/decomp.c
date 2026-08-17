#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\test_obj.cpp
   MTestTy::DoneMTest */

void __thiscall MTestTy::DoneMTest(MTestTy *this)

{
  MTestTy *this_00;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  MTestTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    /* ST_CALLSITE[005E5BEB]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    /* ST_CALLSITE[005E5C0A]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
    SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    memset(&this_00->field_0x61, 0, 0x20); /* compiler bulk-zero initialization */
    this_00->field_0071 = 0x14;
    this_00->field_0075 = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x61);
    cMf32::RecMemFree(g_cMf32_00806780,(uint *)&this_00->field_005D);
    /* ST_CALLSITE[005E5C53]: CALL 0x00401d43; direct=00401D43 DarkScreen */
    DarkScreen(g_dDXContext_0080759C,10,2);
    if (g_holo_00811778 != nullptr) {
      /* ST_CALLSITE[005E5C65]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
      HoloTy::Done(g_holo_00811778);
      Library::MSVCRT::FUN_0072e2b0(g_holo_00811778);
      g_holo_00811778 = nullptr;
    }
    if (this_00->field_0091 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x81);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\test_obj.cpp",0x4a,0,iVar2,"%s",
                             "MTestTy::DoneMTest");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\test_obj.cpp",0x4a);
  return;
}

