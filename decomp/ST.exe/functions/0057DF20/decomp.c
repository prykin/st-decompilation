#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0057df20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint local_2c [5];
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_18 = param_1;
  local_8 = param_5;
  local_c = param_4;
  local_2c[1] = param_6;
  local_10 = param_3;
  local_2c[0] = 0x32;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_2;
  /* ST_CALLSITE[0057DF85]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x107,nullptr,&param_6,(short)local_2c,0);
  return param_6;
}

