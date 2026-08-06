#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00673160 -> 0072E620 @ 0067316B

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00673160 -> 0072E620 @ 0067316B

   [STPrototypeApplier] Propagated return.
   Evidence: 00673160 returns return of Library::MSVCRT::__strcmpi @ 00673174 */

int __cdecl FUN_00673160(char *str1,char *str2)

{
  int iVar1;

  iVar1 = Library::MSVCRT::__strcmpi(str1,str2);
  return iVar1;
}

