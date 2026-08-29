#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (5), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00488890 @ 0048898D -> read as EAX on
   every CFG path | 004CE0F0 @ 004CE147 -> read as EAX on every CFG path | 004CF640 @ 004CF7E7 ->
   read as EAX on every CFG path | 004E6A80 @ 004E6ACE -> read as EAX on every CFG path | 004E6C20 @
   004E6C90 -> read as EAX on every CFG path

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CE0F0 -> 004E6010 @ 004CE147; /TLOBaseTy+0x24 | 004CF640 -> 004E6010 @ 004CF7E7;
   /TLOBaseTy+0x24 | 004E6C20 -> 004E6010 @ 004E6C90; STAllPlayersC::sub_004E6C20 parameter param_1
    */

int FUN_004e6010(byte *param_1,int param_2)

{
  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (-1 < param_2)) && (param_2 < 0x6a)) {
    return *(int *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x593));
  }
  return 0;
}

