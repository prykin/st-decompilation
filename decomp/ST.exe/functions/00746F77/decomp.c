#include "../../pseudocode_runtime.h"


void __fastcall FUN_00746f77(AnonShape_00746F77_1F40C93D *param_1)

{
  int *piVar1;

  if (param_1->field_003C != nullptr) {
    Library::MSVCRT::FUN_0072e2b0(param_1->field_003C);
  }
  piVar1 = (int *)param_1->field_0018;
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[00746F92]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1->field_0018 = 0;
  }
  FUN_0074b777();
  return;
}

