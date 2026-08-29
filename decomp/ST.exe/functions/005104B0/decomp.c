#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::Update */

void __thiscall FrmPanelTy::Update(FrmPanelTy *this)

{
  FrmPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int *piVar7;
  bool bVar8;
  InternalExceptionFrame local_54;
  int local_10 [2];
  FrmPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;

  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;

    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0x70,0,iVar2,"%s"
                               ,"FrmPanelTy::Update");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x70);
    return;
  }
  piVar5 = &local_8->field_01AB;
  local_10[0] = *piVar5;
  local_10[1] = local_8->field_01AF;
  *piVar5 = 0;
  local_8->field_01AF = 0;
  /* ST_CALLSITE[00510509]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  STAllPlayersC::GetPanelInfo
            (g_allPlayers_007FA174,0x11,(RecoveredRecordView_0043BEB0_8330D129 *)piVar5);
  iVar4 = 2;
  bVar8 = true;
  piVar7 = local_10;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar8 = *piVar5 == *piVar7;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    this_00->field_0028 = 5;
    puVar6 = this_00->field_01B3;
    iVar4 = 8;
    do {
      if (*puVar6 != 0) {
        FUN_006e6080(this_00,2,*puVar6,(undefined4 *)&this_00->field_0x18);
      }
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

