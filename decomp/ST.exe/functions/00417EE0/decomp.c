#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044EE30 @ 0044F2A8 -> killed on
   every CFG path | 0044EE30 @ 0044F5F5 -> killed on every CFG path | 0057BF60 @ 0057C1EF -> read as
   EAX on every CFG path | 00583270 @ 005835E1 -> read as EAX on every CFG path | 0058D7C0 @
   0058DB48 -> read as EAX on every CFG path | 0058D7C0 @ 0058DC3D -> read as EAX on every CFG path
    */

int __thiscall FUN_00417ee0(void *this,short param_1)

{
  if ((int)(param_1 / STField<short>(this,0x86)) * (int)STField<short>(this,0x86) -
      (int)param_1 != 0) {
    return -1;
  }
  STField<short>(this,0x6c) = param_1;
  return 0;
}

