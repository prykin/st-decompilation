#include "../../pseudocode_runtime.h"


undefined4 __cdecl
FUN_0057a0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;

  memset(local_2c, 0, 0x28); /* compiler bulk-zero initialization */
  local_2c[1] = param_5;
  local_18 = param_2;
  local_c = param_1;
  local_8 = param_4;
  local_2c[0] = 0x10e;
  local_2c[2] = 0;
  local_2c[3] = 1;
  local_14 = param_3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)PTR_00802a38->vtable->field_0008)(0x13f,0,&param_5,local_2c,0);
  return param_5;
}

