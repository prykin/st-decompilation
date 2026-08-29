#include "../../pseudocode_runtime.h"


void __cdecl
FUN_0062b990(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            RecoveredRecord_0062B990_538E5716 *param_5,undefined4 param_6,undefined4 param_7)

{
  uint local_44 [6];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = param_1;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  local_18 = param_5->field_0018;
  local_14 = param_5->field_0024;
  local_c = param_6;
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 2;
  local_8 = param_7;
  /* ST_CALLSITE[0062BA08]: CALL dword ptr [EAX + 0x8] */
  g_playSystem_00802A38->vfunc_8(0x124,nullptr,nullptr,(short)local_44,0);
  return;
}

