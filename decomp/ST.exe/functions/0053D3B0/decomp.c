#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::Update */

void __thiscall SAMPanelTy::Update(SAMPanelTy *this)

{
  SAMPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  InternalExceptionFrame local_54;
  uint local_10;
  ushort local_c;
  SAMPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_10 = local_8->field_01AB;
    local_c = local_8->field_01AF;
    /* ST_CALLSITE[0053D402]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    STAllPlayersC::GetPanelInfo
              (g_allPlayers_007FA174,0x12,
               (RecoveredRecordView_0043BEB0_8330D129 *)&local_8->field_01AB);
    this_00->field_0028 = 5;
    piVar5 = &this_00->field_01B5;
    iVar4 = 6;
    do {
      if (*piVar5 != 0) {
        FUN_006e6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
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

