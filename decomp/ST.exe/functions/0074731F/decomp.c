#include "../../pseudocode_runtime.h"


undefined4 FUN_0074731f(AnonShape_0074731F_00DF946A *param_1,short *param_2)

{
  int *piVar1;
  uint uVar2;
  if (param_2 == nullptr) {
    uVar2 = 0x80004003;
  }
  else {
    if (param_1->field_0030 == nullptr) {
      *param_2 = 0;
    }
    else {
      FUN_0074d59e(param_2,param_1->field_0030,0x80);
    }
    *(undefined4 *)(param_2 + 0x80) = param_1->field_0034;
    piVar1 = (int *)param_1->field_0034;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[00747360]: CALL dword ptr [EAX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

