#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0062CA20 returns return of Library::DKW::LIB::FUN_006aac70 @ 0062CA5B */

int __cdecl FUN_0062ca20(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar3;
  byte *puVar4;

  puVar1 = nullptr;
  uVar3 = 0x6d;
  if (param_1 != nullptr) {
    puVar1 = Library::DKW::LIB::MemAlloc(0x6d);
    if (puVar1 == nullptr) {
      uVar3 = 0;
    }
    puVar4 = (byte *)(puVar1);
    memmove(puVar4, param_1, uVar3); /* compiler REP MOVS byte copy */
    *param_2 = uVar3;
  }
  return (int)puVar1;
}

