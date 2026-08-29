#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::InitData */

int __thiscall AiBossClassTy::InitData(AiBossClassTy *this,undefined4 *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  InternalExceptionFrame local_4c;
  AiBossClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (local_8 == nullptr) {
      puVar6 = nullptr;
    }
    else {
      puVar6 = (byte *)&local_8->field_0x5d3;
    }
    puVar5 = (byte *)(param_1);
    memmove(puVar6, puVar5, 0x85); /* compiler REP MOVS byte copy */
    local_8->field_05D8 = 1;
    /* ST_CALLSITE[00647E26]: CALL 0x004054b1; direct=004054B1 AiEventClassTy::InitData */
    AiEventClassTy::InitData
              ((AiEventClassTy *)&local_8->vtable_at_1c,
               (int *)(local_8->field_0619 + 0x84 + (int)param_1));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  /* ST_CALLSITE[00647E49]: CALL 0x00401528; direct=00401528 AiBossClassTy::sub_00647ED0 */
  sub_00647ED0(local_8);
  iVar3 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0x29,0,iVar2,"%s",
                             "AiBossClassTy::InitData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_boss.cpp",0x2a);
  return iVar2;
}

