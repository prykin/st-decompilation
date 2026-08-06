#include "../../pseudocode_runtime.h"


int __thiscall FUN_00693c10(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  byte *puVar3;
  byte *puVar4;

  iVar1 = thunk_FUN_00693e60(this,(uint)STField<byte>(param_1,0x22));
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_006941c0(this);
    puVar3 = (byte *)(param_1);
    puVar4 = (byte *)((uint)STField<byte>(param_1,0x22) * 0x51 + 0x11 + (int)this);
    memmove(puVar4, puVar3, 0x51); /* compiler REP MOVS byte copy */
    STField<char>(this,0x10) = STField<char>(this,0x10) + '\x01';
    if (-1 < (int)uVar2) {
      *(char *)((uint)STField<byte>(param_1,0x22) * 0x51 + 0x34 + (int)this) = (char)uVar2;
    }
    return (uint)STField<byte>(param_1,0x22) * 0x51 + 0x11 + (int)this;
  }
  return 0;
}

