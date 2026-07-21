#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\adv_obj.cpp
   MAdvTy::DoneMAdv */

void __thiscall MAdvTy::DoneMAdv(MAdvTy *this)

{
  code *pcVar1;
  MAdvTy *this_00;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  InternalExceptionFrame local_4c;
  MAdvTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    SetAccelerator(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
    SetAccelerator(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
    puVar4 = (undefined4 *)&this_00->field_0x18;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    this_00->field_0028 = 0x14;
    this_00->field_002C = this_00->field_0008;
    FUN_006e6000(this_00,3,1,(undefined4 *)&this_00->field_0x18);
    cMf32::RecMemFree(g_cMf32_00806780,&this_00->field_005E);
    DarkScreen(DAT_0080759c,10,2);
    if (this_00->field_0048 != 0) {
      AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x38);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Start\\adv_obj.cpp",0x36,0,iVar2,"%s",
                             "MAdvTy::DoneMAdv");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\adv_obj.cpp",0x36);
  return;
}

