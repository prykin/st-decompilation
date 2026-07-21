#include "../../pseudocode_runtime.h"


void __fastcall FUN_0058efe0(void *param_1)

{
  undefined4 local_24 [8];

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_24[3] = 0;
  local_24[5] = *(undefined4 *)((int)param_1 + 8);
  local_24[4] = 10;
  sub_006E60A0(param_1,local_24);
  return;
}

