#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00491980(void *param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = thunk_FUN_0045ff10(param_1);
  if (iVar1 != 0x14) {
    /* ST_CALLSITE[00491991]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
    uVar2 = STBoatC::CheckPBoxCmd(param_1,CASE_14);
    if (uVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

