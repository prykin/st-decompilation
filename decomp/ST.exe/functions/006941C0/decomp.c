#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00693B20 @ 00693B41 -> read as EAX on
   every CFG path | 00693C10 @ 00693C2C -> read as EAX on every CFG path */

int __fastcall FUN_006941c0(void *param_1)

{
  int iVar1;
  uint uVar2;

  uVar2 = 0;
  do {

    iVar1 = thunk_FUN_00694200(param_1,uVar2);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return -1;
}

