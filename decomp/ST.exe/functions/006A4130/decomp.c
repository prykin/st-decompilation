#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006A4130 returns return of Library::MSVCRT::FUN_006a4160 @ 006A414A */

int * __cdecl FUN_006a4130(undefined4 *param_1,uint param_2)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a4160(param_1,param_2,1,nullptr,0);
  return piVar1;
}

