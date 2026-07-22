#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update */

void __thiscall BldLabPanelTy::Update(BldLabPanelTy *this,void *param_1)

{
  DArrayTy **ppDVar1;
  code *pcVar2;
  BldLabPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_50;
  dword local_c;
  BldLabPanelTy *local_8;

  if (this->field_027A != (DArrayTy *)0x0) {
    local_c = this->field_027A->count;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      ppDVar1 = &local_8->field_027A;
      STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,0xc,(AnonShape_0043BEB0_1C00EC12 *)ppDVar1);
      thunk_FUN_0053f510(this_00,(*ppDVar1)->count,local_c);
      sub_004EFE20(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\bldlab.cpp",0x30,0,errorCode,
                               "%s","BldLabPanelTy::Update");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\bldlab.cpp",0x30);
  }
  return;
}

