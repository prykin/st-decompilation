#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0060d340(AnonShape_0060D340_D77FEBE7 *param_1)

{
  uint uVar1;
  uVar1 = 0;
  if (((param_1->field_0244 != 0) && (param_1->field_020D == 5)) && (param_1->field_0248 == 1)) {
    uVar1 = 1;
    param_1->field_0250 = g_playSystem_00802A38->field_00E4;
  }
  return uVar1;
}

