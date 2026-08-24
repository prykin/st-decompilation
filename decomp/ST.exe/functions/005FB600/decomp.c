#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_005fb600(void *param_1)

{
  byte uVar1;
  uint uVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;

  uVar2 = 0;
  if (STField<int>(param_1,0x2a0) < 3) {
    uVar1 = thunk_FUN_005f9310(param_1,1);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var,uVar1) == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

