#include "../../pseudocode_runtime.h"


undefined4 FUN_006ae230(uint *param_1)

{
  void *pvVar1;

  pvVar1 = Library::DKW::LIB::MemRealloc((void *)param_1[7],(param_1[4] + param_1[5]) * param_1[2]);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  if ((*param_1 & 0x100) != 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (*(code *)param_1[6])(pvVar1,param_1[4],param_1[5]);
  }
  param_1[7] = (uint)pvVar1;
  param_1[4] = param_1[4] + param_1[5];
  return 0;
}

