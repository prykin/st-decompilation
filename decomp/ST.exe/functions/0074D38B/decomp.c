#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074d38b(int param_1)

{
  /* ST_CALLSITE[0074D393]: CALL dword ptr [0x0085bce0] */
  WaitForSingleObject(*(HANDLE *)(param_1 + 4),0xffffffff);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0xc);
}

