#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_torp.cpp
   STTorpC::RestoreTorpData */

void __thiscall STTorpC::RestoreTorpData(STTorpC *this,int param_1)

{
  ushort uVar2;
  STTorpC *pSVar3;
  int iVar3;
  DArrayTy *pDVar4;
  int iVar4;
  byte *puVar6;
  byte *puVar7;
  InternalExceptionFrame local_50;
  STTorpC *local_c;
  AnonShape_006456C0_B6840D7C *local_8;

  local_8 = (AnonShape_006456C0_B6840D7C *)param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar3 == 0) {
    puVar6 = (byte *)&local_8->field_0x14;
    puVar7 = (byte *)&local_c->field_0245;
    memmove(puVar7, puVar6, 0x44); /* compiler REP MOVS byte copy */
    uVar2 = *(undefined2 *)((int)&local_8->field_0058 + 2);
    local_c->field_0231 = *(undefined2 *)&local_8->field_0058;
    local_c->field_0233 = uVar2;
    *(undefined4 *)&local_c->field_0x235 = local_8->field_005C;
    *(undefined4 *)&local_c->field_0x239 = local_8->field_0060;
    local_c->field_023D = local_8->field_0064;
    pDVar4 = FUN_006b0060(nullptr,(uint *)(&local_8->field_0x0 + local_8->field_0068));
    pSVar3->field_0241 = pDVar4;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\nick\\to_torp.cpp",0x4e5,0,iVar3,"%s",
                             "STTorpC::RestoreTorpData");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_torp.cpp",0x4e6);
  return;
}

