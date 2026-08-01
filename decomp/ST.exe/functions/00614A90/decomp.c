#include "../../pseudocode_runtime.h"


int __thiscall FUN_00614a90(void *this,undefined4 *param_1)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  int local_8;

  if (this == (void *)0x0) {
    puVar4 = (byte *)0x0;
  }
  else {
    puVar4 = (byte *)((int)this + 0x1d5);
  }
  puVar1 = (byte *)(param_1);
  memmove(puVar4, puVar1, 0x116); /* compiler REP MOVS byte copy */
  iVar2 = 0;
  puVar4 = (byte *)((int)param_1 + 0x116);
  local_8 = 0x116;
  if (*(int *)((int)this + 0x2dd) != 0) {
    puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(*(int *)((int)this + 0x2d5) * 0x1c));
    *(undefined4 **)((int)this + 0x2dd) = puVar1;
    for (uVar3 = (uint)(*(int *)((int)this + 0x2d5) * 0x1c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = (byte *)(puVar4 + 1);
      puVar1 = (byte *)(puVar1 + 1);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (byte *)((int)puVar4 + 1);
      puVar1 = (byte *)((int)puVar1 + 1);
    }
    local_8 = *(int *)((int)this + 0x2d5) * 0x1c + 0x116;
    puVar4 = (byte *)(local_8 + (int)param_1);
  }
  if (*(int *)((int)this + 0x2e5) != 0) {
    puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(*(int *)((int)this + 0x2e1) << 2));
    *(undefined4 **)((int)this + 0x2e5) = puVar1;
    for (uVar3 = *(uint *)((int)this + 0x2e1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = *puVar4;
      puVar4 = (byte *)(puVar4 + 1);
      puVar1 = (byte *)(puVar1 + 1);
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (byte *)((int)puVar4 + 1);
      puVar1 = (byte *)((int)puVar1 + 1);
    }
    local_8 = local_8 + *(int *)((int)this + 0x2d5) * 0x1c;
  }
  if (*(int *)((int)this + 0x252) != 0) {
    *(undefined4 *)((int)this + 0x252) = 0;
  }
  return local_8;
}

