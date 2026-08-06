#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00414980 -> 006A3C10 @ 004149A9 | 00414980 -> 006A3C10 @ 004149FB

   [STPrototypeApplier] Propagated return.
   Evidence: 006A3C10 returns return of Library::MSVCRT::FUN_006a3c80 @ 006A3C32 */

int * __cdecl FUN_006a3c10(uint param_1,uint param_2,char *text,int param_4)

{
  int *piVar1;

  piVar1 = Library::MSVCRT::thunk_FUN_006a3c80(param_1,DAT_008571cc,param_2,text,param_4);
  return piVar1;
}

