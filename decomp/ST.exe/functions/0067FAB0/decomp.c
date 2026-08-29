#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00683C70 @ 00689A57 -> read as EAX on
   every CFG path | 00683C70 @ 00689BCB -> read as EAX on every CFG path */

int __cdecl FUN_0067fab0(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  uVar1 = thunk_FUN_0067f950(param_1);
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if ((uVar1 < g_array_00848A30->count) &&
     (puVar2 = DArrayAt<undefined4>(g_array_00848A30, uVar1),
     puVar2 != nullptr)) {
    *puVar2 = param_2;
    return uVar1;
  }
  return -4;
}

