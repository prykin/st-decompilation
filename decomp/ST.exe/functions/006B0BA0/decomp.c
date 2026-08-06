#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00709470 -> 006B0BA0 @ 00709566;
   /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0x4 */

undefined4
FUN_006b0ba0(AnonPointee_ST3DSMAPContext_0004 *param_1,undefined4 param_2,undefined4 param_3,
            undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;

  if ((param_1 != nullptr) &&
     (piVar1 = (int *)param_1[1].field_001C, piVar1 != nullptr)) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3,param_4,param_2);
    return uVar2;
  }
  return 0xffffffaf;
}

