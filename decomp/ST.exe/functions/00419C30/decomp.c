#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00423850 -> 00419C30 @ 00423915; unproven partial register write at 0042390C | 00423C70
   -> 00419C30 @ 00423CE1; literal 65535 at 00423CDA */

void __thiscall FUN_00419c30(void *this,ushort param_1)

{
  STField<ushort>(this,0x30) = param_1;
  return;
}

