#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004E22F0 returns zeroed full register at 004E231E @ 004E2322
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004BEA70 @ 004C1197 -> read as EAX on
   every CFG path | 004BEA70 @ 004C11A4 -> read as EAX on every CFG path | 004E2040 @ 004E2057 ->
   read as EAX on every CFG path */

int __thiscall FUN_004e22f0(void *this,int param_1)

{
  int iVar1;


  iVar1 = thunk_FUN_004e1f70(this,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0) && (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    return 1;
  }
  return 0;
}

