#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a1c9(int *param_1)

{
  int *piVar1;
  uint uVar2;
  piVar1 = (int *)param_1[0x2b];
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[0074A1E3]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2b] = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1[0x1e] + 0x18) == 0) {
    uVar2 = 1;
  }
  else if (param_1[5] == 0) {
    FUN_0074a81d(param_1,0);
    /* ST_CALLSITE[0074A20D]: CALL dword ptr [EAX + 0x64] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 100))();
    /* ST_CALLSITE[0074A214]: CALL dword ptr [EAX + 0x70] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x70))();
    param_1[0x18] = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80040224;
  }
  return uVar2;
}

