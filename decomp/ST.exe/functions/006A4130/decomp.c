#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006A4130 returns return of Library::MSVCRT::FUN_006a4160 @ 006A414A

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006A4130 -> 006A4160 @ 006A4141 | 006BFB50 -> 006A4130 @ 006BFB64; FUN_006bfb50
   parameter param_1 */

int * __cdecl FUN_006a4130(int *param_1,uint param_2)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a4160(param_1,param_2,1,nullptr,0);
  return piVar1;
}

