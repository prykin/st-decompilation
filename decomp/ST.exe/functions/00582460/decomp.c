#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 10.
   Evidence: 00581AC0 -> 00582460 @ 00581B44; zero-filled partial register load at 00581B06 */

undefined4 __cdecl
FUN_00582460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,uint param_11,undefined2 param_12)

{
  uint local_44 [5];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  ushort local_8;
  memset(local_44, 0, 0x3e); /* compiler bulk-zero initialization */
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  local_44[1] = param_9;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_c = param_11;
  local_44[0] = 0xfa;
  local_44[2] = 0;
  local_44[3] = 1;
  local_10 = 0;
  local_8 = param_12;
  /* ST_CALLSITE[005824E7]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x137,nullptr,&param_9,(short)local_44,0);
  return param_9;
}

