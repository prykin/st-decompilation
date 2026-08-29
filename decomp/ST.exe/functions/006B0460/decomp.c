#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (36), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00428E50 @ 00429601 -> read as EAX on
   every CFG path | 00428E50 @ 00429874 -> read as EAX on every CFG path | 00428E50 @ 00429A45 ->
   read as EAX on every CFG path | 00428E50 @ 00429C44 -> read as EAX on every CFG path | 006B91A0 @
   006B91E5 -> read as EAX on every CFG path | 006B92B0 @ 006B9323 -> read as EAX on every CFG path
   | 006BC970 @ 006BCA13 -> read as EAX on every CFG path | 006BCD10 @ 006BCF4C -> read as EAX on
   every CFG path | 006D0680 @ 006D06E7 -> read as EAX on every CFG path | 006D0680 @ 006D076B ->
   read as EAX on every CFG path | 006D0820 @ 006D089A -> read as EAX on every CFG path | 006DDD50 @
   006DE0F7 -> read as EAX on every CFG path | 006DE9C0 @ 006E08B9 -> read as EAX on every CFG path
   | 006DE9C0 @ 006E0AD3 -> read as EAX on every CFG path | 006DE9C0 @ 006E0CE9 -> read as EAX on
   every CFG path | 006DE9C0 @ 006E0EFB -> read as EAX on every CFG path | 006E6AF0 @ 006E6C48 ->
   read as EAX on every CFG path | 006E8EA0 @ 006E8FE6 -> unknown: terminal before explicit
   accumulator kill | 006EB570 @ 006EB608 -> read as EAX on every CFG path | 006EC010 @ 006EC0F5 ->
   read as EAX on every CFG path | 006EC010 @ 006EC1CC -> read as EAX on every CFG path | 006EC010 @
   006EC415 -> read as EAX on every CFG path | 006EC010 @ 006EC582 -> read as EAX on every CFG path
   | 006EC010 @ 006EC6D9 -> read as EAX on every CFG path */

int __fastcall FUN_006b0460(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;

  iVar2 = *param_2;
  iVar1 = iVar2 + param_2[2];
  if (iVar2 <= *param_3) {
    iVar2 = *param_3;
  }
  if (*param_3 + param_3[2] <= iVar1) {
    iVar1 = *param_3 + param_3[2];
  }
  if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
    *param_1 = iVar2;
    param_1[2] = iVar1 - iVar2;
    iVar2 = param_2[1];
    iVar1 = iVar2 + param_2[3];
    if (iVar2 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    if (param_3[1] + param_3[3] <= iVar1) {
      iVar1 = param_3[1] + param_3[3];
    }
    if (iVar1 - iVar2 != 0 && iVar2 <= iVar1) {
      param_1[1] = iVar2;
      param_1[3] = iVar1 - iVar2;
      return 1;
    }
  }
  return 0;
}

