#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0044F271 -> killed on
   every CFG path | 0044EE30 @ 0044F5EC -> killed on every CFG path | 004C6B50 @ 004C6B63 -> killed
   on every CFG path | 0057BF60 @ 0057C1D8 -> read as EAX on every CFG path | 00583270 @ 005835A6 ->
   read as EAX on every CFG path | 0058D7C0 @ 0058DA57 -> read as EAX on every CFG path | 005EC9F0 @
   005ECB24 -> killed on every CFG path | 005F6AF0 @ 005F6B8B -> killed on every CFG path */

int __thiscall FUN_00417e70(void *this,short param_1)

{
  short sVar1;

  sVar1 = (short)(0x168 / (longlong)(int)param_1);
  if ((int)sVar1 * (int)param_1 != 0x168) {
    return -1;
  }
  STField<short>(this,0x8c) = param_1;
  STField<short>(this,0x86) = sVar1;
  return 0;
}

