#include "../../pseudocode_runtime.h"


void FUN_006b8850(AnonShape_006B8850_E5DFE1E1 *param_1)

{
  int *piVar1;
  int iVar2;

  if (param_1 != nullptr) {
    piVar1 = (int *)param_1->field_003C;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006B8865]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_003C = 0;
    }
    piVar1 = (int *)param_1->field_0038;
    if (piVar1 != nullptr) {
      if ((param_1->field_0004 & 0x20000000) != 0) {
        /* ST_CALLSITE[006B8884]: CALL dword ptr [EDX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0038 = 0;
        return;
      }
      if ((param_1->field_0004 & 0xa0000000) != 0) {
        iVar2 = 0;
        if (0 < param_1->field_002C) {
          do {
            piVar1 = *(int **)(param_1->field_0038 + iVar2 * 4);
            /* ST_CALLSITE[006B88AE]: CALL dword ptr [ECX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_1->field_002C);
        }
        FUN_006a5e90((short *)param_1->field_0038);
        param_1->field_0038 = 0;
      }
    }
  }
  return;
}

