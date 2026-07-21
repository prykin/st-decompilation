#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::RestoreTorpData */

void __thiscall STTorpC::RestoreTorpData(STTorpC *this,int param_1)

{
  code *pcVar1;
  STTorpC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_50;
  STTorpC *local_c;
  AnonShape_006456C0_B6840D7C *local_8;

  local_8 = (AnonShape_006456C0_B6840D7C *)param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 == 0) {
    puVar6 = (undefined4 *)&local_8->field_0x14;
    puVar7 = (undefined4 *)&local_c->field_0245;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)&local_c->field_0x231 = local_8->field_0058;
    *(undefined4 *)&local_c->field_0x235 = local_8->field_005C;
    *(undefined4 *)&local_c->field_0x239 = local_8->field_0060;
    local_c->field_023D = local_8->field_0064;
    puVar4 = (uint *)FUN_006b0060((uint *)0x0,(uint *)(&local_8->field_0x0 + local_8->field_0068));
    pSVar2->field_0241 = puVar4;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x4e5,0,iVar3,"%s",
                             "STTorpC::RestoreTorpData");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_torp.cpp",0x4e6);
  return;
}

