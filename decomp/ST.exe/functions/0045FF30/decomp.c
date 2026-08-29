#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0049A620 @ 0049A7EE -> read as EAX on
   every CFG path | 0049B4C0 @ 0049B67D -> read as EAX on every CFG path */

int __fastcall FUN_0045ff30(RecoveredRecord_0045FF30_A86BE482 *param_1)

{
  return param_1->field_0459;
}

