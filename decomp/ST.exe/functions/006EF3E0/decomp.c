#include "../../pseudocode_runtime.h"


undefined1 * __cdecl FUN_006ef3e0(LPCSTR param_1,undefined4 param_2)

{
  DAT_00856dc0 = 0;
  /* ST_CALLSITE[006EF3F7]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&DAT_00856dc0,param_1,param_2);
  return &DAT_00856dc0;
}

