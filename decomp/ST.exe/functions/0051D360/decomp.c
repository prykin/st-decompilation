#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NatProc */

void __thiscall HelpPanelTy::NatProc(HelpPanelTy *this,int param_1,char param_2)

{
  HelpPanelTy_field_01A1State HVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int errorCode;
  UINT UVar3;
  int iVar4;
  InternalExceptionFrame local_50;
  HelpPanelTy *local_c;
  int local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode == 0) {
    if (param_2 == '\0') {
      HVar1 = local_c->field_01A1;
      if (((HVar1 == 0) || (HVar1 == CASE_6)) || (HVar1 == (CASE_8|CASE_2))) {
        local_c->field_01A2 = HVar1;
        local_c->field_01AB = local_c->field_01A3;
      }
      else {
        local_c->field_01A2 = 0;
        local_c->field_01AB = 0;
      }
      local_c->field_01A1 = CASE_C;
      local_c->field_01A3 = param_1;
      local_c->field_01A7 = 0;
      local_c->field_01AF = 0x23;
      local_c->field_01B1 = 5;
      if (local_c->field_0178 != 0) {
        local_c->field_0028 = 0x4202;
        *(undefined2 *)&local_c->field_0x2c = 0;
        local_c->field_002E = 2;
        *(undefined4 *)&local_c->field_0x30 = local_c->field_0178;
        if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&local_c->field_0x18);
        }
      }
    }
    UVar3 = thunk_FUN_00523410(param_1,'\0',0);
    DrawTitle(this_00,0x55f9,0,UVar3);
    DrawObj(this_00,&local_8,param_1,0,0);
    UVar3 = thunk_FUN_00523410(param_1,'\0',2);
    DrawDescription(this_00,&local_8,UVar3);
    AddLinks(this_00,&local_8,'\f',param_1,0);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x93f,0,errorCode,
                             "%s","HelpPanelTy::NatProc");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x93f);
  return;
}

