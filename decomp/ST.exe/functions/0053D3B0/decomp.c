#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::Update */

void __thiscall SAMPanelTy::Update(SAMPanelTy *this)

{
  code *pcVar1;
  SAMPanelTy *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  SAMPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_10 = local_8->field_01AB;
    local_c = local_8->field_01AF;
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0x12,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_01AB);
    this_00->field_0028 = 5;
    piVar4 = &this_00->field_01B5;
    iVar2 = 6;
    do {
      if (*piVar4 != 0) {
        FUN_006e6080(this_00,2,*piVar4,(undefined4 *)&this_00->field_0x18);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\setamine.cpp",0x57,0,iVar2,"%s",
                             "SAMPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\setamine.cpp",0x57);
  return;
}

