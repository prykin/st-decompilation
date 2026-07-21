#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_00584a30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined2 param_9)

{
  undefined4 local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;

  memset(local_38, 0, 0x32); /* compiler bulk-zero initialization */
  local_24 = param_1;
  local_38[1] = param_6;
  local_18 = param_4;
  local_1c = param_3;
  local_10 = param_8;
  local_20 = param_2;
  local_c = param_9;
  local_38[0] = 0xaa;
  local_38[2] = 0;
  local_38[3] = 1;
  local_14 = param_5;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x130,0,&param_6,local_38,0);
  return param_6;
}

