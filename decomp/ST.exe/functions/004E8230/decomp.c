#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004C3020 @ 004C3112 -> read as EAX on
   every CFG path | 004C3020 @ 004C32AB -> read as EAX on every CFG path | 004C3570 @ 004C382C ->
   read as EAX on every CFG path | 004C3570 @ 004C39AB -> read as EAX on every CFG path | 004DC260 @
   004DC332 -> read as EAX on every CFG path | 004DE4F0 @ 004DE5E5 -> read as EAX on every CFG path
   | 004DFC70 @ 004DFD2C -> read as EAX on every CFG path */

int __cdecl FUN_004e8230(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = param_3 + param_2 * 2;
  if (*(int *)(&DAT_007e0224 + iVar1 * 4) == 0) {
    return *(int *)(&DAT_007dfd30 + iVar1 * 8);
  }

  iVar2 = thunk_FUN_004e60d0(param_1,*(int *)(&DAT_007e0224 + iVar1 * 4));
  if (1 < iVar2) {
    return *(int *)(&DAT_007dfd30 + (iVar1 * 2 + 1) * 4);
  }
  return *(int *)(&DAT_007dfd30 + (iVar2 + iVar1 * 2) * 4);
}

