#include "../../pseudocode_runtime.h"


void FUN_0062e170(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  memset(local_30, 0, 0x2c); /* compiler bulk-zero initialization */
  local_30[3] = 1;
  local_30[2] = 1;
  local_30[0] = 0x140;
  local_30[1] = param_1;
  local_1c = param_2 * 0xc9 + 100;
  local_18 = param_3 * 0xc9 + 100;
  local_10 = param_7;
  local_14 = param_4 * 200 + 100;
  local_c = param_5;
  local_8 = param_6;
  /* ST_CALLSITE[0062E1F7]: CALL dword ptr [EDX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x144,nullptr,nullptr,(short)local_30,0);
  return;
}

