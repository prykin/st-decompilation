#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_00582460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined2 param_12)

{
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;

  memset(local_44, 0, 0x3e); /* compiler bulk-zero initialization */
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  local_20 = param_5;
  local_44[1] = param_9;
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_8;
  local_c = param_11;
  local_44[0] = 0xfa;
  local_44[2] = 0;
  local_44[3] = 1;
  local_10 = 0;
  local_8 = param_12;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x137,0,&param_9,local_44,0);
  return param_9;
}

