#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_00586240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined2 param_7)

{
  undefined4 local_30 [5];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_1c = param_1;
  local_30[1] = param_5;
  local_14 = param_3;
  local_c = param_6;
  local_18 = param_2;
  local_10 = param_4;
  local_30[0] = 0xb4;
  local_30[2] = 0;
  local_30[3] = 1;
  local_8 = param_7;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x131,0,&param_5,local_30,0);
  return param_5;
}

