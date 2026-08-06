#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00761A00 -> 007619B0 @ 00761A07

   [STPrototypeApplier] Propagated return.
   Evidence: 00761A00 returns return of FID_conflict:_remove @ 00761A10 */

int __cdecl FUN_00761a00(char *filename)

{
  int iVar1;

  iVar1 = FID_conflict__remove(filename);
  return iVar1;
}

