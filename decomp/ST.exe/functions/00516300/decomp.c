#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::MObjProc */

void __thiscall HelpPanelTy::MObjProc(HelpPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  AnonReceiver_004EEFB0 *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  AnonReceiver_004EEFB0 *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = (AnonReceiver_004EEFB0 *)this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    cVar1 = local_8->field_0x1a1;
    if (((cVar1 == '\0') || (cVar1 == '\x06')) || (cVar1 == '\n')) {
      local_8->field_0x1a2 = cVar1;
      *(undefined4 *)&local_8->field_0x1ab = *(undefined4 *)&local_8->field_0x1a3;
    }
    else {
      local_8->field_0x1a2 = 0;
      *(undefined4 *)&local_8->field_0x1ab = 0;
    }
    local_8->field_0x1a1 = 7;
    *(undefined4 *)&local_8->field_0x1a7 = 0;
    *(undefined4 *)&local_8->field_0x1a3 = 0;
    *(undefined2 *)&local_8->field_0x1af = 0;
    *(undefined2 *)&local_8->field_0x1b1 = 0;
    if (*(int *)&local_8->field_0x178 != 0) {
      *(undefined4 *)&local_8->field_0x28 = 0x4202;
      *(undefined2 *)&local_8->field_0x2c = 0;
      *(undefined2 *)&local_8->field_0x2e = 2;
      *(int *)&local_8->field_0x30 = *(int *)&local_8->field_0x178;
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_8->field_0x18);
      }
    }
    if (*(uint *)&this_00->field_0x19c != 0) {
      StartSystemTy::sub_006E56B0
                (*(StartSystemTy **)&this_00->field_0xc,*(uint *)&this_00->field_0x19c);
    }
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004EEFB0::sub_00512BE0
              (this_00,*(int *)&this_00->field_0x1d3);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x46e,0,errorCode,
                             "%s","HelpPanelTy::MObjProc");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x46e);
  return;
}

