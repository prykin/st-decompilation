#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::ShiftControls */

undefined4 __thiscall CPanelTy::ShiftControls(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  if (param_1 == this->field_0130) {
    return 0;
  }
  this->field_0130 = param_1;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    /* ST_CALLSITE[004FA45A]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
    ShiftControls(local_8,1,param_1);
    /* ST_CALLSITE[004FA464]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
    ShiftControls(this_00,0,param_1);
    puVar5 = this_00->field_09A4;
    iVar4 = 7;
    do {
      if (*puVar5 != 0) {
        FUN_006e6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar5 = this_00->field_09C0;
    iVar4 = 2;
    do {
      if (*puVar5 != 0) {
        FUN_006e6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x42b,0,iVar2,"%s",
                             "CPanelTy::ShiftControls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x42b);
  return 1;
}

