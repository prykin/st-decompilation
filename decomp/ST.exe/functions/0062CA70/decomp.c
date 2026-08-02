#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0062CA70 returns literal 1 at 0062CA95 @ 0062CA9C */

uint __cdecl FUN_0062ca70(undefined4 *param_1,undefined4 *param_2)

{
  byte *puVar1;

  puVar1 = (byte *)(Library::DKW::LIB::MemAlloc(0x6d));
  *param_1 = puVar1;
  if (puVar1 != nullptr) {
    memmove(puVar1, param_2, 0x6d); /* compiler REP MOVS byte copy */
    return 1;
  }
  return 0;
}

