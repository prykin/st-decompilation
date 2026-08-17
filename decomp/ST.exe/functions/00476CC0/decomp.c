#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00476CC0 returns return of STBoatC::sub_00460360 @ 00476CCD */

int __fastcall FUN_00476cc0(int *param_1)

{
  int iVar1;

  /* ST_CALLSITE[00476CC7]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  iVar1 = STBoatC::sub_00460360((STBoatC *)param_1);
  return iVar1;
}

