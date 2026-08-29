#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (99), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0041F3B0 @ 0041F451 -> read as EAX on
   every CFG path | 0041F3B0 @ 0041F4FE -> read as EAX on every CFG path | 0044EE30 @ 00450EA8 ->
   read as EAX on every CFG path | 0044EE30 @ 0045106F -> read as EAX on every CFG path | 0044EE30 @
   004510D9 -> read as EAX on every CFG path | 00480600 @ 00480739 -> read as EAX on every CFG path
   | 00480600 @ 00480843 -> read as EAX on every CFG path | 00480600 @ 00480F61 -> read as EAX on
   every CFG path | 004B7AA0 @ 004B7AAB -> read as EAX on every CFG path | 004B7F90 @ 004B800D ->
   read as EAX on every CFG path | 004B7F90 @ 004B8024 -> read as EAX on every CFG path | 004B8C80 @
   004B8CC6 -> read as EAX on every CFG path | 004B8C80 @ 004B8D6C -> read as EAX on every CFG path
   | 004B8C80 @ 004B9028 -> read as EAX on every CFG path | 004B8C80 @ 004B9153 -> read as EAX on
   every CFG path | 004B8C80 @ 004B9271 -> read as EAX on every CFG path | 004B8C80 @ 004B94C1 ->
   read as EAX on every CFG path | 004B8C80 @ 004B94D8 -> read as EAX on every CFG path | 004B8C80 @
   004B9529 -> read as EAX on every CFG path | 004B8C80 @ 004B960C -> read as EAX on every CFG path
   | 004B9FA0 @ 004BB156 -> read as EAX on every CFG path | 004B9FA0 @ 004BB169 -> read as EAX on
   every CFG path | 004B9FA0 @ 004BB1C4 -> read as EAX on every CFG path | 004B9FA0 @ 004BB1D7 ->
   read as EAX on every CFG path */

int __thiscall FUN_004ac910(void *this,char param_1)

{
  if (((STField<int>(this,0x18) != -1) && (-1 < param_1)) &&
     ((int)param_1 <= STField<int>(this,0x14) + -1)) {
    return *(int *)(STField<int>(this,0x20) + 0x18 + param_1 * 0x24);
  }
  return -1;
}

