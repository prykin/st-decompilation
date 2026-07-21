#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::GetMessage */

int __thiscall TLOBldMark::GetMessage(TLOBldMark *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  TLOBldMark *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = ReportDebugMessage(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0xb6,0,iVar2,
                               &DAT_007a4ccc,s_TLOBldMark__GetMessage_error_007ad344);
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0xb7);
    return iVar2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    thunk_FUN_004c61e0((AnonShape_004C61E0_B3B9F8FF *)local_8);
  }
  else {
    if (iVar2 == 2) {
      Create(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (iVar2 == 3) {
      thunk_FUN_004c61a0((AnonShape_004C61A0_0E747D1B *)local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

