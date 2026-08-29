#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00616A80 @ 00616D22 -> read as EAX on
   every CFG path | 0062BBC0 @ 0062BDF0 -> read as EAX on every CFG path | 0062BFF0 @ 0062C1EE ->
   read as EAX on every CFG path */

int __cdecl FUN_0062ba50(float *param_1,float *param_2)

{
  float fVar1;

  fVar1 = (param_1[8] * param_1[4] * *param_1 - param_1[5] * param_1[7] * *param_1) +
          (param_1[6] * param_1[5] * param_1[1] - param_1[8] * param_1[3] * param_1[1]) +
          (param_1[2] * param_1[3] * param_1[7] - param_1[6] * param_1[2] * param_1[4]);
  if (fVar1 != _DAT_0079034c) {
    *param_2 = (param_1[8] * param_1[4] - param_1[5] * param_1[7]) / fVar1;
    param_2[1] = -((param_1[8] * param_1[3] - param_1[6] * param_1[5]) / fVar1);
    param_2[2] = (param_1[3] * param_1[7] - param_1[6] * param_1[4]) / fVar1;
    param_2[3] = -((param_1[8] * param_1[1] - param_1[2] * param_1[7]) / fVar1);
    param_2[4] = (param_1[8] * *param_1 - param_1[6] * param_1[2]) / fVar1;
    param_2[5] = -((*param_1 * param_1[7] - param_1[6] * param_1[1]) / fVar1);
    param_2[6] = (param_1[5] * param_1[1] - param_1[2] * param_1[4]) / fVar1;
    param_2[7] = -((param_1[5] * *param_1 - param_1[2] * param_1[3]) / fVar1);
    param_2[8] = (*param_1 * param_1[4] - param_1[3] * param_1[1]) / fVar1;
    return 1;
  }
  return 0;
}

