#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0047C050 -> 004B7D00 @ 0047C971
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0047C050 @ 0047C1B2 -> read as EAX on
   every CFG path | 0047C050 @ 0047C403 -> read as EAX on every CFG path | 0047C050 @ 0047C971 ->
   killed on every CFG path | 005F07A0 @ 005F0892 -> read as EAX on every CFG path */

int __thiscall FUN_004b7d00(void *this,STBoatC *param_1)

{
  int iVar1;

  iVar1 = 0;
  if (((STField<int>(this,0x245) == 0) && (STField<int>(this,0x4d0) == 0)) &&
     (STField<int>(this,0x4d4) == 0)) {
    iVar1 = 1;
    STField<int>(this,0x4d4) = param_1->field_0018;
  }
  return iVar1;
}

