#include "../../pseudocode_runtime.h"


void FUN_006e91a0(void)

{
  code *pcVar1;
  int iVar2;

  iVar2 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%s: error parameter \"plane_num\"\n");
  if (iVar2 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return;
}

