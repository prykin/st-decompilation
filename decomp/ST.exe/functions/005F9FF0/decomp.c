#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005FA030 -> 005F9FF0 @ 005FA03A; STColl3C::sub_005FA030 this */

void __fastcall FUN_005f9ff0(STColl3C *param_1)

{
  ushort *puVar1;

  puVar1 = param_1->field_02E6;
  if ((puVar1 != nullptr) && (*(int *)(puVar1 + 0x2c) != 0)) {
    FreeAndNull(puVar1 + 0x2c);
    puVar1 = param_1->field_02E6;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
  }
  return;
}

