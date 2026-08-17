#include "../../pseudocode_runtime.h"


undefined4 FUN_006c3f00(int param_1)

{
  int *piVar1;

  /* ST_CALLSITE[006C3F10]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F22]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F32]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F42]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F52]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  FUN_006c3500((AnonShape_006C3500_19C01617 *)param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xbffffffe;
  FUN_006c3570((AnonShape_006C3570_37024033 *)param_1);
  /* ST_CALLSITE[006C3F71]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x508));
  return 0;
}

