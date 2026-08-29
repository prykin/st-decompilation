#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (29), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006B3930 @ 006B3A1A -> read as EAX on
   every CFG path | 006B3F80 @ 006B3FE6 -> read as EAX on every CFG path | 006B4030 @ 006B4096 ->
   read as EAX on every CFG path | 006B42D0 @ 006B43AC -> read as EAX on every CFG path | 006B4680 @
   006B4785 -> read as EAX on every CFG path | 006B48E0 @ 006B4993 -> read as EAX on every CFG path
   | 006B82E0 @ 006B8376 -> read as EAX on every CFG path | 006B82E0 @ 006B83A6 -> read as EAX on
   every CFG path | 006B84D0 @ 006B8564 -> read as EAX on every CFG path | 006BC970 @ 006BC9D0 ->
   read as EAX on every CFG path | 006BCD10 @ 006BCDA3 -> read as EAX on every CFG path | 006BCD10 @
   006BCEC8 -> read as EAX on every CFG path | 006BD4B0 @ 006BD5F3 -> read as EAX on every CFG path
   | 006BD740 @ 006BDA55 -> read as EAX on every CFG path | 006BD740 @ 006BDD27 -> read as EAX on
   every CFG path | 006BD740 @ 006BDE52 -> read as EAX on every CFG path | 006BD740 @ 006BE45D ->
   killed on every CFG path | 006BEA40 @ 006BEDB3 -> read as EAX on every CFG path | 006BEA40 @
   006BEF9A -> read as EAX on every CFG path | 006BF9F0 @ 006BFA4C -> read as EAX on every CFG path
   | 006C5000 @ 006C50B1 -> read as EAX on every CFG path | 006C6470 @ 006C64E3 -> read as EAX on
   every CFG path | 006C6660 @ 006C66D3 -> read as EAX on every CFG path | 006C68F0 @ 006C6984 ->
   read as EAX on every CFG path */

int __cdecl FUN_006cfeb0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = *param_2;
  iVar5 = iVar1;
  if (iVar1 <= *param_3) {
    iVar5 = *param_3;
  }
  iVar4 = param_2[2] + iVar1;
  if (param_3[2] <= param_2[2] + iVar1) {
    iVar4 = param_3[2];
  }
  if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
    iVar1 = param_2[1];
    iVar2 = iVar1;
    if (iVar1 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    iVar3 = param_2[3] + iVar1;
    if (param_3[3] <= param_2[3] + iVar1) {
      iVar3 = param_3[3];
    }
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      *param_1 = iVar5;
      param_1[2] = iVar4 - iVar5;
      param_1[1] = iVar2;
      param_1[3] = iVar3 - iVar2;
      return 1;
    }
  }
  return 0;
}

