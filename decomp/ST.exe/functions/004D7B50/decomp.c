#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (4), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004C84C0 @ 004C8ACA -> read as EAX on
   every CFG path | 004D32C0 @ 004D468F -> read as EAX on every CFG path | 004DDD50 @ 004DDEBC ->
   read as EAX on every CFG path | 004E2340 @ 004E2548 -> read as EAX on every CFG path */

int FUN_004d7b50(char param_1,int param_2)

{
  return *(int *)(param_2 * 0x44 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x7E2));
}

