#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004749C0 @ 004751E6 -> read as EAX on
   every CFG path | 004C84C0 @ 004C86BB -> read as EAX on every CFG path | 004C84C0 @ 004C8AFF ->
   read as EAX on every CFG path | 004D32C0 @ 004D46BC -> read as EAX on every CFG path | 004E2340 @
   004E2562 -> read as EAX on every CFG path */

int FUN_004d7b90(char param_1,int param_2)

{
  return *(int *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7E6));
}

