#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0055F410 @ 00560627 -> read as EAX on
   every CFG path | 00562F50 @ 0056416C -> read as EAX on every CFG path | 0057D420 @ 0057D471 ->
   read as EAX on every CFG path | 00583E30 @ 00583F39 -> read as EAX on every CFG path | 0058F030 @
   0058F05F -> read as EAX on every CFG path */

int FUN_006db990(uint param_1,int param_2)

{
  uint uVar1;

  if ((int)param_1 < 0) {
    param_1 = param_1 + ((0x167 - param_1) / 0x168) * 0x168;
  }
  if (0x167 < (int)param_1) {
    param_1 = param_1 % 0x168;
  }
  uVar1 = (int)(((int)(0xb40000 / (longlong)param_2) + param_1 * 0x10000) * param_2) / 0x168 >> 0x10
  ;
  return (param_2 <= (int)uVar1) - 1 & uVar1;
}

