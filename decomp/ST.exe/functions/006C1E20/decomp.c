#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006c1e20(void)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;

  if ((DAT_008568b4 != 0) && (g_hThread_008568C0 != (HANDLE)0x0)) {
    /* ST_CALLSITE[006C1E46]: CALL ESI */
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
    if (DAT_008568c4 == 0) {
      /* ST_CALLSITE[006C1E5B]: CALL ESI */
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      FUN_006b9890(&DAT_00854ff4);
      ppvVar3 = &PTR_00855004;
      do {
        if (((uint)ppvVar3[-3] & 1) != 0) {
          ppvVar3[-3] = (void *)((uint)ppvVar3[-3] & 8);
          piVar1 = *ppvVar3;
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C1E84]: CALL dword ptr [ECX + 0x48] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 0x48))(piVar1);
            piVar1 = ppvVar3[1];
            if (piVar1 != nullptr) {
              /* ST_CALLSITE[006C1E91]: CALL dword ptr [EDX + 0x8] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar1 + 8))(piVar1);
              ppvVar3[1] = nullptr;
            }
            /* ST_CALLSITE[006C1EA0]: CALL dword ptr [ECX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)*ppvVar3 + 8))(*ppvVar3);
          }
          ppvVar4 = ppvVar3 + -3;
          for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppvVar4 = nullptr;
            ppvVar4 = ppvVar4 + 1;
          }
        }
        ppvVar3 = ppvVar3 + 0x31;
      } while ((int)ppvVar3 < 0x856884);
      /* ST_CALLSITE[006C1EBF]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
      /* ST_CALLSITE[006C1ECC]: CALL dword ptr [0x0085bb7c] */
      SuspendThread(g_hThread_008568C0);
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
    }
    /* ST_CALLSITE[006C1EEA]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
  }
  return;
}

