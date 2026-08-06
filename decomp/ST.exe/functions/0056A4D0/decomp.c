#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0056A4D0 returns zeroed full register at 0056A4DA @ 0056A4DC */

uint __fastcall FUN_0056a4d0(int param_1)

{
  uint uVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0xe07) < 0) {
    return 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar1 = FUN_006c1f90(*(int *)(param_1 + 0xe07));
  return uVar1;
}

