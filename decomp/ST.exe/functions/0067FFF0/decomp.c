#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x0068001e) */
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006800A0 @ 006800EF -> read as EAX on
   every CFG path | 006829B0 @ 00682BCF -> read as EAX on every CFG path | 00683C70 @ 0068455A ->
   read as EAX on every CFG path */

int __cdecl FUN_0067fff0(char *param_1)

{

  Library::MSVCRT::FUN_0072ee80(param_1,(byte *)PTR_s__PS_d_0079d750);
  return -1;
}

