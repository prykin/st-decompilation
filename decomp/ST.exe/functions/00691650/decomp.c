#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 00691741 |
   00691650 returns used as parameter 1 of Library::Ourlib::MFSPR::mfSSprLoad @ 006920A0

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00691690 -> 00691650 @ 006918A2; string at 007D5978 | 00691690 -> 00691650 @ 00692096;
   string at 007D5968 | 00692390 -> 00691650 @ 006923A8; string at 007D59CC */

char * FUN_00691650(char *text,undefined4 param_2)

{
  /* ST_CALLSITE[00691665]: CALL dword ptr [0x0085bde8] */
  wsprintfA(&DAT_00853a68,"%s%u",text,param_2);
  return &DAT_00853a68;
}

