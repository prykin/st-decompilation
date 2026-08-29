#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (6), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497370 @ 0049752C -> read as EAX on
   every CFG path | 00497370 @ 0049756C -> read as EAX on every CFG path | 00497370 @ 00497633 ->
   read as EAX on every CFG path | 00497370 @ 00497651 -> read as EAX on every CFG path | 00497370 @
   0049765C -> read as EAX on every CFG path | 00497370 @ 00497681 -> read as EAX on every CFG path
    */

int __fastcall FUN_0060ca20(RecoveredRecord_0060CA20_1F95243D *param_1)

{
  return param_1->field_0209;
}

