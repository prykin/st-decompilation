#include "../../pseudocode_runtime.h"


undefined4 * __thiscall FUN_0063cff0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte *puVar4;
  byte *puVar5;
  undefined4 *local_10;
  uint local_c;
  uint local_8;

  iVar2 = STField<int>(this,0x336);
  local_8 = 0x152;
  if (iVar2 != 0) {
    local_8 = *(int *)(iVar2 + 0xc) * *(int *)(iVar2 + 8) + 0x172;
  }
  puVar1 = Library::DKW::LIB::MemAlloc(local_8);
  STField<undefined4>(this,0x249) = 1;
  STField<undefined4>(this,0x23d) = 2;
  if (this == nullptr) {
    puVar4 = nullptr;
  }
  else {
    puVar4 = (byte *)((int)this + 0x231);
  }
  puVar5 = (byte *)(puVar1);
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = (byte *)(puVar4 + 1);
    puVar5 = (byte *)(puVar5 + 1);
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  if (STField<uint *>(this,0x336) != nullptr) {
    local_10 = (undefined4 *)FUN_006b0020(STField<uint *>(this,0x336),(int *)&local_c);
    STField<uint>(puVar1,0x152) = local_c;
    puVar4 = (byte *)(local_10);
    puVar5 = (byte *)((int)puVar1 + 0x156);
    memmove(puVar5, puVar4, local_c); /* compiler REP MOVS byte copy */
    FreeAndNull(&local_10);
    *param_1 = local_8;
    return puVar1;
  }
  *param_1 = local_8;
  return puVar1;
}

