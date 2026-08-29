#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (10), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00711110 @ 00711147 -> read as EAX on
   every CFG path | 007111C0 @ 007111F4 -> read as EAX on every CFG path | 00711260 @ 0071128C ->
   read as EAX on every CFG path | 007112E0 @ 00711315 -> read as EAX on every CFG path | 007119C0 @
   00711AA9 -> read as EAX on every CFG path | 007126E0 @ 007127DF -> read as EAX on every CFG path
   | 00713480 @ 00713724 -> read as EAX on every CFG path | 007140E0 @ 007141C2 -> read as EAX on
   every CFG path | 007140E0 @ 007146AC -> read as EAX on every CFG path | 00714FB0 @ 00714FD3 ->
   read as EAX on every CFG path */

int __cdecl FUN_0070cdc0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;

  pbVar2 = param_1;
  if (*param_1 != 0) {
    bVar1 = param_1[1];
    param_1[1] = 0;
    iVar3 = Library::MSVCRT::FUN_00734570(param_1,&param_1,0x10);
    pbVar2[1] = bVar1;
    if (param_1 != pbVar2) {
      return iVar3;
    }
  }
  return -1;
}

