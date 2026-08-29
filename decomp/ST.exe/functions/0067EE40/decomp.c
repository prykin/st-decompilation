#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0067EEA0 @ 0067EEB4 -> read as EAX on
   every CFG path | 0067EEE0 @ 0067EEF4 -> unknown: terminal before explicit accumulator kill |
   0067EEE0 @ 0067EF02 -> unknown: terminal before explicit accumulator kill | 0067EF60 @ 0067EFBA
   -> read as EAX on every CFG path | 0067F030 @ 0067F0A1 -> unknown: terminal before explicit
   accumulator kill | 00682340 @ 0068234B -> unknown: terminal before explicit accumulator kill |
   00683780 @ 006837E8 -> read as EAX on every CFG path | 00683C70 @ 00689C91 -> read as EAX on
   every CFG path | 00683C70 @ 0068A44F -> read as EAX on every CFG path */

int __cdecl FUN_0067ee40(int param_1)

{
  if (param_1 < (int)g_dArray_00848A18->elementSize) {
    return *(int *)(g_dArray_00848A18->growCapacity + param_1 * 4);
  }
  return 0;
}

