#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074d204(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    /* ST_CALLSITE[0074D20B]: CALL dword ptr [0x0085bbc8] */
    CloseHandle((HANDLE)*param_1);
  }
  return;
}

