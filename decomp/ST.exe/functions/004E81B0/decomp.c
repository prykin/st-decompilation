#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (14), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004B0250 @ 004B02A0 -> read as EAX on
   every CFG path | 004B33D0 @ 004B5391 -> read as EAX on every CFG path | 004B9FA0 @ 004BA5AD ->
   read as EAX on every CFG path | 004B9FA0 @ 004BA5C5 -> read as EAX on every CFG path | 004C3C00 @
   004C3CAF -> read as EAX on every CFG path | 004C5350 @ 004C5543 -> read as EAX on every CFG path
   | 004C5F30 @ 004C5F52 -> read as EAX on every CFG path | 004C5F30 @ 004C5F7D -> read as EAX on
   every CFG path | 004C5F30 @ 004C5F9E -> read as EAX on every CFG path | 004C5F30 @ 004C5FCB ->
   read as EAX on every CFG path | 004CCC10 @ 004CCE4E -> read as EAX on every CFG path | 004CCC10 @
   004CCE66 -> read as EAX on every CFG path | 004E9CE0 @ 004EA1D5 -> read as EAX on every CFG path
   | 004E9CE0 @ 004EA1ED -> read as EAX on every CFG path */

int __cdecl FUN_004e81b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = param_3 + param_2 * 2;
  if (*(int *)(&DAT_00792568 + iVar1 * 4) == 0) {
    return *(int *)(&DAT_00792148 + iVar1 * 8);
  }

  iVar2 = thunk_FUN_004e60d0(param_1,*(int *)(&DAT_00792568 + iVar1 * 4));
  if (1 < iVar2) {
    return *(int *)(&DAT_00792148 + (iVar1 * 2 + 1) * 4);
  }
  return *(int *)(&DAT_00792148 + (iVar2 + iVar1 * 2) * 4);
}

