#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B9FA0 @ 004BB176 -> read as EAX on
   every CFG path | 004B9FA0 @ 004BB1E4 -> read as EAX on every CFG path | 004CA3C0 @ 004CA466 ->
   read as EAX on every CFG path | 004CA3C0 @ 004CA5B6 -> read as EAX on every CFG path | 004D55B0 @
   004D56D3 -> read as EAX on every CFG path */

int __thiscall FUN_004acdd0(void *this,char param_1,int param_2)

{
  return *(int *)(*(int *)(STField<int>(this,0x20) + 4 + param_1 * 0x24) + param_2 * 4);
}

