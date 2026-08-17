#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074ef64(int param_1)

{
  /* ST_CALLSITE[0074EF6B]: CALL dword ptr [0x0085bb84] */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  FUN_0074e823((-(uint)(param_1 != 8) & param_1 - 4U) + 4);
  return;
}

