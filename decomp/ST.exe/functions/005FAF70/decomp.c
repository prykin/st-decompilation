#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; STColl3C::sub_005F8650 parameter param_1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; STColl3C::sub_005F8650 parameter param_3

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F8778 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F8775 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005F8650 -> 005FAF70 @ 005F8788; MOVSX at 005F874D establishes signed source width 2 */

int __thiscall
FUN_005faf70(void *this,int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            int param_6)

{
  short sVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  sVar1 = (**(code **)(*(int *)this + 0x10))(param_1,param_2,param_3,param_4,param_5,param_6);
  return (int)sVar1;
}

