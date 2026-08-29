#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00692C10 @ 00692CD0 -> read as EAX on
   every CFG path | 006937E0 @ 006937F0 -> read as EAX on every CFG path | 006950F0 @ 006950F8 ->
   read as EAX on every CFG path */

int __cdecl FUN_006938c0(int param_1)

{
  uint uVar1;
  int *piVar2;

  uVar1 = 0;
  if (DAT_00853d84 != 0) {
    piVar2 = (int *)(DAT_00853d80 + 0x208);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x86;
    } while (uVar1 < DAT_00853d84);
  }
  return -1;
}

