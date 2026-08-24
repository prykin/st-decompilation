#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0055DBF0 -> 006B0BA0 @ 0055DC30; DarkScreen parameter param_1 | 00709470 -> 006B0BA0 @
   00709566; /SubmarineTitans/Recovered/LibraryContexts/ST3DSMAPContext+0x4 */

undefined4
FUN_006b0ba0(DDXContext *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  if ((param_1 != nullptr) && (piVar1 = (int *)param_1->field_003C, piVar1 != nullptr))
  {
    /* ST_CALLSITE[006B0BC2]: CALL dword ptr [ECX + 0x10] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3,param_4,param_2);
    return uVar2;
  }
  return 0xffffffaf;
}

