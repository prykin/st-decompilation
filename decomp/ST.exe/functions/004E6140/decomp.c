#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (14), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=004BEA70 @ 004C0455 -> read as EAX on
   every CFG path | 004BEA70 @ 004C0528 -> read as EAX on every CFG path | 004C7860 @ 004C790D ->
   read as EAX on every CFG path | 004E2C30 @ 004E2C49 -> read as EAX on every CFG path | 004E2C30 @
   004E2E0D -> read as EAX on every CFG path | 004E3200 @ 004E32CC -> read as EAX on every CFG path
   | 004E3200 @ 004E3484 -> read as EAX on every CFG path | 004E5990 @ 004E59CF -> read as EAX on
   every CFG path | 004E5AF0 @ 004E5B2C -> read as EAX on every CFG path | 00516480 @ 00516742 ->
   read as EAX on every CFG path | 00516A40 @ 00516C60 -> read as EAX on every CFG path | 00516A40 @
   00516C7D -> read as EAX on every CFG path | 00516A40 @ 00516DEA -> read as EAX on every CFG path
   | 0067B520 @ 0067B67E -> read as EAX on every CFG path */

int FUN_004e6140(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    return (uint)*(byte *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B));
  }
  return 0;
}

