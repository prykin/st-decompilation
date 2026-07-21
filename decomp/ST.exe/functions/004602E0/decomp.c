#include "../../pseudocode_runtime.h"


void __thiscall FUN_004602e0(void *this,int param_1)

{
  uint uVar1;

  if ((param_1 == 0) || (param_1 == 1)) {
    memset((void *)((int)this + 0x2cc), 0, 0x5c); /* compiler bulk-zero initialization */
    *(undefined4 *)((int)this + 0x2c4) = 0;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    *(short *)((int)this + 0xf8) = (short)((ulonglong)(uVar1 >> 0x10) % 0x1f) + 0x1e;
  }
  STBoatC::sub_0045FF50(this,param_1);
  return;
}

