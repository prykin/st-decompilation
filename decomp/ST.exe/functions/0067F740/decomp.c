#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00683C70 -> 0067F740 @ 00683EAB | 00683C70 -> 0067F740 @ 00683EDB | 00683C70 ->
   0067F740 @ 00683F0B | 0068CEC0 -> 0067F740 @ 0068D084 | 0068CEC0 -> 0067F740 @ 0068D0B3 |
   0068CEC0 -> 0067F740 @ 0068D0E3
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (8), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00683C70 @ 00683EAB -> read as EAX on
   every CFG path | 00683C70 @ 00683EDB -> read as EAX on every CFG path | 00683C70 @ 00683F0B ->
   read as EAX on every CFG path | 00683C70 @ 00689AB7 -> read as EAX on every CFG path | 00683C70 @
   00689B17 -> read as EAX on every CFG path | 0068CEC0 @ 0068D084 -> read as EAX on every CFG path
   | 0068CEC0 @ 0068D0B3 -> read as EAX on every CFG path | 0068CEC0 @ 0068D0E3 -> read as EAX on
   every CFG path */

int __cdecl FUN_0067f740(char *text,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uVar1 = thunk_FUN_0067f5e0((byte *)text);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < g_array_00848A28->count) &&
     (puVar2 = DArrayAt<undefined4>(g_array_00848A28, uVar1),
     puVar2 != nullptr)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return -4;
}

