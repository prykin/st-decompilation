#include "../../pseudocode_runtime.h"


void __thiscall FUN_0060d810(void *this,undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  if (*(undefined4 **)((int)this + 0x244) != nullptr) {
    memset(*(undefined4 **)((int)this + 0x244), 0, 0x2c); /* compiler bulk-zero initialization */
    iVar2 = 0;
    **(undefined4 **)((int)this + 0x244) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 4) = 0x33;
    pvVar1 = Library::DKW::LIB::MemAlloc(0xcc);
    *(void **)(*(int *)((int)this + 0x244) + 8) = pvVar1;
    puVar3 = (byte *)(&DAT_007cf730);
    puVar4 = (byte *)(*(undefined4 **)(*(int *)((int)this + 0x244) + 8));
    memmove(puVar4, puVar3, 0xcc); /* compiler REP MOVS byte copy */
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0xc) = param_1;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x10) = param_2;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x14) = *(undefined4 *)((int)this + 0x1fd);
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x18) = 0x1e;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x1c) = 0x7d;
    *(uint *)(*(int *)((int)this + 0x244) + 0x28) = g_playSystem_00802A38->field_00E4;
    **(undefined4 **)((int)this + 0x244) = 1;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x24) = 0x14;
    *(undefined4 *)(*(int *)((int)this + 0x244) + 0x20) = 0;
    *(undefined4 *)((int)this + 0x240) = 1;
  }
  return;
}

