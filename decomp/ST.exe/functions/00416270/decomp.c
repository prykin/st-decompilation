#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0057B670 -> 00416270 @ 0057B716; address of FUN_0057b670 parameter param_2 | 005FAC40
   -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_1

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00484020 -> 00416270 @ 00484166; address of FUN_00484020 parameter param_1 | 005FAC40
   -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_5

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 005FAC40 -> 00416270 @ 005FAC6A; address of FUN_005fac40 parameter param_4 | 005FF3A0
   -> 00416270 @ 005FF3EB; FUN_005ff3a0 parameter param_2 */

void __thiscall FUN_00416270(void *this,uint *param_1,short *param_2,short *param_3)

{
  *(undefined2 *)param_1 = STField<undefined2>(this,0x41);
  *param_2 = STField<short>(this,0x43);
  *param_3 = STField<short>(this,0x45);
  return;
}

