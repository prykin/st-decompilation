#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0060C020 returns return of Library::DKW::LIB::FUN_006acf50 @ 0060C147 */

int __thiscall FUN_0060c020(void *this,uint *param_1)

{
  undefined4 *allocation;
  int iVar1;
  uint uVar2;
  byte *puVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  uint *local_1c;
  AnonShape_0060C020_72526BDF *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_8 = 0x83;
  local_18 = this;
  allocation = Library::DKW::LIB::MemAlloc(0x83);
  STField<undefined4>(this,0x1e1) = 2;
  if (this == nullptr) {
    puVar3 = nullptr;
  }
  else {
    puVar3 = (byte *)((int)this + 0x1d5);
  }
  puVar5 = (byte *)(allocation);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = (byte *)(puVar3 + 1);
    puVar5 = (byte *)(puVar5 + 1);
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
  STField<undefined1>(puVar5,2) = STField<undefined1>(puVar3,2);
  if (local_18->field_0234 != nullptr) {
    local_14 = (undefined4 *)FUN_006b0020(local_18->field_0234,(int *)&local_c);
    uVar2 = local_c + 0x87;
    local_8 = uVar2;
    allocation = Library::DKW::LIB::MemRealloc(allocation,uVar2);
    *(uint *)((int)allocation + uVar2 + (-4 - local_c)) = local_c;
    puVar3 = (byte *)(local_14);
    puVar5 = (byte *)((int)allocation + (local_8 - local_c));
    memmove(puVar5, puVar3, local_c); /* compiler REP MOVS byte copy */
    FreeAndNull(&local_14);
    if ((local_18->field_023C != 0) && (local_18->field_0244 != 0)) {
      local_1c = (uint *)thunk_FUN_0060d390(local_18,&local_10);
      if (local_1c != nullptr) {
        uVar2 = local_8 + 4 + local_10;
        local_8 = uVar2;
        allocation = Library::DKW::LIB::MemRealloc(allocation,uVar2);
        puVar6 = (uint *)((int)allocation + uVar2 + (-4 - local_10));
        *puVar6 = local_10;
        puVar4 = local_1c;
        for (uVar2 = local_10 >> 2; puVar6 = puVar6 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
        }
        for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
          *(char *)puVar6 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        FreeAndNull(&local_1c);
      }
    }
  }
  if (param_1 != nullptr) {
    *param_1 = local_8;
  }
  return (int)allocation;
}

