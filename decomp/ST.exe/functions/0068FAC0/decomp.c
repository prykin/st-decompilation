#include "../../pseudocode_runtime.h"


int __thiscall FUN_0068fac0(void *this,undefined2 param_1,undefined4 param_2)

{
  uint local_38 [2];
  undefined2 local_2f;
  undefined4 local_2d;
  short local_29;

  memset(local_38, 0, 0x34); /* compiler bulk-zero initialization */
  local_38[1] = *(undefined4 *)((int)this + 300);
  local_2f = param_1;
  local_38[0] = 0x76;
  local_2d = param_2;
  thunk_FUN_006902b0(this,-0x8000,local_38);
  return (int)local_29;
}

