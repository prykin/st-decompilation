#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004769F0 returns return of STBoatC::sub_00460360 @ 004769FD */

int __fastcall FUN_004769f0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[004769F7]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  iVar1 = STBoatC::sub_00460360((STBoatC *)param_1);
  return iVar1;
}

