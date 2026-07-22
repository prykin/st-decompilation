#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004dccf0(AnonShape_004DCCF0_FF75E3FE *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar4;
  undefined4 local_48 [7];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  int local_8;

  puVar4 = local_48;
  memset(puVar4, 0, 0x3c); /* compiler bulk-zero initialization */
  puVar4 = (undefined4 *)((byte *)puVar4 + 0x3c);
  uVar2 = param_1->field_0018;
  uVar1 = param_1->field_0032;
  *(undefined2 *)puVar4 = 0;
  local_2c = param_1->field_05B4;
  local_48[3] = 1;
  local_48[2] = 1;
  local_48[1] = param_1->field_0024;
  local_48[6] = param_1->field_05B0;
  local_24 = (int)param_1->field_0041;
  local_20 = (int)param_1->field_0043;
  local_28 = param_1->field_05B8;
  local_1c = param_1->field_0045 + 0x4b;
  local_8 = 0;
  local_48[4] = 0;
  local_48[0] = 0x186;
  local_48[5] = 7;
  local_14 = 100;
  local_18 = 0xf;
  local_10 = uVar2;
  local_c = uVar1;
  STPlaySystemC::CreateGameObject(g_playSystem_00802A38,0x186,0,&local_8,local_48,0);
  if (local_8 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    param_1->field_04EC = *(undefined4 *)(local_8 + 0x18);
  }
  return 0;
}

