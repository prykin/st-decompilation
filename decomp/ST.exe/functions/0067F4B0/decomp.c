#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006822C0 @ 006822D7 -> unknown:
   terminal before explicit accumulator kill | 00683C70 @ 00689A8D -> read as EAX on every CFG path
   | 00683C70 @ 00689AED -> read as EAX on every CFG path | 00683C70 @ 0068A323 -> read as EAX on
   every CFG path */

int __cdecl FUN_0067f4b0(uint param_1)

{
  int *piVar1;

  if ((param_1 < g_array_00848A28->count) &&
     (piVar1 = DArrayAt<int>(g_array_00848A28, param_1),
     piVar1 != nullptr)) {
    return *piVar1;
  }
  return 0;
}

