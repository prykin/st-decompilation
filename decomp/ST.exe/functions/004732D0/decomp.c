#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004732D0 returns return of FUN_004620f0 @ 004732DD */

int __fastcall FUN_004732d0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[004732D7]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
  iVar1 = STBoatC::sub_004620F0((STBoatC *)param_1);
  return iVar1;
}

