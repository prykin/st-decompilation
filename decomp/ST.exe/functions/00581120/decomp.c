#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 7.
   Evidence: 004C5F30 -> 00581120 @ 004C6001; zero-filled partial register load at 004C5FEE */

undefined4 __cdecl
FUN_00581120(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,ushort param_8)

{
  undefined4 local_34 [5];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;

  memset(local_34, 0, 0x2e); /* compiler bulk-zero initialization */
  local_20 = param_1;
  local_34[1] = param_6;
  local_18 = param_3;
  local_10 = param_5;
  local_c = param_7;
  local_1c = param_2;
  local_8 = param_8;
  local_34[0] = 0x104;
  local_34[2] = 0;
  local_34[3] = 1;
  local_14 = param_4;
  /* ST_CALLSITE[00581195]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_08(0x138,0,(short)&param_6,(short)local_34,0);
  return param_6;
}

