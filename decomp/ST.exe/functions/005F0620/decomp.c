#include "../../pseudocode_runtime.h"


void __fastcall FUN_005f0620(AnonShape_005F0620_60AA17CE *param_1)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;

  if (DAT_008117bc != (undefined4 *)0x0) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    switch(param_1->field_02B1) {
    case 0:
    case 1:
    case 2:
      local_e = param_1->field_0032;
      local_14 = 0x5dd8;
      break;
    case 3:
    case 4:
    case 5:
      local_e = param_1->field_0032;
      local_14 = 0x5ddd;
      break;
    default:
      goto switchD_005f064c_default;
    }
    local_c = param_1->field_02A3;
    local_a = param_1->field_02AB;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
  }
switchD_005f064c_default:
  return;
}

