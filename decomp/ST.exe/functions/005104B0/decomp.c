#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::Update */

void __thiscall FrmPanelTy::Update(FrmPanelTy *this)

{
  FrmPanelTy *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  bool bVar7;
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
  piVar4 = &local_8->field_01AB;
  local_10[0] = *piVar4;
  local_10[1] = local_8->field_01AF;
  *piVar4 = 0;
  local_8->field_01AF = 0;
  STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,0x11,(AnonShape_0043BEB0_1C00EC12 *)piVar4);
  iVar2 = 2;
  bVar7 = true;
  piVar6 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    this_00->field_0028 = 5;
    puVar5 = this_00->field_01B3;
    iVar2 = 8;
    do {
      if (*puVar5 != 0) {
        FUN_006e6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

