#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0042B7D0 @ 0042B9DF -> read as EAX on
   every CFG path | 0042F2B0 @ 0042FFD8 -> read as EAX on every CFG path */

int __fastcall FUN_004233a0(RecoveredRecord_004233A0_9E2D1712 *param_1)

{
  return param_1->field_0020;
}

