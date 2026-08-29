#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 8.
   Evidence: 004C4550 -> 00584A30 @ 004C4AAE; zero-filled partial register load at 004C4A71 */

undefined4 __cdecl
FUN_00584a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            ushort param_9)

{
  uint local_38 [5];
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  ushort local_c;

  memset(local_38, 0, 0x32); /* compiler bulk-zero initialization */
  local_24 = param_1;
  local_38[1] = param_6;
  local_18 = param_4;
  local_1c = param_3;
  local_10 = param_8;
  local_20 = param_2;
  local_c = param_9;
  local_38[0] = 0xaa;
  local_38[2] = 0;
  local_38[3] = 1;
  local_14 = param_5;
  /* ST_CALLSITE[00584AA5]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x130,nullptr,&param_6,(short)local_38,0);
  return param_6;
}

