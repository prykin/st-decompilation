#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074837c(AnonShape_0074837C_3396F25D *param_1)

{
  int *piVar1;

  piVar1 = (int *)param_1->field_0098;
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[00748393]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_0098 = 0;
  }
  piVar1 = (int *)param_1->field_009C;
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[007483AC]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_009C = 0;
  }
  return 0;
}

