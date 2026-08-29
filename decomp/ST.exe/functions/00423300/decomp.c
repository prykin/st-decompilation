#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (35), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00652810 @ 00655932 -> read as EAX on
   every CFG path | 00652810 @ 00657109 -> read as EAX on every CFG path | 00652810 @ 006571DA ->
   read as EAX on every CFG path | 00652810 @ 006572AB -> read as EAX on every CFG path | 00652810 @
   006574F4 -> read as EAX on every CFG path | 00652810 @ 00657626 -> read as EAX on every CFG path
   | 00652810 @ 006576F3 -> read as EAX on every CFG path | 00652810 @ 0065785A -> read as EAX on
   every CFG path | 00652810 @ 006579AA -> read as EAX on every CFG path | 00652810 @ 00657AED ->
   read as EAX on every CFG path | 00652810 @ 00657C77 -> read as EAX on every CFG path | 00652810 @
   00657D78 -> read as EAX on every CFG path | 00652810 @ 00657E85 -> read as EAX on every CFG path
   | 00652810 @ 00657FC8 -> read as EAX on every CFG path | 00652810 @ 00658117 -> read as EAX on
   every CFG path | 00652810 @ 00658223 -> read as EAX on every CFG path | 00652810 @ 0065835F ->
   read as EAX on every CFG path | 00652810 @ 006584C2 -> read as EAX on every CFG path | 00652810 @
   006585EF -> read as EAX on every CFG path | 00652810 @ 0065871C -> read as EAX on every CFG path
   | 00652810 @ 0065888B -> read as EAX on every CFG path | 00652810 @ 00658994 -> read as EAX on
   every CFG path | 00652810 @ 00658AAA -> read as EAX on every CFG path | 00652810 @ 00658C1C ->
   read as EAX on every CFG path */

int __fastcall FUN_00423300(RecoveredRecord_00423300_67884733 *param_1)

{
  return param_1->field_001C;
}

