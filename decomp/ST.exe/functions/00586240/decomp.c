#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F2C establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F26 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; MOVSX at 004C4F22 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 004C4550 -> 00586240 @ 004C4F32; zero-filled partial register load at 004C4F15 */

undefined4 __cdecl
FUN_00586240(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,ushort param_7)

{
  undefined4 local_30 [5];
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  ushort local_8;

  memset(local_30, 0, 0x2a); /* compiler bulk-zero initialization */
  local_1c = param_1;
  local_30[1] = param_5;
  local_14 = param_3;
  local_c = param_6;
  local_18 = param_2;
  local_10 = param_4;
  local_30[0] = 0xb4;
  local_30[2] = 0;
  local_30[3] = 1;
  local_8 = param_7;
  g_playSystem_00802A38->vfunc_08(0x131,0,(short)&param_5,(short)local_30,0);
  return param_5;
}

