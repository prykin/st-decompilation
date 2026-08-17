#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_006ba600(undefined4 *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    if ((param_1[2] & 0x4000000) != 0) {
      /* ST_CALLSITE[006BA622]: CALL dword ptr [0x0085bb8c] */
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[006BA636]: CALL EBX */
      DeleteObject((HGDIOBJ)*param_1);
    }
    if ((HGDIOBJ)param_1[0x12d] != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[006BA643]: CALL EBX */
      DeleteObject((HGDIOBJ)param_1[0x12d]);
    }
    if ((HGDIOBJ)param_1[0x125] != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[006BA650]: CALL EBX */
      DeleteObject((HGDIOBJ)param_1[0x125]);
    }
    piVar1 = (int *)param_1[0x10];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA65C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x10] = 0;
    }
    piVar1 = (int *)param_1[0x11];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA66C]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x11] = 0;
    }
    piVar1 = (int *)param_1[0x12];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA67C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x12] = 0;
    }
    piVar1 = (int *)param_1[0xf];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA68C]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xf] = 0;
    }
    piVar1 = (int *)param_1[0xe];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA69C]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xe] = 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6AC]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xd] = 0;
    }
    if (((((byte *)param_1)[2] & 1) != 0) && (piVar1 = (int *)param_1[0xc], piVar1 != nullptr))
    {
      /* ST_CALLSITE[006BA6C2]: CALL dword ptr [ECX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x4c))(piVar1);
    }
    piVar1 = (int *)param_1[0xc];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6CF]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xc] = 0;
    }
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006BA6DF]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
    FreeAndNull(param_1 + 0x130);
    FreeAndNull(param_1 + 0x137);
    if ((HGDIOBJ)param_1[0x138] != (HGDIOBJ)0x0) {
      /* ST_CALLSITE[006BA708]: CALL EBX */
      DeleteObject((HGDIOBJ)param_1[0x138]);
    }
    if ((param_1[2] & 0x4000000) != 0) {
      /* ST_CALLSITE[006BA71C]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    }
    /* ST_CALLSITE[006BA729]: CALL dword ptr [0x0085bb84] */
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13c));
    FUN_006a5e90((short *)param_1);
  }
  return;
}

