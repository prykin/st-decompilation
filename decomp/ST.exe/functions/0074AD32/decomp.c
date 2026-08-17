#include "../../pseudocode_runtime.h"


/* [STVTableApplier] Virtual slot 0079DB78+0x44

   [STVTableApplier] Virtual slot 007A15E8+0x44 */

undefined4 __fastcall FUN_0074ad32(int param_1)

{
  DWORD DVar1;

  /* ST_CALLSITE[0074AD39]: CALL dword ptr [0x0085bedc] */
  DVar1 = timeGetTime();
  *(int *)(param_1 + 0x140) = DVar1 - *(int *)(param_1 + 0x140);
  return 0;
}

