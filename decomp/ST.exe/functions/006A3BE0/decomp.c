#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A3BE0 -> 006A3C80 @ 006A3BF3 | 007602E0 -> 006A3BE0 @ 007602E7; FUN_007602e0
   parameter param_2 | 00760320 -> 006A3BE0 @ 00760327; FUN_00760320 parameter param_2

   [STPrototypeApplier] Propagated return.
   Evidence: 006A3BE0 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3BFC */

int * __cdecl FUN_006a3be0(uint param_1)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a3c80(param_1,DAT_008571cc,1,nullptr,0);
  return piVar1;
}

