#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0067ffce) */
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006800A0 @ 006800D8 -> read as EAX on
   every CFG path | 006829B0 @ 00682B95 -> read as EAX on every CFG path | 00683C70 @ 00684516 ->
   read as EAX on every CFG path */

int __cdecl FUN_0067ffa0(char *param_1)

{

  Library::MSVCRT::FUN_0072ee80(param_1,(byte *)PTR_s__PI_d_0079d74c);
  return -1;
}

