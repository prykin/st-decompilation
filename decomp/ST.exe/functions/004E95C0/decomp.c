#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004E95C0 @ 00479D52; STBoatC::Teleport this; stable alias ESI | 00479600 ->
   004E95C0 @ 00479E34; STBoatC::Teleport this; stable alias ESI | 00479600 -> 004E95C0 @ 0047ACBD;
   STBoatC::Teleport this; stable alias ESI | 00479600 -> 004E95C0 @ 0047B0A2; STBoatC::Teleport
   this; stable alias ESI */

undefined4 __thiscall FUN_004e95c0(void *this,STBoatC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (STField<int>(this,0x4d8) == param_1->field_0018) {
    STField<undefined4>(this,0x4d8) = 0xffff;
    if (STField<int>(this,0x4e0) != 0) {
      thunk_FUN_004d0a80(DAT_00800bcc,STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                         STField<int>(this,0x4ec));
      STField<undefined4>(this,0x4e0) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

