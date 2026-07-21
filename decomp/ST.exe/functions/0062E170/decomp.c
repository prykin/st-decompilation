#include "../../pseudocode_runtime.h"


void FUN_0062e170(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

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
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x144,0,0,local_30,0);
  return;
}

