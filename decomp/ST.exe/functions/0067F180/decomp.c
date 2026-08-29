#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006823E0 @ 00682514 -> read as EAX on
   every CFG path | 00682D70 @ 00682D83 -> read as EAX on every CFG path */

int __cdecl FUN_0067f180(byte *param_1,char *param_2)

{
  int iVar1;
  uint local_8;

  local_8 = 0xffffffff;

  iVar1 = thunk_FUN_0067f030((char *)param_1,param_2,&local_8);
  if (iVar1 == 0) {
    return -1;
  }
  return local_8;
}

