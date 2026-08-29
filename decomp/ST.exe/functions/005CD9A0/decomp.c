#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChgPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
SettMapMTy::ChgPlList
          (SettMapMTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  char cVar1;
  int errorCode;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  char *pcVar7;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  char local_14c [260];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x1dd,0,errorCode,
                               "%s","SettMapMTy::ChgPlList");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x1dd);
    return;
  }
  local_15c = param_1;
  local_158 = param_2;
  local_150 = param_4;
  local_154 = param_3;
  pcVar6 = &CHAR_00h_00807e1d;
  if (DAT_008067a0 == '\0') {
    pcVar6 = &CHAR_00h_00807ddd;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_14c;
  memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  FUN_006b6500(g_int_00811764,1);
  FUN_00715360(g_int_00811764,1,'$',(char *)&local_15c,0x114,1,0xffffffff);
  FUN_006b6500(g_int_00811764,DAT_0080733c);
  g_currentExceptionFrame = local_48.previous;
  return;
}

