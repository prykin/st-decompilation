#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (16), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00581200 @ 0058141A -> read as EAX on
   every CFG path | 00668F50 @ 006690D6 -> read as EAX on every CFG path | 00668F50 @ 00669185 ->
   read as EAX on every CFG path | 00668F50 @ 00669234 -> read as EAX on every CFG path | 00668F50 @
   006692F5 -> read as EAX on every CFG path | 00668F50 @ 006693A0 -> read as EAX on every CFG path
   | 00668F50 @ 00669446 -> read as EAX on every CFG path | 00668F50 @ 0066950B -> read as EAX on
   every CFG path | 00668F50 @ 006696D9 -> read as EAX on every CFG path | 00668F50 @ 00669973 ->
   read as EAX on every CFG path | 00668F50 @ 00669B8A -> read as EAX on every CFG path | 00668F50 @
   00669D23 -> read as EAX on every CFG path | 00668F50 @ 00669FD2 -> read as EAX on every CFG path
   | 00668F50 @ 0066A212 -> read as EAX on every CFG path | 00668F50 @ 0066A4C1 -> read as EAX on
   every CFG path | 006799B0 @ 00679A50 -> read as EAX on every CFG path */

int __thiscall FUN_005822e0(void *this,byte param_1,byte param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;

  if (param_1 != param_2) {
    uVar2 = (uint)param_1;
    uVar3 = (uint)param_2;
    cVar1 = *(char *)(uVar3 + uVar2 * 8 + 0x142f + (int)this);
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return -2;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\0')) {
      return -1;
    }
    if ((cVar1 == '\0') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 1;
    }
    if ((cVar1 == '\x01') && (*(char *)(uVar2 + uVar3 * 8 + 0x142f + (int)this) == '\x01')) {
      return 2;
    }
  }
  return 0;
}

