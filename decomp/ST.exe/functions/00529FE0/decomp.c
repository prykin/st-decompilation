#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00538DB0 @ 00538E52 -> read as EAX on
   every CFG path | 00538DB0 @ 00538EB0 -> read as EAX on every CFG path | 0053DAF0 @ 0053DB65 ->
   read as EAX on every CFG path | 0053DAF0 @ 0053DBC4 -> read as EAX on every CFG path */

int __cdecl FUN_00529fe0(RecoveredRecord_00529FE0_85E582CB *param_1)

{
  int iVar1;

  iVar1 = 0;
  switch(param_1->field_0014) {
  case 0:
    iVar1 = 2;
    break;
  case 1:
  case 3:
    return 0;
  case 2:
    return 1;
  }
  return iVar1;
}

