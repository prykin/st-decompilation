#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00727DA0 @ 00727FF9 -> read as EAX on
   every CFG path | 00728170 @ 00728210 -> read as EAX on every CFG path */

int FUN_006db5f0(int param_1,int param_2)

{
  longlong lVar1;

  lVar1 = (longlong)param_1 * (longlong)param_2 + 0x8000;
  return (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
}

