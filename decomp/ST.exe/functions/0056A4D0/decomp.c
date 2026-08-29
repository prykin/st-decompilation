#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated return.
   Evidence: 0056A4D0 returns zeroed full register at 0056A4DA @ 0056A4DC */

uint __fastcall FUN_0056a4d0(RecoveredRecord_0056A4D0_88DA6D2B *param_1)

{
  uint uVar1;

  if (param_1->field_0E07 < 0) {
    return 0;
  }

  uVar1 = FUN_006c1f90(param_1->field_0E07);
  return uVar1;
}

