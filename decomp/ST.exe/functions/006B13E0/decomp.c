#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006b13e0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;

  if ((param_1 != nullptr) && (iVar1 = *param_1, iVar1 != 0)) {
    if ((*(uint *)(iVar1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B1400]: CALL dword ptr [0x0085bb8c] */
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0x4f0));
    }
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x4b0) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(*param_1 + 0x44) = uVar2;
      *(undefined4 *)(*param_1 + 0x4b0) = 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    piVar3 = *(int **)(*param_1 + 0x44);
    if (piVar3 != nullptr) {
      /* ST_CALLSITE[006B1438]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar3 + 8))(piVar3);
      *(undefined4 *)(*param_1 + 0x44) = 0;
    }
    if ((*(uint *)(*param_1 + 8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006B1456]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0x4f0));
    }
  }
  return;
}

