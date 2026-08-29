#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0061d0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint local_48 [5];
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  ushort local_c;
  uint local_a;
  memset(local_48, 0, 0x42); /* compiler bulk-zero initialization */
  local_30 = param_2;
  local_34 = param_1;
  local_24 = param_5;
  local_48[1] = param_7;
  local_28 = param_4;
  local_a = param_11;
  local_2c = param_3;
  local_1c = param_10;
  local_18 = param_12;
  local_20 = param_6;
  local_c = (undefined2)param_9;
  local_48[0] = 0xf0;
  local_48[2] = 0;
  local_48[3] = 1;
  local_10 = param_8;
  /* ST_CALLSITE[0061D14D]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x136,nullptr,&param_9,(short)local_48,0);
  return param_9;
}

