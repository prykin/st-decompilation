#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 006E4D40 returns literal 65535 at 006E4D59 @ 006E4D5F
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (14), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00495750 @ 00495784 -> read as EAX on
   every CFG path | 00495750 @ 004957AC -> killed on every CFG path | 00495980 @ 00495BEC -> killed
   on every CFG path | 00495980 @ 00495CD7 -> read as EAX on every CFG path | 0052BF00 @ 0052C5D7 ->
   read as EAX on every CFG path | 00577440 @ 00577450 -> read as EAX on every CFG path | 006E3DD0 @
   006E3E68 -> read as EAX on every CFG path | 006E3DD0 @ 006E3F22 -> read as EAX on every CFG path
   | 006E5970 @ 006E5A20 -> read as EAX on every CFG path | 006E5970 @ 006E5A45 -> read as EAX;
   remaining paths kill EAX | 00723420 @ 00723586 -> read as EAX on every CFG path | 00723420 @
   007235C1 -> read as EAX on every CFG path | 007244B0 @ 007246A3 -> read as EAX on every CFG path
   | 007244B0 @ 00724719 -> read as EAX on every CFG path | 0072B780 @ 0072B7EB -> read as EAX on
   every CFG path | 0072B780 @ 0072B838 -> read as EAX on every CFG path */

int __thiscall FUN_006e4d40(void *this,RecoveredRecord_006E4D40_7C2E54EF *param_1)

{
  int *piVar1;

  /* ST_CALLSITE[006E4D4A]: CALL 0x006e45a0; direct=006E45A0 FUN_006e45a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__thiscall;pointer:/int;pointer:/void;/int */
  piVar1 = FUN_006e45a0(this,param_1->field_0014);
  if (piVar1 != nullptr) {
    return *piVar1;
  }
  return 0xffff;
}

