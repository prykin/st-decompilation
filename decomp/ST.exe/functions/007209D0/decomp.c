#include "../../pseudocode_runtime.h"


int __thiscall FUN_007209d0(void *this,undefined4 param_1)

{
  int iVar1;

  if (((STField<uint>(this,0x1c) & 0xf0000000) == 0) && (STField<int>(this,0x138) != 0)) {
    STField<undefined4>(this,0x160) = param_1;
    if ((STField<uint>(this,0x1c) == 1) && ((STField<byte>(this,0x20) & 4) == 0)) {
      STField<undefined2>(this,0x164) = STField<undefined2>(this,0x204);
      STField<undefined2>(this,0x166) = STField<undefined2>(this,0x208);
    }
    else {
      STField<undefined2>(this,0x166) = 0xffff;
      STField<undefined2>(this,0x164) = 0xffff;
    }
    iVar1 = FUN_006e5fe0(this,(undefined4 *)((int)this + 0x14c));
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

