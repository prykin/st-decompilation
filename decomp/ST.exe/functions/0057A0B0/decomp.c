#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0057a0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint local_2c [5];
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_2c[1] = param_5;
  local_18 = param_2;
  local_c = param_1;
  local_8 = param_4;
  local_2c[0] = 0x10e;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_3;
  /* ST_CALLSITE[0057A10F]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x13f,nullptr,&param_5,(short)local_2c,0);
  return param_5;
}

