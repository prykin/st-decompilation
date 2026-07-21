#include "../../pseudocode_runtime.h"


void __fastcall FUN_00627700(AnonShape_00627700_6F319351 *param_1)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_10 = param_1->field_0024;
    local_e = param_1->field_0032;
    local_c = param_1->field_0262;
    if (param_1->field_02A1 == 0) {
      local_a = 0xffff;
    }
    else {
      local_a = param_1->field_02A5;
    }
    local_14 = 0x5de3;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

