#include "../../pseudocode_runtime.h"


int __thiscall FUN_007233d0(void *this,undefined4 param_1)

{
  int iVar1;

  STField<undefined4>(this,0x58) = param_1;
  iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x44));
  return -(uint)(iVar1 != 0);
}

