#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_00617eb0(RecoveredRecord_00617EB0_1C326A6E *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (param_1->field_005E != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = *(undefined4 *)(param_1->field_005E + 0xc);
  }
  return uVar1;
}

