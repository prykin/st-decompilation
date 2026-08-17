#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 004803B0 returns return of STBoatC::sub_00460360 @ 004803BD */

int __fastcall FUN_004803b0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[004803B7]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  iVar1 = STBoatC::sub_00460360((STBoatC *)param_1);
  return iVar1;
}

